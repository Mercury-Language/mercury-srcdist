/*
** Automatically generated from `term_constr_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 149 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 158 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 161 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 164 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 167 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 170 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 173 "transform_hlds.term_constr_util.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 176 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 179 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 182 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 185 "transform_hlds.term_constr_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 188 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 191 "transform_hlds.term_constr_util.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
#line 194 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 196 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2);

#line 199 "transform_hlds.term_constr_util.c"
static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
#line 202 "transform_hlds.term_constr_util.c"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_1,
#line 204 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 206 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_3);

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__315__1_2_p_0(
#line 315 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_10,
#line 315 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_14);

#line 389 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_p_0(
#line 389 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_5,
#line 389 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_15);

#line 295 "term_constr_util.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__295__1_2_f_0(
#line 295 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7,
#line 295 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_19);

#line 292 "term_constr_util.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__292__1_2_f_0(
#line 292 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SubstMap_5,
#line 292 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_17);

#line 406 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(
#line 406 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 406 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_2);

#line 373 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(
#line 373 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 373 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_2);

#line 321 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3,
#line 321 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4);

#line 270 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__VarTypes_5,
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Var_6);

#line 244 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ProgVar_6,
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10,
#line 244 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11,
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12,
#line 244 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13);

#line 389 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0_1(
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 389 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3);

#line 295 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
#line 295 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 295 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 292 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
#line 292 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 292 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 316 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_3(
#line 316 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 316 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 252 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 263 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
#line 263 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 263 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 252 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);

#line 241 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0_1(
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5);

#line 241 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5);

#line 463 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
#line 463 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 463 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_3[5][6];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[3][1];

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

static /* final */ const MR_Box transform_hlds__term_constr_util_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_6[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 610 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 618 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 626 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 634 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 643 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 651 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 659 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 668 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 676 "transform_hlds.term_constr_util.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_util____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 685 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 694 "transform_hlds.term_constr_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 703 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 712 "transform_hlds.term_constr_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_util____vpti_func_2__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_util__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 722 "transform_hlds.term_constr_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &transform_hlds__term_constr_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 731 "transform_hlds.term_constr_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_util__transform_hlds__term_constr_util__type_ctor_info_var_substitution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 748 "transform_hlds.term_constr_util.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0_10001(
#line 751 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 753 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2)
#line 755 "transform_hlds.term_constr_util.c"
{
#line 757 "transform_hlds.term_constr_util.c"
  {
#line 759 "transform_hlds.term_constr_util.c"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 762 "transform_hlds.term_constr_util.c"
    {
#line 764 "transform_hlds.term_constr_util.c"
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util____Unify____var_substitution_0_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2));
    }
#line 767 "transform_hlds.term_constr_util.c"
    return transform_hlds__term_constr_util__succeeded;
#line 769 "transform_hlds.term_constr_util.c"
  }
#line 771 "transform_hlds.term_constr_util.c"
}

#line 774 "transform_hlds.term_constr_util.c"
static void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0_10001(
#line 777 "transform_hlds.term_constr_util.c"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_1,
#line 779 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 781 "transform_hlds.term_constr_util.c"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_3)
#line 783 "transform_hlds.term_constr_util.c"
{
#line 785 "transform_hlds.term_constr_util.c"
  {
#line 787 "transform_hlds.term_constr_util.c"
    MR_Word transform_hlds__term_constr_util__conv0_HeadVar__1_1;

#line 790 "transform_hlds.term_constr_util.c"
    {
#line 792 "transform_hlds.term_constr_util.c"
      transform_hlds__term_constr_util____Compare____var_substitution_0_0(&transform_hlds__term_constr_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_3));
    }
#line 795 "transform_hlds.term_constr_util.c"
    *transform_hlds__term_constr_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_util__conv0_HeadVar__1_1));
#line 797 "transform_hlds.term_constr_util.c"
  }
#line 799 "transform_hlds.term_constr_util.c"
}

#line 151 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_p_0(
#line 151 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__PPId_7,
#line 151 "term_constr_util.m"
  MR_String transform_hlds__term_constr_util__String_8,
#line 151 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_9)
#line 151 "term_constr_util.m"
{
#line 383 "term_constr_util.m"
  {
#line 383 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 384 "term_constr_util.m"
    {
#line 384 "term_constr_util.m"
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__String_8);
    }
#line 385 "term_constr_util.m"
    {
#line 385 "term_constr_util.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_util__ModuleInfo_9, transform_hlds__term_constr_util__PPId_7);
    }
#line 386 "term_constr_util.m"
    {
#line 386 "term_constr_util.m"
      mercury__io__nl_2_p_0();
    }
#line 383 "term_constr_util.m"
  }
#line 151 "term_constr_util.m"
}

#line 148 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_p_0(
#line 148 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SCC_6,
#line 148 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_7)
#line 148 "term_constr_util.m"
{
#line 369 "term_constr_util.m"
  {
#line 369 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 370 "term_constr_util.m"
    {
#line 370 "term_constr_util.m"
      transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(transform_hlds__term_constr_util__SCC_6, transform_hlds__term_constr_util__ModuleInfo_7);
    }
#line 371 "term_constr_util.m"
    {
#line 371 "term_constr_util.m"
      mercury__io__nl_2_p_0();
    }
#line 369 "term_constr_util.m"
  }
#line 148 "term_constr_util.m"
}

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__315__1_2_p_0(
#line 315 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_10,
#line 315 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_14)
#line 315 "term_constr_util.m"
{
#line 315 "term_constr_util.m"
  {
#line 315 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__HeadVar__1_10, ((MR_Box) (transform_hlds__term_constr_util__HeadVar__2_14)));
    }
#line 315 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 315 "term_constr_util.m"
  }
#line 315 "term_constr_util.m"
}

#line 389 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_p_0(
#line 389 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_5,
#line 389 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_15)
#line 389 "term_constr_util.m"
{
#line 389 "term_constr_util.m"
  {
#line 389 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 389 "term_constr_util.m"
    MR_String transform_hlds__term_constr_util__Name_10;

#line 390 "term_constr_util.m"
    {
#line 390 "term_constr_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_5, transform_hlds__term_constr_util__LambdaHeadVar__1_15, &transform_hlds__term_constr_util__Name_10);
    }
#line 391 "term_constr_util.m"
    {
#line 391 "term_constr_util.m"
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__Name_10);
    }
#line 389 "term_constr_util.m"
  }
#line 389 "term_constr_util.m"
}

#line 295 "term_constr_util.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__295__1_2_f_0(
#line 295 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7,
#line 295 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_19)
#line 295 "term_constr_util.m"
{
#line 295 "term_constr_util.m"
  {
#line 295 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__LambdaHeadVar__2_20;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_28_28;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Coeffs0_14;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Op_15;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Coeffs_16;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Rat_23;

#line 296 "term_constr_util.m"
    {
#line 296 "term_constr_util.m"
      libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_util__LambdaHeadVar__1_19, &transform_hlds__term_constr_util__Coeffs0_14, &transform_hlds__term_constr_util__Op_15, &transform_hlds__term_constr_util__Rat_23);
    }
#line 955 "transform_hlds.term_constr_util.c"
    transform_hlds__term_constr_util__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[1];
#line 297 "term_constr_util.m"
    {
#line 297 "term_constr_util.m"
      transform_hlds__term_constr_util__Coeffs_16 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeInfo_28_28, transform_hlds__term_constr_util__TypeInfo_28_28, transform_hlds__term_constr_util__SubVarInCoeff_7, transform_hlds__term_constr_util__Coeffs0_14);
    }
#line 298 "term_constr_util.m"
    {
#line 298 "term_constr_util.m"
      transform_hlds__term_constr_util__LambdaHeadVar__2_20 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_util__Coeffs_16, transform_hlds__term_constr_util__Op_15, transform_hlds__term_constr_util__Rat_23);
    }
#line 295 "term_constr_util.m"
    return transform_hlds__term_constr_util__LambdaHeadVar__2_20;
#line 295 "term_constr_util.m"
  }
#line 295 "term_constr_util.m"
}

#line 292 "term_constr_util.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__292__1_2_f_0(
#line 292 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SubstMap_5,
#line 292 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__LambdaHeadVar__1_17)
#line 292 "term_constr_util.m"
{
#line 292 "term_constr_util.m"
  {
#line 292 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__LambdaHeadVar__2_18;
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__NewVar_10;
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__OldVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Rat_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__1_17, (MR_Integer) 1)));
#line 293 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv0_NewVar_10;

#line 293 "term_constr_util.m"
    {
#line 293 "term_constr_util.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_util__TypeInfo_27_27, transform_hlds__term_constr_util__TypeInfo_27_27, transform_hlds__term_constr_util__SubstMap_5, ((MR_Box) (transform_hlds__term_constr_util__OldVar_21)), &transform_hlds__term_constr_util__conv0_NewVar_10);
    }
#line 293 "term_constr_util.m"
    transform_hlds__term_constr_util__NewVar_10 = ((MR_Word) transform_hlds__term_constr_util__conv0_NewVar_10);
