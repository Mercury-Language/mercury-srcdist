/*
** Automatically generated from `term_constr_util.m'
** by the Mercury compiler,
** version rotd-2026-07-30
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


// :- module transform_hlds.term_constr_util.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_util__init
ENDINIT
*/

#include "transform_hlds.term_constr_util.mih"


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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__462__1_3_p_0(
  MR_Word VarSet_7,
  MR_Word HeadVar__2_21,
  MR_String * HeadVar__3_22);

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__369__1_2_f_0(
  MR_Word SubVarInCoeff_7,
  MR_Word LambdaHeadVar__1_19);

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__365__1_2_f_0(
  MR_Word SubstMap_5,
  MR_Word LambdaHeadVar__1_17);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_5,
  MR_Word Var_6);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_for_var_5_p_0(
  MR_Word ProgVar_6,
  MR_Word STATE_VARIABLE_SizeVarMap_0_10,
  MR_Word * STATE_VARIABLE_SizeVarMap_11,
  MR_Word STATE_VARIABLE_SizeVarSet_0_12,
  MR_Word * STATE_VARIABLE_SizeVarSet_13);

static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_loop_5_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_loop_5_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_alloc_from_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_4[6][6];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_5[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[2][5];




static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_util__make_size_var_map_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_util__make_size_var_map_alloc_from_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 3)) },
  /* row   1 */
  { ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[0])) },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_4[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_util__transform_hlds__term_constr_util__type_ctor_info_var_substitution_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_util",
  (MR_String) "var_substitution",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__462__1_3_p_0(
  MR_Word VarSet_7,
  MR_Word HeadVar__2_21,
  MR_String * HeadVar__3_22)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, HeadVar__2_21, HeadVar__3_22);
}

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__369__1_2_f_0(
  MR_Word SubVarInCoeff_7,
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20;
  MR_Word Coeffs0_14;
  MR_Word Op_15;
  MR_Word Coeffs_16;
  MR_Word Rat_23;

  libs__lp_rational__deconstruct_constraint_4_p_0(LambdaHeadVar__1_19, &Coeffs0_14, &Op_15, &Rat_23);
  Coeffs_16 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[1]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[1]), SubVarInCoeff_7, Coeffs0_14);
  LambdaHeadVar__2_20 = libs__lp_rational__construct_constraint_3_f_0(Coeffs_16, Op_15, Rat_23);
  return LambdaHeadVar__2_20;
}

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__365__1_2_f_0(
  MR_Word SubstMap_5,
  MR_Word LambdaHeadVar__1_17)
{
  MR_Word LambdaHeadVar__2_18;
  MR_Word NewVar_10;
  MR_Word OldVar_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 0))));
  MR_Word Rat_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_17, 1))));
  MR_Box conv0_NewVar_10;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), SubstMap_5, ((MR_Box) (OldVar_21)), &conv0_NewVar_10);
  NewVar_10 = ((MR_Word) (conv0_NewVar_10));
  {
    LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_18, 0) = ((MR_Box) (NewVar_10));
    MR_hl_field(0, LambdaHeadVar__2_18, 1) = ((MR_Box) (Rat_22));
  }
  return LambdaHeadVar__2_18;
}

void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Type_7;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_5, Var_6, &Type_7);
  succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(ModuleInfo_4, Type_7);
  if (!(succeeded))
  {
    MR_Word Var_8;

    Var_8 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_4, Type_7);
    succeeded = (Var_8 == (MR_Integer) 0);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_for_var_5_p_0(
  MR_Word ProgVar_6,
  MR_Word STATE_VARIABLE_SizeVarMap_0_10,
  MR_Word * STATE_VARIABLE_SizeVarMap_11,
  MR_Word STATE_VARIABLE_SizeVarSet_0_12,
  MR_Word * STATE_VARIABLE_SizeVarSet_13)
{
  MR_Word SizeVar_9;

  mercury__varset__new_var_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), &SizeVar_9, STATE_VARIABLE_SizeVarSet_0_12, STATE_VARIABLE_SizeVarSet_13);
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), ((MR_Box) (ProgVar_6)), ((MR_Box) (SizeVar_9)), STATE_VARIABLE_SizeVarMap_0_10, STATE_VARIABLE_SizeVarMap_11);
}

