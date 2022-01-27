/*
** Automatically generated from `ctgc.livedata.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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


/* :- module transform_hlds.ctgc.livedata. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__livedata__init
ENDINIT
*/

#include "transform_hlds.ctgc.livedata.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




#line 139 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 151 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 154 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 157 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0;

#line 160 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1;

#line 163 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 166 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1];

#line 169 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2;

#line 172 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2];

#line 175 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1];

#line 178 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2];

#line 181 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3];

#line 184 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3];

#line 187 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0;

#line 190 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1];

#line 193 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1;

#line 196 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1];

#line 199 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1];

#line 202 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2];

#line 205 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2];

#line 208 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2];

#line 211 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
#line 214 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 216 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 219 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
#line 222 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 224 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 226 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3);

#line 229 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
#line 232 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 234 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 237 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
#line 240 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 242 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 244 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3);

#line 344 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__344__1_5_p_0(
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Xsx_11,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__4_25,
#line 344 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__5_26);

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 342 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 339 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 339 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 326 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 321 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 342 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 339 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 339 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 326 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 321 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 300 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastructs0_8,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__PairXY_9,
#line 300 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__Datastructs_10);

#line 207 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
#line 207 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVars_3,
#line 207 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastruct_4);

#line 288 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
#line 288 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 288 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 288 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 266 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
#line 266 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 266 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 111 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 196 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
#line 196 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 196 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 149 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 111 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);


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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
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
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 579 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 587 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 595 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 603 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 611 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 620 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 628 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0 = {
  (MR_String) "livedata_bottom",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 643 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1 = {
  (MR_String) "livedata_top",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 658 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 666 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

#line 671 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2 = {
  (MR_String) "livedata_live",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2,
  NULL,
  NULL,
  NULL
};

#line 686 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

#line 692 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2
};

#line 697 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1
  }
};

#line 711 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

#line 718 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 725 "transform_hlds.ctgc.livedata.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "livedata",
  {
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0
  },
  {
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0
};

#line 746 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0 = {
  (MR_String) "nodes_all_live",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 761 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

#line 766 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1 = {
  (MR_String) "nodes_are_live",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 781 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0
};

#line 786 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

#line 791 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1
  }
};

#line 805 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

#line 811 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 817 "transform_hlds.ctgc.livedata.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "nodes_are_not_live_result",
  {
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0
  },
  {
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0
};

#line 838 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
#line 841 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 843 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 845 "transform_hlds.ctgc.livedata.c"
{
#line 847 "transform_hlds.ctgc.livedata.c"
  {
#line 849 "transform_hlds.ctgc.livedata.c"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 852 "transform_hlds.ctgc.livedata.c"
    {
#line 854 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata____Unify____livedata_0_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 857 "transform_hlds.ctgc.livedata.c"
    return transform_hlds__ctgc__livedata__succeeded;
#line 859 "transform_hlds.ctgc.livedata.c"
  }
#line 861 "transform_hlds.ctgc.livedata.c"
}

#line 864 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
#line 867 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 869 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 871 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3)
#line 873 "transform_hlds.ctgc.livedata.c"
{
#line 875 "transform_hlds.ctgc.livedata.c"
  {
#line 877 "transform_hlds.ctgc.livedata.c"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__1_1;

#line 880 "transform_hlds.ctgc.livedata.c"
    {
#line 882 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata____Compare____livedata_0_0(&transform_hlds__ctgc__livedata__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_3));
    }
#line 885 "transform_hlds.ctgc.livedata.c"
    *transform_hlds__ctgc__livedata__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__1_1));
#line 887 "transform_hlds.ctgc.livedata.c"
  }
#line 889 "transform_hlds.ctgc.livedata.c"
}

#line 892 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
#line 895 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 897 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 899 "transform_hlds.ctgc.livedata.c"
{
#line 901 "transform_hlds.ctgc.livedata.c"
  {
#line 903 "transform_hlds.ctgc.livedata.c"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 906 "transform_hlds.ctgc.livedata.c"
    {
#line 908 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 911 "transform_hlds.ctgc.livedata.c"
    return transform_hlds__ctgc__livedata__succeeded;
#line 913 "transform_hlds.ctgc.livedata.c"
  }
#line 915 "transform_hlds.ctgc.livedata.c"
}

#line 918 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
#line 921 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 923 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 925 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3)
#line 927 "transform_hlds.ctgc.livedata.c"
{
#line 929 "transform_hlds.ctgc.livedata.c"
  {
#line 931 "transform_hlds.ctgc.livedata.c"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__1_1;

#line 934 "transform_hlds.ctgc.livedata.c"
    {
#line 936 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(&transform_hlds__ctgc__livedata__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_3));
    }
#line 939 "transform_hlds.ctgc.livedata.c"
    *transform_hlds__ctgc__livedata__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__1_1));
#line 941 "transform_hlds.ctgc.livedata.c"
  }
#line 943 "transform_hlds.ctgc.livedata.c"
}

#line 344 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__344__1_5_p_0(
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Xsx_11,
#line 344 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__4_25,
#line 344 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__5_26)
#line 344 "ctgc.livedata.m"
{
#line 344 "ctgc.livedata.m"
  {
#line 344 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 344 "ctgc.livedata.m"
    {
#line 344 "ctgc.livedata.m"
      *transform_hlds__ctgc__livedata__HeadVar__5_26 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__HeadVar__4_25, transform_hlds__ctgc__livedata__Xsx_11);
    }
#line 344 "ctgc.livedata.m"
  }
#line 344 "ctgc.livedata.m"
}

