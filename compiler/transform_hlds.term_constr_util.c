/*
** Automatically generated from `term_constr_util.m'
** by the Mercury compiler,
** version rotd-2017-06-13
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module transform_hlds.term_constr_util. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_util__init
ENDINIT
*/

#include "transform_hlds.term_constr_util.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
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
#include "std_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_10,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_14);

static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__390__1_4_p_0(
  MR_Word transform_hlds__term_constr_util__Varset_5,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_13);

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_f_0(
  MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_19);

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_f_0(
  MR_Word transform_hlds__term_constr_util__SubstMap_5,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_17);

static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Varset_2);

static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_2);

static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_util__VarTypes_5,
  MR_Word transform_hlds__term_constr_util__Var_6);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(
  MR_Word transform_hlds__term_constr_util__ProgVar_6,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13);

static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_3(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5);

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5);

static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_3[5][6];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[2][1];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_7[1][7];




static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_util__make_size_var_map_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_util__make_size_var_map_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_3[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_util____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_6[0]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_util__transform_hlds__term_constr_util__type_ctor_info_var_substitution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_util",
  (MR_String) "var_substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util____Unify____var_substitution_0_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_util__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_util____Compare____var_substitution_0_0(&transform_hlds__term_constr_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_3));
    }
    *transform_hlds__term_constr_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_util__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_p_0(
  MR_Word transform_hlds__term_constr_util__PPId_7,
  MR_String transform_hlds__term_constr_util__String_8,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_9)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__String_8);
    }
    {
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_util__ModuleInfo_9, transform_hlds__term_constr_util__PPId_7);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word transform_hlds__term_constr_util__SCC_6,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_7)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(transform_hlds__term_constr_util__SCC_6, transform_hlds__term_constr_util__ModuleInfo_7);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_10,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_14)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__HeadVar__1_10, ((MR_Box) (transform_hlds__term_constr_util__HeadVar__2_14)));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__390__1_4_p_0(
  MR_Word transform_hlds__term_constr_util__Varset_5,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_13)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_String transform_hlds__term_constr_util__Name_10;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_5, transform_hlds__term_constr_util__LambdaHeadVar__1_13, &transform_hlds__term_constr_util__Name_10);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__Name_10);
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_f_0(
  MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_19)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__LambdaHeadVar__2_20;
    MR_Word transform_hlds__term_constr_util__TypeInfo_28_28;
    MR_Word transform_hlds__term_constr_util__Coeffs0_14;
    MR_Word transform_hlds__term_constr_util__Op_15;
    MR_Word transform_hlds__term_constr_util__Coeffs_16;
    MR_Word transform_hlds__term_constr_util__Rat_23;

    {
      libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_util__LambdaHeadVar__1_19, &transform_hlds__term_constr_util__Coeffs0_14, &transform_hlds__term_constr_util__Op_15, &transform_hlds__term_constr_util__Rat_23);
    }
    transform_hlds__term_constr_util__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[1];
    {
      transform_hlds__term_constr_util__Coeffs_16 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeInfo_28_28, transform_hlds__term_constr_util__TypeInfo_28_28, transform_hlds__term_constr_util__SubVarInCoeff_7, transform_hlds__term_constr_util__Coeffs0_14);
    }
    {
      transform_hlds__term_constr_util__LambdaHeadVar__2_20 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_util__Coeffs_16, transform_hlds__term_constr_util__Op_15, transform_hlds__term_constr_util__Rat_23);
    }
    return transform_hlds__term_constr_util__LambdaHeadVar__2_20;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_f_0(
  MR_Word transform_hlds__term_constr_util__SubstMap_5,
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_17)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__LambdaHeadVar__2_18;
    MR_Word transform_hlds__term_constr_util__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
    MR_Word transform_hlds__term_constr_util__NewVar_10;
    MR_Word transform_hlds__term_constr_util__OldVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__1_17, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_util__Rat_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__1_17, (MR_Integer) 1)));
    MR_Box transform_hlds__term_constr_util__conv0_NewVar_10;

    {
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_util__TypeInfo_27_27, transform_hlds__term_constr_util__TypeInfo_27_27, transform_hlds__term_constr_util__SubstMap_5, ((MR_Box) (transform_hlds__term_constr_util__OldVar_21)), &transform_hlds__term_constr_util__conv0_NewVar_10);
    }
    transform_hlds__term_constr_util__NewVar_10 = ((MR_Word) transform_hlds__term_constr_util__conv0_NewVar_10);
    {
      transform_hlds__term_constr_util__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__2_18, 0) = ((MR_Box) (transform_hlds__term_constr_util__NewVar_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__2_18, 1) = ((MR_Box) (transform_hlds__term_constr_util__Rat_22));
    }
    return transform_hlds__term_constr_util__LambdaHeadVar__2_18;
  }
}

