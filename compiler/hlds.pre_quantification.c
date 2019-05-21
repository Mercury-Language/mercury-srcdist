/*
** Automatically generated from `pre_quantification.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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


/* :- module hlds.pre_quantification. */
/* :- implementation. */

/*
INIT mercury__hlds__pre_quantification__init
ENDINIT
*/

#include "hlds.pre_quantification.mih"


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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3);

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Integer hlds__pre_quantification__HeadVar__2_2,
  MR_Integer hlds__pre_quantification__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0(
  MR_Integer hlds__pre_quantification__HeadVar__1_1,
  MR_Integer hlds__pre_quantification__HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__ZonesToDupVars_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_Case_0_15,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_Case_16,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_18);

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word hlds__pre_quantification__Var_5,
  MR_Integer hlds__pre_quantification__Zone_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_11);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word hlds__pre_quantification__Var_5,
  MR_Word hlds__pre_quantification__Zones_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_13);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__Case_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_15,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_17);

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__ZonesToDupVars_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_Goal_0_100,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_Goal_101,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__Goal_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);

static void MR_CALL 
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Integer hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_4);

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Integer hlds__pre_quantification__Zone_5,
  MR_Word hlds__pre_quantification__Var_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_11);


static /* final */ const MR_Box hlds__pre_quantification_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_4[4][9];

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_5[2][7];




static /* final */ const MR_Box hlds__pre_quantification_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[0])),
    ((MR_Box) (&hlds__pre_quantification_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_3[0])),
    ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_3[0])),
    ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_vars_to_zones_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____vars_to_zones_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____vars_to_zones_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "vars_to_zones",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zone_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zone_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zone_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zone",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zones_to_dup_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zones_to_dup_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;

    {
      hlds__pre_quantification__succeeded = hlds__pre_quantification____Unify____vars_to_zones_0_0(((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2));
    }
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3)
{
  {
    MR_Word hlds__pre_quantification__conv0_HeadVar__1_1;

    {
      hlds__pre_quantification____Compare____vars_to_zones_0_0(&hlds__pre_quantification__conv0_HeadVar__1_1, ((MR_Word) hlds__pre_quantification__wrapper_arg_2), ((MR_Word) hlds__pre_quantification__wrapper_arg_3));
    }
    *hlds__pre_quantification__wrapper_arg_1 = ((MR_Box) (hlds__pre_quantification__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;

    {
      hlds__pre_quantification__succeeded = hlds__pre_quantification____Unify____zone_0_0(((MR_Integer) hlds__pre_quantification__wrapper_arg_1), ((MR_Integer) hlds__pre_quantification__wrapper_arg_2));
    }
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3)
{
  {
    MR_Word hlds__pre_quantification__conv0_HeadVar__1_1;

    {
      hlds__pre_quantification____Compare____zone_0_0(&hlds__pre_quantification__conv0_HeadVar__1_1, ((MR_Integer) hlds__pre_quantification__wrapper_arg_2), ((MR_Integer) hlds__pre_quantification__wrapper_arg_3));
    }
    *hlds__pre_quantification__wrapper_arg_1 = ((MR_Box) (hlds__pre_quantification__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;

    {
      hlds__pre_quantification__succeeded = hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2));
    }
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3)
{
  {
    MR_Word hlds__pre_quantification__conv0_HeadVar__1_1;

    {
      hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(&hlds__pre_quantification__conv0_HeadVar__1_1, ((MR_Word) hlds__pre_quantification__wrapper_arg_2), ((MR_Word) hlds__pre_quantification__wrapper_arg_3));
    }
    *hlds__pre_quantification__wrapper_arg_1 = ((MR_Box) (hlds__pre_quantification__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__HeadVar__3_3)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Cast_HeadVar1_4 = hlds__pre_quantification__HeadVar__2_2;
    MR_Word hlds__pre_quantification__Cast_HeadVar2_5 = hlds__pre_quantification__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_2[0], hlds__pre_quantification__HeadVar__1_1, ((MR_Box) (hlds__pre_quantification__Cast_HeadVar1_4)), ((MR_Box) (hlds__pre_quantification__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Cast_HeadVar1_3 = hlds__pre_quantification__HeadVar__1_1;
    MR_Word hlds__pre_quantification__Cast_HeadVar2_4 = hlds__pre_quantification__HeadVar__2_2;

    {
      hlds__pre_quantification__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pre_quantification_scalar_common_2[0], ((MR_Box) (hlds__pre_quantification__Cast_HeadVar1_3)), ((MR_Box) (hlds__pre_quantification__Cast_HeadVar2_4)));
    }
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Integer hlds__pre_quantification__HeadVar__2_2,
  MR_Integer hlds__pre_quantification__HeadVar__3_3)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Integer hlds__pre_quantification__Cast_HeadVar1_4 = hlds__pre_quantification__HeadVar__2_2;
    MR_Integer hlds__pre_quantification__Cast_HeadVar2_5 = hlds__pre_quantification__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__pre_quantification__HeadVar__1_1, hlds__pre_quantification__Cast_HeadVar1_4, hlds__pre_quantification__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0(
  MR_Integer hlds__pre_quantification__HeadVar__1_1,
  MR_Integer hlds__pre_quantification__HeadVar__2_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Integer hlds__pre_quantification__Cast_HeadVar1_3 = hlds__pre_quantification__HeadVar__1_1;
    MR_Integer hlds__pre_quantification__Cast_HeadVar2_4 = hlds__pre_quantification__HeadVar__2_2;

    hlds__pre_quantification__succeeded = (hlds__pre_quantification__Cast_HeadVar1_3 == hlds__pre_quantification__Cast_HeadVar2_4);
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__HeadVar__3_3)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Cast_HeadVar1_4 = hlds__pre_quantification__HeadVar__2_2;
    MR_Word hlds__pre_quantification__Cast_HeadVar2_5 = hlds__pre_quantification__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_2[1], hlds__pre_quantification__HeadVar__1_1, ((MR_Box) (hlds__pre_quantification__Cast_HeadVar1_4)), ((MR_Box) (hlds__pre_quantification__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Cast_HeadVar1_3 = hlds__pre_quantification__HeadVar__1_1;
    MR_Word hlds__pre_quantification__Cast_HeadVar2_4 = hlds__pre_quantification__HeadVar__2_2;

    {
      hlds__pre_quantification__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__pre_quantification_scalar_common_2[1], ((MR_Box) (hlds__pre_quantification__Cast_HeadVar1_3)), ((MR_Box) (hlds__pre_quantification__Cast_HeadVar2_4)));
    }
    return hlds__pre_quantification__succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__ZonesToDupVars_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_Case_0_15,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_Case_16,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_18)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__STATE_VARIABLE_Case_0_15, (MR_Integer) 0)));
    MR_Word hlds__pre_quantification__OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__STATE_VARIABLE_Case_0_15, (MR_Integer) 1)));
    MR_Word hlds__pre_quantification__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__STATE_VARIABLE_Case_0_15, (MR_Integer) 2)));
    MR_Word hlds__pre_quantification__Goal_14;

    {
      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__Goal0_13, &hlds__pre_quantification__Goal_14, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_17, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pre_quantification__STATE_VARIABLE_Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pre_quantification__MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pre_quantification__OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__pre_quantification__Goal_14));
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word hlds__pre_quantification__Var_5,
  MR_Integer hlds__pre_quantification__Zone_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_11)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__DupVars0_8;
    MR_Box hlds__pre_quantification__conv0_DupVars0_8;

    {
      hlds__pre_quantification__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[2], hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_10, hlds__pre_quantification__Zone_6, &hlds__pre_quantification__conv0_DupVars0_8);
    }
    if (hlds__pre_quantification__succeeded)
      {
        hlds__pre_quantification__DupVars0_8 = ((MR_Word) hlds__pre_quantification__conv0_DupVars0_8);
        hlds__pre_quantification__succeeded = MR_TRUE;
      }
    if (hlds__pre_quantification__succeeded)
      {
        MR_Word hlds__pre_quantification__DupVars_9;

        {
          hlds__pre_quantification__DupVars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pre_quantification__DupVars_9, 0) = ((MR_Box) (hlds__pre_quantification__Var_5));
          MR_hl_field(MR_mktag(1), hlds__pre_quantification__DupVars_9, 1) = ((MR_Box) (hlds__pre_quantification__DupVars0_8));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[2], hlds__pre_quantification__Zone_6, ((MR_Box) (hlds__pre_quantification__DupVars_9)), hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_10, hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_11);
        }
      }
    else
      {
        MR_Word hlds__pre_quantification__Var_13;

        {
          hlds__pre_quantification__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_13, 0) = ((MR_Box) (hlds__pre_quantification__Var_5));
          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[2], hlds__pre_quantification__Zone_6, ((MR_Box) (hlds__pre_quantification__Var_13)), hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_10, hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_11);
        }
      }
  }
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_11;

    {
      hlds__pre_quantification__add_var_to_zone_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Integer) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), &hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_11);
    }
    *hlds__pre_quantification__wrapper_arg_3 = ((MR_Box) (hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_11));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word hlds__pre_quantification__Var_5,
  MR_Word hlds__pre_quantification__Zones_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_13)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__ZoneList_8;
    MR_Integer hlds__pre_quantification__FirstZone_9;
    MR_Word hlds__pre_quantification__Var_14;
    MR_Integer hlds__pre_quantification___SecondZone_10;
    MR_Word hlds__pre_quantification__Var_11;
    MR_Integer hlds__pre_quantification__Var_23;

    {
      hlds__pre_quantification__ZoneList_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0((MR_Word) &hlds__pre_quantification_scalar_common_1[3], hlds__pre_quantification__Zones_6);
    }
    hlds__pre_quantification__succeeded = ((MR_tag((MR_Word) hlds__pre_quantification__ZoneList_8)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__pre_quantification__succeeded)
      {
        hlds__pre_quantification__FirstZone_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ZoneList_8, (MR_Integer) 0)));
        hlds__pre_quantification__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ZoneList_8, (MR_Integer) 1)));
        hlds__pre_quantification__succeeded = ((MR_tag((MR_Word) hlds__pre_quantification__Var_14)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__pre_quantification__succeeded)
          {
            hlds__pre_quantification___SecondZone_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_14, (MR_Integer) 0)));
            hlds__pre_quantification__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_14, (MR_Integer) 1)));
            hlds__pre_quantification__Var_23 = (MR_Integer) 0;
            hlds__pre_quantification__succeeded = (hlds__pre_quantification__FirstZone_9 == hlds__pre_quantification__Var_23);
            hlds__pre_quantification__succeeded = !(hlds__pre_quantification__succeeded);
          }
      }
    if (hlds__pre_quantification__succeeded)
      {
        MR_Word hlds__pre_quantification__Var_15;
        MR_Box hlds__pre_quantification__conv1_STATE_VARIABLE_ZonesToDupVars_13;

        {
          hlds__pre_quantification__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_15, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_15, 1) = ((MR_Box) (hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_15, 3) = ((MR_Box) (hlds__pre_quantification__Var_5));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__pre_quantification_scalar_common_2[0], hlds__pre_quantification__Var_15, hlds__pre_quantification__ZoneList_8, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_12)), &hlds__pre_quantification__conv1_STATE_VARIABLE_ZonesToDupVars_13);
        }
        *hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_13 = ((MR_Word) hlds__pre_quantification__conv1_STATE_VARIABLE_ZonesToDupVars_13);
      }
    else
      *hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_13 = hlds__pre_quantification__STATE_VARIABLE_ZonesToDupVars_0_12;
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__Case_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_15,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_17)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__Case_8, (MR_Integer) 2)));
    MR_Word hlds__pre_quantification___MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__Case_8, (MR_Integer) 0)));
    MR_Word hlds__pre_quantification___OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__Case_8, (MR_Integer) 1)));

    {
      hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Goal_13, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_14, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_15, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_16, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_17);
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_13;

    {
      hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), ((MR_Word) hlds__pre_quantification__wrapper_arg_3), &hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_13);
    }
    *hlds__pre_quantification__wrapper_arg_4 = ((MR_Box) (hlds__pre_quantification__conv0_STATE_VARIABLE_ZonesToDupVars_13));
  }
}