#line 81 "ctgc.livedata.m"
void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(
#line 81 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 81 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2,
#line 81 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__3_3)
#line 81 "ctgc.livedata.m"
{
#line 81 "ctgc.livedata.m"
  {
#line 81 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 81 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_8 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 81 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_9 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__3_3;

#line 81 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_8 == transform_hlds__ctgc__livedata__CastY_9);
#line 81 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 1000 "transform_hlds.ctgc.livedata.c"
      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "ctgc.livedata.m"
    else
#line 81 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "ctgc.livedata.m"
        if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "ctgc.livedata.m"
          *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "ctgc.livedata.m"
        else
#line 1012 "transform_hlds.ctgc.livedata.c"
          *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "ctgc.livedata.m"
      else
#line 81 "ctgc.livedata.m"
        {
#line 81 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));

#line 81 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "transform_hlds.ctgc.livedata.c"
            *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "ctgc.livedata.m"
          else
#line 81 "ctgc.livedata.m"
            {
#line 81 "ctgc.livedata.m"
              MR_Word transform_hlds__ctgc__livedata__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__3_3, (MR_Integer) 0)));

#line 81 "ctgc.livedata.m"
              {
#line 81 "ctgc.livedata.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], transform_hlds__ctgc__livedata__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__livedata__V_11_11)), ((MR_Box) (transform_hlds__ctgc__livedata__V_7_7)));
#line 81 "ctgc.livedata.m"
                return;
              }
#line 81 "ctgc.livedata.m"
            }
#line 81 "ctgc.livedata.m"
        }
#line 81 "ctgc.livedata.m"
  }
#line 81 "ctgc.livedata.m"
}

#line 81 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(
#line 81 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 81 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2)
#line 81 "ctgc.livedata.m"
{
#line 81 "ctgc.livedata.m"
  {
#line 81 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 81 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_7 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 81 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_8 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 81 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_7 == transform_hlds__ctgc__livedata__CastY_8);
#line 81 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 81 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 81 "ctgc.livedata.m"
    else
#line 81 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "ctgc.livedata.m"
        {
#line 81 "ctgc.livedata.m"
          MR_Integer transform_hlds__ctgc__livedata__CastX_3 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 81 "ctgc.livedata.m"
          MR_Integer transform_hlds__ctgc__livedata__CastY_4 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 81 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastY_4 == transform_hlds__ctgc__livedata__CastX_3);
#line 81 "ctgc.livedata.m"
        }
#line 81 "ctgc.livedata.m"
      else
#line 81 "ctgc.livedata.m"
        {
#line 81 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__TypeInfo_9_9;
#line 81 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__V_6_6;

#line 81 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 81 "ctgc.livedata.m"
          if (transform_hlds__ctgc__livedata__succeeded)
#line 81 "ctgc.livedata.m"
            {
#line 81 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));
#line 1106 "transform_hlds.ctgc.livedata.c"
              transform_hlds__ctgc__livedata__TypeInfo_9_9 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
#line 1108 "transform_hlds.ctgc.livedata.c"
              {
#line 1110 "transform_hlds.ctgc.livedata.c"
                return transform_hlds__ctgc__livedata__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__livedata__TypeInfo_9_9, ((MR_Box) (transform_hlds__ctgc__livedata__V_5_5)), ((MR_Box) (transform_hlds__ctgc__livedata__V_6_6)));
              }
#line 81 "ctgc.livedata.m"
            }
#line 81 "ctgc.livedata.m"
        }
#line 81 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 81 "ctgc.livedata.m"
  }
#line 81 "ctgc.livedata.m"
}

#line 100 "ctgc.livedata.m"
void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0(
#line 100 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 100 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2,
#line 100 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__3_3)
#line 100 "ctgc.livedata.m"
{
#line 100 "ctgc.livedata.m"
  {
#line 100 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 100 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_10 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 100 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_11 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__3_3;

#line 100 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_10 == transform_hlds__ctgc__livedata__CastY_11);
#line 100 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 1148 "transform_hlds.ctgc.livedata.c"
      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "ctgc.livedata.m"
    else
#line 100 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "ctgc.livedata.m"
        if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "ctgc.livedata.m"
          *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "ctgc.livedata.m"
        else
#line 100 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 100 "ctgc.livedata.m"
            *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 100 "ctgc.livedata.m"
          else
#line 1166 "transform_hlds.ctgc.livedata.c"
            *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 100 "ctgc.livedata.m"
      else
#line 100 "ctgc.livedata.m"
        if ((transform_hlds__ctgc__livedata__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 100 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "ctgc.livedata.m"
            *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 100 "ctgc.livedata.m"
          else
#line 100 "ctgc.livedata.m"
            if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 100 "ctgc.livedata.m"
              *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "ctgc.livedata.m"
            else
#line 1184 "transform_hlds.ctgc.livedata.c"
              *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 100 "ctgc.livedata.m"
        else
#line 100 "ctgc.livedata.m"
          {
#line 100 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));

#line 100 "ctgc.livedata.m"
            if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "transform_hlds.ctgc.livedata.c"
              *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 100 "ctgc.livedata.m"
            else
#line 100 "ctgc.livedata.m"
              if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1201 "transform_hlds.ctgc.livedata.c"
                *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 100 "ctgc.livedata.m"
              else
#line 100 "ctgc.livedata.m"
                {
#line 100 "ctgc.livedata.m"
                  MR_Word transform_hlds__ctgc__livedata__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__3_3, (MR_Integer) 0)));

#line 100 "ctgc.livedata.m"
                  {
#line 100 "ctgc.livedata.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], transform_hlds__ctgc__livedata__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__livedata__V_13_13)), ((MR_Box) (transform_hlds__ctgc__livedata__V_9_9)));
#line 100 "ctgc.livedata.m"
                    return;
                  }
#line 100 "ctgc.livedata.m"
                }
#line 100 "ctgc.livedata.m"
          }
#line 100 "ctgc.livedata.m"
  }
#line 100 "ctgc.livedata.m"
}

