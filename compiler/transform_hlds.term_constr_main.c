/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module transform_hlds.term_constr_main. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_main__init
ENDINIT
*/

#include "transform_hlds.term_constr_main.mih"


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
#include "hlds.status.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.term_constr_build.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_fixpoint.mih"
#include "transform_hlds.term_constr_initial.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_pass2.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 147 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 150 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 153 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 156 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 159 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 162 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__239__1_2_p_0(
#line 239 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 239 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56);

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__221__1_2_p_0(
#line 221 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 221 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52);

#line 334 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 334 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 334 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 327 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 327 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 327 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 318 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 277 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 277 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);

#line 274 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 274 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 274 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 274 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 209 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 209 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 209 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 199 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 199 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);

#line 153 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 153 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 153 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_5[1][7];




static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 405 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 413 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 421 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 429 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 438 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 447 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 455 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__239__1_2_p_0(
#line 239 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 239 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56)
#line 239 "term_constr_main.m"
{
#line 239 "term_constr_main.m"
  {
#line 239 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 239 "term_constr_main.m"
    {
#line 239 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_45, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_56)));
    }
#line 239 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 239 "term_constr_main.m"
  }
#line 239 "term_constr_main.m"
}

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__221__1_2_p_0(
#line 221 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 221 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52)
#line 221 "term_constr_main.m"
{
#line 221 "term_constr_main.m"
  {
#line 221 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_39, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_52)));
    }
#line 221 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 221 "term_constr_main.m"
  }
#line 221 "term_constr_main.m"
}

#line 334 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 334 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 334 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 334 "term_constr_main.m"
{
#line 336 "term_constr_main.m"
  {
#line 336 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 336 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 336 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 337 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;

#line 337 "term_constr_main.m"
    {
#line 337 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 338 "term_constr_main.m"
    {
#line 338 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 340 "term_constr_main.m"
    {
#line 340 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_9_9;

#line 340 "term_constr_main.m"
      {
#line 340 "term_constr_main.m"
        transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__success_constrs_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
      }
#line 340 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "term_constr_main.m"
    }
#line 341 "term_constr_main.m"
    if (!(transform_hlds__term_constr_main__succeeded))
#line 342 "term_constr_main.m"
      {
#line 342 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8;

#line 342 "term_constr_main.m"
        {
#line 342 "term_constr_main.m"
          transform_hlds__term_constr_main__V_8_8 = transform_hlds__term_constr_main_types__term_status_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
        }
#line 342 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "term_constr_main.m"
      }
#line 336 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 336 "term_constr_main.m"
  }
#line 334 "term_constr_main.m"
}

#line 327 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 327 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 327 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 327 "term_constr_main.m"
{
#line 329 "term_constr_main.m"
  {
#line 329 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 329 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 329 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 329 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 330 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 332 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 330 "term_constr_main.m"
    {
#line 330 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 331 "term_constr_main.m"
    {
#line 331 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 332 "term_constr_main.m"
    {
#line 332 "term_constr_main.m"
      transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__term_status_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
    }
#line 332 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 332 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 332 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 329 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 329 "term_constr_main.m"
  }
#line 327 "term_constr_main.m"
}

#line 318 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 318 "term_constr_main.m"
{
#line 320 "term_constr_main.m"
  {
#line 320 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 320 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 320 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 320 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 321 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 323 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 321 "term_constr_main.m"
    {
#line 321 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 322 "term_constr_main.m"
    {
#line 322 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 323 "term_constr_main.m"
    {
#line 323 "term_constr_main.m"
      transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__success_constrs_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
    }
#line 323 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 323 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 323 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 320 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 320 "term_constr_main.m"
  }
#line 318 "term_constr_main.m"
}

#line 277 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 277 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 277 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14)
#line 277 "term_constr_main.m"
{
#line 280 "term_constr_main.m"
  {
#line 280 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__PredInfo_8;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo0_9;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo0_10;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_11;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_12;
#line 280 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;

#line 281 "term_constr_main.m"
    {
#line 281 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__PPId_6, &transform_hlds__term_constr_main__PredInfo_8, &transform_hlds__term_constr_main__ProcInfo0_9);
    }
#line 282 "term_constr_main.m"
    {
#line 282 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__TermInfo0_10);
    }
#line 283 "term_constr_main.m"
    {
#line 283 "term_constr_main.m"
      transform_hlds__term_constr_main__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "term_constr_main.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_main__TerminationInfo_5));
#line 283 "term_constr_main.m"
    }
#line 283 "term_constr_main.m"
    {
#line 283 "term_constr_main.m"
      transform_hlds__term_constr_main__TermInfo_11 = transform_hlds__term_constr_main_types__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_main__TermInfo0_10, transform_hlds__term_constr_main__V_15_15);
    }
#line 284 "term_constr_main.m"
    {
#line 284 "term_constr_main.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_main__TermInfo_11, transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__ProcInfo_12);
    }
#line 285 "term_constr_main.m"
    {
#line 285 "term_constr_main.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__term_constr_main__PPId_6, transform_hlds__term_constr_main__PredInfo_8, transform_hlds__term_constr_main__ProcInfo_12, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);
#line 285 "term_constr_main.m"
      return;
    }
#line 280 "term_constr_main.m"
  }
#line 277 "term_constr_main.m"
}

#line 274 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 274 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 274 "term_constr_main.m"
{
#line 274 "term_constr_main.m"
  {
#line 274 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 274 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 274 "term_constr_main.m"
    {
#line 274 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 274 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14));
#line 274 "term_constr_main.m"
  }
#line 274 "term_constr_main.m"
}

#line 274 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 274 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 274 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 274 "term_constr_main.m"
{
#line 274 "term_constr_main.m"
  {
#line 274 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 274 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 274 "term_constr_main.m"
    {
#line 274 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 274 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 274 "term_constr_main.m"
  }
#line 274 "term_constr_main.m"
}

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 239 "term_constr_main.m"
{
#line 239 "term_constr_main.m"
  {
#line 239 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 239 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 239 "term_constr_main.m"
    {
#line 239 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__239__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 239 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 239 "term_constr_main.m"
  }
#line 239 "term_constr_main.m"
}

#line 239 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 239 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 239 "term_constr_main.m"
{
#line 239 "term_constr_main.m"
  {
#line 239 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 239 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 239 "term_constr_main.m"
    {
#line 239 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 239 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 239 "term_constr_main.m"
  }
#line 239 "term_constr_main.m"
}

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 221 "term_constr_main.m"
{
#line 221 "term_constr_main.m"
  {
#line 221 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 221 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__221__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 221 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 221 "term_constr_main.m"
  }
#line 221 "term_constr_main.m"
}

#line 221 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 221 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 221 "term_constr_main.m"
{
#line 221 "term_constr_main.m"
  {
#line 221 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 221 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 221 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 221 "term_constr_main.m"
  }
#line 221 "term_constr_main.m"
}

#line 209 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 209 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 209 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 209 "term_constr_main.m"
{
#line 209 "term_constr_main.m"
  {
#line 209 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 209 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 209 "term_constr_main.m"
    {
#line 209 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 209 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 209 "term_constr_main.m"
  }
#line 209 "term_constr_main.m"
}

#line 199 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 199 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 199 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32)
#line 199 "term_constr_main.m"
{
#line 205 "term_constr_main.m"
  {
#line 205 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsAR_17;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildErrors_18;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsArgSize_19;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointErrors_20;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass1Errors_21;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MaybeEarlyPass2Result_22;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_25;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_26;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_35_35;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_39_39;
#line 205 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;

#line 209 "term_constr_main.m"
    {
#line 209 "term_constr_main.m"
      transform_hlds__term_constr_main__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
#line 209 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_1));
#line 209 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31));
#line 209 "term_constr_main.m"
    }
#line 209 "term_constr_main.m"
    {
#line 209 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsAR_17 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_35_35, transform_hlds__term_constr_main__SCC_14);
    }
#line 214 "term_constr_main.m"
    {
#line 214 "term_constr_main.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0(transform_hlds__term_constr_main__DepOrder_10, transform_hlds__term_constr_main__NeedsAR_17, transform_hlds__term_constr_main__BuildOpts_11, &transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      transform_hlds__term_constr_main__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_2));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36));
#line 221 "term_constr_main.m"
    }
#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[1]));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_3));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_39_39));
#line 221 "term_constr_main.m"
    }
#line 221 "term_constr_main.m"
    {
#line 221 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsArgSize_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_38_38, transform_hlds__term_constr_main__NeedsAR_17);
    }
#line 222 "term_constr_main.m"
    {
#line 222 "term_constr_main.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_main__FixpointOpts_12, transform_hlds__term_constr_main__NeedsArgSize_19, (MR_Integer) 1, &transform_hlds__term_constr_main__FixpointErrors_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 227 "term_constr_main.m"
    {
#line 227 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[0], transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__FixpointErrors_20);
    }
#line 231 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__Pass1Errors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "term_constr_main.m"
      transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "term_constr_main.m"
    else
#line 232 "term_constr_main.m"
      {
#line 232 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_42_42;

#line 233 "term_constr_main.m"
        {
#line 233 "term_constr_main.m"
          transform_hlds__term_constr_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 0) = ((MR_Box) (transform_hlds__term_constr_main__Pass1Errors_21));
#line 233 "term_constr_main.m"
        }
#line 233 "term_constr_main.m"
        {
#line 233 "term_constr_main.m"
          transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_42_42));
#line 233 "term_constr_main.m"
        }
#line 232 "term_constr_main.m"
      }
#line 235 "term_constr_main.m"
    {
#line 235 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Globals_25);
    }
#line 236 "term_constr_main.m"
    {
#line 236 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 430, &transform_hlds__term_constr_main__ArgSizeOnly_26);
    }
#line 261 "term_constr_main.m"
#line 261 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__ArgSizeOnly_26) {
#line 261 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 261 "term_constr_main.m"
      case (MR_Integer) 0:
#line 238 "term_constr_main.m"
        {
#line 238 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_15_69;
#line 238 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_16_70;
#line 238 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__NeedsTerm_27;
#line 238 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_44_44;
#line 238 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_45_45;

#line 239 "term_constr_main.m"
          {
#line 239 "term_constr_main.m"
            transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_4));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41));
#line 239 "term_constr_main.m"
          }
#line 239 "term_constr_main.m"
          {
#line 239 "term_constr_main.m"
            transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[1]));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_5));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 239 "term_constr_main.m"
          }
#line 239 "term_constr_main.m"
          {
#line 239 "term_constr_main.m"
            transform_hlds__term_constr_main__NeedsTerm_27 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_44_44, transform_hlds__term_constr_main__NeedsAR_17);
          }
#line 1172 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_15_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1174 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_16_70 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 1176 "transform_hlds.term_constr_main.c"
          if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1178 "transform_hlds.term_constr_main.c"
            {
#line 1180 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 1182 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 1184 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_64_64;
#line 274 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47;

#line 248 "term_constr_main.m"
              {
#line 248 "term_constr_main.m"
                transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0(transform_hlds__term_constr_main__Pass2Opts_13, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Pass2Result_28);
              }
#line 274 "term_constr_main.m"
              {
#line 274 "term_constr_main.m"
                transform_hlds__term_constr_main__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[0]));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_6));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_28));