#line 292 "term_constr_util.m"
    {
#line 292 "term_constr_util.m"
      transform_hlds__term_constr_util__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__2_18, 0) = ((MR_Box) (transform_hlds__term_constr_util__NewVar_10));
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__LambdaHeadVar__2_18, 1) = ((MR_Box) (transform_hlds__term_constr_util__Rat_22));
#line 292 "term_constr_util.m"
    }
#line 292 "term_constr_util.m"
    return transform_hlds__term_constr_util__LambdaHeadVar__2_18;
#line 292 "term_constr_util.m"
  }
#line 292 "term_constr_util.m"
}

#line 95 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util____Compare____var_substitution_0_0(
#line 95 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__HeadVar__1_1,
#line 95 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
#line 95 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__3_3)
#line 95 "term_constr_util.m"
{
#line 95 "term_constr_util.m"
  {
#line 95 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 95 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar1_4 = transform_hlds__term_constr_util__HeadVar__2_2;
#line 95 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar2_5 = transform_hlds__term_constr_util__HeadVar__3_3;

#line 95 "term_constr_util.m"
    {
#line 95 "term_constr_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_2[2], transform_hlds__term_constr_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar2_5)));
    }
#line 95 "term_constr_util.m"
  }
#line 95 "term_constr_util.m"
}

#line 95 "term_constr_util.m"
MR_bool MR_CALL 
transform_hlds__term_constr_util____Unify____var_substitution_0_0(
#line 95 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 95 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2)
#line 95 "term_constr_util.m"
{
#line 95 "term_constr_util.m"
  {
#line 95 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 95 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar1_3 = transform_hlds__term_constr_util__HeadVar__1_1;
#line 95 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Cast_HeadVar2_4 = transform_hlds__term_constr_util__HeadVar__2_2;

#line 95 "term_constr_util.m"
    {
#line 95 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_util__Cast_HeadVar2_4)));
    }
#line 95 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 95 "term_constr_util.m"
  }
#line 95 "term_constr_util.m"
}

#line 406 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(
#line 406 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 406 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_2)
#line 406 "term_constr_util.m"
{
#line 409 "term_constr_util.m"
  while (MR_TRUE)
#line 409 "term_constr_util.m"
    {
#line 409 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 409 "term_constr_util.m"
      {
#line 409 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 409 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "term_constr_util.m"
          {
#line 409 "term_constr_util.m"
          }
#line 409 "term_constr_util.m"
        else
#line 410 "term_constr_util.m"
          {
#line 410 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "term_constr_util.m"
            MR_String transform_hlds__term_constr_util__Name_13;
#line 410 "term_constr_util.m"
            MR_String transform_hlds__term_constr_util__V_28_28;

#line 411 "term_constr_util.m"
            {
#line 411 "term_constr_util.m"
              transform_hlds__term_constr_util__Name_13 = mercury__varset__lookup_name_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_2, transform_hlds__term_constr_util__Var_9);
            }
#line 412 "term_constr_util.m"
            {
#line 412 "term_constr_util.m"
              mercury__io__write_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__Var_9)));
            }
#line 413 "term_constr_util.m"
            {
#line 413 "term_constr_util.m"
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
#line 413 "term_constr_util.m"
            {
#line 413 "term_constr_util.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_6[2], transform_hlds__term_constr_util__Name_13, &transform_hlds__term_constr_util__V_28_28);
            }
#line 413 "term_constr_util.m"
            {
#line 413 "term_constr_util.m"
              mercury__io__write_string_3_p_0(transform_hlds__term_constr_util__V_28_28);
            }
#line 413 "term_constr_util.m"
            {
#line 413 "term_constr_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 414 "term_constr_util.m"
            /* direct tailcall eliminated */
#line 414 "term_constr_util.m"
            {
#line 414 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__Vars_10;

#line 414 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 414 "term_constr_util.m"
            }
#line 414 "term_constr_util.m"
            continue;
#line 410 "term_constr_util.m"
          }
#line 409 "term_constr_util.m"
      }
#line 409 "term_constr_util.m"
      break;
#line 409 "term_constr_util.m"
    }
#line 406 "term_constr_util.m"
}

#line 373 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__write_scc_procs_2_4_p_0(
#line 373 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 373 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_2)
#line 373 "term_constr_util.m"
{
#line 376 "term_constr_util.m"
  while (MR_TRUE)
#line 376 "term_constr_util.m"
    {
#line 376 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 376 "term_constr_util.m"
      {
#line 376 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 376 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "term_constr_util.m"
          {
#line 376 "term_constr_util.m"
          }
#line 376 "term_constr_util.m"
        else
#line 377 "term_constr_util.m"
          {
#line 377 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));

#line 378 "term_constr_util.m"
            {
#line 378 "term_constr_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 9);
            }
#line 379 "term_constr_util.m"
            {
#line 379 "term_constr_util.m"
              hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_util__ModuleInfo_2, transform_hlds__term_constr_util__PPId_9);
            }
#line 380 "term_constr_util.m"
            {
#line 380 "term_constr_util.m"
              mercury__io__nl_2_p_0();
            }
#line 381 "term_constr_util.m"
            /* direct tailcall eliminated */
#line 381 "term_constr_util.m"
            {
#line 381 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__PPIds_10;

#line 381 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 381 "term_constr_util.m"
            }
#line 381 "term_constr_util.m"
            continue;
#line 377 "term_constr_util.m"
          }
#line 376 "term_constr_util.m"
      }
#line 376 "term_constr_util.m"
      break;
#line 376 "term_constr_util.m"
    }
#line 373 "term_constr_util.m"
}

#line 321 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
#line 321 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3,
#line 321 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4)
#line 321 "term_constr_util.m"
{
#line 324 "term_constr_util.m"
  while (MR_TRUE)
#line 324 "term_constr_util.m"
    {
#line 324 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 324 "term_constr_util.m"
      {
#line 324 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 324 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "term_constr_util.m"
          if ((transform_hlds__term_constr_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "term_constr_util.m"
            *transform_hlds__term_constr_util__STATE_VARIABLE_Subst_4 = transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3;
#line 324 "term_constr_util.m"
          else
#line 327 "term_constr_util.m"
            {
#line 328 "term_constr_util.m"
              {
#line 328 "term_constr_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
#line 328 "term_constr_util.m"
                return;
              }
#line 327 "term_constr_util.m"
            }
#line 324 "term_constr_util.m"
        else
#line 324 "term_constr_util.m"
          {
#line 324 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 324 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));

#line 324 "term_constr_util.m"
            if ((transform_hlds__term_constr_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "term_constr_util.m"
              {
#line 326 "term_constr_util.m"
                {
#line 326 "term_constr_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "predicate \140transform_hlds.term_constr_util.create_var_substitution_2\'/4", (MR_String) "unmatched lists");
#line 326 "term_constr_util.m"
                  return;
                }
#line 325 "term_constr_util.m"
              }
#line 324 "term_constr_util.m"
            else
#line 329 "term_constr_util.m"
              {
#line 329 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
#line 329 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__HeadVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__HeadVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__2_2, (MR_Integer) 1)));
#line 329 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29;

#line 330 "term_constr_util.m"
                {
#line 330 "term_constr_util.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_constr_util__TypeInfo_31_31, transform_hlds__term_constr_util__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_util__HeadVar_24)), ((MR_Box) (transform_hlds__term_constr_util__V_33_33)), transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3, &transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29);
                }
#line 331 "term_constr_util.m"
                /* direct tailcall eliminated */
#line 331 "term_constr_util.m"
                {
#line 331 "term_constr_util.m"
                  MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__V_32_32;
#line 331 "term_constr_util.m"
                  MR_Word transform_hlds__term_constr_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_util__HeadVars_25;
#line 331 "term_constr_util.m"
                  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0__tmp_copy_3 = transform_hlds__term_constr_util__STATE_VARIABLE_Subst_29_29;

#line 331 "term_constr_util.m"
                  transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0_3 = transform_hlds__term_constr_util__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 331 "term_constr_util.m"
                  transform_hlds__term_constr_util__HeadVar__2_2 = transform_hlds__term_constr_util__HeadVar__2__tmp_copy_2;
#line 331 "term_constr_util.m"
                  transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 331 "term_constr_util.m"
                }
#line 331 "term_constr_util.m"
                continue;
#line 329 "term_constr_util.m"
              }
#line 324 "term_constr_util.m"
          }
#line 324 "term_constr_util.m"
      }
#line 324 "term_constr_util.m"
      break;
#line 324 "term_constr_util.m"
    }
#line 321 "term_constr_util.m"
}

#line 270 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__VarTypes_5,
#line 270 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Var_6)
#line 270 "term_constr_util.m"
{
#line 273 "term_constr_util.m"
  {
#line 273 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 273 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Type_7;

#line 274 "term_constr_util.m"
    {
#line 274 "term_constr_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_util__VarTypes_5, transform_hlds__term_constr_util__Var_6, &transform_hlds__term_constr_util__Type_7);
    }
#line 276 "term_constr_util.m"
    {
#line 276 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__Type_7);
    }
#line 277 "term_constr_util.m"
    if (!(transform_hlds__term_constr_util__succeeded))
#line 280 "term_constr_util.m"
      {
#line 280 "term_constr_util.m"
        MR_Word transform_hlds__term_constr_util__V_8_8;

#line 280 "term_constr_util.m"
        {
#line 280 "term_constr_util.m"
          transform_hlds__term_constr_util__V_8_8 = check_hlds__type_util__check_dummy_type_2_f_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__Type_7);
        }
#line 280 "term_constr_util.m"
        transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__V_8_8 == (MR_Integer) 0);
#line 280 "term_constr_util.m"
      }
#line 273 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 273 "term_constr_util.m"
  }
#line 270 "term_constr_util.m"
}

#line 244 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ProgVar_6,
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10,
#line 244 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11,
#line 244 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12,
#line 244 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13)
#line 244 "term_constr_util.m"
{
#line 247 "term_constr_util.m"
  {
#line 247 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 247 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SizeVar_9;

#line 248 "term_constr_util.m"
    {
#line 248 "term_constr_util.m"
      mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_constr_util__SizeVar_9, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_12, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_13);
    }
#line 249 "term_constr_util.m"
    {
#line 249 "term_constr_util.m"
      mercury__map__set_4_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__ProgVar_6)), ((MR_Box) (transform_hlds__term_constr_util__SizeVar_9)), transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_0_10, transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarMap_11);
    }