#line 100 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0(
#line 100 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 100 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2)
#line 100 "ctgc.livedata.m"
{
#line 100 "ctgc.livedata.m"
  {
#line 100 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 100 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_9 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 100 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_10 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 100 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_9 == transform_hlds__ctgc__livedata__CastY_10);
#line 100 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 100 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 100 "ctgc.livedata.m"
    else
#line 100 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "ctgc.livedata.m"
        {
#line 100 "ctgc.livedata.m"
          MR_Integer transform_hlds__ctgc__livedata__CastX_3 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 100 "ctgc.livedata.m"
          MR_Integer transform_hlds__ctgc__livedata__CastY_4 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 100 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastY_4 == transform_hlds__ctgc__livedata__CastX_3);
#line 100 "ctgc.livedata.m"
        }
#line 100 "ctgc.livedata.m"
      else
#line 100 "ctgc.livedata.m"
        if ((transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 100 "ctgc.livedata.m"
          {
#line 100 "ctgc.livedata.m"
            MR_Integer transform_hlds__ctgc__livedata__CastX_5 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 100 "ctgc.livedata.m"
            MR_Integer transform_hlds__ctgc__livedata__CastY_6 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 100 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastY_6 == transform_hlds__ctgc__livedata__CastX_5);
#line 100 "ctgc.livedata.m"
          }
#line 100 "ctgc.livedata.m"
        else
#line 100 "ctgc.livedata.m"
          {
#line 100 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__TypeInfo_11_11;
#line 100 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_8_8;

#line 100 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 100 "ctgc.livedata.m"
            if (transform_hlds__ctgc__livedata__succeeded)
#line 100 "ctgc.livedata.m"
              {
#line 100 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));
#line 1299 "transform_hlds.ctgc.livedata.c"
                transform_hlds__ctgc__livedata__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
#line 1301 "transform_hlds.ctgc.livedata.c"
                {
#line 1303 "transform_hlds.ctgc.livedata.c"
                  return transform_hlds__ctgc__livedata__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__livedata__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__livedata__V_7_7)), ((MR_Box) (transform_hlds__ctgc__livedata__V_8_8)));
                }
#line 100 "ctgc.livedata.m"
              }
#line 100 "ctgc.livedata.m"
          }
#line 100 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 100 "ctgc.livedata.m"
  }
#line 100 "ctgc.livedata.m"
}

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 342 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 342 "ctgc.livedata.m"
{
#line 342 "ctgc.livedata.m"
  {
#line 342 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 342 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv3_HeadVar__5_26;

#line 342 "ctgc.livedata.m"
    {
#line 342 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__344__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv3_HeadVar__5_26);
    }
#line 342 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv3_HeadVar__5_26));
#line 342 "ctgc.livedata.m"
  }
#line 342 "ctgc.livedata.m"
}

#line 339 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 339 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 339 "ctgc.livedata.m"
{
#line 339 "ctgc.livedata.m"
  {
#line 339 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 339 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 339 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv2_HeadVar__5_5;

#line 339 "ctgc.livedata.m"
    {
#line 339 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv2_HeadVar__5_5);
    }
#line 339 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 339 "ctgc.livedata.m"
      {
#line 339 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv2_HeadVar__5_5));
#line 339 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 339 "ctgc.livedata.m"
      }
#line 339 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 339 "ctgc.livedata.m"
  }
#line 339 "ctgc.livedata.m"
}

#line 326 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 326 "ctgc.livedata.m"
{
#line 326 "ctgc.livedata.m"
  {
#line 326 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 326 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 326 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 326 "ctgc.livedata.m"
  }
#line 326 "ctgc.livedata.m"
}

#line 321 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 321 "ctgc.livedata.m"
{
#line 321 "ctgc.livedata.m"
  {
#line 321 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 321 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 321 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 321 "ctgc.livedata.m"
  }
#line 321 "ctgc.livedata.m"
}

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 342 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 342 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 342 "ctgc.livedata.m"
{
#line 342 "ctgc.livedata.m"
  {
#line 342 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 342 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv1_HeadVar__5_26;

#line 342 "ctgc.livedata.m"
    {
#line 342 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__344__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv1_HeadVar__5_26);
    }
#line 342 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv1_HeadVar__5_26));
#line 342 "ctgc.livedata.m"
  }
#line 342 "ctgc.livedata.m"
}

#line 339 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 339 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 339 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 339 "ctgc.livedata.m"
{
#line 339 "ctgc.livedata.m"
  {
#line 339 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 339 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 339 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__5_5;

#line 339 "ctgc.livedata.m"
    {
#line 339 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv0_HeadVar__5_5);
    }
#line 339 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 339 "ctgc.livedata.m"
      {
#line 339 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__5_5));
#line 339 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 339 "ctgc.livedata.m"
      }
#line 339 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 339 "ctgc.livedata.m"
  }
#line 339 "ctgc.livedata.m"
}

#line 326 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 326 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 326 "ctgc.livedata.m"
{
#line 326 "ctgc.livedata.m"
  {
#line 326 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 326 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 326 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 326 "ctgc.livedata.m"
  }
#line 326 "ctgc.livedata.m"
}

#line 321 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 321 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 321 "ctgc.livedata.m"
{
#line 321 "ctgc.livedata.m"
  {
#line 321 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 321 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 321 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 321 "ctgc.livedata.m"
  }
#line 321 "ctgc.livedata.m"
}

#line 300 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastructs0_8,
#line 300 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__PairXY_9,
#line 300 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__Datastructs_10)
#line 300 "ctgc.livedata.m"
{
#line 305 "ctgc.livedata.m"
  {
#line 305 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_30_41;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_30_70;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__L1_11;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__L2_15;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Xsx_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 0)));
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Ysy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 1)));
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Y_List_24;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_31_31;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Xsx_51;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Ysy_52;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Y_List_53;
#line 305 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_60_60;
#line 327 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__FY_List_25;
#line 327 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_32_32;
#line 328 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_26_26;
#line 328 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_27_27;
#line 327 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__FY_List_54;
#line 327 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_61_61;
#line 328 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_55_55;
#line 328 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_56_56;

