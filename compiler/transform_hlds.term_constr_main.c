/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 156 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 159 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 162 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__243__1_2_p_0(
#line 243 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_44,
#line 243 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_53);

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__225__1_2_p_0(
#line 225 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_38,
#line 225 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_49);

#line 318 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 318 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 311 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 311 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 311 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 302 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 302 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 302 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 281 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 281 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);

#line 278 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_7(
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 278 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 278 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_6(
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 278 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_5(
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_4(
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_3(
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_2(
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 213 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_1(
#line 213 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 213 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 203 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0(
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 203 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33,
#line 203 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34);

#line 155 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1(
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 155 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 155 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][12];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[1][7];




static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][12] = {
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
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[2][5] = {
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

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 403 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 411 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 419 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 427 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 435 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 444 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 452 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__243__1_2_p_0(
#line 243 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_44,
#line 243 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_53)
#line 243 "term_constr_main.m"
{
#line 243 "term_constr_main.m"
  {
#line 243 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 243 "term_constr_main.m"
    {
#line 243 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_44, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_53)));
    }
#line 243 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 243 "term_constr_main.m"
  }
#line 243 "term_constr_main.m"
}

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__225__1_2_p_0(
#line 225 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_38,
#line 225 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_49)
#line 225 "term_constr_main.m"
{
#line 225 "term_constr_main.m"
  {
#line 225 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_38, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_49)));
    }
#line 225 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 225 "term_constr_main.m"
  }
#line 225 "term_constr_main.m"
}

#line 318 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
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
#line 321 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;

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
#line 324 "term_constr_main.m"
    {
#line 324 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_9_9;

#line 324 "term_constr_main.m"
      {
#line 324 "term_constr_main.m"
        transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
      }
#line 324 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "term_constr_main.m"
    }
#line 325 "term_constr_main.m"
    if (!(transform_hlds__term_constr_main__succeeded))
#line 326 "term_constr_main.m"
      {
#line 326 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8;

#line 326 "term_constr_main.m"
        {
#line 326 "term_constr_main.m"
          transform_hlds__term_constr_main__V_8_8 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
        }
#line 326 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "term_constr_main.m"
      }
#line 320 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 320 "term_constr_main.m"
  }
#line 318 "term_constr_main.m"
}

#line 311 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 311 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 311 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 311 "term_constr_main.m"
{
#line 313 "term_constr_main.m"
  {
#line 313 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 313 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 313 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 313 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 314 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 316 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 314 "term_constr_main.m"
    {
#line 314 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 315 "term_constr_main.m"
    {
#line 315 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 316 "term_constr_main.m"
    {
#line 316 "term_constr_main.m"
      transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
    }
#line 316 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 316 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 316 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 313 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 313 "term_constr_main.m"
  }
#line 311 "term_constr_main.m"
}

#line 302 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 302 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 302 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 302 "term_constr_main.m"
{
#line 304 "term_constr_main.m"
  {
#line 304 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 304 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 304 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 304 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 305 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 307 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 305 "term_constr_main.m"
    {
#line 305 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 306 "term_constr_main.m"
    {
#line 306 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 307 "term_constr_main.m"
    {
#line 307 "term_constr_main.m"
      transform_hlds__term_constr_main__V_9_9 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_main__TermInfo_7);
    }
#line 307 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 307 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 307 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 304 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 304 "term_constr_main.m"
  }
#line 302 "term_constr_main.m"
}

#line 281 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 281 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 281 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14)
#line 281 "term_constr_main.m"
{
#line 284 "term_constr_main.m"
  {
#line 284 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__PredInfo_8;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo0_9;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Term2Info0_10;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Term2Info_11;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_12;
#line 284 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;

#line 285 "term_constr_main.m"
    {
#line 285 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__PPId_6, &transform_hlds__term_constr_main__PredInfo_8, &transform_hlds__term_constr_main__ProcInfo0_9);
    }
#line 286 "term_constr_main.m"
    {
#line 286 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__Term2Info0_10);
    }
#line 287 "term_constr_main.m"
    {
#line 287 "term_constr_main.m"
      transform_hlds__term_constr_main__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_constr_main.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_main__TerminationInfo_5));
#line 287 "term_constr_main.m"
    }
#line 287 "term_constr_main.m"
    {
#line 287 "term_constr_main.m"
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_main__V_15_15, transform_hlds__term_constr_main__Term2Info0_10, &transform_hlds__term_constr_main__Term2Info_11);
    }
#line 288 "term_constr_main.m"
    {
#line 288 "term_constr_main.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_main__Term2Info_11, transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__ProcInfo_12);
    }
#line 289 "term_constr_main.m"
    {
#line 289 "term_constr_main.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__term_constr_main__PPId_6, transform_hlds__term_constr_main__PredInfo_8, transform_hlds__term_constr_main__ProcInfo_12, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);
#line 289 "term_constr_main.m"
      return;
    }
#line 284 "term_constr_main.m"
  }
#line 281 "term_constr_main.m"
}

#line 278 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_7(
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 278 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 278 "term_constr_main.m"
{
#line 278 "term_constr_main.m"
  {
#line 278 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 278 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 278 "term_constr_main.m"
    {
#line 278 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 278 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14));
#line 278 "term_constr_main.m"
  }
#line 278 "term_constr_main.m"
}

#line 278 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_6(
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 278 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 278 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 278 "term_constr_main.m"
{
#line 278 "term_constr_main.m"
  {
#line 278 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 278 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 278 "term_constr_main.m"
    {
#line 278 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 278 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 278 "term_constr_main.m"
  }
#line 278 "term_constr_main.m"
}

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_5(
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 243 "term_constr_main.m"
{
#line 243 "term_constr_main.m"
  {
#line 243 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 243 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 243 "term_constr_main.m"
    {
#line 243 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__243__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 243 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 243 "term_constr_main.m"
  }
#line 243 "term_constr_main.m"
}

#line 243 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_4(
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 243 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 243 "term_constr_main.m"
{
#line 243 "term_constr_main.m"
  {
#line 243 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 243 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 243 "term_constr_main.m"
    {
#line 243 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 243 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 243 "term_constr_main.m"
  }
#line 243 "term_constr_main.m"
}

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_3(
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 225 "term_constr_main.m"
{
#line 225 "term_constr_main.m"
  {
#line 225 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 225 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__225__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 225 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 225 "term_constr_main.m"
  }
#line 225 "term_constr_main.m"
}

#line 225 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_2(
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 225 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 225 "term_constr_main.m"
{
#line 225 "term_constr_main.m"
  {
#line 225 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 225 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 225 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 225 "term_constr_main.m"
  }
#line 225 "term_constr_main.m"
}

#line 213 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_1(
#line 213 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 213 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 213 "term_constr_main.m"
{
#line 213 "term_constr_main.m"
  {
#line 213 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 213 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 213 "term_constr_main.m"
    {
#line 213 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 213 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 213 "term_constr_main.m"
  }
#line 213 "term_constr_main.m"
}

#line 203 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_9_p_0(
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 203 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32,
#line 203 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33,
#line 203 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34)
#line 203 "term_constr_main.m"
{
#line 209 "term_constr_main.m"
  {
#line 209 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsAR_17;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildErrors_18;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsArgSize_19;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointErrors_20;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass1Errors_21;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MaybeEarlyPass2Result_22;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_25;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_26;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_35_35;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_37_37;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;
#line 209 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40;

#line 213 "term_constr_main.m"
    {
#line 213 "term_constr_main.m"
      transform_hlds__term_constr_main__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 213 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 213 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_1));
#line 213 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 213 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31));
#line 213 "term_constr_main.m"
    }
#line 213 "term_constr_main.m"
    {
#line 213 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsAR_17 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_47_47, transform_hlds__term_constr_main__V_35_35, transform_hlds__term_constr_main__SCC_14);
    }
#line 218 "term_constr_main.m"
    {
#line 218 "term_constr_main.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0(transform_hlds__term_constr_main__DepOrder_10, transform_hlds__term_constr_main__NeedsAR_17, transform_hlds__term_constr_main__BuildOpts_11, &transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_2));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36));
#line 225 "term_constr_main.m"
    }
#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      transform_hlds__term_constr_main__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_37_37, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[1]));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_37_37, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_3));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_37_37, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_38_38));
#line 225 "term_constr_main.m"
    }
#line 225 "term_constr_main.m"
    {
#line 225 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsArgSize_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_47_47, transform_hlds__term_constr_main__V_37_37, transform_hlds__term_constr_main__NeedsAR_17);
    }
#line 226 "term_constr_main.m"
    {
#line 226 "term_constr_main.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_main__FixpointOpts_12, transform_hlds__term_constr_main__NeedsArgSize_19, (MR_Integer) 1, &transform_hlds__term_constr_main__FixpointErrors_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40);
    }
#line 231 "term_constr_main.m"
    {
#line 231 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0, transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__FixpointErrors_20);
    }
#line 235 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__Pass1Errors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "term_constr_main.m"
      transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 235 "term_constr_main.m"
    else
#line 236 "term_constr_main.m"
      {
#line 236 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_41_41;

#line 237 "term_constr_main.m"
        {
#line 237 "term_constr_main.m"
          transform_hlds__term_constr_main__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_41_41, 0) = ((MR_Box) (transform_hlds__term_constr_main__Pass1Errors_21));
#line 237 "term_constr_main.m"
        }
#line 237 "term_constr_main.m"
        {
#line 237 "term_constr_main.m"
          transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_41_41));
#line 237 "term_constr_main.m"
        }
#line 236 "term_constr_main.m"
      }
#line 239 "term_constr_main.m"
    {
#line 239 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40, &transform_hlds__term_constr_main__Globals_25);
    }
#line 240 "term_constr_main.m"
    {
#line 240 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 421, &transform_hlds__term_constr_main__ArgSizeOnly_26);
    }
#line 265 "term_constr_main.m"
#line 265 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__ArgSizeOnly_26) {
#line 265 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "term_constr_main.m"
      case (MR_Integer) 0:
#line 242 "term_constr_main.m"
        {
#line 242 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_15_66;
#line 242 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_16_67;
#line 242 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__NeedsTerm_27;
#line 242 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_43_43;
#line 242 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_44_44;

#line 243 "term_constr_main.m"
          {
#line 243 "term_constr_main.m"
            transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_4));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40));
#line 243 "term_constr_main.m"
          }
#line 243 "term_constr_main.m"
          {
#line 243 "term_constr_main.m"
            transform_hlds__term_constr_main__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_43_43, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[1]));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_43_43, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_5));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 243 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_43_43, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_44_44));
#line 243 "term_constr_main.m"
          }
#line 243 "term_constr_main.m"
          {
#line 243 "term_constr_main.m"
            transform_hlds__term_constr_main__NeedsTerm_27 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_47_47, transform_hlds__term_constr_main__V_43_43, transform_hlds__term_constr_main__NeedsAR_17);
          }