#line 247 "term_constr_util.m"
  }
#line 244 "term_constr_util.m"
}

#line 187 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(
#line 187 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 187 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Override_2,
#line 187 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ArgSize_3,
#line 187 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4,
#line 187 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5)
#line 187 "term_constr_util.m"
{
#line 442 "term_constr_util.m"
  while (MR_TRUE)
#line 442 "term_constr_util.m"
    {
#line 442 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 442 "term_constr_util.m"
      {
#line 442 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 442 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "term_constr_util.m"
          *transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
#line 442 "term_constr_util.m"
        else
#line 444 "term_constr_util.m"
          {
#line 444 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 444 "term_constr_util.m"
            MR_Integer transform_hlds__term_constr_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcInfo0_16;
#line 444 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Term2Info0_17;
#line 444 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;
#line 445 "term_constr_util.m"
            MR_Box transform_hlds__term_constr_util__conv0_ProcInfo0_16;

#line 445 "term_constr_util.m"
            {
#line 445 "term_constr_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, transform_hlds__term_constr_util__ProcId_11, &transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            }
#line 445 "term_constr_util.m"
            transform_hlds__term_constr_util__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_ProcInfo0_16);
#line 446 "term_constr_util.m"
            {
#line 446 "term_constr_util.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__Term2Info0_17);
            }
#line 448 "term_constr_util.m"
            transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Override_2 == (MR_Integer) 1);
#line 449 "term_constr_util.m"
            if (!(transform_hlds__term_constr_util__succeeded))
#line 449 "term_constr_util.m"
              {
#line 449 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__V_22_22;

#line 449 "term_constr_util.m"
                {
#line 449 "term_constr_util.m"
                  transform_hlds__term_constr_util__V_22_22 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_util__Term2Info0_17);
                }
#line 449 "term_constr_util.m"
                transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "term_constr_util.m"
              }
#line 447 "term_constr_util.m"
            if (transform_hlds__term_constr_util__succeeded)
#line 452 "term_constr_util.m"
              {
#line 452 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__Term2Info_18;
#line 452 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__ProcInfo_19;
#line 452 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__V_23_23;

#line 452 "term_constr_util.m"
                {
#line 452 "term_constr_util.m"
                  transform_hlds__term_constr_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "term_constr_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_util__ArgSize_3));
#line 452 "term_constr_util.m"
                }
#line 452 "term_constr_util.m"
                {
#line 452 "term_constr_util.m"
                  transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_util__V_23_23, transform_hlds__term_constr_util__Term2Info0_17, &transform_hlds__term_constr_util__Term2Info_18);
                }
#line 453 "term_constr_util.m"
                {
#line 453 "term_constr_util.m"
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_18, transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__ProcInfo_19);
                }
#line 454 "term_constr_util.m"
                {
#line 454 "term_constr_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__ProcId_11, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_19)), transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24);
                }
#line 452 "term_constr_util.m"
              }
#line 447 "term_constr_util.m"
            else
#line 447 "term_constr_util.m"
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
#line 458 "term_constr_util.m"
            /* direct tailcall eliminated */
#line 458 "term_constr_util.m"
            {
#line 458 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__ProcIds_12;
#line 458 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;

#line 458 "term_constr_util.m"
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 458 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 458 "term_constr_util.m"
            }
#line 458 "term_constr_util.m"
            continue;
#line 444 "term_constr_util.m"
          }
#line 442 "term_constr_util.m"
      }
#line 442 "term_constr_util.m"
      break;
#line 442 "term_constr_util.m"
    }
#line 187 "term_constr_util.m"
}

#line 174 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(
#line 174 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 174 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Override_2,
#line 174 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Termination_3,
#line 174 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4,
#line 174 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5)
#line 174 "term_constr_util.m"
{
#line 423 "term_constr_util.m"
  while (MR_TRUE)
#line 423 "term_constr_util.m"
    {
#line 423 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 423 "term_constr_util.m"
      {
#line 423 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 423 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "term_constr_util.m"
          *transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
#line 423 "term_constr_util.m"
        else
#line 425 "term_constr_util.m"
          {
#line 425 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 425 "term_constr_util.m"
            MR_Integer transform_hlds__term_constr_util__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 425 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcInfo0_16;
#line 425 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Term2Info0_17;
#line 425 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;
#line 426 "term_constr_util.m"
            MR_Box transform_hlds__term_constr_util__conv0_ProcInfo0_16;

#line 426 "term_constr_util.m"
            {
#line 426 "term_constr_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, transform_hlds__term_constr_util__ProcId_11, &transform_hlds__term_constr_util__conv0_ProcInfo0_16);
            }
#line 426 "term_constr_util.m"
            transform_hlds__term_constr_util__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_ProcInfo0_16);
#line 427 "term_constr_util.m"
            {
#line 427 "term_constr_util.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__Term2Info0_17);
            }
#line 429 "term_constr_util.m"
            transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__Override_2 == (MR_Integer) 1);
#line 430 "term_constr_util.m"
            if (!(transform_hlds__term_constr_util__succeeded))
#line 430 "term_constr_util.m"
              {
#line 430 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__V_22_22;

#line 430 "term_constr_util.m"
                {
#line 430 "term_constr_util.m"
                  transform_hlds__term_constr_util__V_22_22 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(transform_hlds__term_constr_util__Term2Info0_17);
                }
#line 430 "term_constr_util.m"
                transform_hlds__term_constr_util__succeeded = (transform_hlds__term_constr_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "term_constr_util.m"
              }
#line 428 "term_constr_util.m"
            if (transform_hlds__term_constr_util__succeeded)
#line 433 "term_constr_util.m"
              {
#line 433 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__Term2Info_18;
#line 433 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__ProcInfo_19;
#line 433 "term_constr_util.m"
                MR_Word transform_hlds__term_constr_util__V_23_23;

#line 433 "term_constr_util.m"
                {
#line 433 "term_constr_util.m"
                  transform_hlds__term_constr_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "term_constr_util.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_util__Termination_3));
#line 433 "term_constr_util.m"
                }
#line 433 "term_constr_util.m"
                {
#line 433 "term_constr_util.m"
                  transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_util__V_23_23, transform_hlds__term_constr_util__Term2Info0_17, &transform_hlds__term_constr_util__Term2Info_18);
                }
#line 434 "term_constr_util.m"
                {
#line 434 "term_constr_util.m"
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_18, transform_hlds__term_constr_util__ProcInfo0_16, &transform_hlds__term_constr_util__ProcInfo_19);
                }
#line 435 "term_constr_util.m"
                {
#line 435 "term_constr_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_27_27, transform_hlds__term_constr_util__ProcId_11, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_19)), transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24);
                }
#line 433 "term_constr_util.m"
              }
#line 428 "term_constr_util.m"
            else
#line 428 "term_constr_util.m"
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4;
#line 439 "term_constr_util.m"
            /* direct tailcall eliminated */
#line 439 "term_constr_util.m"
            {
#line 439 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__ProcIds_12;
#line 439 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_24_24;

#line 439 "term_constr_util.m"
              transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 439 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 439 "term_constr_util.m"
            }
#line 439 "term_constr_util.m"
            continue;
#line 425 "term_constr_util.m"
          }
#line 423 "term_constr_util.m"
      }
#line 423 "term_constr_util.m"
      break;
#line 423 "term_constr_util.m"
    }
#line 174 "term_constr_util.m"
}