#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 321 "ctgc.livedata.m"
    }
#line 1647 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_30_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_31_31, transform_hlds__ctgc__livedata__Datastructs0_8, &transform_hlds__ctgc__livedata__Y_List_24);
    }
#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 326 "ctgc.livedata.m"
    }
#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_32_32, transform_hlds__ctgc__livedata__Y_List_24, &transform_hlds__ctgc__livedata__FY_List_25);
    }
#line 328 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__FY_List_25)) == (MR_mktag((MR_Integer) 1)));
#line 328 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 328 "ctgc.livedata.m"
      {
#line 328 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_25, (MR_Integer) 0)));
#line 328 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_25, (MR_Integer) 1)));
#line 331 "ctgc.livedata.m"
        {
#line 331 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__L1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L1_11, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_22));
#line 331 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "ctgc.livedata.m"
        }
#line 328 "ctgc.livedata.m"
      }
#line 328 "ctgc.livedata.m"
    else
#line 340 "ctgc.livedata.m"
      {
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__TypeInfo_34_45;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__SelectorList_29;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_34_34;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_35_35;

#line 339 "ctgc.livedata.m"
        {
#line 339 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 339 "ctgc.livedata.m"
        }
#line 1730 "transform_hlds.ctgc.livedata.c"
        transform_hlds__ctgc__livedata__TypeInfo_34_45 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
#line 338 "ctgc.livedata.m"
        {
#line 338 "ctgc.livedata.m"
          mercury__list__filter_map_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__TypeInfo_34_45, transform_hlds__ctgc__livedata__V_34_34, transform_hlds__ctgc__livedata__Y_List_24, &transform_hlds__ctgc__livedata__SelectorList_29);
        }
#line 342 "ctgc.livedata.m"
        {
#line 342 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_22));
#line 342 "ctgc.livedata.m"
        }
#line 342 "ctgc.livedata.m"
        {
#line 342 "ctgc.livedata.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__livedata__TypeInfo_34_45, transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_35_35, transform_hlds__ctgc__livedata__SelectorList_29, &transform_hlds__ctgc__livedata__L1_11);
        }
#line 340 "ctgc.livedata.m"
      }
#line 309 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__Ysy_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 0)));
#line 309 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__Xsx_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 1)));
#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 321 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 321 "ctgc.livedata.m"
    }
#line 1780 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 321 "ctgc.livedata.m"
    {
#line 321 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_60_60, transform_hlds__ctgc__livedata__Datastructs0_8, &transform_hlds__ctgc__livedata__Y_List_53);
    }
#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 326 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 326 "ctgc.livedata.m"
    }
#line 326 "ctgc.livedata.m"
    {
#line 326 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_61_61, transform_hlds__ctgc__livedata__Y_List_53, &transform_hlds__ctgc__livedata__FY_List_54);
    }
#line 328 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__FY_List_54)) == (MR_mktag((MR_Integer) 1)));
#line 328 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 328 "ctgc.livedata.m"
      {
#line 328 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_54, (MR_Integer) 0)));
#line 328 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_54, (MR_Integer) 1)));
#line 331 "ctgc.livedata.m"
        {
#line 331 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__L2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L2_15, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_51));
#line 331 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "ctgc.livedata.m"
        }
#line 328 "ctgc.livedata.m"
      }
#line 328 "ctgc.livedata.m"
    else
#line 340 "ctgc.livedata.m"
      {
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__TypeInfo_34_74;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__SelectorList_58;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_63_63;
#line 340 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_64_64;

#line 339 "ctgc.livedata.m"
        {
#line 339 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 339 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 339 "ctgc.livedata.m"
        }
#line 1863 "transform_hlds.ctgc.livedata.c"
        transform_hlds__ctgc__livedata__TypeInfo_34_74 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
#line 338 "ctgc.livedata.m"
        {
#line 338 "ctgc.livedata.m"
          mercury__list__filter_map_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__TypeInfo_34_74, transform_hlds__ctgc__livedata__V_63_63, transform_hlds__ctgc__livedata__Y_List_53, &transform_hlds__ctgc__livedata__SelectorList_58);
        }
#line 342 "ctgc.livedata.m"
        {
#line 342 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 342 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_51));
#line 342 "ctgc.livedata.m"
        }
#line 342 "ctgc.livedata.m"
        {
#line 342 "ctgc.livedata.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__livedata__TypeInfo_34_74, transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_64_64, transform_hlds__ctgc__livedata__SelectorList_58, &transform_hlds__ctgc__livedata__L2_15);
        }
#line 340 "ctgc.livedata.m"
      }
#line 313 "ctgc.livedata.m"
    {
#line 313 "ctgc.livedata.m"
      *transform_hlds__ctgc__livedata__Datastructs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__L1_11, transform_hlds__ctgc__livedata__L2_15);
    }
#line 305 "ctgc.livedata.m"
  }
#line 300 "ctgc.livedata.m"
}

#line 207 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
#line 207 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVars_3,
#line 207 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastruct_4)
#line 207 "ctgc.livedata.m"
{
#line 209 "ctgc.livedata.m"
  {
#line 209 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 209 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__Datastruct_4, (MR_Integer) 0)));
#line 210 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__Datastruct_4, (MR_Integer) 1)));

#line 210 "ctgc.livedata.m"
    {
#line 210 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__livedata__V_5_5)), transform_hlds__ctgc__livedata__ProgVars_3);
    }
#line 209 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 209 "ctgc.livedata.m"
  }
#line 207 "ctgc.livedata.m"
}