void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_4_p_0(
  MR_Word Stream_5,
  MR_Word VarSet_6)
{
  MR_Word Vars_8;

  Vars_8 = mercury__varset__vars_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6);
  transform_hlds__term_constr_util__dump_size_varset_loop_5_p_0(Stream_5, VarSet_6, Vars_8);
}

void MR_CALL 
transform_hlds__term_constr_util__dump_size_vars_5_p_0(
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Vars_8)
{
  transform_hlds__term_constr_util__dump_size_varset_loop_5_p_0(Stream_6, VarSet_7, Vars_8);
}

static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_loop_5_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String Name_16;
      MR_Word next_value_of_HeadVar__3_3;

      Name_16 = mercury__varset__lookup_name_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_2, Var_13);
      mercury__io__write_4_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), Stream_1, ((MR_Box) (Var_13)));
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " = ");
      mercury__io__write_string_4_p_0(Stream_1, Name_16);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Vars_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_22;

  transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__462__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_22);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_22));
}

void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_5_p_0(
  MR_Word Stream_6,
  MR_Word VarSet_7,
  MR_Word Vars_8)
{
  MR_Word VarNames_10;
  MR_Word Var_13;
  MR_String Var_18;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[5]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__term_constr_util__write_size_vars_5_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (VarSet_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Vars_8, &VarNames_10);
  Var_18 = mercury__string__join_list_2_f_0((MR_String) ", ", VarNames_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[");
  mercury__io__write_string_4_p_0(Stream_6, Var_18);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]");
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_proc_name_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_String Prefix_9,
  MR_Word PPId_10)
{
  MR_String PPIdStr_12;

  PPIdStr_12 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_8, PPId_10);
  mercury__io__write_string_4_p_0(Stream_7, Prefix_9);
  mercury__io__write_string_4_p_0(Stream_7, PPIdStr_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_scc_procs_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8)
{
  transform_hlds__term_constr_util__write_scc_procs_loop_5_p_0(Stream_6, ModuleInfo_7, SCC_8);
  mercury__io__nl_3_p_0(Stream_6);
}

static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_loop_5_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PPId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PPIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String PPIdStr_16;
      MR_Word next_value_of_HeadVar__3_3;

      PPIdStr_16 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_2, PPId_13);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(Stream_1, PPIdStr_16);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PPIds_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_nl_6_p_0(
  MR_Word Stream_7,
  MR_Word DebugTerm_8,
  MR_Word TracePred_9,
  MR_Word NewLine_10)
{
  switch (DebugTerm_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TracePred_9, 1))));
        MR_Box conv1_STATE_VARIABLE_IO_1_14;

        func_0(((MR_Box) (TracePred_9)), ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_1_14);
        switch (NewLine_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__nl_3_p_0(Stream_7);
            break;
        }
        mercury__io__flush_output_3_p_0(Stream_7);
      }
      break;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_5_p_0(
  MR_Word Stream_6,
  MR_Word DebugTerm_7,
  MR_Word TracePred_8)
{
  switch (DebugTerm_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, TracePred_8, 1))));
        MR_Box conv1_STATE_VARIABLE_IO_2_14;

        func_0(((MR_Box) (TracePred_8)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_14);
        mercury__io__flush_output_3_p_0(Stream_6);
      }
      break;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word ArgSize_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ProcInfo0_16;
      MR_Word Term2Info0_17;
      MR_Word STATE_VARIABLE_ProcTable_1_24;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_11)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_16, &Term2Info0_17);
      succeeded = (Override_2 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_22;

        Var_22 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(Term2Info0_17);
        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Term2Info_18;
        MR_Word ProcInfo_19;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (ArgSize_3));
        }
        transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_23, Term2Info0_17, &Term2Info_18);
        hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_18, ProcInfo0_16, &ProcInfo_19);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_19)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_1_24);
      }
      else
        STATE_VARIABLE_ProcTable_1_24 = STATE_VARIABLE_ProcTable_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_12;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Override_2,
  MR_Word Termination_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ProcInfo0_16;
      MR_Word Term2Info0_17;
      MR_Word STATE_VARIABLE_ProcTable_1_24;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_11)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_16, &Term2Info0_17);
      succeeded = (Override_2 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_22;

        Var_22 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info0_17);
        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Term2Info_18;
        MR_Word ProcInfo_19;
        MR_Word Var_23;

        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Termination_3));
        }
        transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(Var_23, Term2Info0_17, &Term2Info_18);
        hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_18, ProcInfo0_16, &ProcInfo_19);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_19)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_1_24);
      }
      else
        STATE_VARIABLE_ProcTable_1_24 = STATE_VARIABLE_ProcTable_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_12;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__update_arg_size_info_4_p_0(
  MR_Word PPID_5,
  MR_Word Polyhedron_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(0, PPID_5, 0))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(0, PPID_5, 1))));
  MR_Word PredInfo0_21;
  MR_Word ProcInfo0_22;
  MR_Word Term2Info0_23;
  MR_Word Term2Info_24;
  MR_Word ProcInfo_25;
  MR_Word PredInfo_26;
  MR_Word Var_29;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_19, &PredInfo0_21);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_21, ProcId_20, &ProcInfo0_22);
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_22, &Term2Info0_23);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Polyhedron_6));
  }
  transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_29, Term2Info0_23, &Term2Info_24);
  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_24, ProcInfo0_22, &ProcInfo_25);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_20, ProcInfo_25, PredInfo0_21, &PredInfo_26);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_19, PredInfo_26, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_20;

  conv1_LambdaHeadVar__2_20 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__369__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_18;

  conv0_LambdaHeadVar__2_18 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__365__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_18));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0(
  MR_Word Constraints0_4,
  MR_Word SubstMap_5)
{
  MR_Word Constraints_6;
  MR_Word SubVarInCoeff_7;
  MR_Word SubVarInEqn_11;

  {
    SubVarInCoeff_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubVarInCoeff_7, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[3]));
    MR_hl_field(0, SubVarInCoeff_7, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1));
    MR_hl_field(0, SubVarInCoeff_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, SubVarInCoeff_7, 3) = ((MR_Box) (SubstMap_5));
  }
  {
    SubVarInEqn_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubVarInEqn_11, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[4]));
    MR_hl_field(0, SubVarInEqn_11, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2));
    MR_hl_field(0, SubVarInEqn_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, SubVarInEqn_11, 3) = ((MR_Box) (SubVarInCoeff_7));
  }
  Constraints_6 = mercury__list__map_2_f_0((MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), SubVarInEqn_11, Constraints0_4);
  return Constraints_6;
}