void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0(
  MR_Word * transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar1_4 = transform_hlds__term_constr_util__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar2_5 = transform_hlds__term_constr_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_2[2], transform_hlds__term_constr_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar1_3 = transform_hlds__term_constr_util__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar2_4 = transform_hlds__term_constr_util__HeadVar__2_2;

    {
      transform_hlds__term_constr_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Varset_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__term_constr_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_util__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_String transform_hlds__term_constr_util__Name_13;

            {
              transform_hlds__term_constr_util__Name_13 = mercury__varset__lookup_name_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_2, transform_hlds__term_constr_util__Var_9);
            }
            {
              mercury__io__write_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__Var_9)));
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
            {
              mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__Name_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__Vars_10;

              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__term_constr_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_char_3_p_0((MR_Char) 9);
            }
            {
              hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_util__ModuleInfo_2, transform_hlds__term_constr_util__PPId_9);
            }
            {
              mercury__io__nl_2_p_0();
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__PPIds_10;

              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__term_constr_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4 = transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__term_constr_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((transform_hlds__term_constr_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__term_constr_util__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
                MR_Word transform_hlds__term_constr_util__HeadVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_util__HeadVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29;

                {
                  mercury__map__det_insert_4_p_0(transform_hlds__term_constr_util__TypeInfo_31_31, transform_hlds__term_constr_util__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_util__HeadVar_24)), ((MR_Box) (transform_hlds__term_constr_util__Var_33)), transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3, &transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__Var_32;
                  MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__2_2 = transform_hlds__term_constr_util__HeadVars_25;
                  MR_Word transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_Subst_0_3 = transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29;

                  transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3 = transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_Subst_0_3;
                  transform_hlds__term_constr_util__HeadVar__2_2 = transform_hlds__term_constr_util__next_value_of_HeadVar__2_2;
                  transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_util__VarTypes_5,
  MR_Word transform_hlds__term_constr_util__Var_6)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Type_7;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_util__VarTypes_5, transform_hlds__term_constr_util__Var_6, &transform_hlds__term_constr_util__Type_7);
    }
    {
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__Type_7);
    }
    if (!(transform_hlds__term_constr_util__succeeded))
      {
        MR_Word transform_hlds__term_constr_util__Var_8;

        {
          transform_hlds__term_constr_util__Var_8 = check_hlds__type_util__check_dummy_type_2_f_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__Type_7);
        }
        transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Var_8 == (MR_Integer) 0);
      }
    return transform_hlds__term_constr_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(
  MR_Word transform_hlds__term_constr_util__ProgVar_6,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__SizeVar_9;

    {
      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_constr_util__SizeVar_9, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13);
    }
    {
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__ProgVar_6)), ((MR_Box) (transform_hlds__term_constr_util__SizeVar_9)), transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Override_2,
  MR_Word transform_hlds__term_constr_util__ArgSize_3,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__term_constr_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_util__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_util__ProcInfo0_16;
            MR_Word transform_hlds__term_constr_util__Term2Info0_17;
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;
            MR_Box transform_hlds__term_constr_util__conv0_ProcInfo0_16;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, transform_hlds__term_constr_util__ProcId_11, &transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            }
            transform_hlds__term_constr_util__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__Term2Info0_17);
            }
            transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Override_2 == (MR_Integer) 1);
            if (!(transform_hlds__term_constr_util__succeeded))
              {
                MR_Word transform_hlds__term_constr_util__Var_22;

                {
                  transform_hlds__term_constr_util__Var_22 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_util__Term2Info0_17);
                }
                transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (transform_hlds__term_constr_util__succeeded)
              {
                MR_Word transform_hlds__term_constr_util__Term2Info_18;
                MR_Word transform_hlds__term_constr_util__ProcInfo_19;
                MR_Word transform_hlds__term_constr_util__Var_23;

                {
                  transform_hlds__term_constr_util__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_23, 0) = ((MR_Box) (transform_hlds__term_constr_util__ArgSize_3));
                }
                {
                  transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_util__Var_23, transform_hlds__term_constr_util__Term2Info0_17, &transform_hlds__term_constr_util__Term2Info_18);
                }
                {
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_18, transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__ProcInfo_19);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__ProcId_11, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_19)), transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24);
                }
              }
            else
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__ProcIds_12;
              MR_Word transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;

              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ProcTable_0_4;
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Override_2,
  MR_Word transform_hlds__term_constr_util__Termination_3,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__term_constr_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_util__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_util__ProcInfo0_16;
            MR_Word transform_hlds__term_constr_util__Term2Info0_17;
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;
            MR_Box transform_hlds__term_constr_util__conv0_ProcInfo0_16;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, transform_hlds__term_constr_util__ProcId_11, &transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            }
            transform_hlds__term_constr_util__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__Term2Info0_17);
            }
            transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Override_2 == (MR_Integer) 1);
            if (!(transform_hlds__term_constr_util__succeeded))
              {
                MR_Word transform_hlds__term_constr_util__Var_22;

                {
                  transform_hlds__term_constr_util__Var_22 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(transform_hlds__term_constr_util__Term2Info0_17);
                }
                transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (transform_hlds__term_constr_util__succeeded)
              {
                MR_Word transform_hlds__term_constr_util__Term2Info_18;
                MR_Word transform_hlds__term_constr_util__ProcInfo_19;
                MR_Word transform_hlds__term_constr_util__Var_23;

                {
                  transform_hlds__term_constr_util__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_23, 0) = ((MR_Box) (transform_hlds__term_constr_util__Termination_3));
                }
                {
                  transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_util__Var_23, transform_hlds__term_constr_util__Term2Info0_17, &transform_hlds__term_constr_util__Term2Info_18);
                }
                {
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_18, transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__ProcInfo_19);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__ProcId_11, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_19)), transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24);
                }
              }
            else
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__ProcIds_12;
              MR_Word transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;

              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ProcTable_0_4;
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_constr_util__update_arg_size_info_4_p_0(
  MR_Word transform_hlds__term_constr_util__PPID_5,
  MR_Word transform_hlds__term_constr_util__Polyhedron_6,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Var_10;

    {
      transform_hlds__term_constr_util__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_10, 0) = ((MR_Box) (transform_hlds__term_constr_util__PPID_5));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_p_0(transform_hlds__term_constr_util__Var_10, transform_hlds__term_constr_util__Polyhedron_6, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_9);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__dump_size_vars_4_p_0(
  MR_Word transform_hlds__term_constr_util__Vars_5,
  MR_Word transform_hlds__term_constr_util__Varset_6)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(transform_hlds__term_constr_util__Vars_5, transform_hlds__term_constr_util__Varset_6);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_3_p_0(
  MR_Word transform_hlds__term_constr_util__Varset_4)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Vars_6;

    {
      transform_hlds__term_constr_util__Vars_6 = mercury__varset__vars_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_4);
    }
    {
      transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(transform_hlds__term_constr_util__Vars_6, transform_hlds__term_constr_util__Varset_4);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

    {
      transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__390__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0(
  MR_Word transform_hlds__term_constr_util__Varset_5,
  MR_Word transform_hlds__term_constr_util__Vars_6)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__WriteSizeVar_8;

    {
      transform_hlds__term_constr_util__WriteSizeVar_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 1) = ((MR_Box) (transform_hlds__term_constr_util__write_size_vars_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 3) = ((MR_Box) (transform_hlds__term_constr_util__Varset_5));
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__Vars_6, (MR_String) ", ", transform_hlds__term_constr_util__WriteSizeVar_8);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 93);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_proc_name_6_p_0(
  MR_Word transform_hlds__term_constr_util__PPId_7,
  MR_String transform_hlds__term_constr_util__String_8,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_9,
  MR_Integer transform_hlds__term_constr_util__HeadVar__4_10)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_p_0(transform_hlds__term_constr_util__PPId_7, transform_hlds__term_constr_util__String_8, transform_hlds__term_constr_util__ModuleInfo_9);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_scc_procs_5_p_0(
  MR_Word transform_hlds__term_constr_util__SCC_6,
  MR_Word transform_hlds__term_constr_util__ModuleInfo_7,
  MR_Integer transform_hlds__term_constr_util__HeadVar__3_8)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__term_constr_util__SCC_6, transform_hlds__term_constr_util__ModuleInfo_7);
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_nl_5_p_0(
  MR_Word transform_hlds__term_constr_util__DebugTerm_6,
  MR_Word transform_hlds__term_constr_util__TracePred_7,
  MR_Word transform_hlds__term_constr_util__NewLine_8)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    switch (transform_hlds__term_constr_util__DebugTerm_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* transform_hlds__term_constr_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__TracePred_7, (MR_Integer) 1)));
          MR_Box transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_12_12;

          {
            transform_hlds__term_constr_util__func_0(((MR_Box) transform_hlds__term_constr_util__TracePred_7), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_12_12);
          }
          switch (transform_hlds__term_constr_util__NewLine_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__nl_2_p_0();
              }
              break;
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_4_p_0(
  MR_Word transform_hlds__term_constr_util__DebugTerm_5,
  MR_Word transform_hlds__term_constr_util__TracePred_6)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    switch (transform_hlds__term_constr_util__DebugTerm_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* transform_hlds__term_constr_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__TracePred_6, (MR_Integer) 1)));
          MR_Box transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_13_19;

          {
            transform_hlds__term_constr_util__func_0(((MR_Box) transform_hlds__term_constr_util__TracePred_6), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_13_19);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20;

    {
      transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__296__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18;

    {
      transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__293__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0(
  MR_Word transform_hlds__term_constr_util__Constraints0_4,
  MR_Word transform_hlds__term_constr_util__SubstMap_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Constraints_6;
    MR_Word transform_hlds__term_constr_util__TypeCtorInfo_29_29;
    MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7;
    MR_Word transform_hlds__term_constr_util__SubVarInEqn_11;

    {
      transform_hlds__term_constr_util__SubVarInCoeff_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 3) = ((MR_Box) (transform_hlds__term_constr_util__SubstMap_5));
    }
    {
      transform_hlds__term_constr_util__SubVarInEqn_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 3) = ((MR_Box) (transform_hlds__term_constr_util__SubVarInCoeff_7));
    }
    transform_hlds__term_constr_util__TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
    {
      transform_hlds__term_constr_util__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeCtorInfo_29_29, transform_hlds__term_constr_util__TypeCtorInfo_29_29, transform_hlds__term_constr_util__SubVarInEqn_11, transform_hlds__term_constr_util__Constraints0_4);
    }
    return transform_hlds__term_constr_util__Constraints_6;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Context_2,
  MR_Word * transform_hlds__term_constr_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_constr_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_constr_util__Var_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_constr_util__Var_13;
            MR_Word transform_hlds__term_constr_util__Var_14;
            MR_Word transform_hlds__term_constr_util__Var_15;

            {
              transform_hlds__term_constr_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_15, 0) = ((MR_Box) (transform_hlds__term_constr_util__Context_2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_constr_util__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_14, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_15));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_constr_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_13, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_constr_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_13));
            }
          }
        else
          {
            *transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_util_scalar_common_6[1]);
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_var_2_p_0(
  MR_Word transform_hlds__term_constr_util__Zeros_3,
  MR_Word transform_hlds__term_constr_util__SizeVar_4)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;

    {
      transform_hlds__term_constr_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__SizeVar_4)), transform_hlds__term_constr_util__Zeros_3);
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__make_arg_constraints_2_f_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__Zeros_2)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;

    if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_constr_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_util__Constraints0_9;

        {
          transform_hlds__term_constr_util__Constraints0_9 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_util__Vars_6, transform_hlds__term_constr_util__Zeros_2);
        }
        {
          transform_hlds__term_constr_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__Var_5)), transform_hlds__term_constr_util__Zeros_2);
        }
        if (transform_hlds__term_constr_util__succeeded)
          transform_hlds__term_constr_util__HeadVar__3_3 = transform_hlds__term_constr_util__Constraints0_9;
        else
          {
            MR_Word transform_hlds__term_constr_util__NewConstraint_10;
            MR_Word transform_hlds__term_constr_util__Var_11;
            MR_Word transform_hlds__term_constr_util__Var_12;
            MR_Word transform_hlds__term_constr_util__Var_13;
            MR_Word transform_hlds__term_constr_util__Var_16;

            {
              transform_hlds__term_constr_util__Var_13 = libs__rat__one_0_f_0();
            }
            {
              transform_hlds__term_constr_util__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_5));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__Var_13));
            }
            {
              transform_hlds__term_constr_util__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_11, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_12));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_constr_util__Var_16 = libs__rat__zero_0_f_0();
            }
            {
              transform_hlds__term_constr_util__NewConstraint_10 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_util__Var_11, (MR_Integer) 2, transform_hlds__term_constr_util__Var_16);
            }
            {
              transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_util__NewConstraint_10));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_util__Constraints0_9));
            }
          }
      }
    return transform_hlds__term_constr_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_f_0(
  MR_Word transform_hlds__term_constr_util__Args_4,
  MR_Word transform_hlds__term_constr_util__HeadVars_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__SubstMap_6;
    MR_Word transform_hlds__term_constr_util__TypeInfo_8_8 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
    MR_Word transform_hlds__term_constr_util__Var_7;

    {
      transform_hlds__term_constr_util__Var_7 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_8_8, transform_hlds__term_constr_util__TypeInfo_8_8);
    }
    {
      transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(transform_hlds__term_constr_util__Args_4, transform_hlds__term_constr_util__HeadVars_5, transform_hlds__term_constr_util__Var_7, &transform_hlds__term_constr_util__SubstMap_6);
    }
    return transform_hlds__term_constr_util__SubstMap_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_3(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv0_HeadVar__2_2;

    {
      transform_hlds__term_constr_util__conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_HeadVar__2_2));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

    {
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__316__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

    {
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
  MR_Word transform_hlds__term_constr_util__Zeros_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Constraints_6;
    MR_Word transform_hlds__term_constr_util__TypeInfo_13_16 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
    MR_Word transform_hlds__term_constr_util__SizeVars_10;
    MR_Word transform_hlds__term_constr_util__NonZeroSizeVars_11;
    MR_Word transform_hlds__term_constr_util__Var_12;
    MR_Word transform_hlds__term_constr_util__Var_13;

    {
      transform_hlds__term_constr_util__SizeVars_10 = mercury__map__values_1_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], transform_hlds__term_constr_util__TypeInfo_13_16, transform_hlds__term_constr_util__SizeVarMap_4);
    }
    {
      transform_hlds__term_constr_util__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_13, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_13, 1) = ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_13, 3) = ((MR_Box) (transform_hlds__term_constr_util__Zeros_5));
    }
    {
      transform_hlds__term_constr_util__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 3) = ((MR_Box) (transform_hlds__term_constr_util__Var_13));
    }
    {
      mercury__list__filter_3_p_0(transform_hlds__term_constr_util__TypeInfo_13_16, transform_hlds__term_constr_util__Var_12, transform_hlds__term_constr_util__SizeVars_10, &transform_hlds__term_constr_util__NonZeroSizeVars_11);
    }
    {
      transform_hlds__term_constr_util__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeInfo_13_16, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[5], transform_hlds__term_constr_util__NonZeroSizeVars_11);
    }
    return transform_hlds__term_constr_util__Constraints_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv0_SizeVar_6;

    {
      transform_hlds__term_constr_util__conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_SizeVar_6));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

    {
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    return transform_hlds__term_constr_util__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_util__SizeVarMap_6,
  MR_Word transform_hlds__term_constr_util__VarTypes_7)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__Zeros_8;
    MR_Word transform_hlds__term_constr_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
    MR_Word transform_hlds__term_constr_util__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
    MR_Word transform_hlds__term_constr_util__ProgVars_9;
    MR_Word transform_hlds__term_constr_util__ZeroProgVars_10;
    MR_Word transform_hlds__term_constr_util__ZerosList_11;
    MR_Word transform_hlds__term_constr_util__Var_12;
    MR_Word transform_hlds__term_constr_util__Var_18;

    {
      transform_hlds__term_constr_util__ProgVars_9 = mercury__map__keys_1_f_0(transform_hlds__term_constr_util__TypeInfo_13_13, transform_hlds__term_constr_util__TypeInfo_14_14, transform_hlds__term_constr_util__SizeVarMap_6);
    }
    {
      transform_hlds__term_constr_util__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 3) = ((MR_Box) (transform_hlds__term_constr_util__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_12, 4) = ((MR_Box) (transform_hlds__term_constr_util__VarTypes_7));
    }
    {
      transform_hlds__term_constr_util__ZeroProgVars_10 = mercury__list__filter_2_f_0(transform_hlds__term_constr_util__TypeInfo_13_13, transform_hlds__term_constr_util__Var_12, transform_hlds__term_constr_util__ProgVars_9);
    }
    {
      transform_hlds__term_constr_util__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_18, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_18, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_18, 3) = ((MR_Box) (transform_hlds__term_constr_util__SizeVarMap_6));
    }
    {
      transform_hlds__term_constr_util__ZerosList_11 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__Var_18, transform_hlds__term_constr_util__ZeroProgVars_10);
    }
    {
      transform_hlds__term_constr_util__Zeros_8 = mercury__set__from_list_1_f_0(transform_hlds__term_constr_util__TypeInfo_14_14, transform_hlds__term_constr_util__ZerosList_11);
    }
    return transform_hlds__term_constr_util__Zeros_8;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
  MR_Word transform_hlds__term_constr_util__Var_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__SizeVar_6;
    MR_Word transform_hlds__term_constr_util__SizeVar0_7;
    MR_Box transform_hlds__term_constr_util__conv0_SizeVar0_7;

    {
      transform_hlds__term_constr_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__SizeVarMap_4, ((MR_Box) (transform_hlds__term_constr_util__Var_5)), &transform_hlds__term_constr_util__conv0_SizeVar0_7);
    }
    if (transform_hlds__term_constr_util__succeeded)
      {
        transform_hlds__term_constr_util__SizeVar0_7 = ((MR_Word) transform_hlds__term_constr_util__conv0_SizeVar0_7);
        transform_hlds__term_constr_util__succeeded = MR_TRUE;
      }
    if (transform_hlds__term_constr_util__succeeded)
      transform_hlds__term_constr_util__SizeVar_6 = transform_hlds__term_constr_util__SizeVar0_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "function \140transform_hlds.term_constr_util.prog_var_to_size_var\'/2", (MR_String) "prog_var not in size_var_map");
        }
      }
    return transform_hlds__term_constr_util__SizeVar_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv0_SizeVar_6;

    {
      transform_hlds__term_constr_util__conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_SizeVar_6));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
  MR_Word transform_hlds__term_constr_util__Vars_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;
    MR_Word transform_hlds__term_constr_util__Var_6;

    {
      transform_hlds__term_constr_util__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 3) = ((MR_Box) (transform_hlds__term_constr_util__SizeVarMap_4));
    }
    {
      transform_hlds__term_constr_util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__Var_6, transform_hlds__term_constr_util__Vars_5);
    }
    return transform_hlds__term_constr_util__HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11;
    MR_Word transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13;

    {
      transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_4), &transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13);
    }
    *transform_hlds__term_constr_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11));
    *transform_hlds__term_constr_util__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13));
  }
}