#line 1173 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_15_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 1175 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_16_67 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 1177 "transform_hlds.term_constr_main.c"
          if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "transform_hlds.term_constr_main.c"
            {
#line 1181 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 1183 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_61_61;
#line 278 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32;

#line 252 "term_constr_main.m"
              {
#line 252 "term_constr_main.m"
                transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(transform_hlds__term_constr_main__Pass2Opts_13, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40, &transform_hlds__term_constr_main__Pass2Result_28);
              }
#line 278 "term_constr_main.m"
              {
#line 278 "term_constr_main.m"
                transform_hlds__term_constr_main__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_61_61, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_61_61, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_6));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_61_61, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_28));
#line 278 "term_constr_main.m"
              }
#line 278 "term_constr_main.m"
              {
#line 278 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_66, transform_hlds__term_constr_main__TypeCtorInfo_16_67, transform_hlds__term_constr_main__V_61_61, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32);
              }
#line 278 "term_constr_main.m"
              *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32);
#line 262 "term_constr_main.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_main__Pass2Result_28)) == (MR_mktag((MR_Integer) 1))))
#line 260 "term_constr_main.m"
                {
#line 260 "term_constr_main.m"
                  MR_Word transform_hlds__term_constr_main__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_28, (MR_Integer) 0)));