void MR_CALL 
transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
    {
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (Context_2));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_13));
      }
    }
    else
      *HeadVar__3_3 = (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_util_scalar_common_3[1]));
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_var_2_p_0(
  MR_Word Zeros_3,
  MR_Word SizeVar_4)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), ((MR_Box) (SizeVar_4)), Zeros_3);
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__make_arg_constraints_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Zeros_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Constraints0_9;

    Constraints0_9 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(Vars_6, Zeros_2);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), ((MR_Box) (Var_5)), Zeros_2);
    if (succeeded)
      HeadVar__3_3 = Constraints0_9;
    else
    {
      MR_Word NewConstraint_10;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_16;

      Var_13 = libs__rat__one_0_f_0();
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_5));
        MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_13));
      }
      {
        Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_16 = libs__rat__zero_0_f_0();
      NewConstraint_10 = libs__lp_rational__construct_constraint_3_f_0(Var_11, (MR_Integer) 2, Var_16);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (NewConstraint_10));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Constraints0_9));
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_f_0(
  MR_Word Args_4,
  MR_Word HeadVars_5)
{
  MR_Word SubstMap_6;
  MR_Word Var_7;

  Var_7 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]));
  transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(Args_4, HeadVars_5, Var_7, &SubstMap_6);
  return SubstMap_6;
}