void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0(
  MR_Word transform_hlds__term_constr_util__ProgVars_5,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_8,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_9,
  MR_Word * transform_hlds__term_constr_util__SizeVarMap_7)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
    MR_Word transform_hlds__term_constr_util__Var_11;
    MR_Box transform_hlds__term_constr_util__conv3_SizeVarMap_7;
    MR_Box transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9;

    {
      transform_hlds__term_constr_util__Var_11 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_18_18, (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1]);
    }
    {
      mercury__list__foldl2_6_p_0(transform_hlds__term_constr_util__TypeInfo_18_18, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[4], transform_hlds__term_constr_util__ProgVars_5, ((MR_Box) (transform_hlds__term_constr_util__Var_11)), &transform_hlds__term_constr_util__conv3_SizeVarMap_7, ((MR_Box) (transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_8)), &transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9);
    }
    *transform_hlds__term_constr_util__SizeVarMap_7 = ((MR_Word) transform_hlds__term_constr_util__conv3_SizeVarMap_7);
    *transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_9 = ((MR_Word) transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9);
  }
}

static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11;
    MR_Word transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13;

    {
      transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_4), &transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13);
    }
    *transform_hlds__term_constr_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11));
    *transform_hlds__term_constr_util__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13));
  }
}