#line 261 "term_constr_main.m"
                  {
#line 261 "term_constr_main.m"
                    transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_29, transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33, transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34);
#line 261 "term_constr_main.m"
                    return;
                  }
#line 260 "term_constr_main.m"
                }
#line 262 "term_constr_main.m"
              else
#line 263 "term_constr_main.m"
                *transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34 = transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33;
#line 1234 "transform_hlds.term_constr_main.c"
            }
#line 1236 "transform_hlds.term_constr_main.c"
          else
#line 1238 "transform_hlds.term_constr_main.c"
            {
#line 1240 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 1242 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Errors_69;
#line 1244 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_70_70;
#line 278 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_32;

#line 278 "term_constr_main.m"
              {
#line 278 "term_constr_main.m"
                transform_hlds__term_constr_main__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_70_70, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_70_70, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_9_p_0_7));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_70_70, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_68));
#line 278 "term_constr_main.m"
              }
#line 278 "term_constr_main.m"
              {
#line 278 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_66, transform_hlds__term_constr_main__TypeCtorInfo_16_67, transform_hlds__term_constr_main__V_70_70, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_32);
              }
#line 278 "term_constr_main.m"
              *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_32);
#line 260 "term_constr_main.m"
              transform_hlds__term_constr_main__Errors_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_68, (MR_Integer) 0)));