#line 78 "ctgc.livedata.m"
void MR_CALL 
transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(
#line 78 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 78 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 78 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__DeadNodes_8,
#line 78 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData_9,
#line 78 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__Result_10)
#line 78 "ctgc.livedata.m"
{
#line 388 "ctgc.livedata.m"
  {
#line 388 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 388 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "ctgc.livedata.m"
      {
#line 392 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__livedata_scalar_common_5[0]);
#line 391 "ctgc.livedata.m"
      }
#line 388 "ctgc.livedata.m"
    else
#line 388 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 389 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ctgc.livedata.m"
      else
#line 394 "ctgc.livedata.m"
        {
#line 394 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__LiveDatastructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_9, (MR_Integer) 0)));
#line 394 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__SubsumedNodes_12;

#line 395 "ctgc.livedata.m"
          {
#line 395 "ctgc.livedata.m"
            transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__DeadNodes_8, transform_hlds__ctgc__livedata__LiveDatastructs_11, &transform_hlds__ctgc__livedata__SubsumedNodes_12);
          }
#line 397 "ctgc.livedata.m"
          {
#line 397 "ctgc.livedata.m"
            MR_Word base;
#line 397 "ctgc.livedata.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "ctgc.livedata.m"
            *transform_hlds__ctgc__livedata__Result_10 = base;
#line 397 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__SubsumedNodes_12));
#line 397 "ctgc.livedata.m"
          }
#line 394 "ctgc.livedata.m"
        }
#line 388 "ctgc.livedata.m"
  }
#line 78 "ctgc.livedata.m"
}

#line 75 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_add_liveness_5_f_0(
#line 75 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_7,
#line 75 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_8,
#line 75 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LuData_9,
#line 75 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LocalSharing_10,
#line 75 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData0_11)
#line 75 "ctgc.livedata.m"
{
#line 354 "ctgc.livedata.m"
  {
#line 354 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 354 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_12;

#line 351 "ctgc.livedata.m"
    {
#line 351 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__livedata__LocalSharing_10);
    }
#line 354 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 114 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 354 "ctgc.livedata.m"
    else
#line 359 "ctgc.livedata.m"
      {
#line 355 "ctgc.livedata.m"
        {
#line 355 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(transform_hlds__ctgc__livedata__LocalSharing_10);
        }
#line 359 "ctgc.livedata.m"
        if (transform_hlds__ctgc__livedata__succeeded)
#line 357 "ctgc.livedata.m"
          {
#line 357 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_16_16;

#line 113 "ctgc.livedata.m"
            {
#line 113 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__V_16_16, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__LuData_9));
#line 113 "ctgc.livedata.m"
            }
#line 357 "ctgc.livedata.m"
            {
#line 357 "ctgc.livedata.m"
              return transform_hlds__ctgc__livedata__LiveData_12 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LiveData0_11, transform_hlds__ctgc__livedata__V_16_16);
            }
#line 357 "ctgc.livedata.m"
          }
#line 359 "ctgc.livedata.m"
        else
#line 362 "ctgc.livedata.m"
          {
#line 362 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__LuLiveData_14;
#line 362 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__Data1_31;

#line 361 "ctgc.livedata.m"
            {
#line 361 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__Data1_31 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LocalSharing_10, transform_hlds__ctgc__livedata__LuData_9);
            }
#line 113 "ctgc.livedata.m"
            {
#line 113 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__LuLiveData_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LuLiveData_14, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Data1_31));
#line 113 "ctgc.livedata.m"
            }
#line 2086 "transform_hlds.ctgc.livedata.c"
            if ((transform_hlds__ctgc__livedata__LiveData0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__LiveData_12 = transform_hlds__ctgc__livedata__LuLiveData_14;
#line 2090 "transform_hlds.ctgc.livedata.c"
            else
#line 2092 "transform_hlds.ctgc.livedata.c"
              if ((transform_hlds__ctgc__livedata__LiveData0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 139 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 2096 "transform_hlds.ctgc.livedata.c"
              else
#line 2098 "transform_hlds.ctgc.livedata.c"
                {
#line 2100 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__Data0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData0_11, (MR_Integer) 0)));
#line 2102 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__Data2_32;
#line 2104 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__V_33_33;

#line 382 "ctgc.livedata.m"
                  {
#line 382 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__Data2_32 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LocalSharing_10, transform_hlds__ctgc__livedata__Data0_24);
                  }
#line 143 "ctgc.livedata.m"
                  {
#line 143 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__V_33_33 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__Data1_31, transform_hlds__ctgc__livedata__Data2_32);
                  }
#line 142 "ctgc.livedata.m"
                  {
#line 142 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "ctgc.livedata.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_12, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_33_33));
#line 142 "ctgc.livedata.m"
                  }
#line 2125 "transform_hlds.ctgc.livedata.c"
                }
#line 362 "ctgc.livedata.m"
          }
#line 359 "ctgc.livedata.m"
      }
#line 354 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_12;
#line 354 "ctgc.livedata.m"
  }
#line 75 "ctgc.livedata.m"
}

#line 288 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
#line 288 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 288 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 288 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 288 "ctgc.livedata.m"
{
#line 288 "ctgc.livedata.m"
  {
#line 288 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 288 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv2_Datastructs_10;

#line 288 "ctgc.livedata.m"
    {
#line 288 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv2_Datastructs_10);
    }
#line 288 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv2_Datastructs_10));
#line 288 "ctgc.livedata.m"
  }
#line 288 "ctgc.livedata.m"
}

#line 266 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
#line 266 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 266 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 266 "ctgc.livedata.m"
{
#line 266 "ctgc.livedata.m"
  {
#line 266 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 266 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 266 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv1_HeadVar__2_2;

#line 266 "ctgc.livedata.m"
    {
#line 266 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv1_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 266 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv1_HeadVar__2_2));
#line 266 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 266 "ctgc.livedata.m"
  }
#line 266 "ctgc.livedata.m"
}

#line 111 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 111 "ctgc.livedata.m"
{
#line 111 "ctgc.livedata.m"
  {
#line 111 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 111 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 111 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 111 "ctgc.livedata.m"
    {
#line 111 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 111 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__2_2));
#line 111 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 111 "ctgc.livedata.m"
  }
#line 111 "ctgc.livedata.m"
}

#line 72 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(
#line 72 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 72 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 72 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__GoalInfo_8,
#line 72 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__SharingAs_9)
#line 72 "ctgc.livedata.m"
{
#line 214 "ctgc.livedata.m"
  {
#line 214 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_10;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_21_21;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lfu_11;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lbu_12;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lu_13;
#line 214 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_17_17;

#line 217 "ctgc.livedata.m"
    {
#line 217 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lfu_11 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__livedata__GoalInfo_8);
    }
#line 218 "ctgc.livedata.m"
    {
#line 218 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lbu_12 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(transform_hlds__ctgc__livedata__GoalInfo_8);
    }
#line 2272 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 219 "ctgc.livedata.m"
    {
#line 219 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_17_17 = parse_tree__set_of_var__union_2_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_21_21, transform_hlds__ctgc__livedata__Lfu_11, transform_hlds__ctgc__livedata__Lbu_12);
    }
#line 219 "ctgc.livedata.m"
    {
#line 219 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lu_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_21_21, transform_hlds__ctgc__livedata__V_17_17);
    }
#line 223 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__Lu_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 109 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "ctgc.livedata.m"
    else
#line 232 "ctgc.livedata.m"
      {
#line 229 "ctgc.livedata.m"
        {
#line 229 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__livedata__SharingAs_9);
        }
#line 232 "ctgc.livedata.m"
        if (transform_hlds__ctgc__livedata__succeeded)
#line 114 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 232 "ctgc.livedata.m"
        else
#line 238 "ctgc.livedata.m"
          {
#line 235 "ctgc.livedata.m"
            {
#line 235 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(transform_hlds__ctgc__livedata__SharingAs_9);
            }
#line 238 "ctgc.livedata.m"
            if (transform_hlds__ctgc__livedata__succeeded)
#line 110 "ctgc.livedata.m"
              {
#line 110 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__V_23_23;

#line 111 "ctgc.livedata.m"
                {
#line 111 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__V_23_23 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[2], transform_hlds__ctgc__livedata__Lu_13);
                }
#line 111 "ctgc.livedata.m"
                {
#line 111 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ctgc.livedata.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_23_23));
#line 111 "ctgc.livedata.m"
                }
#line 110 "ctgc.livedata.m"
              }
#line 238 "ctgc.livedata.m"
            else
#line 241 "ctgc.livedata.m"
              {
#line 241 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__SharingDomain_14;

#line 241 "ctgc.livedata.m"
                {
#line 241 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__SharingDomain_14 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(transform_hlds__ctgc__livedata__SharingAs_9);
                }
#line 246 "ctgc.livedata.m"
                if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__SharingDomain_14)) == (MR_mktag((MR_Integer) 1))))
#line 243 "ctgc.livedata.m"
                  {
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_17_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__SharingPairs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__SharingDomain_14, (MR_Integer) 0)));
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__LIVE1_35;
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__LIVE2_36;
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__V_38_38;
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__DatastructsLists_48;
#line 243 "ctgc.livedata.m"
                    MR_Word transform_hlds__ctgc__livedata__V_49_49;

#line 266 "ctgc.livedata.m"
                    {
#line 266 "ctgc.livedata.m"
                      transform_hlds__ctgc__livedata__LIVE1_35 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], transform_hlds__ctgc__livedata__TypeCtorInfo_17_40, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[3], transform_hlds__ctgc__livedata__Lu_13);
                    }
#line 288 "ctgc.livedata.m"
                    {
#line 288 "ctgc.livedata.m"
                      transform_hlds__ctgc__livedata__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[1]));
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3));
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 288 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__LIVE1_35));
#line 288 "ctgc.livedata.m"
                    }