static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
          return;
        }
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
          return;
        }
      else
      {
        MR_Word HeadVar_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word HeadVars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_Subst_1_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), ((MR_Box) (HeadVar_22)), ((MR_Box) (Var_30)), STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_1_27);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_29;
        next_value_of_HeadVar__2_2 = HeadVars_23;
        next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_1_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(
  MR_Word SizeVarMap_4,
  MR_Word Zeros_5)
{
  MR_bool succeeded;
  MR_Word Constraints_6;
  MR_Word SizeVars_7;
  MR_Word NonZeroSizeVars_8;
  MR_Word Var_9;

  SizeVars_7 = mercury__map__values_1_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), SizeVarMap_4);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_6[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Zeros_5));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), Var_9, SizeVars_7, &NonZeroSizeVars_8);
  Constraints_6 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[5]), NonZeroSizeVars_8);
  return Constraints_6;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_SizeVar_6;

  conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_SizeVar_6));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word SizeVarMap_7)
{
  MR_bool succeeded;
  MR_Word Zeros_8;
  MR_Word ProgVars_9;
  MR_Word ZeroProgVars_10;
  MR_Word ZerosList_11;
  MR_Word Var_12;
  MR_Word Var_15;

  ProgVars_9 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), SizeVarMap_7);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[2]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (VarTable_6));
  }
  ZeroProgVars_10 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), Var_12, ProgVars_9);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (SizeVarMap_7));
  }
  ZerosList_11 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), Var_15, ZeroProgVars_10);
  Zeros_8 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), ZerosList_11);
  return Zeros_8;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(
  MR_Word SizeVarMap_4,
  MR_Word Var_5)
{
  MR_bool succeeded;
  MR_Word SizeVar_6;
  MR_Word SizeVar0_7;
  MR_Box conv0_SizeVar0_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), SizeVarMap_4, ((MR_Box) (Var_5)), &conv0_SizeVar0_7);
  if (succeeded)
  {
    SizeVar0_7 = ((MR_Word) (conv0_SizeVar0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SizeVar_6 = SizeVar0_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_util.prog_var_to_size_var\'/2", (MR_String) "prog_var not in size_var_map");
  return SizeVar_6;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_SizeVar_6;

  conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_SizeVar_6));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(
  MR_Word SizeVarMap_4,
  MR_Word Vars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[1]));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1));
    MR_hl_field(0, Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_6, 3) = ((MR_Box) (SizeVarMap_4));
  }
  HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]), Var_6, Vars_5);
  return HeadVar__3_3;
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_alloc_from_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SizeVarMap_11;
  MR_Word conv0_STATE_VARIABLE_SizeVarSet_13;

  transform_hlds__term_constr_util__make_size_var_for_var_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SizeVarSet_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SizeVarMap_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SizeVarSet_13));
}

void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_alloc_from_4_p_0(
  MR_Word ProgVars_5,
  MR_Word STATE_VARIABLE_SizeVarSet_0_8,
  MR_Word * STATE_VARIABLE_SizeVarSet_9,
  MR_Word * SizeVarMap_7)
{
  MR_Word Var_11;
  MR_Box conv3_SizeVarMap_7;
  MR_Box conv2_STATE_VARIABLE_SizeVarSet_9;

  Var_11 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[4]), ProgVars_5, ((MR_Box) (Var_11)), &conv3_SizeVarMap_7, ((MR_Box) (STATE_VARIABLE_SizeVarSet_0_8)), &conv2_STATE_VARIABLE_SizeVarSet_9);
  *SizeVarMap_7 = ((MR_Word) (conv3_SizeVarMap_7));
  *STATE_VARIABLE_SizeVarSet_9 = ((MR_Word) (conv2_STATE_VARIABLE_SizeVarSet_9));
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SizeVarMap_11;
  MR_Word conv0_STATE_VARIABLE_SizeVarSet_13;

  transform_hlds__term_constr_util__make_size_var_for_var_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SizeVarSet_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SizeVarMap_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SizeVarSet_13));
}