#line 261 "term_constr_main.m"
              {
#line 261 "term_constr_main.m"
                transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_69, transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33, transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34);
#line 261 "term_constr_main.m"
                return;
              }
#line 1279 "transform_hlds.term_constr_main.c"
            }
#line 242 "term_constr_main.m"
        }
#line 265 "term_constr_main.m"
        break;
#line 265 "term_constr_main.m"
      case (MR_Integer) 1:
#line 266 "term_constr_main.m"
        {
#line 266 "term_constr_main.m"
          *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_40_40;
#line 266 "term_constr_main.m"
          *transform_hlds__term_constr_main__STATE_VARIABLE_Specs_34 = transform_hlds__term_constr_main__STATE_VARIABLE_Specs_0_33;
#line 266 "term_constr_main.m"
        }
#line 265 "term_constr_main.m"
        break;
#line 265 "term_constr_main.m"
    }
#line 209 "term_constr_main.m"
  }
#line 203 "term_constr_main.m"
}

#line 155 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1(
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 155 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 155 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 155 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5)
#line 155 "term_constr_main.m"
{
#line 155 "term_constr_main.m"
  {
#line 155 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32;
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_Specs_34;

#line 155 "term_constr_main.m"
    {
#line 155 "term_constr_main.m"
      transform_hlds__term_constr_main__term2_analyse_scc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_4), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_Specs_34);
    }
#line 155 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_32));
#line 155 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_Specs_34));
#line 155 "term_constr_main.m"
  }
#line 155 "term_constr_main.m"
}