#line 288 "ctgc.livedata.m"
                    {
#line 288 "ctgc.livedata.m"
                      mercury__list__map_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], transform_hlds__ctgc__livedata__V_49_49, transform_hlds__ctgc__livedata__SharingPairs_15, &transform_hlds__ctgc__livedata__DatastructsLists_48);
                    }
#line 290 "ctgc.livedata.m"
                    {
#line 290 "ctgc.livedata.m"
                      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__DatastructsLists_48, &transform_hlds__ctgc__livedata__LIVE2_36);
                    }
#line 276 "ctgc.livedata.m"
                    {
#line 276 "ctgc.livedata.m"
                      transform_hlds__ctgc__livedata__V_38_38 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_17_40, transform_hlds__ctgc__livedata__LIVE1_35, transform_hlds__ctgc__livedata__LIVE2_36);
                    }
#line 276 "ctgc.livedata.m"
                    {
#line 276 "ctgc.livedata.m"
                      transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "ctgc.livedata.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_38_38));
#line 276 "ctgc.livedata.m"
                    }
#line 243 "ctgc.livedata.m"
                  }
#line 246 "ctgc.livedata.m"
                else
#line 249 "ctgc.livedata.m"
                  {
#line 250 "ctgc.livedata.m"
                    {
#line 250 "ctgc.livedata.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
                    }
#line 249 "ctgc.livedata.m"
                  }
#line 241 "ctgc.livedata.m"
              }
#line 238 "ctgc.livedata.m"
          }
#line 232 "ctgc.livedata.m"
      }
#line 214 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_10;
#line 214 "ctgc.livedata.m"
  }
#line 72 "ctgc.livedata.m"
}