#line 162 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__update_arg_size_info_4_p_0(
#line 162 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__PPID_5,
#line 162 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Polyhedron_6,
#line 162 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_8,
#line 162 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_9)
#line 162 "term_constr_util.m"
{
#line 418 "term_constr_util.m"
  {
#line 418 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 418 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_10_10;

#line 419 "term_constr_util.m"
    {
#line 419 "term_constr_util.m"
      transform_hlds__term_constr_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "term_constr_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_10_10, 0) = ((MR_Box) (transform_hlds__term_constr_util__PPID_5));
#line 419 "term_constr_util.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "term_constr_util.m"
    }
#line 419 "term_constr_util.m"
    {
#line 419 "term_constr_util.m"
      transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_p_0(transform_hlds__term_constr_util__V_10_10, transform_hlds__term_constr_util__Polyhedron_6, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_9);
    }
#line 418 "term_constr_util.m"
  }
#line 162 "term_constr_util.m"
}

#line 158 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__dump_size_vars_4_p_0(
#line 158 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Vars_5,
#line 158 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_6)
#line 158 "term_constr_util.m"
{
#line 400 "term_constr_util.m"
  {
#line 400 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 400 "term_constr_util.m"
    {
#line 400 "term_constr_util.m"
      transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(transform_hlds__term_constr_util__Vars_5, transform_hlds__term_constr_util__Varset_6);
    }
#line 400 "term_constr_util.m"
  }
#line 158 "term_constr_util.m"
}

#line 156 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__dump_size_varset_3_p_0(
#line 156 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_4)
#line 156 "term_constr_util.m"
{
#line 402 "term_constr_util.m"
  {
#line 402 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 402 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Vars_6;

#line 403 "term_constr_util.m"
    {
#line 403 "term_constr_util.m"
      transform_hlds__term_constr_util__Vars_6 = mercury__varset__vars_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_util__Varset_4);
    }
#line 404 "term_constr_util.m"
    {
#line 404 "term_constr_util.m"
      transform_hlds__term_constr_util__dump_size_varset_2_4_p_0(transform_hlds__term_constr_util__Vars_6, transform_hlds__term_constr_util__Varset_4);
    }
#line 402 "term_constr_util.m"
  }
#line 156 "term_constr_util.m"
}

#line 389 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0_1(
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 389 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 389 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3)
#line 389 "term_constr_util.m"
{
#line 389 "term_constr_util.m"
  {
#line 389 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

#line 389 "term_constr_util.m"
    {
#line 389 "term_constr_util.m"
      transform_hlds__term_constr_util__IntroducedFrom__pred__write_size_vars__389__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 389 "term_constr_util.m"
  }
#line 389 "term_constr_util.m"
}

#line 154 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__write_size_vars_4_p_0(
#line 154 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Varset_5,
#line 154 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Vars_6)
#line 154 "term_constr_util.m"
{
#line 388 "term_constr_util.m"
  {
#line 388 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 388 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__WriteSizeVar_8;

#line 389 "term_constr_util.m"
    {
#line 389 "term_constr_util.m"
      transform_hlds__term_constr_util__WriteSizeVar_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_7[0]));
#line 389 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 1) = ((MR_Box) (transform_hlds__term_constr_util__write_size_vars_4_p_0_1));
#line 389 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__WriteSizeVar_8, 3) = ((MR_Box) (transform_hlds__term_constr_util__Varset_5));
#line 389 "term_constr_util.m"
    }
#line 393 "term_constr_util.m"
    {
#line 393 "term_constr_util.m"
      mercury__io__write_char_3_p_0((MR_Char) 91);
    }
#line 394 "term_constr_util.m"
    {
#line 394 "term_constr_util.m"
      mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__Vars_6, (MR_String) ", ", transform_hlds__term_constr_util__WriteSizeVar_8);
    }
#line 395 "term_constr_util.m"
    {
#line 395 "term_constr_util.m"
      mercury__io__write_char_3_p_0((MR_Char) 93);
    }
#line 388 "term_constr_util.m"
  }
#line 154 "term_constr_util.m"
}

#line 151 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__maybe_write_proc_name_6_p_0(
#line 151 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__PPId_7,
#line 151 "term_constr_util.m"
  MR_String transform_hlds__term_constr_util__String_8,
#line 151 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_9,
#line 151 "term_constr_util.m"
  MR_Integer transform_hlds__term_constr_util__HeadVar__4_10)
#line 151 "term_constr_util.m"
{
#line 383 "term_constr_util.m"
  {
#line 383 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 383 "term_constr_util.m"
    {
#line 383 "term_constr_util.m"
      transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_111_99_95_110_97_109_101_95_95_91_52_93_95_48_6_p_0(transform_hlds__term_constr_util__PPId_7, transform_hlds__term_constr_util__String_8, transform_hlds__term_constr_util__ModuleInfo_9);
    }
#line 383 "term_constr_util.m"
  }
#line 151 "term_constr_util.m"
}

#line 148 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__maybe_write_scc_procs_5_p_0(
#line 148 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SCC_6,
#line 148 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_7,
#line 148 "term_constr_util.m"
  MR_Integer transform_hlds__term_constr_util__HeadVar__3_8)
#line 148 "term_constr_util.m"
{
#line 369 "term_constr_util.m"
  {
#line 369 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 369 "term_constr_util.m"
    {
#line 369 "term_constr_util.m"
      transform_hlds__term_constr_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_115_99_99_95_112_114_111_99_115_95_95_91_51_93_95_48_5_p_0(transform_hlds__term_constr_util__SCC_6, transform_hlds__term_constr_util__ModuleInfo_7);
    }
#line 369 "term_constr_util.m"
  }
#line 148 "term_constr_util.m"
}

#line 145 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_nl_5_p_0(
#line 145 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__DebugTerm_6,
#line 145 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__TracePred_7,
#line 145 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__NewLine_8)
#line 145 "term_constr_util.m"
{
#line 356 "term_constr_util.m"
  {
#line 356 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 356 "term_constr_util.m"
#line 356 "term_constr_util.m"
    switch (transform_hlds__term_constr_util__DebugTerm_6) {
#line 356 "term_constr_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "term_constr_util.m"
      case (MR_Integer) 0:
#line 366 "term_constr_util.m"
        {
#line 366 "term_constr_util.m"
        }
#line 356 "term_constr_util.m"
        break;
#line 356 "term_constr_util.m"
      case (MR_Integer) 1:
#line 356 "term_constr_util.m"
        {
#line 357 "term_constr_util.m"
          void MR_CALL (* transform_hlds__term_constr_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__TracePred_7, (MR_Integer) 1)));
#line 357 "term_constr_util.m"
          MR_Box transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_12_12;

#line 357 "term_constr_util.m"
          {
#line 357 "term_constr_util.m"
            transform_hlds__term_constr_util__func_0(((MR_Box) transform_hlds__term_constr_util__TracePred_7), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_12_12);
          }
#line 361 "term_constr_util.m"
#line 361 "term_constr_util.m"
          switch (transform_hlds__term_constr_util__NewLine_8) {
#line 361 "term_constr_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 361 "term_constr_util.m"
            case (MR_Integer) 0:
#line 362 "term_constr_util.m"
              {
#line 362 "term_constr_util.m"
              }
#line 361 "term_constr_util.m"
              break;
#line 361 "term_constr_util.m"
            case (MR_Integer) 1:
#line 360 "term_constr_util.m"
              {
#line 360 "term_constr_util.m"
                mercury__io__nl_2_p_0();
              }
#line 361 "term_constr_util.m"
              break;
#line 361 "term_constr_util.m"
          }
#line 364 "term_constr_util.m"
          {
#line 364 "term_constr_util.m"
            mercury__io__flush_output_2_p_0();
          }
#line 356 "term_constr_util.m"
        }
#line 356 "term_constr_util.m"
        break;
#line 356 "term_constr_util.m"
    }
#line 356 "term_constr_util.m"
  }
#line 145 "term_constr_util.m"
}

#line 139 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__maybe_write_trace_4_p_0(
#line 139 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__DebugTerm_5,
#line 139 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__TracePred_6)
#line 139 "term_constr_util.m"
{
#line 356 "term_constr_util.m"
  {
#line 356 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 356 "term_constr_util.m"
#line 356 "term_constr_util.m"
    switch (transform_hlds__term_constr_util__DebugTerm_5) {
#line 356 "term_constr_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "term_constr_util.m"
      case (MR_Integer) 0:
#line 366 "term_constr_util.m"
        {
#line 366 "term_constr_util.m"
        }
#line 356 "term_constr_util.m"
        break;
#line 356 "term_constr_util.m"
      case (MR_Integer) 1:
#line 356 "term_constr_util.m"
        {
#line 357 "term_constr_util.m"
          void MR_CALL (* transform_hlds__term_constr_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__TracePred_6, (MR_Integer) 1)));
#line 357 "term_constr_util.m"
          MR_Box transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_13_19;

#line 357 "term_constr_util.m"
          {
#line 357 "term_constr_util.m"
            transform_hlds__term_constr_util__func_0(((MR_Box) transform_hlds__term_constr_util__TracePred_6), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_IO_13_19);
          }
#line 364 "term_constr_util.m"
          {
#line 364 "term_constr_util.m"
            mercury__io__flush_output_2_p_0();
          }
#line 356 "term_constr_util.m"
        }
#line 356 "term_constr_util.m"
        break;
#line 356 "term_constr_util.m"
    }