#line 82 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0(
#line 82 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_21,
#line 82 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_22,
#line 82 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__Specs_5)
#line 82 "term_constr_main.m"
{
#line 117 "term_constr_main.m"
  {
#line 117 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_6;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Norm_7;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FunctorInfo_8;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Fail_9;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_10;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildOptions_11;
#line 117 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__MaxSize_12;
#line 117 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CutOff_13;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Widening_14;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointOptions_15;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass2Options_16;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__DepInfo_17;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__SCCs_18;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcAnalysisKinds0_19;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcAnalysisKinds_20;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_27_27;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_29_29;
#line 117 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30;
#line 154 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_30_30;
#line 154 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv2_Specs_5;

#line 122 "term_constr_main.m"
    {
#line 122 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__term_constr_main__Globals_6);
    }
#line 123 "term_constr_main.m"
    {
#line 123 "term_constr_main.m"
      libs__globals__get_termination2_norm_2_p_0(transform_hlds__term_constr_main__Globals_6, &transform_hlds__term_constr_main__Norm_7);
    }
#line 124 "term_constr_main.m"
    {
#line 124 "term_constr_main.m"
      transform_hlds__term_constr_main__FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__term_constr_main__Norm_7);
    }
#line 125 "term_constr_main.m"
    {
#line 125 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 422, &transform_hlds__term_constr_main__Fail_9);
    }
#line 126 "term_constr_main.m"
    {
#line 126 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 421, &transform_hlds__term_constr_main__ArgSizeOnly_10);
    }
#line 127 "term_constr_main.m"
    {
#line 127 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_11 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_8, transform_hlds__term_constr_main__Fail_9, transform_hlds__term_constr_main__ArgSizeOnly_10);
    }
#line 134 "term_constr_main.m"
    {
#line 134 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 423, &transform_hlds__term_constr_main__MaxSize_12);
    }
#line 135 "term_constr_main.m"
    {
#line 135 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 420, &transform_hlds__term_constr_main__CutOff_13);
    }
#line 138 "term_constr_main.m"
    transform_hlds__term_constr_main__Widening_14 = (MR_Word) transform_hlds__term_constr_main__CutOff_13;
#line 139 "term_constr_main.m"
    {
#line 139 "term_constr_main.m"
      transform_hlds__term_constr_main__FixpointOptions_15 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(transform_hlds__term_constr_main__Widening_14, transform_hlds__term_constr_main__MaxSize_12);
    }
#line 143 "term_constr_main.m"
    {
#line 143 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass2Options_16 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(transform_hlds__term_constr_main__MaxSize_12);
    }
#line 148 "term_constr_main.m"
    {
#line 148 "term_constr_main.m"
      transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 151 "term_constr_main.m"
    {
#line 151 "term_constr_main.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 152 "term_constr_main.m"
    {
#line 152 "term_constr_main.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__term_constr_main__DepInfo_17);
    }
#line 153 "term_constr_main.m"
    {
#line 153 "term_constr_main.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__DepInfo_17, &transform_hlds__term_constr_main__SCCs_18);
    }
#line 155 "term_constr_main.m"
    {
#line 155 "term_constr_main.m"
      transform_hlds__term_constr_main__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[0]));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 3) = ((MR_Box) (transform_hlds__term_constr_main__SCCs_18));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 4) = ((MR_Box) (transform_hlds__term_constr_main__BuildOptions_11));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 5) = ((MR_Box) (transform_hlds__term_constr_main__FixpointOptions_15));
#line 155 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_29_29, 6) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Options_16));
#line 155 "term_constr_main.m"
    }
#line 154 "term_constr_main.m"
    {
#line 154 "term_constr_main.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1], transform_hlds__term_constr_main__V_29_29, transform_hlds__term_constr_main__SCCs_18, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_30_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_main__conv2_Specs_5);
    }
#line 154 "term_constr_main.m"
    transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_30_30);
#line 154 "term_constr_main.m"
    *transform_hlds__term_constr_main__Specs_5 = ((MR_Word) transform_hlds__term_constr_main__conv2_Specs_5);
#line 159 "term_constr_main.m"
    {
#line 159 "term_constr_main.m"
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__term_constr_main__ProcAnalysisKinds0_19);
    }
#line 160 "term_constr_main.m"
    {
#line 160 "term_constr_main.m"
      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ((MR_Box) ((MR_Integer) 4)), transform_hlds__term_constr_main__ProcAnalysisKinds0_19, &transform_hlds__term_constr_main__ProcAnalysisKinds_20);
    }
#line 161 "term_constr_main.m"
    {
#line 161 "term_constr_main.m"
      hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(transform_hlds__term_constr_main__ProcAnalysisKinds_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_22);
#line 161 "term_constr_main.m"
      return;
    }
#line 117 "term_constr_main.m"
  }
#line 82 "term_constr_main.m"
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