void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0(
  MR_Word transform_hlds__term_constr_util__ProgVars_4,
  MR_Word * transform_hlds__term_constr_util__SizeVarset_5,
  MR_Word * transform_hlds__term_constr_util__SizeVarMap_6)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__TypeInfo_18_22;
    MR_Word transform_hlds__term_constr_util__Var_7;
    MR_Word transform_hlds__term_constr_util__Var_15;
    MR_Box transform_hlds__term_constr_util__conv3_SizeVarMap_6;
    MR_Box transform_hlds__term_constr_util__conv2_SizeVarset_5;

    {
      transform_hlds__term_constr_util__Var_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    transform_hlds__term_constr_util__TypeInfo_18_22 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
    {
      transform_hlds__term_constr_util__Var_15 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_18_22, (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1]);
    }
    {
      mercury__list__foldl2_6_p_0(transform_hlds__term_constr_util__TypeInfo_18_22, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[3], transform_hlds__term_constr_util__ProgVars_4, ((MR_Box) (transform_hlds__term_constr_util__Var_15)), &transform_hlds__term_constr_util__conv3_SizeVarMap_6, ((MR_Box) (transform_hlds__term_constr_util__Var_7)), &transform_hlds__term_constr_util__conv2_SizeVarset_5);
    }
    *transform_hlds__term_constr_util__SizeVarMap_6 = ((MR_Word) transform_hlds__term_constr_util__conv3_SizeVarMap_6);
    *transform_hlds__term_constr_util__SizeVarset_5 = ((MR_Word) transform_hlds__term_constr_util__conv2_SizeVarset_5);
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_proc_2_f_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_util__PPId_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__AbstractProc_6;
    MR_Word transform_hlds__term_constr_util__ProcInfo_8;
    MR_Word transform_hlds__term_constr_util__Term2Info_9;
    MR_Word transform_hlds__term_constr_util__MaybeAbstractProc_10;
    MR_Word transform_hlds__term_constr_util__Var_7;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__PPId_5, &transform_hlds__term_constr_util__Var_7, &transform_hlds__term_constr_util__ProcInfo_8);
    }
    {
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo_8, &transform_hlds__term_constr_util__Term2Info_9);
    }
    {
      transform_hlds__term_constr_util__MaybeAbstractProc_10 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(transform_hlds__term_constr_util__Term2Info_9);
    }
    if ((transform_hlds__term_constr_util__MaybeAbstractProc_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "function \140transform_hlds.term_constr_util.get_abstract_proc\'/2", (MR_String) "no abstract rep. for proc");
        }
      }
    else
      transform_hlds__term_constr_util__AbstractProc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__MaybeAbstractProc_10, (MR_Integer) 0)));
    return transform_hlds__term_constr_util__AbstractProc_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
  MR_Box transform_hlds__term_constr_util__closure_arg,
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
    MR_Word transform_hlds__term_constr_util__conv0_AbstractProc_6;

    {
      transform_hlds__term_constr_util__conv0_AbstractProc_6 = transform_hlds__term_constr_util__get_abstract_proc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_AbstractProc_6));
    return transform_hlds__term_constr_util__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_util__SCC_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;
    MR_Word transform_hlds__term_constr_util__Var_6;

    {
      transform_hlds__term_constr_util__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__Var_6, 3) = ((MR_Box) (transform_hlds__term_constr_util__ModuleInfo_4));
    }
    {
      transform_hlds__term_constr_util__HeadVar__3_3 = mercury__set__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, transform_hlds__term_constr_util__Var_6, transform_hlds__term_constr_util__SCC_5);
    }
    return transform_hlds__term_constr_util__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_util__PredProcId_5)
{
  {
    MR_bool transform_hlds__term_constr_util__succeeded;
    MR_Word transform_hlds__term_constr_util__MaybeArgSizeInfo_6;
    MR_Word transform_hlds__term_constr_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PredProcId_5, (MR_Integer) 0)));
    MR_Integer transform_hlds__term_constr_util__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PredProcId_5, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_util__ProcInfo_10;
    MR_Word transform_hlds__term_constr_util__Term2Info_11;
    MR_Word transform_hlds__term_constr_util__Var_9;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__PredId_7, transform_hlds__term_constr_util__ProcId_8, &transform_hlds__term_constr_util__Var_9, &transform_hlds__term_constr_util__ProcInfo_10);
    }
    {
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo_10, &transform_hlds__term_constr_util__Term2Info_11);
    }
    {
      transform_hlds__term_constr_util__MaybeArgSizeInfo_6 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_util__Term2Info_11);
    }
    return transform_hlds__term_constr_util__MaybeArgSizeInfo_6;
  }
}