void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(
  MR_Word hlds__pre_quantification__Goal0_3,
  MR_Word * hlds__pre_quantification__Goal_4)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__TypeInfo_16_16 = (MR_Word) &hlds__pre_quantification_scalar_common_1[0];
    MR_Word hlds__pre_quantification__TypeInfo_17_17 = (MR_Word) &hlds__pre_quantification_scalar_common_1[1];
    MR_Word hlds__pre_quantification__TypeCtorInfo_18_18;
    MR_Word hlds__pre_quantification__TypeInfo_19_19;
    MR_Word hlds__pre_quantification__VarsToZones0_5;
    MR_Word hlds__pre_quantification__TraceCounter0_6;
    MR_Word hlds__pre_quantification__VarsToZones_8;
    MR_Word hlds__pre_quantification__ZonesToDupVars0_9;
    MR_Word hlds__pre_quantification__ZonesToDupVars_10;
    MR_Word hlds__pre_quantification__Var_7;
    MR_Box hlds__pre_quantification__conv1_ZonesToDupVars_10;

    {
      mercury__map__init_1_p_0(hlds__pre_quantification__TypeInfo_16_16, hlds__pre_quantification__TypeInfo_17_17, &hlds__pre_quantification__VarsToZones0_5);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 1, &hlds__pre_quantification__TraceCounter0_6);
    }
    {
      hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0((MR_Integer) 0, hlds__pre_quantification__Goal0_3, hlds__pre_quantification__TraceCounter0_6, &hlds__pre_quantification__Var_7, hlds__pre_quantification__VarsToZones0_5, &hlds__pre_quantification__VarsToZones_8);
    }
    hlds__pre_quantification__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    hlds__pre_quantification__TypeInfo_19_19 = (MR_Word) &hlds__pre_quantification_scalar_common_1[2];
    {
      mercury__map__init_1_p_0(hlds__pre_quantification__TypeCtorInfo_18_18, hlds__pre_quantification__TypeInfo_19_19, &hlds__pre_quantification__ZonesToDupVars0_9);
    }
    {
      mercury__map__foldl_4_p_0(hlds__pre_quantification__TypeInfo_16_16, hlds__pre_quantification__TypeInfo_17_17, (MR_Word) &hlds__pre_quantification_scalar_common_2[0], (MR_Word) &hlds__pre_quantification_scalar_common_2[4], hlds__pre_quantification__VarsToZones_8, ((MR_Box) (hlds__pre_quantification__ZonesToDupVars0_9)), &hlds__pre_quantification__conv1_ZonesToDupVars_10);
    }
    hlds__pre_quantification__ZonesToDupVars_10 = ((MR_Word) hlds__pre_quantification__conv1_ZonesToDupVars_10);
    {
      hlds__pre_quantification__succeeded = mercury__map__is_empty_1_p_0(hlds__pre_quantification__TypeCtorInfo_18_18, hlds__pre_quantification__TypeInfo_19_19, hlds__pre_quantification__ZonesToDupVars_10);
    }
    if (hlds__pre_quantification__succeeded)
      *hlds__pre_quantification__Goal_4 = hlds__pre_quantification__Goal0_3;
    else
      {
        MR_Word hlds__pre_quantification__Var_11;

        {
          hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Integer) 0, hlds__pre_quantification__ZonesToDupVars_10, hlds__pre_quantification__Goal0_3, hlds__pre_quantification__Goal_4, hlds__pre_quantification__TraceCounter0_6, &hlds__pre_quantification__Var_11);
        }
      }
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv11_STATE_VARIABLE_Case_16;
    MR_Word hlds__pre_quantification__conv10_STATE_VARIABLE_TraceCounter_18;

    {
      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 4))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), &hlds__pre_quantification__conv11_STATE_VARIABLE_Case_16, ((MR_Word) hlds__pre_quantification__wrapper_arg_3), &hlds__pre_quantification__conv10_STATE_VARIABLE_TraceCounter_18);
    }
    *hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv11_STATE_VARIABLE_Case_16));
    *hlds__pre_quantification__wrapper_arg_4 = ((MR_Box) (hlds__pre_quantification__conv10_STATE_VARIABLE_TraceCounter_18));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv8_STATE_VARIABLE_Goal_101;
    MR_Word hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_103;

    {
      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 4))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), &hlds__pre_quantification__conv8_STATE_VARIABLE_Goal_101, ((MR_Word) hlds__pre_quantification__wrapper_arg_3), &hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_103);
    }
    *hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv8_STATE_VARIABLE_Goal_101));
    *hlds__pre_quantification__wrapper_arg_4 = ((MR_Box) (hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv4_STATE_VARIABLE_Goal_101;
    MR_Word hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_103;

    {
      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 4))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), &hlds__pre_quantification__conv4_STATE_VARIABLE_Goal_101, ((MR_Word) hlds__pre_quantification__wrapper_arg_3), &hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_103);
    }
    *hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv4_STATE_VARIABLE_Goal_101));
    *hlds__pre_quantification__wrapper_arg_4 = ((MR_Box) (hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box * hlds__pre_quantification__wrapper_arg_2,
  MR_Box hlds__pre_quantification__wrapper_arg_3,
  MR_Box * hlds__pre_quantification__wrapper_arg_4)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv1_STATE_VARIABLE_Goal_101;
    MR_Word hlds__pre_quantification__conv0_STATE_VARIABLE_TraceCounter_103;

    {
      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 4))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), &hlds__pre_quantification__conv1_STATE_VARIABLE_Goal_101, ((MR_Word) hlds__pre_quantification__wrapper_arg_3), &hlds__pre_quantification__conv0_STATE_VARIABLE_TraceCounter_103);
    }
    *hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv1_STATE_VARIABLE_Goal_101));
    *hlds__pre_quantification__wrapper_arg_4 = ((MR_Box) (hlds__pre_quantification__conv0_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__ZonesToDupVars_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_Goal_0_100,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_Goal_101,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__STATE_VARIABLE_Goal_0_100, (MR_Integer) 0)));
    MR_Word hlds__pre_quantification__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__STATE_VARIABLE_Goal_0_100, (MR_Integer) 1)));
    MR_Word hlds__pre_quantification__GoalExpr_31;

    switch (MR_tag((MR_Word) hlds__pre_quantification__GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__pre_quantification__SubGoal0_60 = (MR_Word) MR_body(((MR_Word) hlds__pre_quantification__GoalExpr0_11), (MR_Integer) 0);
          MR_Word hlds__pre_quantification__SubGoal_61;

          {
            hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__SubGoal0_60, &hlds__pre_quantification__SubGoal_61, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
          }
          hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__pre_quantification__SubGoal_61);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__pre_quantification__LHSVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 0)));
          MR_Word hlds__pre_quantification__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
          MR_Word hlds__pre_quantification__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 2)));
          MR_Word hlds__pre_quantification__Kind_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 3)));
          MR_Word hlds__pre_quantification__Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) hlds__pre_quantification__RHS0_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                hlds__pre_quantification__GoalExpr_31 = hlds__pre_quantification__GoalExpr0_11;
                *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__pre_quantification__Purity_41 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word hlds__pre_quantification__Groundness_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word hlds__pre_quantification__PredOrFunc_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word hlds__pre_quantification__NonLocals_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 2)));
                MR_Word hlds__pre_quantification__LambdaVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 3)));
                MR_Word hlds__pre_quantification__LambdaModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 4)));
                MR_Word hlds__pre_quantification__Detism_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 5)));
                MR_Word hlds__pre_quantification__LambdaGoal0_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS0_33, (MR_Integer) 6)));
                MR_Word hlds__pre_quantification__LambdaGoal_51;
                MR_Word hlds__pre_quantification__RHS_52;

                {
                  hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Integer) 0, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__LambdaGoal0_49, &hlds__pre_quantification__LambdaGoal_51, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
                }
                {
                  hlds__pre_quantification__RHS_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 0) = ((MR_Box) ((hlds__pre_quantification__Purity_41 | ((((hlds__pre_quantification__Groundness_42 << (MR_Integer) 2)) | ((hlds__pre_quantification__PredOrFunc_43 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 2) = ((MR_Box) (hlds__pre_quantification__NonLocals_45));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 3) = ((MR_Box) (hlds__pre_quantification__LambdaVars_46));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 4) = ((MR_Box) (hlds__pre_quantification__LambdaModes_47));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 5) = ((MR_Box) (hlds__pre_quantification__Detism_48));
                  MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_52, 6) = ((MR_Box) (hlds__pre_quantification__LambdaGoal_51));
                }
                {
                  hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (hlds__pre_quantification__LHSVar_32));
                  MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__RHS_52));
                  MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_31, 2) = ((MR_Box) (hlds__pre_quantification__Mode_34));
                  MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_31, 3) = ((MR_Box) (hlds__pre_quantification__Kind_35));
                  MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_31, 4) = ((MR_Box) (hlds__pre_quantification__Context_36));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__pre_quantification__GoalExpr_31 = hlds__pre_quantification__GoalExpr0_11;
          *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              hlds__pre_quantification__GoalExpr_31 = hlds__pre_quantification__GoalExpr0_11;
              *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__pre_quantification__TypeCtorInfo_138_138;
              MR_Word hlds__pre_quantification__ConjType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__SubGoals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification__SubGoals_55;
              MR_Word hlds__pre_quantification__Var_120;
              MR_Box hlds__pre_quantification__conv2_STATE_VARIABLE_TraceCounter_103;

              {
                hlds__pre_quantification__Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_120, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_120, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_120, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_120, 4) = ((MR_Box) (hlds__pre_quantification__ZonesToDupVars_8));
              }
              hlds__pre_quantification__TypeCtorInfo_138_138 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_foldl_5_p_0(hlds__pre_quantification__TypeCtorInfo_138_138, hlds__pre_quantification__TypeCtorInfo_138_138, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, hlds__pre_quantification__Var_120, hlds__pre_quantification__SubGoals0_54, &hlds__pre_quantification__SubGoals_55, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102)), &hlds__pre_quantification__conv2_STATE_VARIABLE_TraceCounter_103);
              }
              *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = ((MR_Word) hlds__pre_quantification__conv2_STATE_VARIABLE_TraceCounter_103);
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__ConjType_53));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 2) = ((MR_Box) (hlds__pre_quantification__SubGoals_55));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__pre_quantification__TypeCtorInfo_144_144;
              MR_Word hlds__pre_quantification__Var_118;
              MR_Word hlds__pre_quantification__SubGoals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__SubGoals_125;
              MR_Box hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_103;

              {
                hlds__pre_quantification__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_118, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_118, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_118, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_118, 4) = ((MR_Box) (hlds__pre_quantification__ZonesToDupVars_8));
              }
              hlds__pre_quantification__TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                mercury__list__map_foldl_5_p_0(hlds__pre_quantification__TypeCtorInfo_144_144, hlds__pre_quantification__TypeCtorInfo_144_144, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, hlds__pre_quantification__Var_118, hlds__pre_quantification__SubGoals0_124, &hlds__pre_quantification__SubGoals_125, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102)), &hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_103);
              }
              *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = ((MR_Word) hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_103);
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__SubGoals_125));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__pre_quantification__TypeCtorInfo_150_150;
              MR_Word hlds__pre_quantification__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__CanFail_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification__Cases0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word hlds__pre_quantification__Cases_59;
              MR_Word hlds__pre_quantification__Var_116;
              MR_Box hlds__pre_quantification__conv12_STATE_VARIABLE_TraceCounter_103;

              {
                hlds__pre_quantification__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_116, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_116, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_116, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_116, 4) = ((MR_Box) (hlds__pre_quantification__ZonesToDupVars_8));
              }
              hlds__pre_quantification__TypeCtorInfo_150_150 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              {
                mercury__list__map_foldl_5_p_0(hlds__pre_quantification__TypeCtorInfo_150_150, hlds__pre_quantification__TypeCtorInfo_150_150, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, hlds__pre_quantification__Var_116, hlds__pre_quantification__Cases0_58, &hlds__pre_quantification__Cases_59, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102)), &hlds__pre_quantification__conv12_STATE_VARIABLE_TraceCounter_103);
              }
              *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = ((MR_Word) hlds__pre_quantification__conv12_STATE_VARIABLE_TraceCounter_103);
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__Var_56));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 2) = ((MR_Box) (hlds__pre_quantification__CanFail_57));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 3) = ((MR_Box) (hlds__pre_quantification__Cases_59));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__pre_quantification__Reason_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__SubGoal1_63;
              MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_113_113;
              MR_Word hlds__pre_quantification__SubGoal0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification__SubGoal_127;
              MR_Integer hlds__pre_quantification__Var_162;
              MR_Word hlds__pre_quantification__Var_64;
              MR_Word hlds__pre_quantification__Var_65;
              MR_Word hlds__pre_quantification__Var_66;
              MR_Word hlds__pre_quantification__Var_67;
              MR_Word hlds__pre_quantification__Var_68;

              {
                hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__SubGoal0_126, &hlds__pre_quantification__SubGoal1_63, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_113_113);
              }
              hlds__pre_quantification__succeeded = ((((MR_tag((MR_Word) hlds__pre_quantification__Reason_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (hlds__pre_quantification__succeeded)
                {
                  hlds__pre_quantification__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 1)));
                  hlds__pre_quantification__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 2)));
                  hlds__pre_quantification__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 3)));
                  hlds__pre_quantification__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 4)));
                  hlds__pre_quantification__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_62, (MR_Integer) 5)));
                  hlds__pre_quantification__Var_162 = (MR_Integer) 0;
                  hlds__pre_quantification__succeeded = (hlds__pre_quantification__CurZone_7 == hlds__pre_quantification__Var_162);
                }
              if (hlds__pre_quantification__succeeded)
                {
                  MR_Integer hlds__pre_quantification__NewZone_69;
                  MR_Word hlds__pre_quantification__DupVars_70;
                  MR_Box hlds__pre_quantification__conv6_DupVars_70;

                  {
                    mercury__counter__allocate_3_p_0(&hlds__pre_quantification__NewZone_69, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_113_113, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
                  }
                  {
                    hlds__pre_quantification__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[2], hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__NewZone_69, &hlds__pre_quantification__conv6_DupVars_70);
                  }
                  if (hlds__pre_quantification__succeeded)
                    {
                      hlds__pre_quantification__DupVars_70 = ((MR_Word) hlds__pre_quantification__conv6_DupVars_70);
                      hlds__pre_quantification__succeeded = MR_TRUE;
                    }
                  if (hlds__pre_quantification__succeeded)
                    {
                      MR_Word hlds__pre_quantification__SortedDupVars_71;
                      MR_Word hlds__pre_quantification__QuantReason_72;
                      MR_Word hlds__pre_quantification__QuantExpr_73;
                      MR_Word hlds__pre_quantification__SubGoalInfo1_75;
                      MR_Word hlds__pre_quantification__Var_74;

                      {
                        mercury__list__sort_2_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[0], hlds__pre_quantification__DupVars_70, &hlds__pre_quantification__SortedDupVars_71);
                      }
                      {
                        hlds__pre_quantification__QuantReason_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__pre_quantification__QuantReason_72, 0) = ((MR_Box) (hlds__pre_quantification__SortedDupVars_71));
                      }
                      {
                        hlds__pre_quantification__QuantExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__pre_quantification__QuantExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), hlds__pre_quantification__QuantExpr_73, 1) = ((MR_Box) (hlds__pre_quantification__QuantReason_72));
                        MR_hl_field(MR_mktag(3), hlds__pre_quantification__QuantExpr_73, 2) = ((MR_Box) (hlds__pre_quantification__SubGoal1_63));
                      }
                      hlds__pre_quantification__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__SubGoal1_63, (MR_Integer) 0)));
                      hlds__pre_quantification__SubGoalInfo1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__SubGoal1_63, (MR_Integer) 1)));
                      {
                        hlds__pre_quantification__SubGoal_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__pre_quantification__SubGoal_127, 0) = ((MR_Box) (hlds__pre_quantification__QuantExpr_73));
                        MR_hl_field(MR_mktag(0), hlds__pre_quantification__SubGoal_127, 1) = ((MR_Box) (hlds__pre_quantification__SubGoalInfo1_75));
                      }
                    }
                  else
                    hlds__pre_quantification__SubGoal_127 = hlds__pre_quantification__SubGoal1_63;
                }
              else
                {
                  hlds__pre_quantification__SubGoal_127 = hlds__pre_quantification__SubGoal1_63;
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_113_113;
                }
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__Reason_62));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 2) = ((MR_Box) (hlds__pre_quantification__SubGoal_127));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__pre_quantification__Vars_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__Cond0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification__Then0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 3)));
              MR_Word hlds__pre_quantification__Else0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 4)));
              MR_Word hlds__pre_quantification__Cond_80;
              MR_Word hlds__pre_quantification__Then_81;
              MR_Word hlds__pre_quantification__Else_82;
              MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110;
              MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_111_111;

              {
                hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__Cond0_77, &hlds__pre_quantification__Cond_80, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110);
              }
              {
                hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__Then0_78, &hlds__pre_quantification__Then_81, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_111_111);
              }
              {
                hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__Else0_79, &hlds__pre_quantification__Else_82, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_111_111, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
              }
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__Vars_76));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 2) = ((MR_Box) (hlds__pre_quantification__Cond_80));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 3) = ((MR_Box) (hlds__pre_quantification__Then_81));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 4) = ((MR_Box) (hlds__pre_quantification__Else_82));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__pre_quantification__ShortHand0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr0_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__ShortHand_88;

              switch (MR_tag((MR_Word) hlds__pre_quantification__ShortHand0_83)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__pre_quantification__SubGoalA0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 0)));
                    MR_Word hlds__pre_quantification__SubGoalB0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 1)));
                    MR_Word hlds__pre_quantification__SubGoalA_86;
                    MR_Word hlds__pre_quantification__SubGoalB_87;
                    MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_108_108;

                    {
                      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__SubGoalA0_84, &hlds__pre_quantification__SubGoalA_86, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_108_108);
                    }
                    {
                      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__SubGoalB0_85, &hlds__pre_quantification__SubGoalB_87, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_108_108, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
                    }
                    {
                      hlds__pre_quantification__ShortHand_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand_88, 0) = ((MR_Box) (hlds__pre_quantification__SubGoalA_86));
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand_88, 1) = ((MR_Box) (hlds__pre_quantification__SubGoalB_87));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__pre_quantification__TypeCtorInfo_159_159;
                    MR_Word hlds__pre_quantification__GoalType_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 0)));
                    MR_Word hlds__pre_quantification__OuterVars_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 1)));
                    MR_Word hlds__pre_quantification__InnerVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 2)));
                    MR_Word hlds__pre_quantification__MaybeOutputVars_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 3)));
                    MR_Word hlds__pre_quantification__MainGoal0_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 4)));
                    MR_Word hlds__pre_quantification__OrElseGoals0_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 5)));
                    MR_Word hlds__pre_quantification__OrElseInners_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 6)));
                    MR_Word hlds__pre_quantification__MainGoal_96;
                    MR_Word hlds__pre_quantification__OrElseGoals_97;
                    MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_105_105;
                    MR_Word hlds__pre_quantification__Var_106;
                    MR_Box hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_103;

                    {
                      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__MainGoal0_93, &hlds__pre_quantification__MainGoal_96, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_105_105);
                    }
                    {
                      hlds__pre_quantification__Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_106, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_106, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3));
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_106, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                      MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_106, 4) = ((MR_Box) (hlds__pre_quantification__ZonesToDupVars_8));
                    }
                    hlds__pre_quantification__TypeCtorInfo_159_159 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      mercury__list__map_foldl_5_p_0(hlds__pre_quantification__TypeCtorInfo_159_159, hlds__pre_quantification__TypeCtorInfo_159_159, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, hlds__pre_quantification__Var_106, hlds__pre_quantification__OrElseGoals0_94, &hlds__pre_quantification__OrElseGoals_97, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_105_105)), &hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_103);
                    }
                    *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103 = ((MR_Word) hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_103);
                    {
                      hlds__pre_quantification__ShortHand_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 0) = ((MR_Box) (hlds__pre_quantification__GoalType_89));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 1) = ((MR_Box) (hlds__pre_quantification__OuterVars_90));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 2) = ((MR_Box) (hlds__pre_quantification__InnerVars_91));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 3) = ((MR_Box) (hlds__pre_quantification__MaybeOutputVars_92));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 4) = ((MR_Box) (hlds__pre_quantification__MainGoal_96));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 5) = ((MR_Box) (hlds__pre_quantification__OrElseGoals_97));
                      MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_88, 6) = ((MR_Box) (hlds__pre_quantification__OrElseInners_95));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__pre_quantification__MaybeIOStateVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 0)));
                    MR_Word hlds__pre_quantification__ResultVar_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 1)));
                    MR_Word hlds__pre_quantification__SubGoal0_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand0_83, (MR_Integer) 2)));
                    MR_Word hlds__pre_quantification__SubGoal_129;

                    {
                      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ZonesToDupVars_8, hlds__pre_quantification__SubGoal0_128, &hlds__pre_quantification__SubGoal_129, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_102, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_103);
                    }
                    {
                      hlds__pre_quantification__ShortHand_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_88, 0) = ((MR_Box) (hlds__pre_quantification__MaybeIOStateVars_98));
                      MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_88, 1) = ((MR_Box) (hlds__pre_quantification__ResultVar_99));
                      MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_88, 2) = ((MR_Box) (hlds__pre_quantification__SubGoal_129));
                    }
                  }
                  break;
              }
              {
                hlds__pre_quantification__GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_31, 1) = ((MR_Box) (hlds__pre_quantification__ShortHand_88));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__pre_quantification__STATE_VARIABLE_Goal_101 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__pre_quantification__GoalExpr_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__pre_quantification__GoalInfo_12));
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv15_STATE_VARIABLE_TraceCounter_15;
    MR_Word hlds__pre_quantification__conv14_STATE_VARIABLE_VarsToZones_17;

    {
      hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), &hlds__pre_quantification__conv15_STATE_VARIABLE_TraceCounter_15, ((MR_Word) hlds__pre_quantification__wrapper_arg_4), &hlds__pre_quantification__conv14_STATE_VARIABLE_VarsToZones_17);
    }
    *hlds__pre_quantification__wrapper_arg_3 = ((MR_Box) (hlds__pre_quantification__conv15_STATE_VARIABLE_TraceCounter_15));
    *hlds__pre_quantification__wrapper_arg_5 = ((MR_Box) (hlds__pre_quantification__conv14_STATE_VARIABLE_VarsToZones_17));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv11_STATE_VARIABLE_TraceCounter_93;
    MR_Word hlds__pre_quantification__conv10_STATE_VARIABLE_VarsToZones_95;

    {
      hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), &hlds__pre_quantification__conv11_STATE_VARIABLE_TraceCounter_93, ((MR_Word) hlds__pre_quantification__wrapper_arg_4), &hlds__pre_quantification__conv10_STATE_VARIABLE_VarsToZones_95);
    }
    *hlds__pre_quantification__wrapper_arg_3 = ((MR_Box) (hlds__pre_quantification__conv11_STATE_VARIABLE_TraceCounter_93));
    *hlds__pre_quantification__wrapper_arg_5 = ((MR_Box) (hlds__pre_quantification__conv10_STATE_VARIABLE_VarsToZones_95));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_93;
    MR_Word hlds__pre_quantification__conv6_STATE_VARIABLE_VarsToZones_95;

    {
      hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), &hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_93, ((MR_Word) hlds__pre_quantification__wrapper_arg_4), &hlds__pre_quantification__conv6_STATE_VARIABLE_VarsToZones_95);
    }
    *hlds__pre_quantification__wrapper_arg_3 = ((MR_Box) (hlds__pre_quantification__conv7_STATE_VARIABLE_TraceCounter_93));
    *hlds__pre_quantification__wrapper_arg_5 = ((MR_Box) (hlds__pre_quantification__conv6_STATE_VARIABLE_VarsToZones_95));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1,
  MR_Box hlds__pre_quantification__wrapper_arg_2,
  MR_Box * hlds__pre_quantification__wrapper_arg_3,
  MR_Box hlds__pre_quantification__wrapper_arg_4,
  MR_Box * hlds__pre_quantification__wrapper_arg_5)
{
  {
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_93;
    MR_Word hlds__pre_quantification__conv2_STATE_VARIABLE_VarsToZones_95;

    {
      hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__closure, (MR_Integer) 3))), ((MR_Word) hlds__pre_quantification__wrapper_arg_1), ((MR_Word) hlds__pre_quantification__wrapper_arg_2), &hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_93, ((MR_Word) hlds__pre_quantification__wrapper_arg_4), &hlds__pre_quantification__conv2_STATE_VARIABLE_VarsToZones_95);
    }
    *hlds__pre_quantification__wrapper_arg_3 = ((MR_Box) (hlds__pre_quantification__conv3_STATE_VARIABLE_TraceCounter_93));
    *hlds__pre_quantification__wrapper_arg_5 = ((MR_Box) (hlds__pre_quantification__conv2_STATE_VARIABLE_VarsToZones_95));
  }
}

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1)
{
  {
    MR_Box hlds__pre_quantification__wrapper_arg_2;
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv1_HeadVar__2_2;

    {
      hlds__pre_quantification__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__pre_quantification__wrapper_arg_1));
    }
    hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv1_HeadVar__2_2));
    return hlds__pre_quantification__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
  MR_Box hlds__pre_quantification__closure_arg,
  MR_Box hlds__pre_quantification__wrapper_arg_1)
{
  {
    MR_Box hlds__pre_quantification__wrapper_arg_2;
    MR_Box hlds__pre_quantification__closure = hlds__pre_quantification__closure_arg;
    MR_Word hlds__pre_quantification__conv0_HeadVar__2_2;

    {
      hlds__pre_quantification__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) hlds__pre_quantification__wrapper_arg_1));
    }
    hlds__pre_quantification__wrapper_arg_2 = ((MR_Box) (hlds__pre_quantification__conv0_HeadVar__2_2));
    return hlds__pre_quantification__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Integer hlds__pre_quantification__CurZone_7,
  MR_Word hlds__pre_quantification__Goal_8,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__pre_quantification__succeeded;
        MR_Word hlds__pre_quantification__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__Goal_8, (MR_Integer) 0)));
        MR_Word hlds__pre_quantification___GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__Goal_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__pre_quantification__GoalExpr_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__pre_quantification__SubGoal_60 = (MR_Word) MR_body(((MR_Word) hlds__pre_quantification__GoalExpr_11), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__SubGoal_60;

                hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__pre_quantification__LHSVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 0)));
              MR_Word hlds__pre_quantification__RHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_140_140;
              MR_Word hlds__pre_quantification___Mode_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification___Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));
              MR_Word hlds__pre_quantification___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 4)));

              {
                hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__LHSVar_38, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_140_140);
              }
              switch (MR_tag((MR_Word) hlds__pre_quantification__RHS_39)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__pre_quantification__RHSVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__RHS_39, (MR_Integer) 0)));

                    {
                      hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__RHSVar_43, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_140_140, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
                    }
                    *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__pre_quantification__RHSArgVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__RHS_39, (MR_Integer) 2)));
                    MR_Word hlds__pre_quantification___ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__RHS_39, (MR_Integer) 0)));
                    MR_Word hlds__pre_quantification___IsExistConstr_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__RHS_39, (MR_Integer) 1)));

                    {
                      hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__RHSArgVars_46, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_140_140, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
                    }
                    *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__pre_quantification__LambdaVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 3)));
                    MR_Word hlds__pre_quantification__LambdaGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 6)));
                    MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_141_141;
                    MR_Word hlds__pre_quantification___Groundness_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word hlds__pre_quantification___PredOrFunc_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word hlds__pre_quantification___NonLocals_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 2)));
                    MR_Word hlds__pre_quantification___LambdaModes_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 4)));
                    MR_Word hlds__pre_quantification___Detism_161 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 5)));
                    MR_Word hlds__pre_quantification___Purity_162 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__RHS_39, (MR_Integer) 0)))) & (MR_Integer) 3);

                    {
                      hlds__pre_quantification__record_vars_in_zone_4_p_0((MR_Integer) 0, hlds__pre_quantification__LambdaVars_51, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_140_140, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_141_141);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__LambdaGoal_53;
                      MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_141_141;

                      hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                      hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
                      hlds__pre_quantification__CurZone_7 = (MR_Integer) 0;
                    }
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__pre_quantification__ArgVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
              MR_Word hlds__pre_quantification___PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 0)));
              MR_Integer hlds__pre_quantification___ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
              MR_Word hlds__pre_quantification___Builtin_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));
              MR_Word hlds__pre_quantification___MaybeUnifyContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 4)));
              MR_Word hlds__pre_quantification___SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 5)));

              {
                hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ArgVars_15, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
              }
              *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__pre_quantification__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152;
                  MR_Word hlds__pre_quantification__ArgVars_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__pre_quantification___Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word hlds__pre_quantification___RegTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word hlds__pre_quantification___Detism_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 5)));

                  {
                    hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ArgVars_156, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152);
                  }
                  switch (MR_tag((MR_Word) hlds__pre_quantification__GenericCall_19)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__pre_quantification__ClosureVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__GenericCall_19, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification___Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__GenericCall_19, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification___CallKind_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__GenericCall_19, (MR_Integer) 2)));
                        MR_Integer hlds__pre_quantification___Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__GenericCall_19, (MR_Integer) 3)));

                        {
                          hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ClosureVar_23, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__pre_quantification__TypeClassInfoVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GenericCall_19, (MR_Integer) 0)));
                        MR_Integer hlds__pre_quantification___MethodNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GenericCall_19, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification___ClassId_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GenericCall_19, (MR_Integer) 2)));
                        MR_Word hlds__pre_quantification___SimpleCallId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__GenericCall_19, (MR_Integer) 3)));

                        {
                          hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__TypeClassInfoVar_27, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152;
                      break;
                    case (MR_Integer) 3:
                      *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_152_152;
                      break;
                  }
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__pre_quantification__TypeCtorInfo_173_173 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                  MR_Word hlds__pre_quantification__TypeInfo_174_174 = (MR_Word) &hlds__pre_quantification_scalar_common_1[0];
                  MR_Word hlds__pre_quantification__ForeignArgs_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word hlds__pre_quantification__ExtraArgs_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 5)));
                  MR_Word hlds__pre_quantification__Var_146;
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_147_147;
                  MR_Word hlds__pre_quantification__Var_149;
                  MR_Word hlds__pre_quantification___Attrs_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification___TraceCond_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 6)));
                  MR_Word hlds__pre_quantification___Impl_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 7)));
                  MR_Word hlds__pre_quantification___PredId_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Integer hlds__pre_quantification___ProcId_158 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));

                  {
                    hlds__pre_quantification__Var_146 = mercury__list__map_2_f_0(hlds__pre_quantification__TypeCtorInfo_173_173, hlds__pre_quantification__TypeInfo_174_174, (MR_Word) &hlds__pre_quantification_scalar_common_2[2], hlds__pre_quantification__ForeignArgs_34);
                  }
                  {
                    hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Var_146, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_147_147);
                  }
                  {
                    hlds__pre_quantification__Var_149 = mercury__list__map_2_f_0(hlds__pre_quantification__TypeCtorInfo_173_173, hlds__pre_quantification__TypeInfo_174_174, (MR_Word) &hlds__pre_quantification_scalar_common_2[3], hlds__pre_quantification__ExtraArgs_35);
                  }
                  {
                    hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Var_149, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_147_147, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95);
                  }
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__pre_quantification__SubGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__pre_quantification__Var_137;
                  MR_Word hlds__pre_quantification___ConjType_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Box hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_93;
                  MR_Box hlds__pre_quantification__conv4_STATE_VARIABLE_VarsToZones_95;

                  {
                    hlds__pre_quantification__Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_137, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_137, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_137, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                  }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__pre_quantification_scalar_common_2[1], hlds__pre_quantification__Var_137, hlds__pre_quantification__SubGoals_56, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92)), &hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94)), &hlds__pre_quantification__conv4_STATE_VARIABLE_VarsToZones_95);
                  }
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = ((MR_Word) hlds__pre_quantification__conv5_STATE_VARIABLE_TraceCounter_93);
                  *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = ((MR_Word) hlds__pre_quantification__conv4_STATE_VARIABLE_VarsToZones_95);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__pre_quantification__SubGoals_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification__Var_210;
                  MR_Box hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_93;
                  MR_Box hlds__pre_quantification__conv8_STATE_VARIABLE_VarsToZones_95;

                  {
                    hlds__pre_quantification__Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_210, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_210, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_210, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_210, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                  }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__pre_quantification_scalar_common_2[1], hlds__pre_quantification__Var_210, hlds__pre_quantification__SubGoals_209, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92)), &hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94)), &hlds__pre_quantification__conv8_STATE_VARIABLE_VarsToZones_95);
                  }
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = ((MR_Word) hlds__pre_quantification__conv9_STATE_VARIABLE_TraceCounter_93);
                  *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = ((MR_Word) hlds__pre_quantification__conv8_STATE_VARIABLE_VarsToZones_95);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__pre_quantification__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_133_133;
                  MR_Word hlds__pre_quantification__Var_134;
                  MR_Word hlds__pre_quantification___CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Box hlds__pre_quantification__conv17_STATE_VARIABLE_TraceCounter_93;
                  MR_Box hlds__pre_quantification__conv16_STATE_VARIABLE_VarsToZones_95;

                  {
                    hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Var_57, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_133_133);
                  }
                  {
                    hlds__pre_quantification__Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_134, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_134, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_134, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                  }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__pre_quantification_scalar_common_2[1], hlds__pre_quantification__Var_134, hlds__pre_quantification__Cases_59, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92)), &hlds__pre_quantification__conv17_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_VarsToZones_133_133)), &hlds__pre_quantification__conv16_STATE_VARIABLE_VarsToZones_95);
                  }
                  *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = ((MR_Word) hlds__pre_quantification__conv17_STATE_VARIABLE_TraceCounter_93);
                  *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = ((MR_Word) hlds__pre_quantification__conv16_STATE_VARIABLE_VarsToZones_95);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__pre_quantification__Reason_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification__SubGoal_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Integer hlds__pre_quantification__Var_214;
                  MR_Word hlds__pre_quantification__Var_62;
                  MR_Word hlds__pre_quantification__Var_63;
                  MR_Word hlds__pre_quantification__Var_64;
                  MR_Word hlds__pre_quantification__Var_65;
                  MR_Word hlds__pre_quantification__Var_66;

                  hlds__pre_quantification__succeeded = ((((MR_tag((MR_Word) hlds__pre_quantification__Reason_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (hlds__pre_quantification__succeeded)
                    {
                      hlds__pre_quantification__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 1)));
                      hlds__pre_quantification__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 2)));
                      hlds__pre_quantification__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 3)));
                      hlds__pre_quantification__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 4)));
                      hlds__pre_quantification__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__Reason_61, (MR_Integer) 5)));
                      hlds__pre_quantification__Var_214 = (MR_Integer) 0;
                      hlds__pre_quantification__succeeded = (hlds__pre_quantification__CurZone_7 == hlds__pre_quantification__Var_214);
                    }
                  if (hlds__pre_quantification__succeeded)
                    {
                      MR_Integer hlds__pre_quantification__NewZone_67;
                      MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_126_126;

                      {
                        mercury__counter__allocate_3_p_0(&hlds__pre_quantification__NewZone_67, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_126_126);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer hlds__pre_quantification__next_value_of_CurZone_7 = hlds__pre_quantification__NewZone_67;
                        MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__SubGoal_169;
                        MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_126_126;

                        hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                        hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
                        hlds__pre_quantification__CurZone_7 = hlds__pre_quantification__next_value_of_CurZone_7;
                      }
                      continue;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__SubGoal_169;

                        hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__pre_quantification__Vars_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__pre_quantification__Cond_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__pre_quantification__Then_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word hlds__pre_quantification__Else_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 4)));
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_119_119;
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_120_120;
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_121_121;
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_122_122;
                  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_123_123;

                  {
                    hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Vars_68, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_119_119);
                  }
                  {
                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Cond_69, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_120_120, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_119_119, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_121_121);
                  }
                  {
                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Then_70, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_120_120, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_122_122, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_121_121, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_123_123);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__Else_71;
                    MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_122_122;
                    MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_123_123;

                    hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                    hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                    hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__pre_quantification__ShortHand_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__pre_quantification__GoalExpr_11, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__pre_quantification__ShortHand_72)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__pre_quantification__SubGoalA_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand_72, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification__SubGoalB_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__ShortHand_72, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_115_115;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_116_116;

                        {
                          hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__SubGoalA_73, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_115_115, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_116_116);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__SubGoalB_74;
                          MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__STATE_VARIABLE_TraceCounter_115_115;
                          MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_116_116;

                          hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                          hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                          hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__pre_quantification__OuterVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification__InnerVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 2)));
                        MR_Word hlds__pre_quantification__MaybeOutputVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 3)));
                        MR_Word hlds__pre_quantification__MainGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 4)));
                        MR_Word hlds__pre_quantification__OrElseGoals_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 5)));
                        MR_Word hlds__pre_quantification__OVA_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__OuterVars_76, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification__OVB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__OuterVars_76, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification__IVA_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__InnerVars_77, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification__IVB_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__InnerVars_77, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification__Var_103;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_104_104;
                        MR_Word hlds__pre_quantification__Var_105;
                        MR_Word hlds__pre_quantification__Var_106;
                        MR_Word hlds__pre_quantification__Var_107;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_109_109;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_111_111;
                        MR_Word hlds__pre_quantification__Var_112;
                        MR_Word hlds__pre_quantification___GoalType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification___OrElseInners_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__ShortHand_72, (MR_Integer) 6)));
                        MR_Box hlds__pre_quantification__conv13_STATE_VARIABLE_TraceCounter_93;
                        MR_Box hlds__pre_quantification__conv12_STATE_VARIABLE_VarsToZones_95;

                        {
                          hlds__pre_quantification__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_107, 0) = ((MR_Box) (hlds__pre_quantification__IVB_85));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__pre_quantification__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_106, 0) = ((MR_Box) (hlds__pre_quantification__IVA_84));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_106, 1) = ((MR_Box) (hlds__pre_quantification__Var_107));
                        }
                        {
                          hlds__pre_quantification__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_105, 0) = ((MR_Box) (hlds__pre_quantification__OVB_83));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_105, 1) = ((MR_Box) (hlds__pre_quantification__Var_106));
                        }
                        {
                          hlds__pre_quantification__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_103, 0) = ((MR_Box) (hlds__pre_quantification__OVA_82));
                          MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_103, 1) = ((MR_Box) (hlds__pre_quantification__Var_105));
                        }
                        {
                          hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Var_103, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_104_104);
                        }
                        if ((hlds__pre_quantification__MaybeOutputVars_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          hlds__pre_quantification__STATE_VARIABLE_VarsToZones_109_109 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_104_104;
                        else
                          {
                            MR_Word hlds__pre_quantification__OutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__MaybeOutputVars_78, (MR_Integer) 0)));

                            {
                              hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__OutputVars_86, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_104_104, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_109_109);
                            }
                          }
                        {
                          hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__MainGoal_79, hlds__pre_quantification__STATE_VARIABLE_TraceCounter_0_92, &hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_109_109, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_111_111);
                        }
                        {
                          hlds__pre_quantification__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_112, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_112, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5));
                          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), hlds__pre_quantification__Var_112, 3) = ((MR_Box) (hlds__pre_quantification__CurZone_7));
                        }
                        {
                          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__pre_quantification_scalar_common_2[1], hlds__pre_quantification__Var_112, hlds__pre_quantification__OrElseGoals_80, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_TraceCounter_110_110)), &hlds__pre_quantification__conv13_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (hlds__pre_quantification__STATE_VARIABLE_VarsToZones_111_111)), &hlds__pre_quantification__conv12_STATE_VARIABLE_VarsToZones_95);
                        }
                        *hlds__pre_quantification__STATE_VARIABLE_TraceCounter_93 = ((MR_Word) hlds__pre_quantification__conv13_STATE_VARIABLE_TraceCounter_93);
                        *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_95 = ((MR_Word) hlds__pre_quantification__conv12_STATE_VARIABLE_VarsToZones_95);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__pre_quantification__MaybeIOStateVars_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_72, (MR_Integer) 0)));
                        MR_Word hlds__pre_quantification__ResultVar_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_72, (MR_Integer) 1)));
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_97_97;
                        MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_100_100;
                        MR_Word hlds__pre_quantification__SubGoal_170 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__pre_quantification__ShortHand_72, (MR_Integer) 2)));

                        if ((hlds__pre_quantification__MaybeIOStateVars_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          hlds__pre_quantification__STATE_VARIABLE_VarsToZones_97_97 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94;
                        else
                          {
                            MR_Word hlds__pre_quantification__IOStateVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__MaybeIOStateVars_87, (MR_Integer) 0)));
                            MR_Word hlds__pre_quantification__ISVA_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__IOStateVars_89, (MR_Integer) 0)));
                            MR_Word hlds__pre_quantification__ISVB_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__pre_quantification__IOStateVars_89, (MR_Integer) 1)));
                            MR_Word hlds__pre_quantification__Var_96;
                            MR_Word hlds__pre_quantification__Var_98;

                            {
                              hlds__pre_quantification__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_98, 0) = ((MR_Box) (hlds__pre_quantification__ISVB_91));
                              MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__pre_quantification__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_96, 0) = ((MR_Box) (hlds__pre_quantification__ISVA_90));
                              MR_hl_field(MR_mktag(1), hlds__pre_quantification__Var_96, 1) = ((MR_Box) (hlds__pre_quantification__Var_98));
                            }
                            {
                              hlds__pre_quantification__record_vars_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__Var_96, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_97_97);
                            }
                          }
                        {
                          hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__CurZone_7, hlds__pre_quantification__ResultVar_88, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_97_97, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_100_100);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__pre_quantification__next_value_of_Goal_8 = hlds__pre_quantification__SubGoal_170;
                          MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_100_100;

                          hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_94 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                          hlds__pre_quantification__Goal_8 = hlds__pre_quantification__next_value_of_Goal_8;
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
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Integer hlds__pre_quantification__HeadVar__1_1,
  MR_Word hlds__pre_quantification__HeadVar__2_2,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__pre_quantification__succeeded;

        if ((hlds__pre_quantification__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_4 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_3;
        else
          {
            MR_Word hlds__pre_quantification__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__pre_quantification__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__pre_quantification__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_15_15;

            {
              hlds__pre_quantification__record_var_in_zone_4_p_0(hlds__pre_quantification__HeadVar__1_1, hlds__pre_quantification__Var_10, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_3, &hlds__pre_quantification__STATE_VARIABLE_VarsToZones_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__pre_quantification__next_value_of_HeadVar__2_2 = hlds__pre_quantification__Vars_11;
              MR_Word hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_3 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_15_15;

              hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_3 = hlds__pre_quantification__next_value_of_STATE_VARIABLE_VarsToZones_0_3;
              hlds__pre_quantification__HeadVar__2_2 = hlds__pre_quantification__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Integer hlds__pre_quantification__Zone_5,
  MR_Word hlds__pre_quantification__Var_6,
  MR_Word hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10,
  MR_Word * hlds__pre_quantification__STATE_VARIABLE_VarsToZones_11)
{
  {
    MR_bool hlds__pre_quantification__succeeded;
    MR_Word hlds__pre_quantification__Zones0_8;
    MR_Box hlds__pre_quantification__conv0_Zones0_8;

    {
      hlds__pre_quantification__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[0], (MR_Word) &hlds__pre_quantification_scalar_common_1[1], hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10, ((MR_Box) (hlds__pre_quantification__Var_6)), &hlds__pre_quantification__conv0_Zones0_8);
    }
    if (hlds__pre_quantification__succeeded)
      {
        hlds__pre_quantification__Zones0_8 = ((MR_Word) hlds__pre_quantification__conv0_Zones0_8);
        hlds__pre_quantification__succeeded = MR_TRUE;
      }
    if (hlds__pre_quantification__succeeded)
      {
        {
          hlds__pre_quantification__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[3], hlds__pre_quantification__Zones0_8, hlds__pre_quantification__Zone_5);
        }
        if (hlds__pre_quantification__succeeded)
          *hlds__pre_quantification__STATE_VARIABLE_VarsToZones_11 = hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10;
        else
          {
            MR_Word hlds__pre_quantification__Zones_9;

            {
              mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[3], hlds__pre_quantification__Zone_5, hlds__pre_quantification__Zones0_8, &hlds__pre_quantification__Zones_9);
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[0], (MR_Word) &hlds__pre_quantification_scalar_common_1[1], ((MR_Box) (hlds__pre_quantification__Var_6)), ((MR_Box) (hlds__pre_quantification__Zones_9)), hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_11);
            }
          }
      }
    else
      {
        MR_Word hlds__pre_quantification__Zones_14;

        {
          hlds__pre_quantification__Zones_14 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0((MR_Word) &hlds__pre_quantification_scalar_common_1[3], hlds__pre_quantification__Zone_5);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__pre_quantification_scalar_common_1[0], (MR_Word) &hlds__pre_quantification_scalar_common_1[1], ((MR_Box) (hlds__pre_quantification__Var_6)), ((MR_Box) (hlds__pre_quantification__Zones_14)), hlds__pre_quantification__STATE_VARIABLE_VarsToZones_0_10, hlds__pre_quantification__STATE_VARIABLE_VarsToZones_11);
        }
      }
  }
}

void mercury__hlds__pre_quantification__init(void)
{
}

void mercury__hlds__pre_quantification__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_vars_to_zones_0);
	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zone_0);
	MR_register_type_ctor_info(&hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zones_to_dup_vars_0);
}

void mercury__hlds__pre_quantification__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pre_quantification__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.pre_quantification. */
