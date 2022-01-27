/*
** Automatically generated from `ctgc.livedata.m'
** by the Mercury compiler,
** version DEV
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 143 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 155 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 158 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0;

#line 161 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0;

#line 164 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1;

#line 167 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 170 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1];

#line 173 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2;

#line 176 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2];

#line 179 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1];

#line 182 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2];

#line 185 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3];

#line 188 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3];

#line 191 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0;

#line 194 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1];

#line 197 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1;

#line 200 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1];

#line 203 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1];

#line 206 "transform_hlds.ctgc.livedata.c"
static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2];

#line 209 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2];

#line 212 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2];

#line 215 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
#line 218 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 220 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 223 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
#line 226 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 228 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 230 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3);

#line 233 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
#line 236 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 238 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 241 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
#line 244 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 246 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 248 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3);

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__342__1_5_p_0(
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Xsx_11,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__4_25,
#line 342 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__5_26);

#line 340 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 340 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 337 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 337 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 324 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 319 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 340 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 340 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 337 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 337 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 324 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 319 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 298 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastructs0_8,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__PairXY_9,
#line 298 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__Datastructs_10);

#line 205 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
#line 205 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVars_3,
#line 205 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastruct_4);

#line 286 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
#line 286 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 286 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 286 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 264 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
#line 264 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 264 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 109 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 194 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
#line 194 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 194 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1);

#line 147 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2);

#line 109 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 109 "ctgc.livedata.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 575 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 583 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 591 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 599 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 607 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 616 "transform_hlds.ctgc.livedata.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0
  }
};

#line 624 "transform_hlds.ctgc.livedata.c"
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

#line 639 "transform_hlds.ctgc.livedata.c"
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

#line 654 "transform_hlds.ctgc.livedata.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 662 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

#line 667 "transform_hlds.ctgc.livedata.c"
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

#line 682 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

#line 688 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2
};

#line 693 "transform_hlds.ctgc.livedata.c"
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

#line 707 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

#line 714 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 721 "transform_hlds.ctgc.livedata.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 738 "transform_hlds.ctgc.livedata.c"
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

#line 753 "transform_hlds.ctgc.livedata.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data__type_ctor_info_datastruct_0
};

#line 758 "transform_hlds.ctgc.livedata.c"
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

#line 773 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0
};

#line 778 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

#line 783 "transform_hlds.ctgc.livedata.c"
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

#line 797 "transform_hlds.ctgc.livedata.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

#line 803 "transform_hlds.ctgc.livedata.c"
static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 809 "transform_hlds.ctgc.livedata.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 826 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
#line 829 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 831 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 833 "transform_hlds.ctgc.livedata.c"
{
#line 835 "transform_hlds.ctgc.livedata.c"
  {
#line 837 "transform_hlds.ctgc.livedata.c"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 840 "transform_hlds.ctgc.livedata.c"
    {
#line 842 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata____Unify____livedata_0_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 845 "transform_hlds.ctgc.livedata.c"
    return transform_hlds__ctgc__livedata__succeeded;
#line 847 "transform_hlds.ctgc.livedata.c"
  }
#line 849 "transform_hlds.ctgc.livedata.c"
}

#line 852 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
#line 855 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 857 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 859 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3)
#line 861 "transform_hlds.ctgc.livedata.c"
{
#line 863 "transform_hlds.ctgc.livedata.c"
  {
#line 865 "transform_hlds.ctgc.livedata.c"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__1_1;

#line 868 "transform_hlds.ctgc.livedata.c"
    {
#line 870 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata____Compare____livedata_0_0(&transform_hlds__ctgc__livedata__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_3));
    }
#line 873 "transform_hlds.ctgc.livedata.c"
    *transform_hlds__ctgc__livedata__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__1_1));
#line 875 "transform_hlds.ctgc.livedata.c"
  }
#line 877 "transform_hlds.ctgc.livedata.c"
}

#line 880 "transform_hlds.ctgc.livedata.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
#line 883 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 885 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 887 "transform_hlds.ctgc.livedata.c"
{
#line 889 "transform_hlds.ctgc.livedata.c"
  {
#line 891 "transform_hlds.ctgc.livedata.c"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 894 "transform_hlds.ctgc.livedata.c"
    {
#line 896 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 899 "transform_hlds.ctgc.livedata.c"
    return transform_hlds__ctgc__livedata__succeeded;
#line 901 "transform_hlds.ctgc.livedata.c"
  }
#line 903 "transform_hlds.ctgc.livedata.c"
}

#line 906 "transform_hlds.ctgc.livedata.c"
static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
#line 909 "transform_hlds.ctgc.livedata.c"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 911 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2,
#line 913 "transform_hlds.ctgc.livedata.c"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3)
#line 915 "transform_hlds.ctgc.livedata.c"
{
#line 917 "transform_hlds.ctgc.livedata.c"
  {
#line 919 "transform_hlds.ctgc.livedata.c"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__1_1;

#line 922 "transform_hlds.ctgc.livedata.c"
    {
#line 924 "transform_hlds.ctgc.livedata.c"
      transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(&transform_hlds__ctgc__livedata__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_3));
    }
#line 927 "transform_hlds.ctgc.livedata.c"
    *transform_hlds__ctgc__livedata__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__1_1));
#line 929 "transform_hlds.ctgc.livedata.c"
  }
#line 931 "transform_hlds.ctgc.livedata.c"
}

#line 342 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__342__1_5_p_0(
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Xsx_11,
#line 342 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__4_25,
#line 342 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__5_26)
#line 342 "ctgc.livedata.m"
{
#line 342 "ctgc.livedata.m"
  {
#line 342 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 342 "ctgc.livedata.m"
    {
#line 342 "ctgc.livedata.m"
      *transform_hlds__ctgc__livedata__HeadVar__5_26 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__HeadVar__4_25, transform_hlds__ctgc__livedata__Xsx_11);
    }
#line 342 "ctgc.livedata.m"
  }
#line 342 "ctgc.livedata.m"
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
#line 988 "transform_hlds.ctgc.livedata.c"
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
#line 1000 "transform_hlds.ctgc.livedata.c"
        *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "ctgc.livedata.m"
    else
#line 81 "ctgc.livedata.m"
      {
#line 81 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));

#line 81 "ctgc.livedata.m"
        if ((transform_hlds__ctgc__livedata__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "transform_hlds.ctgc.livedata.c"
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
#line 1094 "transform_hlds.ctgc.livedata.c"
            transform_hlds__ctgc__livedata__TypeInfo_9_9 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
#line 1096 "transform_hlds.ctgc.livedata.c"
            {
#line 1098 "transform_hlds.ctgc.livedata.c"
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

#line 98 "ctgc.livedata.m"
void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0(
#line 98 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 98 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2,
#line 98 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__3_3)
#line 98 "ctgc.livedata.m"
{
#line 98 "ctgc.livedata.m"
  {
#line 98 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 98 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_10 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 98 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_11 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__3_3;

#line 98 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_10 == transform_hlds__ctgc__livedata__CastY_11);
#line 98 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 1136 "transform_hlds.ctgc.livedata.c"
      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 98 "ctgc.livedata.m"
    else
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__2_2)) {
#line 98 "ctgc.livedata.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
        case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
          switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__2_2)) {
#line 98 "ctgc.livedata.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
            case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
                case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
                    case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
                      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 98 "ctgc.livedata.m"
                      break;
#line 98 "ctgc.livedata.m"
                    case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
                      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 98 "ctgc.livedata.m"
                      break;
#line 98 "ctgc.livedata.m"
                  }
#line 98 "ctgc.livedata.m"
                  break;
#line 98 "ctgc.livedata.m"
                case (MR_Integer) 1:
#line 1184 "transform_hlds.ctgc.livedata.c"
                  *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 98 "ctgc.livedata.m"
                  break;
#line 98 "ctgc.livedata.m"
              }
#line 98 "ctgc.livedata.m"
              break;
#line 98 "ctgc.livedata.m"
            case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
                case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
                  switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
                    case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
                      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 98 "ctgc.livedata.m"
                      break;
#line 98 "ctgc.livedata.m"
                    case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
                      *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 0;
#line 98 "ctgc.livedata.m"
                      break;
#line 98 "ctgc.livedata.m"
                  }
#line 98 "ctgc.livedata.m"
                  break;
#line 98 "ctgc.livedata.m"
                case (MR_Integer) 1:
#line 1224 "transform_hlds.ctgc.livedata.c"
                  *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 1;
#line 98 "ctgc.livedata.m"
                  break;
#line 98 "ctgc.livedata.m"
              }
#line 98 "ctgc.livedata.m"
              break;
#line 98 "ctgc.livedata.m"
          }
#line 98 "ctgc.livedata.m"
          break;
#line 98 "ctgc.livedata.m"
        case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
          {
#line 98 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));

#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
              case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
                switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__3_3)) {
#line 98 "ctgc.livedata.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
                  case (MR_Integer) 0:
#line 1257 "transform_hlds.ctgc.livedata.c"
                    *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 98 "ctgc.livedata.m"
                    break;
#line 98 "ctgc.livedata.m"
                  case (MR_Integer) 1:
#line 1263 "transform_hlds.ctgc.livedata.c"
                    *transform_hlds__ctgc__livedata__HeadVar__1_1 = (MR_Integer) 2;
#line 98 "ctgc.livedata.m"
                    break;
#line 98 "ctgc.livedata.m"
                }
#line 98 "ctgc.livedata.m"
                break;
#line 98 "ctgc.livedata.m"
              case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
                {
#line 98 "ctgc.livedata.m"
                  MR_Word transform_hlds__ctgc__livedata__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__3_3, (MR_Integer) 0)));

#line 98 "ctgc.livedata.m"
                  {
#line 98 "ctgc.livedata.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], transform_hlds__ctgc__livedata__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__livedata__V_13_13)), ((MR_Box) (transform_hlds__ctgc__livedata__V_9_9)));
#line 98 "ctgc.livedata.m"
                    return;
                  }
#line 98 "ctgc.livedata.m"
                }
#line 98 "ctgc.livedata.m"
                break;
#line 98 "ctgc.livedata.m"
            }
#line 98 "ctgc.livedata.m"
          }
#line 98 "ctgc.livedata.m"
          break;
#line 98 "ctgc.livedata.m"
      }
#line 98 "ctgc.livedata.m"
  }
#line 98 "ctgc.livedata.m"
}

#line 98 "ctgc.livedata.m"
MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0(
#line 98 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__1_1,
#line 98 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2)
#line 98 "ctgc.livedata.m"
{
#line 98 "ctgc.livedata.m"
  {
#line 98 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 98 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastX_9 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 98 "ctgc.livedata.m"
    MR_Integer transform_hlds__ctgc__livedata__CastY_10 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 98 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastX_9 == transform_hlds__ctgc__livedata__CastY_10);
#line 98 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 98 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 98 "ctgc.livedata.m"
    else
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
      switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__1_1)) {
#line 98 "ctgc.livedata.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
        case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
#line 98 "ctgc.livedata.m"
          switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__1_1)) {
#line 98 "ctgc.livedata.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ctgc.livedata.m"
            case (MR_Integer) 0:
#line 98 "ctgc.livedata.m"
              {
#line 98 "ctgc.livedata.m"
                MR_Integer transform_hlds__ctgc__livedata__CastX_3 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 98 "ctgc.livedata.m"
                MR_Integer transform_hlds__ctgc__livedata__CastY_4 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 98 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastY_4 == transform_hlds__ctgc__livedata__CastX_3);
#line 98 "ctgc.livedata.m"
              }
#line 98 "ctgc.livedata.m"
              break;
#line 98 "ctgc.livedata.m"
            case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
              {
#line 98 "ctgc.livedata.m"
                MR_Integer transform_hlds__ctgc__livedata__CastX_5 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__1_1;
#line 98 "ctgc.livedata.m"
                MR_Integer transform_hlds__ctgc__livedata__CastY_6 = (MR_Integer) transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 98 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__CastY_6 == transform_hlds__ctgc__livedata__CastX_5);
#line 98 "ctgc.livedata.m"
              }
#line 98 "ctgc.livedata.m"
              break;
#line 98 "ctgc.livedata.m"
          }
#line 98 "ctgc.livedata.m"
          break;
#line 98 "ctgc.livedata.m"
        case (MR_Integer) 1:
#line 98 "ctgc.livedata.m"
          {
#line 98 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__TypeInfo_11_11;
#line 98 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__1_1, (MR_Integer) 0)));
#line 98 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_8_8;

#line 98 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 98 "ctgc.livedata.m"
            if (transform_hlds__ctgc__livedata__succeeded)
#line 98 "ctgc.livedata.m"
              {
#line 98 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, (MR_Integer) 0)));
#line 1393 "transform_hlds.ctgc.livedata.c"
                transform_hlds__ctgc__livedata__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
#line 1395 "transform_hlds.ctgc.livedata.c"
                {
#line 1397 "transform_hlds.ctgc.livedata.c"
                  return transform_hlds__ctgc__livedata__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__livedata__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__livedata__V_7_7)), ((MR_Box) (transform_hlds__ctgc__livedata__V_8_8)));
                }
#line 98 "ctgc.livedata.m"
              }
#line 98 "ctgc.livedata.m"
          }
#line 98 "ctgc.livedata.m"
          break;
#line 98 "ctgc.livedata.m"
      }
#line 98 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 98 "ctgc.livedata.m"
  }
#line 98 "ctgc.livedata.m"
}

#line 340 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 340 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 340 "ctgc.livedata.m"
{
#line 340 "ctgc.livedata.m"
  {
#line 340 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 340 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv3_HeadVar__5_26;

#line 340 "ctgc.livedata.m"
    {
#line 340 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__342__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv3_HeadVar__5_26);
    }
#line 340 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv3_HeadVar__5_26));
#line 340 "ctgc.livedata.m"
  }
#line 340 "ctgc.livedata.m"
}

#line 337 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 337 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 337 "ctgc.livedata.m"
{
#line 337 "ctgc.livedata.m"
  {
#line 337 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 337 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 337 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv2_HeadVar__5_5;

#line 337 "ctgc.livedata.m"
    {
#line 337 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv2_HeadVar__5_5);
    }
#line 337 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 337 "ctgc.livedata.m"
      {
#line 337 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv2_HeadVar__5_5));
#line 337 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 337 "ctgc.livedata.m"
      }
#line 337 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 337 "ctgc.livedata.m"
  }
#line 337 "ctgc.livedata.m"
}

#line 324 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 324 "ctgc.livedata.m"
{
#line 324 "ctgc.livedata.m"
  {
#line 324 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 324 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 324 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 324 "ctgc.livedata.m"
  }
#line 324 "ctgc.livedata.m"
}

#line 319 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 319 "ctgc.livedata.m"
{
#line 319 "ctgc.livedata.m"
  {
#line 319 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 319 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 319 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 319 "ctgc.livedata.m"
  }
#line 319 "ctgc.livedata.m"
}

#line 340 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 340 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 340 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 340 "ctgc.livedata.m"
{
#line 340 "ctgc.livedata.m"
  {
#line 340 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 340 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv1_HeadVar__5_26;

#line 340 "ctgc.livedata.m"
    {
#line 340 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__342__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv1_HeadVar__5_26);
    }
#line 340 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv1_HeadVar__5_26));
#line 340 "ctgc.livedata.m"
  }
#line 340 "ctgc.livedata.m"
}

#line 337 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 337 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 337 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 337 "ctgc.livedata.m"
{
#line 337 "ctgc.livedata.m"
  {
#line 337 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 337 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 337 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__5_5;

#line 337 "ctgc.livedata.m"
    {
#line 337 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv0_HeadVar__5_5);
    }
#line 337 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 337 "ctgc.livedata.m"
      {
#line 337 "ctgc.livedata.m"
        *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__5_5));
#line 337 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 337 "ctgc.livedata.m"
      }
#line 337 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 337 "ctgc.livedata.m"
  }
#line 337 "ctgc.livedata.m"
}

#line 324 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 324 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 324 "ctgc.livedata.m"
{
#line 324 "ctgc.livedata.m"
  {
#line 324 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 324 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 324 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 324 "ctgc.livedata.m"
  }
#line 324 "ctgc.livedata.m"
}

#line 319 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 319 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 319 "ctgc.livedata.m"
{
#line 319 "ctgc.livedata.m"
  {
#line 319 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 319 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 319 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 319 "ctgc.livedata.m"
  }
#line 319 "ctgc.livedata.m"
}

#line 298 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ModuleInfo_6,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProcInfo_7,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastructs0_8,
#line 298 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__PairXY_9,
#line 298 "ctgc.livedata.m"
  MR_Word * transform_hlds__ctgc__livedata__Datastructs_10)
#line 298 "ctgc.livedata.m"
{
#line 303 "ctgc.livedata.m"
  {
#line 303 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_30_41;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_30_70;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__L1_11;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__L2_15;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Xsx_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 0)));
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Ysy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 1)));
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Y_List_24;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_31_31;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Xsx_51;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Ysy_52;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Y_List_53;
#line 303 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_60_60;
#line 325 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__FY_List_25;
#line 325 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_32_32;
#line 326 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_26_26;
#line 326 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_27_27;
#line 325 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__FY_List_54;
#line 325 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_61_61;
#line 326 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_55_55;
#line 326 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_56_56;

#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_31_31, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 319 "ctgc.livedata.m"
    }
#line 1745 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_30_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_31_31, transform_hlds__ctgc__livedata__Datastructs0_8, &transform_hlds__ctgc__livedata__Y_List_24);
    }
#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_32_32, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 324 "ctgc.livedata.m"
    }
#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_32_32, transform_hlds__ctgc__livedata__Y_List_24, &transform_hlds__ctgc__livedata__FY_List_25);
    }
#line 326 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__FY_List_25)) == (MR_mktag((MR_Integer) 1)));
#line 326 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 326 "ctgc.livedata.m"
      {
#line 326 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_25, (MR_Integer) 0)));
#line 326 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_25, (MR_Integer) 1)));
#line 329 "ctgc.livedata.m"
        {
#line 329 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__L1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L1_11, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_22));
#line 329 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "ctgc.livedata.m"
        }
#line 326 "ctgc.livedata.m"
      }
#line 326 "ctgc.livedata.m"
    else
#line 338 "ctgc.livedata.m"
      {
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__TypeInfo_34_45;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__SelectorList_29;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_34_34;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_35_35;

#line 337 "ctgc.livedata.m"
        {
#line 337 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_34_34, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_23));
#line 337 "ctgc.livedata.m"
        }
#line 1828 "transform_hlds.ctgc.livedata.c"
        transform_hlds__ctgc__livedata__TypeInfo_34_45 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
#line 336 "ctgc.livedata.m"
        {
#line 336 "ctgc.livedata.m"
          mercury__list__filter_map_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__TypeInfo_34_45, transform_hlds__ctgc__livedata__V_34_34, transform_hlds__ctgc__livedata__Y_List_24, &transform_hlds__ctgc__livedata__SelectorList_29);
        }
#line 340 "ctgc.livedata.m"
        {
#line 340 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_35_35, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_22));
#line 340 "ctgc.livedata.m"
        }
#line 340 "ctgc.livedata.m"
        {
#line 340 "ctgc.livedata.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__livedata__TypeInfo_34_45, transform_hlds__ctgc__livedata__TypeCtorInfo_30_41, transform_hlds__ctgc__livedata__V_35_35, transform_hlds__ctgc__livedata__SelectorList_29, &transform_hlds__ctgc__livedata__L1_11);
        }
#line 338 "ctgc.livedata.m"
      }
#line 307 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__Ysy_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 0)));
#line 307 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__Xsx_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__PairXY_9, (MR_Integer) 1)));
#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_60_60, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 319 "ctgc.livedata.m"
    }
#line 1878 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 319 "ctgc.livedata.m"
    {
#line 319 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_60_60, transform_hlds__ctgc__livedata__Datastructs0_8, &transform_hlds__ctgc__livedata__Y_List_53);
    }
#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 324 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_61_61, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 324 "ctgc.livedata.m"
    }
#line 324 "ctgc.livedata.m"
    {
#line 324 "ctgc.livedata.m"
      mercury__list__filter_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_61_61, transform_hlds__ctgc__livedata__Y_List_53, &transform_hlds__ctgc__livedata__FY_List_54);
    }
#line 326 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__livedata__FY_List_54)) == (MR_mktag((MR_Integer) 1)));
#line 326 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 326 "ctgc.livedata.m"
      {
#line 326 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_54, (MR_Integer) 0)));
#line 326 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__FY_List_54, (MR_Integer) 1)));
#line 329 "ctgc.livedata.m"
        {
#line 329 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__L2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L2_15, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_51));
#line 329 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__L2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "ctgc.livedata.m"
        }
#line 326 "ctgc.livedata.m"
      }
#line 326 "ctgc.livedata.m"
    else
#line 338 "ctgc.livedata.m"
      {
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__TypeInfo_34_74;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__SelectorList_58;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_63_63;
#line 338 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__V_64_64;

#line 337 "ctgc.livedata.m"
        {
#line 337 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 337 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_63_63, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Ysy_52));
#line 337 "ctgc.livedata.m"
        }
#line 1961 "transform_hlds.ctgc.livedata.c"
        transform_hlds__ctgc__livedata__TypeInfo_34_74 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
#line 336 "ctgc.livedata.m"
        {
#line 336 "ctgc.livedata.m"
          mercury__list__filter_map_3_p_0(transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__TypeInfo_34_74, transform_hlds__ctgc__livedata__V_63_63, transform_hlds__ctgc__livedata__Y_List_53, &transform_hlds__ctgc__livedata__SelectorList_58);
        }
#line 340 "ctgc.livedata.m"
        {
#line 340 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 340 "ctgc.livedata.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_64_64, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__Xsx_51));
#line 340 "ctgc.livedata.m"
        }
#line 340 "ctgc.livedata.m"
        {
#line 340 "ctgc.livedata.m"
          mercury__list__map_3_p_0(transform_hlds__ctgc__livedata__TypeInfo_34_74, transform_hlds__ctgc__livedata__TypeCtorInfo_30_70, transform_hlds__ctgc__livedata__V_64_64, transform_hlds__ctgc__livedata__SelectorList_58, &transform_hlds__ctgc__livedata__L2_15);
        }
#line 338 "ctgc.livedata.m"
      }
#line 311 "ctgc.livedata.m"
    {
#line 311 "ctgc.livedata.m"
      *transform_hlds__ctgc__livedata__Datastructs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__L1_11, transform_hlds__ctgc__livedata__L2_15);
    }
#line 303 "ctgc.livedata.m"
  }
#line 298 "ctgc.livedata.m"
}

#line 205 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
#line 205 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__ProgVars_3,
#line 205 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__Datastruct_4)
#line 205 "ctgc.livedata.m"
{
#line 207 "ctgc.livedata.m"
  {
#line 207 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 207 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__Datastruct_4, (MR_Integer) 0)));
#line 208 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__Datastruct_4, (MR_Integer) 1)));

#line 208 "ctgc.livedata.m"
    {
#line 208 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__livedata__V_5_5)), transform_hlds__ctgc__livedata__ProgVars_3);
    }
#line 207 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 207 "ctgc.livedata.m"
  }
#line 205 "ctgc.livedata.m"
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
#line 386 "ctgc.livedata.m"
  {
#line 386 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 386 "ctgc.livedata.m"
#line 386 "ctgc.livedata.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_9)) {
#line 386 "ctgc.livedata.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "ctgc.livedata.m"
      case (MR_Integer) 0:
#line 386 "ctgc.livedata.m"
#line 386 "ctgc.livedata.m"
        switch (MR_unmkbody(transform_hlds__ctgc__livedata__LiveData_9)) {
#line 386 "ctgc.livedata.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 386 "ctgc.livedata.m"
          case (MR_Integer) 0:
#line 389 "ctgc.livedata.m"
            {
#line 390 "ctgc.livedata.m"
              *transform_hlds__ctgc__livedata__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__livedata_scalar_common_5[0]);
#line 389 "ctgc.livedata.m"
            }
#line 386 "ctgc.livedata.m"
            break;
#line 386 "ctgc.livedata.m"
          case (MR_Integer) 1:
#line 387 "ctgc.livedata.m"
            *transform_hlds__ctgc__livedata__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "ctgc.livedata.m"
            break;
#line 386 "ctgc.livedata.m"
        }
#line 386 "ctgc.livedata.m"
        break;
#line 386 "ctgc.livedata.m"
      case (MR_Integer) 1:
#line 392 "ctgc.livedata.m"
        {
#line 392 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__LiveDatastructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_9, (MR_Integer) 0)));
#line 392 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__SubsumedNodes_12;

#line 393 "ctgc.livedata.m"
          {
#line 393 "ctgc.livedata.m"
            transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__DeadNodes_8, transform_hlds__ctgc__livedata__LiveDatastructs_11, &transform_hlds__ctgc__livedata__SubsumedNodes_12);
          }
#line 395 "ctgc.livedata.m"
          {
#line 395 "ctgc.livedata.m"
            MR_Word base;
#line 395 "ctgc.livedata.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "ctgc.livedata.m"
            *transform_hlds__ctgc__livedata__Result_10 = base;
#line 395 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__SubsumedNodes_12));
#line 395 "ctgc.livedata.m"
          }
#line 392 "ctgc.livedata.m"
        }
#line 386 "ctgc.livedata.m"
        break;
#line 386 "ctgc.livedata.m"
    }
#line 386 "ctgc.livedata.m"
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
#line 352 "ctgc.livedata.m"
  {
#line 352 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 352 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_12;

#line 349 "ctgc.livedata.m"
    {
#line 349 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__livedata__LocalSharing_10);
    }
#line 352 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 112 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 352 "ctgc.livedata.m"
    else
#line 357 "ctgc.livedata.m"
      {
#line 353 "ctgc.livedata.m"
        {
#line 353 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(transform_hlds__ctgc__livedata__LocalSharing_10);
        }
#line 357 "ctgc.livedata.m"
        if (transform_hlds__ctgc__livedata__succeeded)
#line 355 "ctgc.livedata.m"
          {
#line 355 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__V_16_16;

#line 111 "ctgc.livedata.m"
            {
#line 111 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__V_16_16, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__LuData_9));
#line 111 "ctgc.livedata.m"
            }
#line 355 "ctgc.livedata.m"
            {
#line 355 "ctgc.livedata.m"
              return transform_hlds__ctgc__livedata__LiveData_12 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LiveData0_11, transform_hlds__ctgc__livedata__V_16_16);
            }
#line 355 "ctgc.livedata.m"
          }
#line 357 "ctgc.livedata.m"
        else
#line 360 "ctgc.livedata.m"
          {
#line 360 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__LuLiveData_14;
#line 360 "ctgc.livedata.m"
            MR_Word transform_hlds__ctgc__livedata__Data1_31;

#line 359 "ctgc.livedata.m"
            {
#line 359 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__Data1_31 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LocalSharing_10, transform_hlds__ctgc__livedata__LuData_9);
            }
#line 111 "ctgc.livedata.m"
            {
#line 111 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__LuLiveData_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LuLiveData_14, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Data1_31));
#line 111 "ctgc.livedata.m"
            }
#line 2206 "transform_hlds.ctgc.livedata.c"
#line 2207 "transform_hlds.ctgc.livedata.c"
            switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData0_11)) {
#line 2209 "transform_hlds.ctgc.livedata.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2211 "transform_hlds.ctgc.livedata.c"
              case (MR_Integer) 0:
#line 2213 "transform_hlds.ctgc.livedata.c"
#line 2214 "transform_hlds.ctgc.livedata.c"
                switch (MR_unmkbody(transform_hlds__ctgc__livedata__LiveData0_11)) {
#line 2216 "transform_hlds.ctgc.livedata.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2218 "transform_hlds.ctgc.livedata.c"
                  case (MR_Integer) 0:
#line 134 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__LiveData_12 = transform_hlds__ctgc__livedata__LuLiveData_14;
#line 2222 "transform_hlds.ctgc.livedata.c"
                    break;
#line 2224 "transform_hlds.ctgc.livedata.c"
                  case (MR_Integer) 1:
#line 137 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 2228 "transform_hlds.ctgc.livedata.c"
                    break;
#line 2230 "transform_hlds.ctgc.livedata.c"
                }
#line 2232 "transform_hlds.ctgc.livedata.c"
                break;
#line 2234 "transform_hlds.ctgc.livedata.c"
              case (MR_Integer) 1:
#line 2236 "transform_hlds.ctgc.livedata.c"
                {
#line 2238 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__Data0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData0_11, (MR_Integer) 0)));
#line 2240 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__Data2_32;
#line 2242 "transform_hlds.ctgc.livedata.c"
                  MR_Word transform_hlds__ctgc__livedata__V_33_33;

#line 380 "ctgc.livedata.m"
                  {
#line 380 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__Data2_32 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__LocalSharing_10, transform_hlds__ctgc__livedata__Data0_24);
                  }
#line 141 "ctgc.livedata.m"
                  {
#line 141 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__V_33_33 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_7, transform_hlds__ctgc__livedata__ProcInfo_8, transform_hlds__ctgc__livedata__Data1_31, transform_hlds__ctgc__livedata__Data2_32);
                  }
#line 140 "ctgc.livedata.m"
                  {
#line 140 "ctgc.livedata.m"
                    transform_hlds__ctgc__livedata__LiveData_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 140 "ctgc.livedata.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_12, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_33_33));
#line 140 "ctgc.livedata.m"
                  }
#line 2263 "transform_hlds.ctgc.livedata.c"
                }
#line 2265 "transform_hlds.ctgc.livedata.c"
                break;
#line 2267 "transform_hlds.ctgc.livedata.c"
            }
#line 360 "ctgc.livedata.m"
          }
#line 357 "ctgc.livedata.m"
      }
#line 352 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_12;
#line 352 "ctgc.livedata.m"
  }
#line 75 "ctgc.livedata.m"
}

#line 286 "ctgc.livedata.m"
static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
#line 286 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 286 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 286 "ctgc.livedata.m"
  MR_Box * transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 286 "ctgc.livedata.m"
{
#line 286 "ctgc.livedata.m"
  {
#line 286 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 286 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv2_Datastructs_10;

#line 286 "ctgc.livedata.m"
    {
#line 286 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), &transform_hlds__ctgc__livedata__conv2_Datastructs_10);
    }
#line 286 "ctgc.livedata.m"
    *transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv2_Datastructs_10));
#line 286 "ctgc.livedata.m"
  }
#line 286 "ctgc.livedata.m"
}

#line 264 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
#line 264 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 264 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 264 "ctgc.livedata.m"
{
#line 264 "ctgc.livedata.m"
  {
#line 264 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 264 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 264 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv1_HeadVar__2_2;

#line 264 "ctgc.livedata.m"
    {
#line 264 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv1_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 264 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv1_HeadVar__2_2));
#line 264 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 264 "ctgc.livedata.m"
  }
#line 264 "ctgc.livedata.m"
}

#line 109 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 109 "ctgc.livedata.m"
{
#line 109 "ctgc.livedata.m"
  {
#line 109 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 109 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 109 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 109 "ctgc.livedata.m"
    {
#line 109 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 109 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__2_2));
#line 109 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 109 "ctgc.livedata.m"
  }
#line 109 "ctgc.livedata.m"
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
#line 212 "ctgc.livedata.m"
  {
#line 212 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_10;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_21_21;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lfu_11;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lbu_12;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__Lu_13;
#line 212 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_17_17;

#line 215 "ctgc.livedata.m"
    {
#line 215 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lfu_11 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(transform_hlds__ctgc__livedata__GoalInfo_8);
    }
#line 216 "ctgc.livedata.m"
    {
#line 216 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lbu_12 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(transform_hlds__ctgc__livedata__GoalInfo_8);
    }
#line 2414 "transform_hlds.ctgc.livedata.c"
    transform_hlds__ctgc__livedata__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 217 "ctgc.livedata.m"
    {
#line 217 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_17_17 = parse_tree__set_of_var__union_2_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_21_21, transform_hlds__ctgc__livedata__Lfu_11, transform_hlds__ctgc__livedata__Lbu_12);
    }
#line 217 "ctgc.livedata.m"
    {
#line 217 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__Lu_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_21_21, transform_hlds__ctgc__livedata__V_17_17);
    }
#line 221 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__Lu_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 107 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "ctgc.livedata.m"
    else
#line 230 "ctgc.livedata.m"
      {
#line 227 "ctgc.livedata.m"
        {
#line 227 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(transform_hlds__ctgc__livedata__SharingAs_9);
        }
#line 230 "ctgc.livedata.m"
        if (transform_hlds__ctgc__livedata__succeeded)
#line 112 "ctgc.livedata.m"
          transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 230 "ctgc.livedata.m"
        else
#line 236 "ctgc.livedata.m"
          {
#line 233 "ctgc.livedata.m"
            {
#line 233 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(transform_hlds__ctgc__livedata__SharingAs_9);
            }
#line 236 "ctgc.livedata.m"
            if (transform_hlds__ctgc__livedata__succeeded)
#line 108 "ctgc.livedata.m"
              {
#line 108 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__V_23_23;

#line 109 "ctgc.livedata.m"
                {
#line 109 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__V_23_23 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[2], transform_hlds__ctgc__livedata__Lu_13);
                }
#line 109 "ctgc.livedata.m"
                {
#line 109 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "ctgc.livedata.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_23_23));
#line 109 "ctgc.livedata.m"
                }
#line 108 "ctgc.livedata.m"
              }
#line 236 "ctgc.livedata.m"
            else
#line 239 "ctgc.livedata.m"
              {
#line 239 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__SharingDomain_14;

#line 239 "ctgc.livedata.m"
                {
#line 239 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__SharingDomain_14 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(transform_hlds__ctgc__livedata__SharingAs_9);
                }
#line 244 "ctgc.livedata.m"
#line 244 "ctgc.livedata.m"
                switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__SharingDomain_14)) {
#line 244 "ctgc.livedata.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 244 "ctgc.livedata.m"
                  case (MR_Integer) 0:
#line 247 "ctgc.livedata.m"
                    {
#line 248 "ctgc.livedata.m"
                      {
#line 248 "ctgc.livedata.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
                      }
#line 247 "ctgc.livedata.m"
                    }
#line 244 "ctgc.livedata.m"
                    break;
#line 244 "ctgc.livedata.m"
                  case (MR_Integer) 1:
#line 241 "ctgc.livedata.m"
                    {
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_17_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__SharingPairs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__SharingDomain_14, (MR_Integer) 0)));
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__LIVE1_35;
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__LIVE2_36;
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__V_38_38;
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__DatastructsLists_48;
#line 241 "ctgc.livedata.m"
                      MR_Word transform_hlds__ctgc__livedata__V_49_49;

#line 264 "ctgc.livedata.m"
                      {
#line 264 "ctgc.livedata.m"
                        transform_hlds__ctgc__livedata__LIVE1_35 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], transform_hlds__ctgc__livedata__TypeCtorInfo_17_40, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[3], transform_hlds__ctgc__livedata__Lu_13);
                      }
#line 286 "ctgc.livedata.m"
                      {
#line 286 "ctgc.livedata.m"
                        transform_hlds__ctgc__livedata__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[1]));
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3));
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_6));
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_7));
#line 286 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_49_49, 5) = ((MR_Box) (transform_hlds__ctgc__livedata__LIVE1_35));
#line 286 "ctgc.livedata.m"
                      }
#line 286 "ctgc.livedata.m"
                      {
#line 286 "ctgc.livedata.m"
                        mercury__list__map_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], transform_hlds__ctgc__livedata__V_49_49, transform_hlds__ctgc__livedata__SharingPairs_15, &transform_hlds__ctgc__livedata__DatastructsLists_48);
                      }
#line 288 "ctgc.livedata.m"
                      {
#line 288 "ctgc.livedata.m"
                        mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__DatastructsLists_48, &transform_hlds__ctgc__livedata__LIVE2_36);
                      }
#line 274 "ctgc.livedata.m"
                      {
#line 274 "ctgc.livedata.m"
                        transform_hlds__ctgc__livedata__V_38_38 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_17_40, transform_hlds__ctgc__livedata__LIVE1_35, transform_hlds__ctgc__livedata__LIVE2_36);
                      }
#line 274 "ctgc.livedata.m"
                      {
#line 274 "ctgc.livedata.m"
                        transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "ctgc.livedata.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_38_38));
#line 274 "ctgc.livedata.m"
                      }
#line 241 "ctgc.livedata.m"
                    }
#line 244 "ctgc.livedata.m"
                    break;
#line 244 "ctgc.livedata.m"
                  case (MR_Integer) 2:
#line 247 "ctgc.livedata.m"
                    {
#line 248 "ctgc.livedata.m"
                      {
#line 248 "ctgc.livedata.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
                      }
#line 247 "ctgc.livedata.m"
                    }
#line 244 "ctgc.livedata.m"
                    break;
#line 244 "ctgc.livedata.m"
                }
#line 239 "ctgc.livedata.m"
              }
#line 236 "ctgc.livedata.m"
          }
#line 230 "ctgc.livedata.m"
      }
#line 212 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_10;
#line 212 "ctgc.livedata.m"
  }
#line 72 "ctgc.livedata.m"
}

#line 194 "ctgc.livedata.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
#line 194 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 194 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 194 "ctgc.livedata.m"
{
#line 194 "ctgc.livedata.m"
  {
#line 194 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 194 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;

#line 194 "ctgc.livedata.m"
    {
#line 194 "ctgc.livedata.m"
      return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 194 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 194 "ctgc.livedata.m"
  }
#line 194 "ctgc.livedata.m"
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
#line 187 "ctgc.livedata.m"
  {
#line 187 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 187 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__ProjectedLiveData_6;

#line 187 "ctgc.livedata.m"
#line 187 "ctgc.livedata.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_5)) {
#line 187 "ctgc.livedata.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 187 "ctgc.livedata.m"
      case (MR_Integer) 0:
#line 187 "ctgc.livedata.m"
#line 187 "ctgc.livedata.m"
        switch (MR_unmkbody(transform_hlds__ctgc__livedata__LiveData_5)) {
#line 187 "ctgc.livedata.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 187 "ctgc.livedata.m"
          case (MR_Integer) 0:
#line 188 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "ctgc.livedata.m"
            break;
#line 187 "ctgc.livedata.m"
          case (MR_Integer) 1:
#line 191 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 187 "ctgc.livedata.m"
            break;
#line 187 "ctgc.livedata.m"
        }
#line 187 "ctgc.livedata.m"
        break;
#line 187 "ctgc.livedata.m"
      case (MR_Integer) 1:
#line 193 "ctgc.livedata.m"
        {
#line 193 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_5, (MR_Integer) 0)));
#line 193 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__FilteredData_8;
#line 193 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__V_11_11;

#line 194 "ctgc.livedata.m"
          {
#line 194 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 194 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[1]));
#line 194 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_project_2_f_0_1));
#line 194 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 194 "ctgc.livedata.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_11_11, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ProgVars_4));
#line 194 "ctgc.livedata.m"
          }
#line 194 "ctgc.livedata.m"
          {
#line 194 "ctgc.livedata.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__livedata__V_11_11, transform_hlds__ctgc__livedata__Data_7, &transform_hlds__ctgc__livedata__FilteredData_8);
          }
#line 199 "ctgc.livedata.m"
          if ((transform_hlds__ctgc__livedata__FilteredData_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "ctgc.livedata.m"
          else
#line 201 "ctgc.livedata.m"
            {
#line 201 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 201 "ctgc.livedata.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__ProjectedLiveData_6, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__FilteredData_8));
#line 201 "ctgc.livedata.m"
            }
#line 193 "ctgc.livedata.m"
        }
#line 187 "ctgc.livedata.m"
        break;
#line 187 "ctgc.livedata.m"
    }
#line 187 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__ProjectedLiveData_6;
#line 187 "ctgc.livedata.m"
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
#line 168 "ctgc.livedata.m"
  {
#line 168 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 165 "ctgc.livedata.m"
    {
#line 165 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(transform_hlds__ctgc__livedata__Datastruct_8);
    }
#line 168 "ctgc.livedata.m"
    if (transform_hlds__ctgc__livedata__succeeded)
#line 157 "ctgc.livedata.m"
      if ((transform_hlds__ctgc__livedata__LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 157 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 157 "ctgc.livedata.m"
      else
#line 157 "ctgc.livedata.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_7)) == (MR_mktag((MR_Integer) 1))))
#line 159 "ctgc.livedata.m"
        {
#line 159 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_7, (MR_Integer) 0)));

#line 160 "ctgc.livedata.m"
          {
#line 160 "ctgc.livedata.m"
            return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, ((MR_Box) (transform_hlds__ctgc__livedata__Datastruct_8)), transform_hlds__ctgc__livedata__Data_11);
          }
#line 159 "ctgc.livedata.m"
        }
#line 157 "ctgc.livedata.m"
      else
#line 157 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 168 "ctgc.livedata.m"
    else
#line 179 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 179 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 179 "ctgc.livedata.m"
    else
#line 179 "ctgc.livedata.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_7)) == (MR_mktag((MR_Integer) 1))))
#line 181 "ctgc.livedata.m"
      {
#line 181 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_7, (MR_Integer) 0)));

#line 182 "ctgc.livedata.m"
        {
#line 182 "ctgc.livedata.m"
          return transform_hlds__ctgc__livedata__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(transform_hlds__ctgc__livedata__ModuleInfo_5, transform_hlds__ctgc__livedata__ProcInfo_6, transform_hlds__ctgc__livedata__Datastruct_8, transform_hlds__ctgc__livedata__Data_17);
        }
#line 181 "ctgc.livedata.m"
      }
#line 179 "ctgc.livedata.m"
    else
#line 179 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 168 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 168 "ctgc.livedata.m"
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
#line 150 "ctgc.livedata.m"
  {
#line 150 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 150 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_5_5;

#line 151 "ctgc.livedata.m"
    {
#line 151 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_5_5 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(transform_hlds__ctgc__livedata__ProgVar_4);
    }
#line 157 "ctgc.livedata.m"
    if ((transform_hlds__ctgc__livedata__LiveData_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 157 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_TRUE;
#line 157 "ctgc.livedata.m"
    else
#line 157 "ctgc.livedata.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData_3)) == (MR_mktag((MR_Integer) 1))))
#line 159 "ctgc.livedata.m"
      {
#line 159 "ctgc.livedata.m"
        MR_Word transform_hlds__ctgc__livedata__Data_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_3, (MR_Integer) 0)));

#line 160 "ctgc.livedata.m"
        {
#line 160 "ctgc.livedata.m"
          return transform_hlds__ctgc__livedata__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, ((MR_Box) (transform_hlds__ctgc__livedata__V_5_5)), transform_hlds__ctgc__livedata__Data_8);
        }
#line 159 "ctgc.livedata.m"
      }
#line 157 "ctgc.livedata.m"
    else
#line 157 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__succeeded = MR_FALSE;
#line 150 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 150 "ctgc.livedata.m"
  }
#line 62 "ctgc.livedata.m"
}

#line 147 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1,
#line 147 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2)
#line 147 "ctgc.livedata.m"
{
#line 147 "ctgc.livedata.m"
  {
#line 147 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_3;
#line 147 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 147 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_LiveData_10;

#line 147 "ctgc.livedata.m"
    {
#line 147 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_LiveData_10 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_2));
    }
#line 147 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_LiveData_10));
#line 147 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_3;
#line 147 "ctgc.livedata.m"
  }
#line 147 "ctgc.livedata.m"
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
#line 147 "ctgc.livedata.m"
  {
#line 147 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 147 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__4_4;
#line 147 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0;
#line 147 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_8_8;
#line 147 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__conv1_HeadVar__4_4;

#line 147 "ctgc.livedata.m"
    {
#line 147 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 147 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0]));
#line 147 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1));
#line 147 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 147 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 3) = ((MR_Box) (transform_hlds__ctgc__livedata__ModuleInfo_5));
#line 147 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__livedata__V_8_8, 4) = ((MR_Box) (transform_hlds__ctgc__livedata__ProcInfo_6));
#line 147 "ctgc.livedata.m"
    }
#line 147 "ctgc.livedata.m"
    {
#line 147 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0(transform_hlds__ctgc__livedata__TypeCtorInfo_10_10, transform_hlds__ctgc__livedata__TypeCtorInfo_10_10, transform_hlds__ctgc__livedata__V_8_8, transform_hlds__ctgc__livedata__LiveDataList_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 147 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__HeadVar__4_4 = ((MR_Word) transform_hlds__ctgc__livedata__conv1_HeadVar__4_4);
#line 147 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__4_4;
#line 147 "ctgc.livedata.m"
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
#line 125 "ctgc.livedata.m"
  {
#line 125 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 125 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__LiveData_10;

#line 125 "ctgc.livedata.m"
#line 125 "ctgc.livedata.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData1_8)) {
#line 125 "ctgc.livedata.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 125 "ctgc.livedata.m"
      case (MR_Integer) 0:
#line 125 "ctgc.livedata.m"
#line 125 "ctgc.livedata.m"
        switch (MR_unmkbody(transform_hlds__ctgc__livedata__LiveData1_8)) {
#line 125 "ctgc.livedata.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 125 "ctgc.livedata.m"
          case (MR_Integer) 0:
#line 126 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__LiveData_10 = transform_hlds__ctgc__livedata__LiveData2_9;
#line 125 "ctgc.livedata.m"
            break;
#line 125 "ctgc.livedata.m"
          case (MR_Integer) 1:
#line 129 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 125 "ctgc.livedata.m"
            break;
#line 125 "ctgc.livedata.m"
        }
#line 125 "ctgc.livedata.m"
        break;
#line 125 "ctgc.livedata.m"
      case (MR_Integer) 1:
#line 131 "ctgc.livedata.m"
        {
#line 131 "ctgc.livedata.m"
          MR_Word transform_hlds__ctgc__livedata__Data1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData1_8, (MR_Integer) 0)));

#line 135 "ctgc.livedata.m"
#line 135 "ctgc.livedata.m"
          switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__LiveData2_9)) {
#line 135 "ctgc.livedata.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 135 "ctgc.livedata.m"
            case (MR_Integer) 0:
#line 135 "ctgc.livedata.m"
#line 135 "ctgc.livedata.m"
              switch (MR_unmkbody(transform_hlds__ctgc__livedata__LiveData2_9)) {
#line 135 "ctgc.livedata.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 135 "ctgc.livedata.m"
                case (MR_Integer) 0:
#line 134 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = transform_hlds__ctgc__livedata__LiveData1_8;
#line 135 "ctgc.livedata.m"
                  break;
#line 135 "ctgc.livedata.m"
                case (MR_Integer) 1:
#line 137 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 135 "ctgc.livedata.m"
                  break;
#line 135 "ctgc.livedata.m"
              }
#line 135 "ctgc.livedata.m"
              break;
#line 135 "ctgc.livedata.m"
            case (MR_Integer) 1:
#line 139 "ctgc.livedata.m"
              {
#line 139 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__Data2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData2_9, (MR_Integer) 0)));
#line 139 "ctgc.livedata.m"
                MR_Word transform_hlds__ctgc__livedata__V_13_13;

#line 141 "ctgc.livedata.m"
                {
#line 141 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__V_13_13 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(transform_hlds__ctgc__livedata__ModuleInfo_6, transform_hlds__ctgc__livedata__ProcInfo_7, transform_hlds__ctgc__livedata__Data1_11, transform_hlds__ctgc__livedata__Data2_12);
                }
#line 140 "ctgc.livedata.m"
                {
#line 140 "ctgc.livedata.m"
                  transform_hlds__ctgc__livedata__LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 140 "ctgc.livedata.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__LiveData_10, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_13_13));
#line 140 "ctgc.livedata.m"
                }
#line 139 "ctgc.livedata.m"
              }
#line 135 "ctgc.livedata.m"
              break;
#line 135 "ctgc.livedata.m"
          }
#line 131 "ctgc.livedata.m"
        }
#line 125 "ctgc.livedata.m"
        break;
#line 125 "ctgc.livedata.m"
    }
#line 125 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__LiveData_10;
#line 125 "ctgc.livedata.m"
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
#line 117 "ctgc.livedata.m"
  {
#line 117 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 117 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 117 "ctgc.livedata.m"
#line 117 "ctgc.livedata.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__livedata__HeadVar__1_1)) {
#line 117 "ctgc.livedata.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 117 "ctgc.livedata.m"
      case (MR_Integer) 0:
#line 117 "ctgc.livedata.m"
#line 117 "ctgc.livedata.m"
        switch (MR_unmkbody(transform_hlds__ctgc__livedata__HeadVar__1_1)) {
#line 117 "ctgc.livedata.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 117 "ctgc.livedata.m"
          case (MR_Integer) 0:
#line 117 "ctgc.livedata.m"
            transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 117 "ctgc.livedata.m"
            break;
#line 117 "ctgc.livedata.m"
          case (MR_Integer) 1:
#line 119 "ctgc.livedata.m"
            {
#line 119 "ctgc.livedata.m"
              MR_Box transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 119 "ctgc.livedata.m"
              {
#line 119 "ctgc.livedata.m"
                transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], (MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_get_datastructs\'/1", (MR_String) "livedata_get_datastructs: livedata is top.");
              }
#line 119 "ctgc.livedata.m"
              transform_hlds__ctgc__livedata__HeadVar__2_2 = ((MR_Word) transform_hlds__ctgc__livedata__conv0_HeadVar__2_2);
#line 119 "ctgc.livedata.m"
            }
#line 117 "ctgc.livedata.m"
            break;
#line 117 "ctgc.livedata.m"
        }
#line 117 "ctgc.livedata.m"
        break;
#line 117 "ctgc.livedata.m"
      case (MR_Integer) 1:
#line 118 "ctgc.livedata.m"
        transform_hlds__ctgc__livedata__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__1_1, (MR_Integer) 0)));
#line 117 "ctgc.livedata.m"
        break;
#line 117 "ctgc.livedata.m"
    }
#line 117 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 117 "ctgc.livedata.m"
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
#line 115 "ctgc.livedata.m"
  {
#line 115 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

#line 115 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 115 "ctgc.livedata.m"
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
#line 114 "ctgc.livedata.m"
  {
#line 114 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded = (transform_hlds__ctgc__livedata__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 114 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__succeeded;
#line 114 "ctgc.livedata.m"
  }
#line 45 "ctgc.livedata.m"
}

#line 42 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_as_top_0_f_0(void)
#line 42 "ctgc.livedata.m"
{
#line 112 "ctgc.livedata.m"
  {
#line 112 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 112 "ctgc.livedata.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 112 "ctgc.livedata.m"
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
#line 111 "ctgc.livedata.m"
  {
#line 111 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 111 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;

#line 111 "ctgc.livedata.m"
    {
#line 111 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__Data_3));
#line 111 "ctgc.livedata.m"
    }
#line 111 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 111 "ctgc.livedata.m"
  }
#line 41 "ctgc.livedata.m"
}

#line 109 "ctgc.livedata.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__closure_arg,
#line 109 "ctgc.livedata.m"
  MR_Box transform_hlds__ctgc__livedata__wrapper_arg_1)
#line 109 "ctgc.livedata.m"
{
#line 109 "ctgc.livedata.m"
  {
#line 109 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 109 "ctgc.livedata.m"
    MR_Box transform_hlds__ctgc__livedata__closure = transform_hlds__ctgc__livedata__closure_arg;
#line 109 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__conv0_HeadVar__2_2;

#line 109 "ctgc.livedata.m"
    {
#line 109 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) transform_hlds__ctgc__livedata__wrapper_arg_1));
    }
#line 109 "ctgc.livedata.m"
    transform_hlds__ctgc__livedata__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__livedata__conv0_HeadVar__2_2));
#line 109 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__wrapper_arg_2;
#line 109 "ctgc.livedata.m"
  }
#line 109 "ctgc.livedata.m"
}

#line 40 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0(
#line 40 "ctgc.livedata.m"
  MR_Word transform_hlds__ctgc__livedata__LiveVars_3)
#line 40 "ctgc.livedata.m"
{
#line 108 "ctgc.livedata.m"
  {
#line 108 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;
#line 108 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 108 "ctgc.livedata.m"
    MR_Word transform_hlds__ctgc__livedata__V_4_4;

#line 109 "ctgc.livedata.m"
    {
#line 109 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__V_4_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[1], transform_hlds__ctgc__livedata__LiveVars_3);
    }
#line 109 "ctgc.livedata.m"
    {
#line 109 "ctgc.livedata.m"
      transform_hlds__ctgc__livedata__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "ctgc.livedata.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__livedata__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__livedata__V_4_4));
#line 109 "ctgc.livedata.m"
    }
#line 108 "ctgc.livedata.m"
    return transform_hlds__ctgc__livedata__HeadVar__2_2;
#line 108 "ctgc.livedata.m"
  }
#line 40 "ctgc.livedata.m"
}

#line 39 "ctgc.livedata.m"
MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_0_f_0(void)
#line 39 "ctgc.livedata.m"
{
#line 107 "ctgc.livedata.m"
  {
#line 107 "ctgc.livedata.m"
    MR_bool transform_hlds__ctgc__livedata__succeeded;

#line 107 "ctgc.livedata.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "ctgc.livedata.m"
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
