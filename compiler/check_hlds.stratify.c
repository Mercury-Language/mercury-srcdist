/*
** Automatically generated from `stratify.m'
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


/* :- module check_hlds.stratify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#include "check_hlds.stratify.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2];

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2];

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4];

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0;

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1];

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1];

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__PPId_8,
  MR_Word check_hlds__stratify__Context_9,
  MR_String check_hlds__stratify__Message_10,
  MR_Word check_hlds__stratify__ErrorOrWarning_11);

static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word check_hlds__stratify__Goal_9,
  MR_Word check_hlds__stratify__Negated_10,
  MR_Word check_hlds__stratify__WholeScc_11,
  MR_Word check_hlds__stratify__ThisPredProcId_12,
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
  MR_Word check_hlds__stratify__ModuleInfo_14,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67);

static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
  MR_Word check_hlds__stratify__Warn_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word * check_hlds__stratify__PredId_3);

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
  MR_Box check_hlds__stratify__closure_arg,
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box * check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3);


static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "bottom-up evaluation of the predicate/function."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "itself in a negated context. This can cause problems for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the given predicate/function that allows it to call"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A non-stratified loop is a loop in the call graph"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[11])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__stratify_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__stratify_scalar_common_3[0])),
    ((MR_Box) (check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____call_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____call_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "call_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
  (MR_String) "does_not_calls_higher_order",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
  (MR_String) "calls_higher_order",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____calls_higher_order_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____calls_higher_order_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "calls_higher_order",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0 = {
  (MR_String) "is_error",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1 = {
  (MR_String) "is_warning",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____error_or_warning_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____error_or_warning_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "error_or_warning",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
  (MR_String) "ho_in",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
  (MR_String) "ho_out",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
  (MR_String) "ho_in_out",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
  (MR_String) "ho_none",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____ho_in_out_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_in_out_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_in_out",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____ho_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0
};

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 = {
  (MR_String) "strat_ho_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____strat_ho_info_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____strat_ho_info_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "strat_ho_info",
  {     check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0 },
  {     check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0
};

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____call_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____calls_higher_order_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____error_or_warning_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____ho_in_out_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____ho_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____strat_ho_info_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__CastX_9 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__CastY_10 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_9 == check_hlds__stratify__CastY_10);
    if (check_hlds__stratify__succeeded)
      *check_hlds__stratify__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], &check_hlds__stratify__V_8_8, ((MR_Box) (check_hlds__stratify__V_4_4)), ((MR_Box) (check_hlds__stratify__V_6_6)));
        }
        check_hlds__stratify__succeeded = (check_hlds__stratify__V_8_8 == (MR_Integer) 0);
        check_hlds__stratify__succeeded = !(check_hlds__stratify__succeeded);
        if (check_hlds__stratify__succeeded)
          *check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__V_8_8;
        else
          {
            MR_Integer check_hlds__stratify__V_13_13 = (MR_Integer) check_hlds__stratify__V_5_5;
            MR_Integer check_hlds__stratify__V_14_14 = (MR_Integer) check_hlds__stratify__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__V_13_13, check_hlds__stratify__V_14_14);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__CastX_7 = (MR_Integer) check_hlds__stratify__HeadVar__1_1;
    MR_Integer check_hlds__stratify__CastY_8 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;

    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_7 == check_hlds__stratify__CastY_8);
    if (check_hlds__stratify__succeeded)
      check_hlds__stratify__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__stratify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__V_3_3)), ((MR_Box) (check_hlds__stratify__V_5_5)));
        }
        if (check_hlds__stratify__succeeded)
          check_hlds__stratify__succeeded = (check_hlds__stratify__V_4_4 == check_hlds__stratify__V_6_6);
      }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

    {
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

    {
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
    return check_hlds__stratify__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__PPId_8,
  MR_Word check_hlds__stratify__Context_9,
  MR_String check_hlds__stratify__Message_10,
  MR_Word check_hlds__stratify__ErrorOrWarning_11)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Spec_12;
    MR_Word check_hlds__stratify__TypeCtorInfo_63_63;
    MR_Word check_hlds__stratify__PPIdDescription_13;
    MR_Word check_hlds__stratify__Preamble_14;
    MR_Word check_hlds__stratify__ErrOrWarnMsg_15;
    MR_Word check_hlds__stratify__Severity_16;
    MR_Word check_hlds__stratify__MainPieces_17;
    MR_Word check_hlds__stratify__Msg_19;
    MR_Word check_hlds__stratify__V_25_25;
    MR_Word check_hlds__stratify__V_34_34;
    MR_Word check_hlds__stratify__V_35_35;
    MR_Word check_hlds__stratify__V_53_53;
    MR_Word check_hlds__stratify__V_54_54;
    MR_Word check_hlds__stratify__V_55_55;
    MR_Word check_hlds__stratify__V_61_61;

    {
      check_hlds__stratify__PPIdDescription_13 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__stratify__ModuleInfo_7, (MR_Integer) 1, check_hlds__stratify__PPId_8);
    }
    check_hlds__stratify__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__stratify__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__PPIdDescription_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[3]));
    }
    {
      check_hlds__stratify__Preamble_14 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[13]), check_hlds__stratify__V_25_25);
    }
    switch (check_hlds__stratify__ErrorOrWarning_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[14]);
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[15]);
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        }
        break;
    }
    {
      check_hlds__stratify__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 1) = ((MR_Box) (check_hlds__stratify__Message_10));
    }
    {
      check_hlds__stratify__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 0) = ((MR_Box) (check_hlds__stratify__V_35_35));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])));
    }
    {
      check_hlds__stratify__MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 0) = ((MR_Box) (check_hlds__stratify__ErrOrWarnMsg_15));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 1) = ((MR_Box) (check_hlds__stratify__V_34_34));
    }
    {
      check_hlds__stratify__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__Preamble_14, check_hlds__stratify__MainPieces_17);
    }
    {
      check_hlds__stratify__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_54_54, 0) = ((MR_Box) (check_hlds__stratify__V_55_55));
    }
    {
      check_hlds__stratify__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 0) = ((MR_Box) (check_hlds__stratify__V_54_54));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[17])));
    }
    {
      check_hlds__stratify__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 0) = ((MR_Box) (check_hlds__stratify__Context_9));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 1) = ((MR_Box) (check_hlds__stratify__V_53_53));
    }
    {
      check_hlds__stratify__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 0) = ((MR_Box) (check_hlds__stratify__Msg_19));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__stratify__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 0) = ((MR_Box) (check_hlds__stratify__Severity_16));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 2) = ((MR_Box) (check_hlds__stratify__V_61_61));
    }
    return check_hlds__stratify__Spec_12;
  }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
        else
          {
            MR_Word check_hlds__stratify__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 2)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_30_30;
            MR_Word check_hlds__stratify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 1)));

            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_27, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
        else
          {
            MR_Word check_hlds__stratify__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_17, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word check_hlds__stratify__Goal_9,
  MR_Word check_hlds__stratify__Negated_10,
  MR_Word check_hlds__stratify__WholeScc_11,
  MR_Word check_hlds__stratify__ThisPredProcId_12,
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
  MR_Word check_hlds__stratify__ModuleInfo_14,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__stratify__SubGoal_27 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_16), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_27;

                check_hlds__stratify__Negated_10 = (MR_Integer) 1;
                check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__stratify__CPred_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)));
              MR_Integer check_hlds__stratify__CProc_103 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__Callee_104;
              MR_Word check_hlds__stratify___Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
              MR_Word check_hlds__stratify___UC_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
              MR_Word check_hlds__stratify___Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
              MR_Word check_hlds__stratify__TypeCtorInfo_92_94;

              {
                check_hlds__stratify__Callee_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 0) = ((MR_Box) (check_hlds__stratify__CPred_102));
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 1) = ((MR_Box) (check_hlds__stratify__CProc_103));
              }
              check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
              if (check_hlds__stratify__succeeded)
                {
                  check_hlds__stratify__TypeCtorInfo_92_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                  {
                    check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_94, ((MR_Box) (check_hlds__stratify__Callee_104)), check_hlds__stratify__WholeScc_11);
                  }
                }
              if (check_hlds__stratify__succeeded)
                {
                  MR_Word check_hlds__stratify__Context_95;
                  MR_Word check_hlds__stratify__Spec_97;

                  {
                    check_hlds__stratify__Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                  }
                  {
                    check_hlds__stratify__Spec_97 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_95, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_97));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
                  }
                }
              else
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__stratify__CPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Integer check_hlds__stratify__CProc_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Callee_42;
                  MR_Word check_hlds__stratify___Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
                  MR_Word check_hlds__stratify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 6)));
                  MR_Word check_hlds__stratify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 7)));
                  MR_Word check_hlds__stratify__TypeCtorInfo_92_92;

                  {
                    check_hlds__stratify__Callee_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 0) = ((MR_Box) (check_hlds__stratify__CPred_31));
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 1) = ((MR_Box) (check_hlds__stratify__CProc_32));
                  }
                  check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                      {
                        check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_92, ((MR_Box) (check_hlds__stratify__Callee_42)), check_hlds__stratify__WholeScc_11);
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    {
                      MR_Word check_hlds__stratify__Context_43;
                      MR_Word check_hlds__stratify__Spec_45;

                      {
                        check_hlds__stratify__Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                      }
                      {
                        check_hlds__stratify__Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_43, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_45));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
                      }
                    }
                  else
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__stratify__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_19, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__stratify__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_93, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__stratify__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify___Fail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));

                  {
                    check_hlds__stratify__first_order_check_cases_8_p_0(check_hlds__stratify__Cases_22, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__stratify__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__FGT_30;
                  MR_Word check_hlds__stratify__V_29_29;

                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 1)));
                      check_hlds__stratify__FGT_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 2)));
                      switch (check_hlds__stratify__FGT_30) {
                        default:
                          check_hlds__stratify__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_84;

                        check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__stratify__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_79_79;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_80_80;
                  MR_Word check_hlds__stratify___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Cond_24, (MR_Integer) 1, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_79_79);
                  }
                  {
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Then_25, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_79_79, &check_hlds__stratify__STATE_VARIABLE_Specs_80_80);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__Else_26;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66 = check_hlds__stratify__STATE_VARIABLE_Specs_80_80;

                    check_hlds__stratify__STATE_VARIABLE_Specs_0_66 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66;
                    check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__stratify__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_54)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.first_order_check_goal\'/8", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__stratify__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 4)));
                        MR_Word check_hlds__stratify__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 5)));
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_72_72;
                        MR_Word check_hlds__stratify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));
                        MR_Word check_hlds__stratify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 3)));
                        MR_Word check_hlds__stratify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 6)));

                        {
                          check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__MainGoal_59, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_72_72);
                        }
                        {
                          check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__OrElseGoals_60, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_72_72, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__stratify__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_89;

                          check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word check_hlds__stratify__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 0)));
            MR_Integer check_hlds__stratify__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredInfo_21;
            MR_Word check_hlds__stratify__ProcTable_22;
            MR_Word check_hlds__stratify__Proc_23;
            MR_Word check_hlds__stratify__Goal_24;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_28_28;
            MR_Box check_hlds__stratify__conv0_Proc_23;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_21);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__stratify__PredInfo_21, &check_hlds__stratify__ProcTable_22);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_22, check_hlds__stratify__ProcId_20, &check_hlds__stratify__conv0_Proc_23);
            }
            check_hlds__stratify__Proc_23 = ((MR_Word) check_hlds__stratify__conv0_Proc_23);
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__Proc_23, &check_hlds__stratify__Goal_24);
            }
            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_24, (MR_Integer) 0, check_hlds__stratify__HeadVar__2_2, check_hlds__stratify__PredProcId_13, check_hlds__stratify__ErrorOrWarning_3, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Remaining_14;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_28_28;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
  MR_Word check_hlds__stratify__Warn_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            MR_Word check_hlds__stratify__HeadSCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__TailSCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__HeadSCCProcs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__HeadSCCPreds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__MustBeStratifiedPredsInScc_21;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

            {
              mercury__set__intersect_3_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__HeadSCCPreds_20, check_hlds__stratify__MustBeStratifiedPreds_2, &check_hlds__stratify__MustBeStratifiedPredsInScc_21);
            }
            check_hlds__stratify__succeeded = (check_hlds__stratify__Warn_3 == (MR_Integer) 1);
            if (!(check_hlds__stratify__succeeded))
              {
                check_hlds__stratify__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__MustBeStratifiedPredsInScc_21);
              }
            if (check_hlds__stratify__succeeded)
              {
                {
                  check_hlds__stratify__first_order_check_scc_2_6_p_0(check_hlds__stratify__HeadSCCProcs_19, check_hlds__stratify__HeadSCCProcs_19, (MR_Integer) 1, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_25_25);
                }
              }
            else
              check_hlds__stratify__STATE_VARIABLE_Specs_25_25 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__TailSCCs_14;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word * check_hlds__stratify__PredId_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__V_4_4;

    *check_hlds__stratify__PredId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
    check_hlds__stratify__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
  MR_Box check_hlds__stratify__closure_arg,
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box * check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_Box check_hlds__stratify__closure = check_hlds__stratify__closure_arg;
    MR_Word check_hlds__stratify__conv0_PredId_3;

    {
      check_hlds__stratify__get_proc_id_2_p_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), &check_hlds__stratify__conv0_PredId_3);
    }
    *check_hlds__stratify__wrapper_arg_2 = ((MR_Box) (check_hlds__stratify__conv0_PredId_3));
  }
}

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_DepList_3 = check_hlds__stratify__STATE_VARIABLE_DepList_0_2;
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word check_hlds__stratify__TypeCtorInfo_22_22;
            MR_Word check_hlds__stratify__PredProcSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__PredProcSets_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredProcList_10;
            MR_Word check_hlds__stratify__ProcList_11;
            MR_Word check_hlds__stratify__ProcSet_12;
            MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_16_16;
            MR_Word check_hlds__stratify__V_17_17;

            {
              mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__PredProcSet_7, &check_hlds__stratify__PredProcList_10);
            }
            check_hlds__stratify__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__list__map_3_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__TypeCtorInfo_22_22, (MR_Word) &check_hlds__stratify_scalar_common_2[2], check_hlds__stratify__PredProcList_10, &check_hlds__stratify__ProcList_11);
            }
            {
              mercury__set__list_to_set_2_p_0(check_hlds__stratify__TypeCtorInfo_22_22, check_hlds__stratify__ProcList_11, &check_hlds__stratify__ProcSet_12);
            }
            {
              check_hlds__stratify__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 0) = ((MR_Box) (check_hlds__stratify__PredProcList_10));
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 1) = ((MR_Box) (check_hlds__stratify__ProcSet_12));
            }
            {
              check_hlds__stratify__STATE_VARIABLE_DepList_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 0) = ((MR_Box) (check_hlds__stratify__V_17_17));
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_DepList_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__PredProcSets_8;
              MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_DepList_16_16;

              check_hlds__stratify__STATE_VARIABLE_DepList_0_2 = check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__stratify__check_module_for_stratification_3_p_0(
  MR_Word check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14,
  MR_Word * check_hlds__stratify__Specs_5)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__TypeCtorInfo_19_19;
    MR_Word check_hlds__stratify__DepInfo_6;
    MR_Word check_hlds__stratify__DepGraph0_7;
    MR_Word check_hlds__stratify__FOSCCs1_8;
    MR_Word check_hlds__stratify__FOSCCs_9;
    MR_Word check_hlds__stratify__Globals_10;
    MR_Word check_hlds__stratify__Warn_11;
    MR_Word check_hlds__stratify__MustBeStratifiedPreds_12;

    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__DepInfo_6);
    }
    check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepInfo_6, &check_hlds__stratify__DepGraph0_7);
    }
    {
      mercury__digraph__atsort_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepGraph0_7, &check_hlds__stratify__FOSCCs1_8);
    }
    {
      check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(check_hlds__stratify__FOSCCs1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__stratify__FOSCCs_9);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__stratify__Globals_10, (MR_Integer) 18, &check_hlds__stratify__Warn_11);
    }
    {
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__MustBeStratifiedPreds_12);
    }
    {
      check_hlds__stratify__first_order_check_sccs_6_p_0(check_hlds__stratify__FOSCCs_9, check_hlds__stratify__MustBeStratifiedPreds_12, check_hlds__stratify__Warn_11, *check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__stratify__Specs_5);
    }
  }
}

void mercury__check_hlds__stratify__init(void)
{
}

void mercury__check_hlds__stratify__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0);
}

void mercury__check_hlds__stratify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.stratify. */