#line 274 "term_constr_main.m"
              }
#line 274 "term_constr_main.m"
              {
#line 274 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_64_64, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
              }
#line 274 "term_constr_main.m"
              transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47 = ((MR_Word) transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
#line 258 "term_constr_main.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_main__Pass2Result_28)) == (MR_mktag((MR_Integer) 1))))
#line 256 "term_constr_main.m"
                {
#line 256 "term_constr_main.m"
                  MR_Word transform_hlds__term_constr_main__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_28, (MR_Integer) 0)));

#line 257 "term_constr_main.m"
                  {
#line 257 "term_constr_main.m"
                    transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_29, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 257 "term_constr_main.m"
                    return;
                  }
#line 256 "term_constr_main.m"
                }
#line 258 "term_constr_main.m"
              else
#line 259 "term_constr_main.m"
                *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 1235 "transform_hlds.term_constr_main.c"
            }
#line 1237 "transform_hlds.term_constr_main.c"
          else
#line 1239 "transform_hlds.term_constr_main.c"
            {
#line 1241 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 1243 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Errors_72;
#line 1245 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74;
#line 1247 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_75_75;
#line 274 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74;

#line 274 "term_constr_main.m"
              {
#line 274 "term_constr_main.m"
                transform_hlds__term_constr_main__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[0]));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_7));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 274 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_71));