#line 356 "term_constr_util.m"
  }
#line 139 "term_constr_util.m"
}

#line 295 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2(
#line 295 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 295 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 295 "term_constr_util.m"
{
#line 295 "term_constr_util.m"
  {
#line 295 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 295 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 295 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20;

#line 295 "term_constr_util.m"
    {
#line 295 "term_constr_util.m"
      transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__295__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 295 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv1_LambdaHeadVar__2_20));
#line 295 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 295 "term_constr_util.m"
  }
#line 295 "term_constr_util.m"
}

#line 292 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1(
#line 292 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 292 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 292 "term_constr_util.m"
{
#line 292 "term_constr_util.m"
  {
#line 292 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 292 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 292 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18;

#line 292 "term_constr_util.m"
    {
#line 292 "term_constr_util.m"
      transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18 = transform_hlds__term_constr_util__IntroducedFrom__func__substitute_size_vars__292__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 292 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_LambdaHeadVar__2_18));
#line 292 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 292 "term_constr_util.m"
  }
#line 292 "term_constr_util.m"
}

#line 128 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__substitute_size_vars_2_f_0(
#line 128 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Constraints0_4,
#line 128 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SubstMap_5)
#line 128 "term_constr_util.m"
{
#line 291 "term_constr_util.m"
  {
#line 291 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 291 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Constraints_6;
#line 291 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeCtorInfo_29_29;
#line 291 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SubVarInCoeff_7;
#line 291 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SubVarInEqn_11;

#line 292 "term_constr_util.m"
    {
#line 292 "term_constr_util.m"
      transform_hlds__term_constr_util__SubVarInCoeff_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[3]));
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_1));
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInCoeff_7, 3) = ((MR_Box) (transform_hlds__term_constr_util__SubstMap_5));
#line 292 "term_constr_util.m"
    }
#line 295 "term_constr_util.m"
    {
#line 295 "term_constr_util.m"
      transform_hlds__term_constr_util__SubVarInEqn_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 295 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[4]));
#line 295 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 1) = ((MR_Box) (transform_hlds__term_constr_util__substitute_size_vars_2_f_0_2));
#line 295 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 295 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__SubVarInEqn_11, 3) = ((MR_Box) (transform_hlds__term_constr_util__SubVarInCoeff_7));
#line 295 "term_constr_util.m"
    }
#line 2229 "transform_hlds.term_constr_util.c"
    transform_hlds__term_constr_util__TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 300 "term_constr_util.m"
    {
#line 300 "term_constr_util.m"
      transform_hlds__term_constr_util__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeCtorInfo_29_29, transform_hlds__term_constr_util__TypeCtorInfo_29_29, transform_hlds__term_constr_util__SubVarInEqn_11, transform_hlds__term_constr_util__Constraints0_4);
    }
#line 291 "term_constr_util.m"
    return transform_hlds__term_constr_util__Constraints_6;
#line 291 "term_constr_util.m"
  }
#line 128 "term_constr_util.m"
}

#line 118 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__add_context_to_constr_termination_info_3_p_0(
#line 118 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 118 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Context_2,
#line 118 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__HeadVar__3_3)
#line 118 "term_constr_util.m"
{
#line 283 "term_constr_util.m"
  {
#line 283 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 283 "term_constr_util.m"
    if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "term_constr_util.m"
      *transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "term_constr_util.m"
    else
#line 283 "term_constr_util.m"
      {
#line 283 "term_constr_util.m"
        MR_Word transform_hlds__term_constr_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));

#line 283 "term_constr_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_util__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 286 "term_constr_util.m"
          {
#line 286 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_13_13;
#line 286 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_14_14;
#line 286 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_15_15;

#line 287 "term_constr_util.m"
            {
#line 287 "term_constr_util.m"
              transform_hlds__term_constr_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_util__Context_2));
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "term_constr_util.m"
            }
#line 287 "term_constr_util.m"
            {
#line 287 "term_constr_util.m"
              transform_hlds__term_constr_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_constr_util__V_15_15));
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "term_constr_util.m"
            }
#line 287 "term_constr_util.m"
            {
#line 287 "term_constr_util.m"
              transform_hlds__term_constr_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_constr_util__V_14_14));
#line 287 "term_constr_util.m"
            }
#line 287 "term_constr_util.m"
            {
#line 287 "term_constr_util.m"
              MR_Word base;
#line 287 "term_constr_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_constr_util.m"
              *transform_hlds__term_constr_util__HeadVar__3_3 = base;
#line 287 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_util__V_13_13));
#line 287 "term_constr_util.m"
            }
#line 286 "term_constr_util.m"
          }
#line 283 "term_constr_util.m"
        else
#line 284 "term_constr_util.m"
          {
#line 285 "term_constr_util.m"
            *transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_util_scalar_common_6[1]);
#line 284 "term_constr_util.m"
          }
#line 283 "term_constr_util.m"
      }
#line 283 "term_constr_util.m"
  }
#line 118 "term_constr_util.m"
}

#line 114 "term_constr_util.m"
MR_bool MR_CALL 
transform_hlds__term_constr_util__is_zero_size_var_2_p_0(
#line 114 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Zeros_3,
#line 114 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SizeVar_4)
#line 114 "term_constr_util.m"
{
#line 344 "term_constr_util.m"
  {
#line 344 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;

#line 344 "term_constr_util.m"
    {
#line 344 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__SizeVar_4)), transform_hlds__term_constr_util__Zeros_3);
    }
#line 344 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 344 "term_constr_util.m"
  }
#line 114 "term_constr_util.m"
}

#line 107 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__make_arg_constraints_2_f_0(
#line 107 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 107 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Zeros_2)
#line 107 "term_constr_util.m"
{
#line 333 "term_constr_util.m"
  {
#line 333 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 333 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;

#line 333 "term_constr_util.m"
    if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "term_constr_util.m"
      transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "term_constr_util.m"
    else
#line 334 "term_constr_util.m"
      {
#line 334 "term_constr_util.m"
        MR_Word transform_hlds__term_constr_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "term_constr_util.m"
        MR_Word transform_hlds__term_constr_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "term_constr_util.m"
        MR_Word transform_hlds__term_constr_util__Constraints0_9;

#line 335 "term_constr_util.m"
        {
#line 335 "term_constr_util.m"
          transform_hlds__term_constr_util__Constraints0_9 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_util__Vars_6, transform_hlds__term_constr_util__Zeros_2);
        }
#line 336 "term_constr_util.m"
        {
#line 336 "term_constr_util.m"
          transform_hlds__term_constr_util__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_util__Var_5)), transform_hlds__term_constr_util__Zeros_2);
        }
#line 336 "term_constr_util.m"
        if (transform_hlds__term_constr_util__succeeded)
#line 337 "term_constr_util.m"
          transform_hlds__term_constr_util__HeadVar__3_3 = transform_hlds__term_constr_util__Constraints0_9;
#line 336 "term_constr_util.m"
        else
#line 339 "term_constr_util.m"
          {
#line 339 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__NewConstraint_10;
#line 339 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_11_11;
#line 339 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_12_12;
#line 339 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_13_13;
#line 339 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_16_16;

#line 339 "term_constr_util.m"
            {
#line 339 "term_constr_util.m"
              transform_hlds__term_constr_util__V_13_13 = libs__rat__one_0_f_0();
            }
#line 339 "term_constr_util.m"
            {
#line 339 "term_constr_util.m"
              transform_hlds__term_constr_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "term_constr_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 0) = ((MR_Box) (transform_hlds__term_constr_util__Var_5));
#line 339 "term_constr_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__V_13_13));
#line 339 "term_constr_util.m"
            }
#line 339 "term_constr_util.m"
            {
#line 339 "term_constr_util.m"
              transform_hlds__term_constr_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_11_11, 0) = ((MR_Box) (transform_hlds__term_constr_util__V_12_12));
#line 339 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "term_constr_util.m"
            }
#line 339 "term_constr_util.m"
            {
#line 339 "term_constr_util.m"
              transform_hlds__term_constr_util__V_16_16 = libs__rat__zero_0_f_0();
            }
#line 339 "term_constr_util.m"
            {
#line 339 "term_constr_util.m"
              transform_hlds__term_constr_util__NewConstraint_10 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_util__V_11_11, (MR_Integer) 2, transform_hlds__term_constr_util__V_16_16);
            }
#line 340 "term_constr_util.m"
            {
#line 340 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_util__NewConstraint_10));
#line 340 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_util__Constraints0_9));
#line 340 "term_constr_util.m"
            }
#line 339 "term_constr_util.m"
          }
#line 334 "term_constr_util.m"
      }
#line 333 "term_constr_util.m"
    return transform_hlds__term_constr_util__HeadVar__3_3;
#line 333 "term_constr_util.m"
  }
#line 107 "term_constr_util.m"
}