void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0(
  MR_Word ProgVars_4,
  MR_Word * SizeVarSet_5,
  MR_Word * SizeVarMap_6)
{
  MR_Word Var_7;
  MR_Word Var_10;
  MR_Box conv3_SizeVarMap_6;
  MR_Box conv2_SizeVarSet_5;

  Var_7 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  Var_10 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[1]));
  mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[0]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_1[2]), (MR_Word) (&transform_hlds__term_constr_util_scalar_common_2[3]), ProgVars_4, ((MR_Box) (Var_10)), &conv3_SizeVarMap_6, ((MR_Box) (Var_7)), &conv2_SizeVarSet_5);
  *SizeVarMap_6 = ((MR_Word) (conv3_SizeVarMap_6));
  *SizeVarSet_5 = ((MR_Word) (conv2_SizeVarSet_5));
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_proc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PPId_5)
{
  MR_Word AbstractProc_6;
  MR_Word ProcInfo_8;
  MR_Word Term2Info_9;
  MR_Word MaybeAbstractProc_10;
  MR_Word Var_7;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_4, PPId_5, &Var_7, &ProcInfo_8);
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_8, &Term2Info_9);
  MaybeAbstractProc_10 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(Term2Info_9);
  if ((MaybeAbstractProc_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_util.get_abstract_proc\'/2", (MR_String) "no abstract rep. for proc");
  else
    AbstractProc_6 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractProc_10, 0))));
  return AbstractProc_6;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_AbstractProc_6;

  conv0_AbstractProc_6 = transform_hlds__term_constr_util__get_abstract_proc_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_AbstractProc_6));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word SCC_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[0]));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1));
    MR_hl_field(0, Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_6, 3) = ((MR_Box) (ModuleInfo_4));
  }
  HeadVar__3_3 = mercury__set__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), Var_6, SCC_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word MaybeArgSizeInfo_6;
  MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, PredProcId_5, 0))));
  MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(0, PredProcId_5, 1))));
  MR_Word ProcInfo_10;
  MR_Word Term2Info_11;
  MR_Word Var_9;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_4, PredId_7, ProcId_8, &Var_9, &ProcInfo_10);
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_10, &Term2Info_11);
  MaybeArgSizeInfo_6 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(Term2Info_11);
  return MaybeArgSizeInfo_6;
}

void MR_CALL 
transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PPIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, PPId_9, 0))));
      MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(0, PPId_9, 1))));
      MR_Word PredInfo0_15;
      MR_Word ProcInfo0_16;
      MR_Word Term2Info0_17;
      MR_Word Term2Info_18;
      MR_Word ProcInfo_19;
      MR_Word PredInfo_20;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_1_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_13, &PredInfo0_15);
      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_15, ProcId_14, &ProcInfo0_16);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_16, &Term2Info0_17);
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadVar__2_2));
      }
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_23, Term2Info0_17, &Term2Info_18);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_18, ProcInfo0_16, &ProcInfo_19);
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_14, ProcInfo_19, PredInfo0_15, &PredInfo_20);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, PredInfo_20, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PPIds_10;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_util____Unify____var_substitution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_util____Compare____var_substitution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_constr_util__init(void)
{
}

void mercury__transform_hlds__term_constr_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__term_constr_util__transform_hlds__term_constr_util__type_ctor_info_var_substitution_0);
}

void mercury__transform_hlds__term_constr_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_util.