void MR_CALL 
transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_p_0(
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_util__succeeded;

        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_30_30;
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_31_31;
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_33_33;
            MR_Word transform_hlds__term_constr_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PPId_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__term_constr_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PPId_9, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_util__PredTable0_15;
            MR_Word transform_hlds__term_constr_util__PredInfo0_16;
            MR_Word transform_hlds__term_constr_util__ProcTable0_17;
            MR_Word transform_hlds__term_constr_util__ProcInfo0_18;
            MR_Word transform_hlds__term_constr_util__Term2Info0_19;
            MR_Word transform_hlds__term_constr_util__Term2Info_20;
            MR_Word transform_hlds__term_constr_util__ProcInfo_21;
            MR_Word transform_hlds__term_constr_util__ProcTable_22;
            MR_Word transform_hlds__term_constr_util__PredInfo_23;
            MR_Word transform_hlds__term_constr_util__PredTable_24;
            MR_Word transform_hlds__term_constr_util__Var_27;
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28;
            MR_Box transform_hlds__term_constr_util__conv0_PredInfo0_16;
            MR_Box transform_hlds__term_constr_util__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_constr_util__PredTable0_15);
            }
            transform_hlds__term_constr_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__term_constr_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_30_30, transform_hlds__term_constr_util__TypeCtorInfo_31_31, transform_hlds__term_constr_util__PredTable0_15, ((MR_Box) (transform_hlds__term_constr_util__PredId_13)), &transform_hlds__term_constr_util__conv0_PredInfo0_16);
            }
            transform_hlds__term_constr_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_PredInfo0_16);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_util__PredInfo0_16, &transform_hlds__term_constr_util__ProcTable0_17);
            }
            transform_hlds__term_constr_util__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_33_33, transform_hlds__term_constr_util__ProcTable0_17, transform_hlds__term_constr_util__ProcId_14, &transform_hlds__term_constr_util__conv1_ProcInfo0_18);
            }
            transform_hlds__term_constr_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_constr_util__conv1_ProcInfo0_18);
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_18, &transform_hlds__term_constr_util__Term2Info0_19);
            }
            {
              transform_hlds__term_constr_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__Var_27, 0) = ((MR_Box) (transform_hlds__term_constr_util__HeadVar__2_2));
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_util__Var_27, transform_hlds__term_constr_util__Term2Info0_19, &transform_hlds__term_constr_util__Term2Info_20);
            }
            {
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_20, transform_hlds__term_constr_util__ProcInfo0_18, &transform_hlds__term_constr_util__ProcInfo_21);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_33_33, transform_hlds__term_constr_util__ProcId_14, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_21)), transform_hlds__term_constr_util__ProcTable0_17, &transform_hlds__term_constr_util__ProcTable_22);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_util__ProcTable_22, transform_hlds__term_constr_util__PredInfo0_16, &transform_hlds__term_constr_util__PredInfo_23);
            }
            {
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_30_30, transform_hlds__term_constr_util__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__term_constr_util__PredId_13)), ((MR_Box) (transform_hlds__term_constr_util__PredInfo_23)), transform_hlds__term_constr_util__PredTable0_15, &transform_hlds__term_constr_util__PredTable_24);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_util__PredTable_24, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_util__next_value_of_HeadVar__1_1 = transform_hlds__term_constr_util__PPIds_10;
              MR_Word transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28;

              transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_constr_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
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

/* :- end_module transform_hlds.term_constr_util. */