#line 102 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__create_var_substitution_2_f_0(
#line 102 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Args_4,
#line 102 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVars_5)
#line 102 "term_constr_util.m"
{
#line 318 "term_constr_util.m"
  {
#line 318 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 318 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SubstMap_6;
#line 318 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_8_8 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
#line 318 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_7_7;

#line 319 "term_constr_util.m"
    {
#line 319 "term_constr_util.m"
      transform_hlds__term_constr_util__V_7_7 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_8_8, transform_hlds__term_constr_util__TypeInfo_8_8);
    }
#line 319 "term_constr_util.m"
    {
#line 319 "term_constr_util.m"
      transform_hlds__term_constr_util__create_var_substitution_2_4_p_0(transform_hlds__term_constr_util__Args_4, transform_hlds__term_constr_util__HeadVars_5, transform_hlds__term_constr_util__V_7_7, &transform_hlds__term_constr_util__SubstMap_6);
    }
#line 318 "term_constr_util.m"
    return transform_hlds__term_constr_util__SubstMap_6;
#line 318 "term_constr_util.m"
  }
#line 102 "term_constr_util.m"
}

#line 316 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_3(
#line 316 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 316 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 316 "term_constr_util.m"
{
#line 316 "term_constr_util.m"
  {
#line 316 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 316 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 316 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_HeadVar__2_2;

#line 316 "term_constr_util.m"
    {
#line 316 "term_constr_util.m"
      transform_hlds__term_constr_util__conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 316 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_HeadVar__2_2));
#line 316 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 316 "term_constr_util.m"
  }
#line 316 "term_constr_util.m"
}

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2(
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 315 "term_constr_util.m"
{
#line 315 "term_constr_util.m"
  {
#line 315 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 315 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__IntroducedFrom__pred__create_nonneg_constraints_2__315__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 315 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 315 "term_constr_util.m"
  }
#line 315 "term_constr_util.m"
}

#line 315 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1(
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 315 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 315 "term_constr_util.m"
{
#line 315 "term_constr_util.m"
  {
#line 315 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 315 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 315 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 315 "term_constr_util.m"
  }
#line 315 "term_constr_util.m"
}

#line 93 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(
#line 93 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
#line 93 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Zeros_5)
#line 93 "term_constr_util.m"
{
#line 313 "term_constr_util.m"
  {
#line 313 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Constraints_6;
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_13_16 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SizeVars_10;
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__NonZeroSizeVars_11;
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_12_12;
#line 313 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_13_13;

#line 314 "term_constr_util.m"
    {
#line 314 "term_constr_util.m"
      transform_hlds__term_constr_util__SizeVars_10 = mercury__map__values_1_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], transform_hlds__term_constr_util__TypeInfo_13_16, transform_hlds__term_constr_util__SizeVarMap_4);
    }
#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      transform_hlds__term_constr_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_13_13, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[0]));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_13_13, 1) = ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_1));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_13_13, 3) = ((MR_Box) (transform_hlds__term_constr_util__Zeros_5));
#line 315 "term_constr_util.m"
    }
#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      transform_hlds__term_constr_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_5[1]));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0_2));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 315 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_util__V_13_13));
#line 315 "term_constr_util.m"
    }
#line 315 "term_constr_util.m"
    {
#line 315 "term_constr_util.m"
      mercury__list__filter_3_p_0(transform_hlds__term_constr_util__TypeInfo_13_16, transform_hlds__term_constr_util__V_12_12, transform_hlds__term_constr_util__SizeVars_10, &transform_hlds__term_constr_util__NonZeroSizeVars_11);
    }
#line 316 "term_constr_util.m"
    {
#line 316 "term_constr_util.m"
      transform_hlds__term_constr_util__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__term_constr_util__TypeInfo_13_16, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[5], transform_hlds__term_constr_util__NonZeroSizeVars_11);
    }
#line 313 "term_constr_util.m"
    return transform_hlds__term_constr_util__Constraints_6;
#line 313 "term_constr_util.m"
  }
#line 93 "term_constr_util.m"
}

#line 252 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2(
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 252 "term_constr_util.m"
{
#line 252 "term_constr_util.m"
  {
#line 252 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 252 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 252 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_SizeVar_6;

#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 252 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_SizeVar_6));
#line 252 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 252 "term_constr_util.m"
  }
#line 252 "term_constr_util.m"
}

#line 263 "term_constr_util.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1(
#line 263 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 263 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 263 "term_constr_util.m"
{
#line 263 "term_constr_util.m"
  {
#line 263 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 263 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;

#line 263 "term_constr_util.m"
    {
#line 263 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = transform_hlds__term_constr_util__is_zero_size_prog_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 263 "term_constr_util.m"
    return transform_hlds__term_constr_util__succeeded;
#line 263 "term_constr_util.m"
  }
#line 263 "term_constr_util.m"
}

#line 86 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(
#line 86 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_5,
#line 86 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SizeVarMap_6,
#line 86 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__VarTypes_7)
#line 86 "term_constr_util.m"
{
#line 261 "term_constr_util.m"
  {
#line 261 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Zeros_8;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1];
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__ProgVars_9;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__ZeroProgVars_10;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__ZerosList_11;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_12_12;
#line 261 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_18_18;

#line 262 "term_constr_util.m"
    {
#line 262 "term_constr_util.m"
      transform_hlds__term_constr_util__ProgVars_9 = mercury__map__keys_1_f_0(transform_hlds__term_constr_util__TypeInfo_13_13, transform_hlds__term_constr_util__TypeInfo_14_14, transform_hlds__term_constr_util__SizeVarMap_6);
    }
#line 263 "term_constr_util.m"
    {
#line 263 "term_constr_util.m"
      transform_hlds__term_constr_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 263 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[2]));
#line 263 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_1));
#line 263 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 263 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_util__ModuleInfo_5));
#line 263 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_12_12, 4) = ((MR_Box) (transform_hlds__term_constr_util__VarTypes_7));
#line 263 "term_constr_util.m"
    }
#line 263 "term_constr_util.m"
    {
#line 263 "term_constr_util.m"
      transform_hlds__term_constr_util__ZeroProgVars_10 = mercury__list__filter_2_f_0(transform_hlds__term_constr_util__TypeInfo_13_13, transform_hlds__term_constr_util__V_12_12, transform_hlds__term_constr_util__ProgVars_9);
    }
#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_18_18, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[1]));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_18_18, 1) = ((MR_Box) (transform_hlds__term_constr_util__find_zero_size_vars_3_f_0_2));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_18_18, 3) = ((MR_Box) (transform_hlds__term_constr_util__SizeVarMap_6));
#line 252 "term_constr_util.m"
    }
#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__ZerosList_11 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__V_18_18, transform_hlds__term_constr_util__ZeroProgVars_10);
    }
#line 268 "term_constr_util.m"
    {
#line 268 "term_constr_util.m"
      transform_hlds__term_constr_util__Zeros_8 = mercury__set__from_list_1_f_0(transform_hlds__term_constr_util__TypeInfo_14_14, transform_hlds__term_constr_util__ZerosList_11);
    }
#line 261 "term_constr_util.m"
    return transform_hlds__term_constr_util__Zeros_8;
#line 261 "term_constr_util.m"
  }
#line 86 "term_constr_util.m"
}

#line 80 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(
#line 80 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
#line 80 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Var_5)
#line 80 "term_constr_util.m"
{
#line 255 "term_constr_util.m"
  {
#line 255 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 255 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SizeVar_6;
#line 255 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__SizeVar0_7;
#line 255 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv0_SizeVar0_7;

#line 255 "term_constr_util.m"
    {
#line 255 "term_constr_util.m"
      transform_hlds__term_constr_util__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__SizeVarMap_4, ((MR_Box) (transform_hlds__term_constr_util__Var_5)), &transform_hlds__term_constr_util__conv0_SizeVar0_7);
    }
#line 255 "term_constr_util.m"
    if (transform_hlds__term_constr_util__succeeded)
#line 255 "term_constr_util.m"
      {
#line 255 "term_constr_util.m"
        transform_hlds__term_constr_util__SizeVar0_7 = ((MR_Word) transform_hlds__term_constr_util__conv0_SizeVar0_7);
#line 255 "term_constr_util.m"
        transform_hlds__term_constr_util__succeeded = MR_TRUE;
#line 255 "term_constr_util.m"
      }
#line 255 "term_constr_util.m"
    if (transform_hlds__term_constr_util__succeeded)
#line 256 "term_constr_util.m"
      transform_hlds__term_constr_util__SizeVar_6 = transform_hlds__term_constr_util__SizeVar0_7;
#line 255 "term_constr_util.m"
    else
#line 258 "term_constr_util.m"
      {
#line 258 "term_constr_util.m"
        {
#line 258 "term_constr_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "function \140transform_hlds.term_constr_util.prog_var_to_size_var\'/2", (MR_String) "prog_var not in size_var_map");
        }
#line 258 "term_constr_util.m"
      }
#line 255 "term_constr_util.m"
    return transform_hlds__term_constr_util__SizeVar_6;
#line 255 "term_constr_util.m"
  }
#line 80 "term_constr_util.m"
}