#line 196 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
#line 196 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 196 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 196 "ctgc.livedata.m"
{
#line 196 "ctgc.livedata.m"
  {
#line 196 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 196 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 196 "ctgc.livedata.m"
    {
#line 196 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 196 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 196 "ctgc.livedata.m"
  }
#line 196 "ctgc.livedata.m"
}

#line 68 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0(
#line 68 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVars_4,
#line 68 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData_5)
#line 68 "ctgc.livedata.m"
{
#line 189 "ctgc.livedata.m"
  {
#line 189 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 189 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__ProjectedLiveData_6;

#line 189 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "ctgc.livedata.m"
    else
#line 189 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 193 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 189 "ctgc.livedata.m"
      else
#line 195 "ctgc.livedata.m"
        {
#line 195 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_5, (MR_Integer) 0)));
#line 195 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__FilteredData_8;
#line 195 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__V_11_11;

#line 196 "ctgc.livedata.m"
          {
#line 196 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 196 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[1]));
#line 196 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_project_2_f_0_1));
#line 196 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 196 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ProgVars_4));
#line 196 "ctgc.livedata.m"
          }
#line 196 "ctgc.livedata.m"
          {
#line 196 "ctgc.livedata.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__V_11_11, transform_hlds__ctgc__livedata__Data_7, &transform_hlds__ctgc__livedata__FilteredData_8);
          }
#line 201 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__FilteredData_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 201 "ctgc.livedata.m"
          else
#line 203 "ctgc.livedata.m"
            {
#line 203 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__ProjectedLiveData_6, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__FilteredData_8));
#line 203 "ctgc.livedata.m"
            }
#line 195 "ctgc.livedata.m"
        }
#line 189 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__ProjectedLiveData_6;
#line 189 "ctgc.livedata.m"
  }
#line 68 "ctgc.livedata.m"
}

#line 63 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_p_0(
#line 63 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_5,
#line 63 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_6,
#line 63 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData_7,
#line 63 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastruct_8)
#line 63 "ctgc.livedata.m"
{
#line 170 "ctgc.livedata.m"
  {
#line 170 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 167 "ctgc.livedata.m"
    {
#line 167 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(transform_hlds__ctgc__livedata__Datastruct_8);
    }
#line 170 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 159 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 159 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 159 "ctgc.livedata.m"
      else
#line 159 "ctgc.livedata.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_7)) == (MR_mktag((MR_Integer) 1))))
#line 161 "ctgc.livedata.m"
          {
#line 161 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_7, (MR_Integer) 0)));

#line 162 "ctgc.livedata.m"
            {
#line 162 "ctgc.livedata.m"
              return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, ((MR_Box) (transform_hlds__ctgc__livedata__Datastruct_8)), transform_hlds__ctgc__livedata__Data_11);
            }
#line 161 "ctgc.livedata.m"
          }
#line 159 "ctgc.livedata.m"
        else
#line 159 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 170 "ctgc.livedata.m"
    else
#line 181 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 181 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 181 "ctgc.livedata.m"
      else
#line 181 "ctgc.livedata.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_7)) == (MR_mktag((MR_Integer) 1))))
#line 183 "ctgc.livedata.m"
          {
#line 183 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_7, (MR_Integer) 0)));

#line 184 "ctgc.livedata.m"
            {
#line 184 "ctgc.livedata.m"
              return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(transform_hlds__ctgc__livedata__ModuleInfo_5, transform_hlds__ctgc__livedata__ProcInfo_6, transform_hlds__ctgc__livedata__Datastruct_8, transform_hlds__ctgc__livedata__Data_17);
            }
#line 183 "ctgc.livedata.m"
          }
#line 181 "ctgc.livedata.m"
        else
#line 181 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 170 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 170 "ctgc.livedata.m"
  }
#line 63 "ctgc.livedata.m"
}

#line 62 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_p_0(
#line 62 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData_3,
#line 62 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVar_4)
#line 62 "ctgc.livedata.m"
{
#line 152 "ctgc.livedata.m"
  {
#line 152 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 152 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_5_5;

#line 153 "ctgc.livedata.m"
    {
#line 153 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_5_5 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(transform_hlds__ctgc__livedata__ProgVar_4);
    }
#line 159 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 159 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 159 "ctgc.livedata.m"
    else
#line 159 "ctgc.livedata.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "ctgc.livedata.m"
        {
#line 161 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_3, (MR_Integer) 0)));

#line 162 "ctgc.livedata.m"
          {
#line 162 "ctgc.livedata.m"
            return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, ((MR_Box) (transform_hlds__ctgc__livedata__V_5_5)), transform_hlds__ctgc__livedata__Data_8);
          }
#line 161 "ctgc.livedata.m"
        }
#line 159 "ctgc.livedata.m"
      else
#line 159 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 152 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 152 "ctgc.livedata.m"
  }
#line 62 "ctgc.livedata.m"
}