#line 274 "term_constr_main.m"
              }
#line 274 "term_constr_main.m"
              {
#line 274 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_75_75, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
              }
#line 274 "term_constr_main.m"
              transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
#line 256 "term_constr_main.m"
              transform_hlds__term_constr_main__Errors_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_71, (MR_Integer) 0)));
#line 257 "term_constr_main.m"
              {
#line 257 "term_constr_main.m"
                transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_72, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 257 "term_constr_main.m"
                return;
              }
#line 1282 "transform_hlds.term_constr_main.c"
            }
#line 238 "term_constr_main.m"
        }
#line 261 "term_constr_main.m"
        break;
#line 261 "term_constr_main.m"
      case (MR_Integer) 1:
#line 262 "term_constr_main.m"
        *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;
#line 261 "term_constr_main.m"
        break;
#line 261 "term_constr_main.m"
    }
#line 205 "term_constr_main.m"
  }
#line 199 "term_constr_main.m"
}

#line 153 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 153 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 153 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 153 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5)
#line 153 "term_constr_main.m"
{
#line 153 "term_constr_main.m"
  {
#line 153 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32;

#line 153 "term_constr_main.m"
    {
#line 153 "term_constr_main.m"
      transform_hlds__term_constr_main__analyse_scc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32);
    }
#line 153 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32));
#line 153 "term_constr_main.m"
  }
#line 153 "term_constr_main.m"
}