#line 252 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1(
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 252 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 252 "term_constr_util.m"
{
#line 252 "term_constr_util.m"
  {
#line 252 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 252 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 252 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_SizeVar_6;

#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__conv0_SizeVar_6 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 252 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_SizeVar_6));
#line 252 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 252 "term_constr_util.m"
  }
#line 252 "term_constr_util.m"
}

#line 79 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(
#line 79 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SizeVarMap_4,
#line 79 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__Vars_5)
#line 79 "term_constr_util.m"
{
#line 252 "term_constr_util.m"
  {
#line 252 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 252 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;
#line 252 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_6_6;

#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[1]));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0_1));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 252 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 3) = ((MR_Box) (transform_hlds__term_constr_util__SizeVarMap_4));
#line 252 "term_constr_util.m"
    }
#line 252 "term_constr_util.m"
    {
#line 252 "term_constr_util.m"
      transform_hlds__term_constr_util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1], transform_hlds__term_constr_util__V_6_6, transform_hlds__term_constr_util__Vars_5);
    }
#line 252 "term_constr_util.m"
    return transform_hlds__term_constr_util__HeadVar__3_3;
#line 252 "term_constr_util.m"
  }
#line 79 "term_constr_util.m"
}

#line 241 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0_1(
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5)
#line 241 "term_constr_util.m"
{
#line 241 "term_constr_util.m"
  {
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 241 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11;
#line 241 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13;

#line 241 "term_constr_util.m"
    {
#line 241 "term_constr_util.m"
      transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_4), &transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13);
    }
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11));
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13));
#line 241 "term_constr_util.m"
  }
#line 241 "term_constr_util.m"
}

#line 73 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_4_p_0(
#line 73 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ProgVars_5,
#line 73 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_8,
#line 73 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_9,
#line 73 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__SizeVarMap_7)
#line 73 "term_constr_util.m"
{
#line 240 "term_constr_util.m"
  {
#line 240 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 240 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
#line 240 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_11_11;
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv3_SizeVarMap_7;
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9;

#line 242 "term_constr_util.m"
    {
#line 242 "term_constr_util.m"
      transform_hlds__term_constr_util__V_11_11 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_18_18, (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1]);
    }
#line 241 "term_constr_util.m"
    {
#line 241 "term_constr_util.m"
      mercury__list__foldl2_6_p_0(transform_hlds__term_constr_util__TypeInfo_18_18, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[4], transform_hlds__term_constr_util__ProgVars_5, ((MR_Box) (transform_hlds__term_constr_util__V_11_11)), &transform_hlds__term_constr_util__conv3_SizeVarMap_7, ((MR_Box) (transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_0_8)), &transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9);
    }
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__SizeVarMap_7 = ((MR_Word) transform_hlds__term_constr_util__conv3_SizeVarMap_7);
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__STATE_VARIABLE_SizeVarset_9 = ((MR_Word) transform_hlds__term_constr_util__conv2_STATE_VARIABLE_SizeVarset_9);
#line 240 "term_constr_util.m"
  }
#line 73 "term_constr_util.m"
}

#line 241 "term_constr_util.m"
static void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0_1(
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_2,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_3,
#line 241 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_4,
#line 241 "term_constr_util.m"
  MR_Box * transform_hlds__term_constr_util__wrapper_arg_5)
#line 241 "term_constr_util.m"
{
#line 241 "term_constr_util.m"
  {
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 241 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11;
#line 241 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13;

#line 241 "term_constr_util.m"
    {
#line 241 "term_constr_util.m"
      transform_hlds__term_constr_util__make_size_var_map_2_5_p_0(((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_2), &transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11, ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_4), &transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13);
    }
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_util__conv1_STATE_VARIABLE_SizeVarMap_11));
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_util__conv0_STATE_VARIABLE_SizeVarset_13));
#line 241 "term_constr_util.m"
  }
#line 241 "term_constr_util.m"
}

#line 66 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__make_size_var_map_3_p_0(
#line 66 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ProgVars_4,
#line 66 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__SizeVarset_5,
#line 66 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__SizeVarMap_6)
#line 66 "term_constr_util.m"
{
#line 237 "term_constr_util.m"
  {
#line 237 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 237 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__TypeInfo_18_22;
#line 237 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_7_7;
#line 237 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_15_15;
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv3_SizeVarMap_6;
#line 241 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__conv2_SizeVarset_5;

#line 238 "term_constr_util.m"
    {
#line 238 "term_constr_util.m"
      transform_hlds__term_constr_util__V_7_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 3119 "transform_hlds.term_constr_util.c"
    transform_hlds__term_constr_util__TypeInfo_18_22 = (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[0];
#line 242 "term_constr_util.m"
    {
#line 242 "term_constr_util.m"
      transform_hlds__term_constr_util__V_15_15 = mercury__map__init_0_f_0(transform_hlds__term_constr_util__TypeInfo_18_22, (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[1]);
    }
#line 241 "term_constr_util.m"
    {
#line 241 "term_constr_util.m"
      mercury__list__foldl2_6_p_0(transform_hlds__term_constr_util__TypeInfo_18_22, (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[0], (MR_Word) &transform_hlds__term_constr_util_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_util_scalar_common_2[3], transform_hlds__term_constr_util__ProgVars_4, ((MR_Box) (transform_hlds__term_constr_util__V_15_15)), &transform_hlds__term_constr_util__conv3_SizeVarMap_6, ((MR_Box) (transform_hlds__term_constr_util__V_7_7)), &transform_hlds__term_constr_util__conv2_SizeVarset_5);
    }
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__SizeVarMap_6 = ((MR_Word) transform_hlds__term_constr_util__conv3_SizeVarMap_6);
#line 241 "term_constr_util.m"
    *transform_hlds__term_constr_util__SizeVarset_5 = ((MR_Word) transform_hlds__term_constr_util__conv2_SizeVarset_5);
#line 237 "term_constr_util.m"
  }
#line 66 "term_constr_util.m"
}

#line 55 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_proc_2_f_0(
#line 55 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
#line 55 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__PPId_5)
#line 55 "term_constr_util.m"
{
#line 465 "term_constr_util.m"
  {
#line 465 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 465 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__AbstractProc_6;
#line 465 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__ProcInfo_8;
#line 465 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Term2Info_9;
#line 465 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__MaybeAbstractProc_10;
#line 466 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_7_7;

#line 466 "term_constr_util.m"
    {
#line 466 "term_constr_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__PPId_5, &transform_hlds__term_constr_util__V_7_7, &transform_hlds__term_constr_util__ProcInfo_8);
    }
#line 467 "term_constr_util.m"
    {
#line 467 "term_constr_util.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo_8, &transform_hlds__term_constr_util__Term2Info_9);
    }
#line 468 "term_constr_util.m"
    {
#line 468 "term_constr_util.m"
      transform_hlds__term_constr_util__MaybeAbstractProc_10 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(transform_hlds__term_constr_util__Term2Info_9);
    }
#line 471 "term_constr_util.m"
    if ((transform_hlds__term_constr_util__MaybeAbstractProc_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "term_constr_util.m"
      {
#line 473 "term_constr_util.m"
        {
#line 473 "term_constr_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_util", (MR_String) "function \140transform_hlds.term_constr_util.get_abstract_proc\'/2", (MR_String) "no abstract rep. for proc");
        }
#line 472 "term_constr_util.m"
      }
#line 471 "term_constr_util.m"
    else
#line 470 "term_constr_util.m"
      transform_hlds__term_constr_util__AbstractProc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__MaybeAbstractProc_10, (MR_Integer) 0)));
#line 465 "term_constr_util.m"
    return transform_hlds__term_constr_util__AbstractProc_6;
#line 465 "term_constr_util.m"
  }
#line 55 "term_constr_util.m"
}

#line 463 "term_constr_util.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1(
#line 463 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__closure_arg,
#line 463 "term_constr_util.m"
  MR_Box transform_hlds__term_constr_util__wrapper_arg_1)
#line 463 "term_constr_util.m"
{
#line 463 "term_constr_util.m"
  {
#line 463 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__wrapper_arg_2;
#line 463 "term_constr_util.m"
    MR_Box transform_hlds__term_constr_util__closure = transform_hlds__term_constr_util__closure_arg;
#line 463 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__conv0_AbstractProc_6;

#line 463 "term_constr_util.m"
    {
#line 463 "term_constr_util.m"
      transform_hlds__term_constr_util__conv0_AbstractProc_6 = transform_hlds__term_constr_util__get_abstract_proc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_util__wrapper_arg_1));
    }
#line 463 "term_constr_util.m"
    transform_hlds__term_constr_util__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_util__conv0_AbstractProc_6));
#line 463 "term_constr_util.m"
    return transform_hlds__term_constr_util__wrapper_arg_2;
#line 463 "term_constr_util.m"
  }
#line 463 "term_constr_util.m"
}