#line 149 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 149 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 149 "ctgc.livedata.m"
{
#line 149 "ctgc.livedata.m"
  {
#line 149 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3;
#line 149 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 149 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_LiveData_10;

#line 149 "ctgc.livedata.m"
    {
#line 149 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_LiveData_10 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 149 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_LiveData_10));
#line 149 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_3;
#line 149 "ctgc.livedata.m"
  }
#line 149 "ctgc.livedata.m"
}

#line 57 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0(
#line 57 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_5,
#line 57 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_6,
#line 57 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveDataList_7)
#line 57 "ctgc.livedata.m"
{
#line 149 "ctgc.livedata.m"
  {
#line 149 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 149 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__4_4;
#line 149 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0;
#line 149 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_8_8;
#line 149 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__conv1_HeadVar__4_4;

#line 149 "ctgc.livedata.m"
    {
#line 149 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 149 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0]));
#line 149 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1));
#line 149 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 149 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_5));
#line 149 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_6));
#line 149 "ctgc.livedata.m"
    }
#line 149 "ctgc.livedata.m"
    {
#line 149 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_10_10, transform_hlds__ctgc__livedata__TypeCtorInfo_10_10, transform_hlds__ctgc__livedata__V_8_8, transform_hlds__ctgc__livedata__LiveDataList_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 149 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__HeadVar__4_4 = ((MR_Word) transform_hlds__ctgc__livedata__conv1_HeadVar__4_4);
#line 149 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__4_4;
#line 149 "ctgc.livedata.m"
  }
#line 57 "ctgc.livedata.m"
}

#line 55 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(
#line 55 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 55 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 55 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData1_8,
#line 55 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveData2_9)
#line 55 "ctgc.livedata.m"
{
#line 127 "ctgc.livedata.m"
  {
#line 127 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 127 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_10;

#line 127 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__LiveData_10 = transform_hlds__ctgc__livedata__LiveData2_9;
#line 127 "ctgc.livedata.m"
    else
#line 127 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 131 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 127 "ctgc.livedata.m"
      else
#line 133 "ctgc.livedata.m"
        {
#line 133 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData1_8, (MR_Integer) 0)));

#line 137 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__LiveData2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__LiveData_10 = transform_hlds__ctgc__livedata__LiveData1_8;
#line 137 "ctgc.livedata.m"
          else
#line 137 "ctgc.livedata.m"
            if ((transform_hlds__ctgc__livedata__LiveData2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 139 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 137 "ctgc.livedata.m"
            else
#line 141 "ctgc.livedata.m"
              {
#line 141 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__Data2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData2_9, (MR_Integer) 0)));
#line 141 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__V_13_13;

#line 143 "ctgc.livedata.m"
                {
#line 143 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__V_13_13 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__Data1_11, transform_hlds__ctgc__livedata__Data2_12);
                }
#line 142 "ctgc.livedata.m"
                {
#line 142 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "ctgc.livedata.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_13_13));
#line 142 "ctgc.livedata.m"
                }
#line 141 "ctgc.livedata.m"
              }
#line 133 "ctgc.livedata.m"
        }
#line 127 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_10;
#line 127 "ctgc.livedata.m"
  }
#line 55 "ctgc.livedata.m"
}

#line 51 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_get_datastructs_1_f_0(
#line 51 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1)
#line 51 "ctgc.livedata.m"
{
#line 119 "ctgc.livedata.m"
  {
#line 119 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 119 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 119 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 119 "ctgc.livedata.m"
    else
#line 119 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 121 "ctgc.livedata.m"
        {
#line 121 "ctgc.livedata.m"
          MR_Box transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 121 "ctgc.livedata.m"
          {
#line 121 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], (MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_get_datastructs\'/1", (MR_String) "livedata_get_datastructs: livedata is top.");
          }
#line 121 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__HeadVar__2_2 = ((MR_Word) transform_hlds__ctgc__livedata__conv0_HeadVar__2_2);
#line 121 "ctgc.livedata.m"
        }
#line 119 "ctgc.livedata.m"
      else
#line 120 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 119 "ctgc.livedata.m"
  }
#line 51 "ctgc.livedata.m"
}

#line 46 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_top_1_p_0(
#line 46 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1)
#line 46 "ctgc.livedata.m"
{
#line 117 "ctgc.livedata.m"
  {
#line 117 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

#line 117 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 117 "ctgc.livedata.m"
  }
#line 46 "ctgc.livedata.m"
}

#line 45 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_bottom_1_p_0(
#line 45 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1)
#line 45 "ctgc.livedata.m"
{
#line 116 "ctgc.livedata.m"
  {
#line 116 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 116 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 116 "ctgc.livedata.m"
  }
#line 45 "ctgc.livedata.m"
}

#line 42 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_as_top_0_f_0(void)
#line 42 "ctgc.livedata.m"
{
#line 114 "ctgc.livedata.m"
  {
#line 114 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 114 "ctgc.livedata.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 114 "ctgc.livedata.m"
  }
#line 42 "ctgc.livedata.m"
}

#line 41 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_f_0(
#line 41 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Data_3)
#line 41 "ctgc.livedata.m"
{
#line 113 "ctgc.livedata.m"
  {
#line 113 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 113 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 113 "ctgc.livedata.m"
    {
#line 113 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Data_3));
#line 113 "ctgc.livedata.m"
    }
#line 113 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 113 "ctgc.livedata.m"
  }
#line 41 "ctgc.livedata.m"
}

#line 111 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 111 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 111 "ctgc.livedata.m"
{
#line 111 "ctgc.livedata.m"
  {
#line 111 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 111 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 111 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 111 "ctgc.livedata.m"
    {
#line 111 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 111 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__2_2));
#line 111 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 111 "ctgc.livedata.m"
  }
#line 111 "ctgc.livedata.m"
}

#line 40 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0(
#line 40 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveVars_3)
#line 40 "ctgc.livedata.m"
{
#line 110 "ctgc.livedata.m"
  {
#line 110 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 110 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 110 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_4_4;

#line 111 "ctgc.livedata.m"
    {
#line 111 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_4_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[1], transform_hlds__ctgc__livedata__LiveVars_3);
    }
#line 111 "ctgc.livedata.m"
    {
#line 111 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_4_4));
#line 111 "ctgc.livedata.m"
    }
#line 110 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 110 "ctgc.livedata.m"
  }
#line 40 "ctgc.livedata.m"
}

#line 39 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_0_f_0(void)
#line 39 "ctgc.livedata.m"
{
#line 109 "ctgc.livedata.m"
  {
#line 109 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 109 "ctgc.livedata.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 109 "ctgc.livedata.m"
  }
#line 39 "ctgc.livedata.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.livedata. */