#line 81 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0(
#line 81 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20,
#line 81 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21)
#line 81 "term_constr_main.m"
{
#line 116 "term_constr_main.m"
  {
#line 116 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_7;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Norm_8;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FunctorInfo_9;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Fail_10;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_11;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildOptions_12;
#line 116 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__MaxSize_13;
#line 116 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CutOff_14;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Widening_15;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointOptions_16;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass2Options_17;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__DepInfo_18;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__SCCs_19;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_31_31;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_48;
#line 116 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MakeOptInt_49;
#line 153 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 153 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33;

#line 121 "term_constr_main.m"
    {
#line 121 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__Globals_7);
    }
#line 122 "term_constr_main.m"
    {
#line 122 "term_constr_main.m"
      libs__globals__get_termination2_norm_2_p_0(transform_hlds__term_constr_main__Globals_7, &transform_hlds__term_constr_main__Norm_8);
    }
#line 123 "term_constr_main.m"
    {
#line 123 "term_constr_main.m"
      transform_hlds__term_constr_main__FunctorInfo_9 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_main__Norm_8);
    }
#line 124 "term_constr_main.m"
    {
#line 124 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 431, &transform_hlds__term_constr_main__Fail_10);
    }
#line 125 "term_constr_main.m"
    {
#line 125 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 430, &transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 126 "term_constr_main.m"
    {
#line 126 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_12 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_9, transform_hlds__term_constr_main__Fail_10, transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 133 "term_constr_main.m"
    {
#line 133 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 432, &transform_hlds__term_constr_main__MaxSize_13);
    }
#line 134 "term_constr_main.m"
    {
#line 134 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 429, &transform_hlds__term_constr_main__CutOff_14);
    }
#line 137 "term_constr_main.m"
    transform_hlds__term_constr_main__Widening_15 = (MR_Word) transform_hlds__term_constr_main__CutOff_14;
#line 138 "term_constr_main.m"
    {
#line 138 "term_constr_main.m"
      transform_hlds__term_constr_main__FixpointOptions_16 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(transform_hlds__term_constr_main__Widening_15, transform_hlds__term_constr_main__MaxSize_13);
    }
#line 142 "term_constr_main.m"
    {
#line 142 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass2Options_17 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(transform_hlds__term_constr_main__MaxSize_13);
    }
#line 147 "term_constr_main.m"
    {
#line 147 "term_constr_main.m"
      transform_hlds__term_constr_initial__preprocess_module_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 150 "term_constr_main.m"
    {
#line 150 "term_constr_main.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 151 "term_constr_main.m"
    {
#line 151 "term_constr_main.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__term_constr_main__DepInfo_18);
    }
#line 152 "term_constr_main.m"
    {
#line 152 "term_constr_main.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__DepInfo_18, &transform_hlds__term_constr_main__SCCs_19);
    }
#line 153 "term_constr_main.m"
    {
#line 153 "term_constr_main.m"
      transform_hlds__term_constr_main__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_main__pass_4_p_0_1));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 3) = ((MR_Box) (transform_hlds__term_constr_main__SCCs_19));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 4) = ((MR_Box) (transform_hlds__term_constr_main__BuildOptions_12));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 5) = ((MR_Box) (transform_hlds__term_constr_main__FixpointOptions_16));
#line 153 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 6) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Options_17));
#line 153 "term_constr_main.m"
    }
#line 153 "term_constr_main.m"
    {
#line 153 "term_constr_main.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_31_31, transform_hlds__term_constr_main__SCCs_19, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33);
    }
#line 153 "term_constr_main.m"
    *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21);
#line 297 "term_constr_main.m"
    {
#line 297 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21, &transform_hlds__term_constr_main__Globals_48);
    }
#line 298 "term_constr_main.m"
    {
#line 298 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_48, (MR_Integer) 87, &transform_hlds__term_constr_main__MakeOptInt_49);
    }
#line 303 "term_constr_main.m"
#line 303 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__MakeOptInt_49) {
#line 303 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 303 "term_constr_main.m"
      case (MR_Integer) 0:
#line 304 "term_constr_main.m"
        {
#line 304 "term_constr_main.m"
        }
#line 303 "term_constr_main.m"
        break;
#line 303 "term_constr_main.m"
      case (MR_Integer) 1:
#line 302 "term_constr_main.m"
        {
#line 302 "term_constr_main.m"
          transform_hlds__intermod__append_termination2_pragmas_to_opt_file_3_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21);
#line 302 "term_constr_main.m"
          return;
        }
#line 303 "term_constr_main.m"
        break;
#line 303 "term_constr_main.m"
    }
#line 116 "term_constr_main.m"
  }
#line 81 "term_constr_main.m"
}

void mercury__transform_hlds__term_constr_main__init(void)
{
}

void mercury__transform_hlds__term_constr_main__init_type_tables(void)
{
}

void mercury__transform_hlds__term_constr_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_main. */