#line 53 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__get_abstract_scc_2_f_0(
#line 53 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
#line 53 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__SCC_5)
#line 53 "term_constr_util.m"
{
#line 462 "term_constr_util.m"
  {
#line 462 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 462 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__HeadVar__3_3;
#line 462 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_6_6;

#line 463 "term_constr_util.m"
    {
#line 463 "term_constr_util.m"
      transform_hlds__term_constr_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 463 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 0) = ((MR_Box) (&transform_hlds__term_constr_util_scalar_common_3[0]));
#line 463 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 1) = ((MR_Box) (transform_hlds__term_constr_util__get_abstract_scc_2_f_0_1));
#line 463 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 463 "term_constr_util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__V_6_6, 3) = ((MR_Box) (transform_hlds__term_constr_util__ModuleInfo_4));
#line 463 "term_constr_util.m"
    }
#line 463 "term_constr_util.m"
    {
#line 463 "term_constr_util.m"
      transform_hlds__term_constr_util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, transform_hlds__term_constr_util__V_6_6, transform_hlds__term_constr_util__SCC_5);
    }
#line 462 "term_constr_util.m"
    return transform_hlds__term_constr_util__HeadVar__3_3;
#line 462 "term_constr_util.m"
  }
#line 53 "term_constr_util.m"
}

#line 48 "term_constr_util.m"
MR_Word MR_CALL 
transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(
#line 48 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__ModuleInfo_4,
#line 48 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__PredProcId_5)
#line 48 "term_constr_util.m"
{
#line 229 "term_constr_util.m"
  {
#line 229 "term_constr_util.m"
    MR_bool transform_hlds__term_constr_util__succeeded;
#line 229 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__MaybeArgSizeInfo_6;
#line 229 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PredProcId_5, (MR_Integer) 0)));
#line 229 "term_constr_util.m"
    MR_Integer transform_hlds__term_constr_util__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PredProcId_5, (MR_Integer) 1)));
#line 229 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__ProcInfo_10;
#line 229 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__Term2Info_11;
#line 231 "term_constr_util.m"
    MR_Word transform_hlds__term_constr_util__V_9_9;

#line 231 "term_constr_util.m"
    {
#line 231 "term_constr_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_constr_util__ModuleInfo_4, transform_hlds__term_constr_util__PredId_7, transform_hlds__term_constr_util__ProcId_8, &transform_hlds__term_constr_util__V_9_9, &transform_hlds__term_constr_util__ProcInfo_10);
    }
#line 232 "term_constr_util.m"
    {
#line 232 "term_constr_util.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo_10, &transform_hlds__term_constr_util__Term2Info_11);
    }
#line 233 "term_constr_util.m"
    {
#line 233 "term_constr_util.m"
      transform_hlds__term_constr_util__MaybeArgSizeInfo_6 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_util__Term2Info_11);
    }
#line 229 "term_constr_util.m"
    return transform_hlds__term_constr_util__MaybeArgSizeInfo_6;
#line 229 "term_constr_util.m"
  }
#line 48 "term_constr_util.m"
}

#line 45 "term_constr_util.m"
void MR_CALL 
transform_hlds__term_constr_util__set_pred_proc_ids_constr_arg_size_info_4_p_0(
#line 45 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__1_1,
#line 45 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__HeadVar__2_2,
#line 45 "term_constr_util.m"
  MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 45 "term_constr_util.m"
  MR_Word * transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_4)
#line 45 "term_constr_util.m"
{
#line 213 "term_constr_util.m"
  while (MR_TRUE)
#line 213 "term_constr_util.m"
    {
#line 213 "term_constr_util.m"
      /* tailcall optimized into a loop */
#line 213 "term_constr_util.m"
      {
#line 213 "term_constr_util.m"
        MR_bool transform_hlds__term_constr_util__succeeded;

#line 213 "term_constr_util.m"
        if ((transform_hlds__term_constr_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "term_constr_util.m"
          *transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 213 "term_constr_util.m"
        else
#line 214 "term_constr_util.m"
          {
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_30_30;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_31_31;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__TypeCtorInfo_33_33;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 0)));
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__HeadVar__1_1, (MR_Integer) 1)));
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PPId_9, (MR_Integer) 0)));
#line 214 "term_constr_util.m"
            MR_Integer transform_hlds__term_constr_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_util__PPId_9, (MR_Integer) 1)));
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PredTable0_15;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PredInfo0_16;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcTable0_17;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcInfo0_18;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Term2Info0_19;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__Term2Info_20;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcInfo_21;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__ProcTable_22;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PredInfo_23;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__PredTable_24;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__V_27_27;
#line 214 "term_constr_util.m"
            MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28;
#line 217 "term_constr_util.m"
            MR_Box transform_hlds__term_constr_util__conv0_PredInfo0_16;
#line 219 "term_constr_util.m"
            MR_Box transform_hlds__term_constr_util__conv1_ProcInfo0_18;

#line 216 "term_constr_util.m"
            {
#line 216 "term_constr_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_constr_util__PredTable0_15);
            }
#line 3405 "transform_hlds.term_constr_util.c"
            transform_hlds__term_constr_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3407 "transform_hlds.term_constr_util.c"
            transform_hlds__term_constr_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 217 "term_constr_util.m"
            {
#line 217 "term_constr_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_30_30, transform_hlds__term_constr_util__TypeCtorInfo_31_31, transform_hlds__term_constr_util__PredTable0_15, ((MR_Box) (transform_hlds__term_constr_util__PredId_13)), &transform_hlds__term_constr_util__conv0_PredInfo0_16);
            }
#line 217 "term_constr_util.m"
            transform_hlds__term_constr_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_constr_util__conv0_PredInfo0_16);
#line 218 "term_constr_util.m"
            {
#line 218 "term_constr_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_util__PredInfo0_16, &transform_hlds__term_constr_util__ProcTable0_17);
            }
#line 3421 "transform_hlds.term_constr_util.c"
            transform_hlds__term_constr_util__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 219 "term_constr_util.m"
            {
#line 219 "term_constr_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_util__TypeCtorInfo_33_33, transform_hlds__term_constr_util__ProcTable0_17, transform_hlds__term_constr_util__ProcId_14, &transform_hlds__term_constr_util__conv1_ProcInfo0_18);
            }
#line 219 "term_constr_util.m"
            transform_hlds__term_constr_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_constr_util__conv1_ProcInfo0_18);
#line 220 "term_constr_util.m"
            {
#line 220 "term_constr_util.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_util__ProcInfo0_18, &transform_hlds__term_constr_util__Term2Info0_19);
            }
#line 221 "term_constr_util.m"
            {
#line 221 "term_constr_util.m"
              transform_hlds__term_constr_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "term_constr_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_util__V_27_27, 0) = ((MR_Box) (transform_hlds__term_constr_util__HeadVar__2_2));
#line 221 "term_constr_util.m"
            }
#line 221 "term_constr_util.m"
            {
#line 221 "term_constr_util.m"
              transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_util__V_27_27, transform_hlds__term_constr_util__Term2Info0_19, &transform_hlds__term_constr_util__Term2Info_20);
            }
#line 222 "term_constr_util.m"
            {
#line 222 "term_constr_util.m"
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_util__Term2Info_20, transform_hlds__term_constr_util__ProcInfo0_18, &transform_hlds__term_constr_util__ProcInfo_21);
            }
#line 223 "term_constr_util.m"
            {
#line 223 "term_constr_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_33_33, transform_hlds__term_constr_util__ProcId_14, ((MR_Box) (transform_hlds__term_constr_util__ProcInfo_21)), transform_hlds__term_constr_util__ProcTable0_17, &transform_hlds__term_constr_util__ProcTable_22);
            }
#line 224 "term_constr_util.m"
            {
#line 224 "term_constr_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_util__ProcTable_22, transform_hlds__term_constr_util__PredInfo0_16, &transform_hlds__term_constr_util__PredInfo_23);
            }
#line 225 "term_constr_util.m"
            {
#line 225 "term_constr_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_util__TypeCtorInfo_30_30, transform_hlds__term_constr_util__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__term_constr_util__PredId_13)), ((MR_Box) (transform_hlds__term_constr_util__PredInfo_23)), transform_hlds__term_constr_util__PredTable0_15, &transform_hlds__term_constr_util__PredTable_24);
            }
#line 226 "term_constr_util.m"
            {
#line 226 "term_constr_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_util__PredTable_24, transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28);
            }
#line 227 "term_constr_util.m"
            /* direct tailcall eliminated */
#line 227 "term_constr_util.m"
            {
#line 227 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_util__PPIds_10;
#line 227 "term_constr_util.m"
              MR_Word transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_28_28;

#line 227 "term_constr_util.m"
              transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_constr_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 227 "term_constr_util.m"
              transform_hlds__term_constr_util__HeadVar__1_1 = transform_hlds__term_constr_util__HeadVar__1__tmp_copy_1;
#line 227 "term_constr_util.m"
            }
#line 227 "term_constr_util.m"
            continue;
#line 214 "term_constr_util.m"
          }
#line 213 "term_constr_util.m"
      }
#line 213 "term_constr_util.m"
      break;
#line 213 "term_constr_util.m"
    }
#line 45 "term_constr_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_util. */
