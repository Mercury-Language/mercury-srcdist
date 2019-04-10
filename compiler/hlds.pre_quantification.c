/*
** Automatically generated from `pre_quantification.m'
** by the Mercury compiler,
** version rotd-2019-04-10
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


// :- module hlds.pre_quantification.
// :- implementation.

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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Integer CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * STATE_VARIABLE_TraceCounter_18);

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word Var_5,
  MR_Integer Zone_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_11);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word Var_5,
  MR_Word Zones_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_13);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Integer CurZone_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * STATE_VARIABLE_TraceCounter_15,
  MR_Word STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * STATE_VARIABLE_VarsToZones_17);

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Integer CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Goal_0_100,
  MR_Word * STATE_VARIABLE_Goal_101,
  MR_Word STATE_VARIABLE_TraceCounter_0_102,
  MR_Word * STATE_VARIABLE_TraceCounter_103);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Integer CurZone_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * STATE_VARIABLE_TraceCounter_93,
  MR_Word STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * STATE_VARIABLE_VarsToZones_95);

static void MR_CALL 
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * STATE_VARIABLE_VarsToZones_4);

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Integer Zone_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarsToZones_0_10,
  MR_Word * STATE_VARIABLE_VarsToZones_11);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_3[0])),
    ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__pre_quantification_scalar_common_5[0])),
    ((MR_Box) (hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__pre_quantification_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pre_quantification__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pre_quantification__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__pre_quantification__sparse_bitset__pti_sparse_bitset_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pre_quantification__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__pre_quantification__sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_vars_to_zones_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____vars_to_zones_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____vars_to_zones_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "vars_to_zones",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pre_quantification__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0sparse_bitset__ti_sparse_bitset_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zone_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zone_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zone_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zone",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__pre_quantification__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pre_quantification__hlds__pre_quantification__type_ctor_info_zones_to_dup_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001)),
  ((MR_Box) (hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001)),
  (MR_String) "hlds.pre_quantification",
  (MR_String) "zones_to_dup_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__pre_quantification__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(
  MR_Integer CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Case_0_15,
  MR_Word * STATE_VARIABLE_Case_16,
  MR_Word STATE_VARIABLE_TraceCounter_0_17,
  MR_Word * STATE_VARIABLE_TraceCounter_18)
{
  {
    MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 1))));
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_15, (MR_Integer) 2))));
    MR_Word Goal_14;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Goal0_13, &Goal_14, STATE_VARIABLE_TraceCounter_0_17, STATE_VARIABLE_TraceCounter_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_14));
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__add_var_to_zone_4_p_0(
  MR_Word Var_5,
  MR_Integer Zone_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_10,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_11)
{
  {
    MR_bool succeeded;
    MR_Word DupVars0_8;
    MR_Box conv0_DupVars0_8;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), STATE_VARIABLE_ZonesToDupVars_0_10, Zone_6, &conv0_DupVars0_8);
    if (succeeded)
    {
      DupVars0_8 = ((MR_Word) (conv0_DupVars0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DupVars_9;

      {
        DupVars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DupVars_9, 0) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(1), DupVars_9, 1) = ((MR_Box) (DupVars0_8));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), Zone_6, ((MR_Box) (DupVars_9)), STATE_VARIABLE_ZonesToDupVars_0_10, STATE_VARIABLE_ZonesToDupVars_11);
    }
    else
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), Zone_6, ((MR_Box) (Var_13)), STATE_VARIABLE_ZonesToDupVars_0_10, STATE_VARIABLE_ZonesToDupVars_11);
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ZonesToDupVars_11;

    hlds__pre_quantification__add_var_to_zone_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ZonesToDupVars_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ZonesToDupVars_11));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(
  MR_Word Var_5,
  MR_Word Zones_6,
  MR_Word STATE_VARIABLE_ZonesToDupVars_0_12,
  MR_Word * STATE_VARIABLE_ZonesToDupVars_13)
{
  {
    MR_bool succeeded;
    MR_Word ZoneList_8;
    MR_Integer FirstZone_9;
    MR_Word Var_14;
    MR_Integer Var_23;

    ZoneList_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_116_111_95_115_111_114_116_101_100_95_108_105_115_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zones_6);
    succeeded = (ZoneList_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FirstZone_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ZoneList_8, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ZoneList_8, (MR_Integer) 1))));
      succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_23 = (MR_Integer) 0;
        succeeded = (FirstZone_9 != Var_23);
      }
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Box conv1_STATE_VARIABLE_ZonesToDupVars_13;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__pre_quantification__build_zones_to_dup_vars_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Var_5));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), Var_15, ZoneList_8, ((MR_Box) (STATE_VARIABLE_ZonesToDupVars_0_12)), &conv1_STATE_VARIABLE_ZonesToDupVars_13);
      *STATE_VARIABLE_ZonesToDupVars_13 = ((MR_Word) (conv1_STATE_VARIABLE_ZonesToDupVars_13));
    }
    else
      *STATE_VARIABLE_ZonesToDupVars_13 = STATE_VARIABLE_ZonesToDupVars_0_12;
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(
  MR_Integer CurZone_7,
  MR_Word Case_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_14,
  MR_Word * STATE_VARIABLE_TraceCounter_15,
  MR_Word STATE_VARIABLE_VarsToZones_0_16,
  MR_Word * STATE_VARIABLE_VarsToZones_17)
{
  {
    MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));

    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Goal_13, STATE_VARIABLE_TraceCounter_0_14, STATE_VARIABLE_TraceCounter_15, STATE_VARIABLE_VarsToZones_0_16, STATE_VARIABLE_VarsToZones_17);
  }
}

static void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ZonesToDupVars_13;

    hlds__pre_quantification__build_zones_to_dup_vars_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ZonesToDupVars_13);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ZonesToDupVars_13));
  }
}

void MR_CALL 
hlds__pre_quantification__separate_trace_goal_only_locals_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word VarsToZones0_5;
    MR_Word TraceCounter0_6;
    MR_Word VarsToZones_8;
    MR_Word ZonesToDupVars0_9;
    MR_Word ZonesToDupVars_10;
    MR_Word Var_7;
    MR_Box conv1_ZonesToDupVars_10;

    mercury__map__init_1_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), &VarsToZones0_5);
    mercury__counter__init_2_p_0((MR_Integer) 1, &TraceCounter0_6);
    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0((MR_Integer) 0, Goal0_3, TraceCounter0_6, &Var_7, VarsToZones0_5, &VarsToZones_8);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), &ZonesToDupVars0_9);
    mercury__map__foldl_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[4]), VarsToZones_8, ((MR_Box) (ZonesToDupVars0_9)), &conv1_ZonesToDupVars_10);
    ZonesToDupVars_10 = ((MR_Word) (conv1_ZonesToDupVars_10));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ZonesToDupVars_10);
    if (succeeded)
      *Goal_4 = Goal0_3;
    else
    {
      MR_Word Var_11;

      hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Integer) 0, ZonesToDupVars_10, Goal0_3, Goal_4, TraceCounter0_6, &Var_11);
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Case_16;
    MR_Word conv10_STATE_VARIABLE_TraceCounter_18;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_case_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Case_16, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_TraceCounter_18);
    *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Case_16));
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_TraceCounter_18));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Goal_101;
    MR_Word conv7_STATE_VARIABLE_TraceCounter_103;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_STATE_VARIABLE_Goal_101, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_TraceCounter_103);
    *wrapper_arg_2 = ((MR_Box) (conv8_STATE_VARIABLE_Goal_101));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Goal_101;
    MR_Word conv3_STATE_VARIABLE_TraceCounter_103;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Goal_101, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TraceCounter_103);
    *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Goal_101));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_101;
    MR_Word conv0_STATE_VARIABLE_TraceCounter_103;

    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Goal_101, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TraceCounter_103);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_101));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TraceCounter_103));
  }
}

static void MR_CALL 
hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(
  MR_Integer CurZone_7,
  MR_Word ZonesToDupVars_8,
  MR_Word STATE_VARIABLE_Goal_0_100,
  MR_Word * STATE_VARIABLE_Goal_101,
  MR_Word STATE_VARIABLE_TraceCounter_0_102,
  MR_Word * STATE_VARIABLE_TraceCounter_103)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_100, (MR_Integer) 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_100, (MR_Integer) 1))));
    MR_Word GoalExpr_31;

    switch (MR_tag((MR_Word) GoalExpr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_60 = (MR_Word) ((MR_Word) (GoalExpr0_11));
          MR_Word SubGoal_61;

          hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_60, &SubGoal_61, STATE_VARIABLE_TraceCounter_0_102, STATE_VARIABLE_TraceCounter_103);
          GoalExpr_31 = (MR_Word) ((MR_Word) (SubGoal_61));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 0))));
          MR_Word RHS0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 1))));
          MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 2))));
          MR_Word Kind_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 3))));
          MR_Word Context_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_11, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) RHS0_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                GoalExpr_31 = GoalExpr0_11;
                *STATE_VARIABLE_TraceCounter_103 = STATE_VARIABLE_TraceCounter_0_102;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocals_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 2))));
                MR_Word LambdaVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 3))));
                MR_Word LambdaModes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 4))));
                MR_Word Detism_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word LambdaGoal0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 6))));
                MR_Word LambdaGoal_51;
                MR_Word RHS_52;
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_33, (MR_Integer) 0)));

                hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0((MR_Integer) 0, ZonesToDupVars_8, LambdaGoal0_49, &LambdaGoal_51, STATE_VARIABLE_TraceCounter_0_102, STATE_VARIABLE_TraceCounter_103);
                {
                  RHS_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_52, 0) = (MR_Box) (packed_word_3);
                  MR_hl_field(MR_mktag(2), RHS_52, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_52, 2) = ((MR_Box) (NonLocals_45));
                  MR_hl_field(MR_mktag(2), RHS_52, 3) = ((MR_Box) (LambdaVars_46));
                  MR_hl_field(MR_mktag(2), RHS_52, 4) = ((MR_Box) (LambdaModes_47));
                  MR_hl_field(MR_mktag(2), RHS_52, 5) = (MR_Box) ((MR_Unsigned) (Detism_48));
                  MR_hl_field(MR_mktag(2), RHS_52, 6) = ((MR_Box) (LambdaGoal_51));
                }
                {
                  GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GoalExpr_31, 0) = ((MR_Box) (LHSVar_32));
                  MR_hl_field(MR_mktag(1), GoalExpr_31, 1) = ((MR_Box) (RHS_52));
                  MR_hl_field(MR_mktag(1), GoalExpr_31, 2) = ((MR_Box) (Mode_34));
                  MR_hl_field(MR_mktag(1), GoalExpr_31, 3) = ((MR_Box) (Kind_35));
                  MR_hl_field(MR_mktag(1), GoalExpr_31, 4) = ((MR_Box) (Context_36));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          GoalExpr_31 = GoalExpr0_11;
          *STATE_VARIABLE_TraceCounter_103 = STATE_VARIABLE_TraceCounter_0_102;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_31 = GoalExpr0_11;
              *STATE_VARIABLE_TraceCounter_103 = STATE_VARIABLE_TraceCounter_0_102;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word SubGoals0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word SubGoals_55;
              MR_Word Var_120;
              MR_Box conv2_STATE_VARIABLE_TraceCounter_103;

              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (CurZone_7));
                MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (ZonesToDupVars_8));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_120, SubGoals0_54, &SubGoals_55, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_102)), &conv2_STATE_VARIABLE_TraceCounter_103);
              *STATE_VARIABLE_TraceCounter_103 = ((MR_Word) (conv2_STATE_VARIABLE_TraceCounter_103));
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = (MR_Box) ((MR_Unsigned) (ConjType_53));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 2) = ((MR_Box) (SubGoals_55));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_118;
              MR_Word SubGoals0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word SubGoals_125;
              MR_Box conv5_STATE_VARIABLE_TraceCounter_103;

              {
                Var_118 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (CurZone_7));
                MR_hl_field(MR_mktag(0), Var_118, 4) = ((MR_Box) (ZonesToDupVars_8));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_118, SubGoals0_124, &SubGoals_125, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_102)), &conv5_STATE_VARIABLE_TraceCounter_103);
              *STATE_VARIABLE_TraceCounter_103 = ((MR_Word) (conv5_STATE_VARIABLE_TraceCounter_103));
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = ((MR_Box) (SubGoals_125));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word CanFail_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word Cases_59;
              MR_Word Var_116;
              MR_Box conv12_STATE_VARIABLE_TraceCounter_103;

              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (CurZone_7));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (ZonesToDupVars_8));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_116, Cases0_58, &Cases_59, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_102)), &conv12_STATE_VARIABLE_TraceCounter_103);
              *STATE_VARIABLE_TraceCounter_103 = ((MR_Word) (conv12_STATE_VARIABLE_TraceCounter_103));
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 2) = (MR_Box) ((MR_Unsigned) (CanFail_57));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 3) = ((MR_Box) (Cases_59));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word SubGoal1_63;
              MR_Word STATE_VARIABLE_TraceCounter_113_113;
              MR_Word SubGoal0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word SubGoal_127;
              MR_Integer Var_162;

              hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_126, &SubGoal1_63, STATE_VARIABLE_TraceCounter_0_102, &STATE_VARIABLE_TraceCounter_113_113);
              succeeded = ((((MR_tag((MR_Word) Reason_62)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_62, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                Var_162 = (MR_Integer) 0;
                succeeded = (CurZone_7 == Var_162);
              }
              if (succeeded)
              {
                MR_Integer NewZone_69;
                MR_Word DupVars_70;
                MR_Box conv6_DupVars_70;

                mercury__counter__allocate_3_p_0(&NewZone_69, STATE_VARIABLE_TraceCounter_113_113, STATE_VARIABLE_TraceCounter_103);
                succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[2]), ZonesToDupVars_8, NewZone_69, &conv6_DupVars_70);
                if (succeeded)
                {
                  DupVars_70 = ((MR_Word) (conv6_DupVars_70));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word SortedDupVars_71;
                  MR_Word QuantReason_72;
                  MR_Word QuantExpr_73;
                  MR_Word SubGoalInfo1_75;

                  mercury__list__sort_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), DupVars_70, &SortedDupVars_71);
                  {
                    QuantReason_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), QuantReason_72, 0) = ((MR_Box) (SortedDupVars_71));
                  }
                  {
                    QuantExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), QuantExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), QuantExpr_73, 1) = ((MR_Box) (QuantReason_72));
                    MR_hl_field(MR_mktag(3), QuantExpr_73, 2) = ((MR_Box) (SubGoal1_63));
                  }
                  SubGoalInfo1_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal1_63, (MR_Integer) 1))));
                  {
                    SubGoal_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SubGoal_127, 0) = ((MR_Box) (QuantExpr_73));
                    MR_hl_field(MR_mktag(0), SubGoal_127, 1) = ((MR_Box) (SubGoalInfo1_75));
                  }
                }
                else
                  SubGoal_127 = SubGoal1_63;
              }
              else
              {
                SubGoal_127 = SubGoal1_63;
                *STATE_VARIABLE_TraceCounter_103 = STATE_VARIABLE_TraceCounter_113_113;
              }
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = ((MR_Box) (Reason_62));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 2) = ((MR_Box) (SubGoal_127));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word Cond0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
              MR_Word Then0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
              MR_Word Else0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
              MR_Word Cond_80;
              MR_Word Then_81;
              MR_Word Else_82;
              MR_Word STATE_VARIABLE_TraceCounter_110_110;
              MR_Word STATE_VARIABLE_TraceCounter_111_111;

              hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Cond0_77, &Cond_80, STATE_VARIABLE_TraceCounter_0_102, &STATE_VARIABLE_TraceCounter_110_110);
              hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Then0_78, &Then_81, STATE_VARIABLE_TraceCounter_110_110, &STATE_VARIABLE_TraceCounter_111_111);
              hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, Else0_79, &Else_82, STATE_VARIABLE_TraceCounter_111_111, STATE_VARIABLE_TraceCounter_103);
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = ((MR_Box) (Vars_76));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 2) = ((MR_Box) (Cond_80));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 3) = ((MR_Box) (Then_81));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 4) = ((MR_Box) (Else_82));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
              MR_Word ShortHand_88;

              switch (MR_tag((MR_Word) ShortHand0_83)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_83, (MR_Integer) 0))));
                    MR_Word SubGoalB0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_83, (MR_Integer) 1))));
                    MR_Word SubGoalA_86;
                    MR_Word SubGoalB_87;
                    MR_Word STATE_VARIABLE_TraceCounter_108_108;

                    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoalA0_84, &SubGoalA_86, STATE_VARIABLE_TraceCounter_0_102, &STATE_VARIABLE_TraceCounter_108_108);
                    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoalB0_85, &SubGoalB_87, STATE_VARIABLE_TraceCounter_108_108, STATE_VARIABLE_TraceCounter_103);
                    {
                      ShortHand_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortHand_88, 0) = ((MR_Box) (SubGoalA_86));
                      MR_hl_field(MR_mktag(0), ShortHand_88, 1) = ((MR_Box) (SubGoalB_87));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word OuterVars_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 1))));
                    MR_Word InnerVars_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 3))));
                    MR_Word MainGoal0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 5))));
                    MR_Word OrElseInners_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_83, (MR_Integer) 6))));
                    MR_Word MainGoal_96;
                    MR_Word OrElseGoals_97;
                    MR_Word STATE_VARIABLE_TraceCounter_105_105;
                    MR_Word Var_106;
                    MR_Box conv9_STATE_VARIABLE_TraceCounter_103;

                    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, MainGoal0_93, &MainGoal_96, STATE_VARIABLE_TraceCounter_0_102, &STATE_VARIABLE_TraceCounter_105_105);
                    {
                      Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (CurZone_7));
                      MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (ZonesToDupVars_8));
                    }
                    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_106, OrElseGoals0_94, &OrElseGoals_97, ((MR_Box) (STATE_VARIABLE_TraceCounter_105_105)), &conv9_STATE_VARIABLE_TraceCounter_103);
                    *STATE_VARIABLE_TraceCounter_103 = ((MR_Word) (conv9_STATE_VARIABLE_TraceCounter_103));
                    {
                      ShortHand_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 0) = (MR_Box) ((MR_Unsigned) (GoalType_89));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 1) = ((MR_Box) (OuterVars_90));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 2) = ((MR_Box) (InnerVars_91));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 3) = ((MR_Box) (MaybeOutputVars_92));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 4) = ((MR_Box) (MainGoal_96));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 5) = ((MR_Box) (OrElseGoals_97));
                      MR_hl_field(MR_mktag(1), ShortHand_88, 6) = ((MR_Box) (OrElseInners_95));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIOStateVars_98 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_83, (MR_Integer) 0))));
                    MR_Word ResultVar_99 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_83, (MR_Integer) 1))));
                    MR_Word SubGoal0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_83, (MR_Integer) 2))));
                    MR_Word SubGoal_129;

                    hlds__pre_quantification__add_exist_scopes_for_dup_vars_in_goal_6_p_0(CurZone_7, ZonesToDupVars_8, SubGoal0_128, &SubGoal_129, STATE_VARIABLE_TraceCounter_0_102, STATE_VARIABLE_TraceCounter_103);
                    {
                      ShortHand_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_88, 0) = ((MR_Box) (MaybeIOStateVars_98));
                      MR_hl_field(MR_mktag(2), ShortHand_88, 1) = ((MR_Box) (ResultVar_99));
                      MR_hl_field(MR_mktag(2), ShortHand_88, 2) = ((MR_Box) (SubGoal_129));
                    }
                  }
                  break;
              }
              {
                GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_31, 1) = ((MR_Box) (ShortHand_88));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_101 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_12));
    }
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_TraceCounter_15;
    MR_Word conv14_STATE_VARIABLE_VarsToZones_17;

    hlds__pre_quantification__build_vars_to_zones_in_case_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_TraceCounter_15, ((MR_Word) (wrapper_arg_4)), &conv14_STATE_VARIABLE_VarsToZones_17);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_TraceCounter_15));
    *wrapper_arg_5 = ((MR_Box) (conv14_STATE_VARIABLE_VarsToZones_17));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_TraceCounter_93;
    MR_Word conv10_STATE_VARIABLE_VarsToZones_95;

    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv10_STATE_VARIABLE_VarsToZones_95);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_TraceCounter_93));
    *wrapper_arg_5 = ((MR_Box) (conv10_STATE_VARIABLE_VarsToZones_95));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_TraceCounter_93;
    MR_Word conv6_STATE_VARIABLE_VarsToZones_95;

    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_VarsToZones_95);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_TraceCounter_93));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_VarsToZones_95));
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_TraceCounter_93;
    MR_Word conv2_STATE_VARIABLE_VarsToZones_95;

    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_TraceCounter_93, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_VarsToZones_95);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_TraceCounter_93));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_VarsToZones_95));
  }
}

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(
  MR_Integer CurZone_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_TraceCounter_0_92,
  MR_Word * STATE_VARIABLE_TraceCounter_93,
  MR_Word STATE_VARIABLE_VarsToZones_0_94,
  MR_Word * STATE_VARIABLE_VarsToZones_95)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_60 = (MR_Word) ((MR_Word) (GoalExpr_11));
          MR_Word next_value_of_Goal_8 = SubGoal_60;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_11, (MR_Integer) 0))));
          MR_Word RHS_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_11, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_VarsToZones_140_140;

          hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, LHSVar_38, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_140_140);
          switch (MR_tag((MR_Word) RHS_39)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_39, (MR_Integer) 0))));

                hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, RHSVar_43, STATE_VARIABLE_VarsToZones_140_140, STATE_VARIABLE_VarsToZones_95);
                *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSArgVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_39, (MR_Integer) 2))));

                hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, RHSArgVars_46, STATE_VARIABLE_VarsToZones_140_140, STATE_VARIABLE_VarsToZones_95);
                *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaVars_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_39, (MR_Integer) 3))));
                MR_Word LambdaGoal_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_39, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_VarsToZones_141_141;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                hlds__pre_quantification__record_vars_in_zone_4_p_0((MR_Integer) 0, LambdaVars_51, STATE_VARIABLE_VarsToZones_140_140, &STATE_VARIABLE_VarsToZones_141_141);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_8 = LambdaGoal_53;
                next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_141_141;
                CurZone_7 = (MR_Integer) 0;
                Goal_8 = next_value_of_Goal_8;
                STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 2))));

          hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, ArgVars_15, STATE_VARIABLE_VarsToZones_0_94, STATE_VARIABLE_VarsToZones_95);
          *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_VarsToZones_152_152;
              MR_Word ArgVars_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));

              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, ArgVars_156, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_152_152);
              switch (MR_tag((MR_Word) GenericCall_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ClosureVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 0))));

                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, ClosureVar_23, STATE_VARIABLE_VarsToZones_152_152, STATE_VARIABLE_VarsToZones_95);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeClassInfoVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_19, (MR_Integer) 0))));

                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, TypeClassInfoVar_27, STATE_VARIABLE_VarsToZones_152_152, STATE_VARIABLE_VarsToZones_95);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_VarsToZones_95 = STATE_VARIABLE_VarsToZones_152_152;
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_VarsToZones_95 = STATE_VARIABLE_VarsToZones_152_152;
                  break;
              }
              *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignArgs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
              MR_Word ExtraArgs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 5))));
              MR_Word Var_146;
              MR_Word STATE_VARIABLE_VarsToZones_147_147;
              MR_Word Var_149;

              Var_146 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[2]), ForeignArgs_34);
              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_146, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_147_147);
              Var_149 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_2[3]), ExtraArgs_35);
              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_149, STATE_VARIABLE_VarsToZones_147_147, STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = STATE_VARIABLE_TraceCounter_0_92;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word Var_137;
              MR_Box conv5_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv4_STATE_VARIABLE_VarsToZones_95;

              {
                Var_137 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_137, SubGoals_56, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv5_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_0_94)), &conv4_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv5_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv4_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word Var_210;
              MR_Box conv9_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv8_STATE_VARIABLE_VarsToZones_95;

              {
                Var_210 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_210, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_210, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_210, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_210, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_210, SubGoals_209, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv9_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_0_94)), &conv8_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv9_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv8_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_VarsToZones_133_133;
              MR_Word Var_134;
              MR_Box conv17_STATE_VARIABLE_TraceCounter_93;
              MR_Box conv16_STATE_VARIABLE_VarsToZones_95;

              hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, Var_57, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_133_133);
              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_6));
                MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (CurZone_7));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_134, Cases_59, ((MR_Box) (STATE_VARIABLE_TraceCounter_0_92)), &conv17_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_133_133)), &conv16_STATE_VARIABLE_VarsToZones_95);
              *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv17_STATE_VARIABLE_TraceCounter_93));
              *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv16_STATE_VARIABLE_VarsToZones_95));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Integer Var_214;

              succeeded = ((((MR_tag((MR_Word) Reason_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_61, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                Var_214 = (MR_Integer) 0;
                succeeded = (CurZone_7 == Var_214);
              }
              if (succeeded)
              {
                MR_Integer NewZone_67;
                MR_Word STATE_VARIABLE_TraceCounter_126_126;
                MR_Integer next_value_of_CurZone_7;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;

                mercury__counter__allocate_3_p_0(&NewZone_67, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_126_126);
                // direct tailcall eliminated
                ;
                next_value_of_CurZone_7 = NewZone_67;
                next_value_of_Goal_8 = SubGoal_169;
                next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_126_126;
                CurZone_7 = next_value_of_CurZone_7;
                Goal_8 = next_value_of_Goal_8;
                STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                continue;
              }
              else
              {
                MR_Word next_value_of_Goal_8 = SubGoal_169;

                // direct tailcall eliminated
                ;
                Goal_8 = next_value_of_Goal_8;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_VarsToZones_119_119;
              MR_Word STATE_VARIABLE_TraceCounter_120_120;
              MR_Word STATE_VARIABLE_VarsToZones_121_121;
              MR_Word STATE_VARIABLE_TraceCounter_122_122;
              MR_Word STATE_VARIABLE_VarsToZones_123_123;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;
              MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

              hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Vars_68, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_119_119);
              hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Cond_69, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_120_120, STATE_VARIABLE_VarsToZones_119_119, &STATE_VARIABLE_VarsToZones_121_121);
              hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, Then_70, STATE_VARIABLE_TraceCounter_120_120, &STATE_VARIABLE_TraceCounter_122_122, STATE_VARIABLE_VarsToZones_121_121, &STATE_VARIABLE_VarsToZones_123_123);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_71;
              next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_122_122;
              next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_123_123;
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
              STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_72, (MR_Integer) 0))));
                    MR_Word SubGoalB_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_72, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_TraceCounter_115_115;
                    MR_Word STATE_VARIABLE_VarsToZones_116_116;
                    MR_Word next_value_of_Goal_8;
                    MR_Word next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                    MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, SubGoalA_73, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_115_115, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_116_116);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_8 = SubGoalB_74;
                    next_value_of_STATE_VARIABLE_TraceCounter_0_92 = STATE_VARIABLE_TraceCounter_115_115;
                    next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_116_116;
                    Goal_8 = next_value_of_Goal_8;
                    STATE_VARIABLE_TraceCounter_0_92 = next_value_of_STATE_VARIABLE_TraceCounter_0_92;
                    STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OuterVars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_72, (MR_Integer) 1))));
                    MR_Word InnerVars_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_72, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_72, (MR_Integer) 3))));
                    MR_Word MainGoal_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_72, (MR_Integer) 4))));
                    MR_Word OrElseGoals_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_72, (MR_Integer) 5))));
                    MR_Word OVA_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterVars_76, (MR_Integer) 0))));
                    MR_Word OVB_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OuterVars_76, (MR_Integer) 1))));
                    MR_Word IVA_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerVars_77, (MR_Integer) 0))));
                    MR_Word IVB_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerVars_77, (MR_Integer) 1))));
                    MR_Word Var_103;
                    MR_Word STATE_VARIABLE_VarsToZones_104_104;
                    MR_Word Var_105;
                    MR_Word Var_106;
                    MR_Word Var_107;
                    MR_Word STATE_VARIABLE_VarsToZones_109_109;
                    MR_Word STATE_VARIABLE_TraceCounter_110_110;
                    MR_Word STATE_VARIABLE_VarsToZones_111_111;
                    MR_Word Var_112;
                    MR_Box conv13_STATE_VARIABLE_TraceCounter_93;
                    MR_Box conv12_STATE_VARIABLE_VarsToZones_95;

                    {
                      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (IVB_85));
                      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (IVA_84));
                      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
                    }
                    {
                      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (OVB_83));
                      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
                    }
                    {
                      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (OVA_82));
                      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
                    }
                    hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_103, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_104_104);
                    if ((MaybeOutputVars_78 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarsToZones_109_109 = STATE_VARIABLE_VarsToZones_104_104;
                    else
                    {
                      MR_Word OutputVars_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_78, (MR_Integer) 0))));

                      hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, OutputVars_86, STATE_VARIABLE_VarsToZones_104_104, &STATE_VARIABLE_VarsToZones_109_109);
                    }
                    hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0(CurZone_7, MainGoal_79, STATE_VARIABLE_TraceCounter_0_92, &STATE_VARIABLE_TraceCounter_110_110, STATE_VARIABLE_VarsToZones_109_109, &STATE_VARIABLE_VarsToZones_111_111);
                    {
                      Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&hlds__pre_quantification_scalar_common_4[0]));
                      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (hlds__pre_quantification__build_vars_to_zones_in_goal_6_p_0_5));
                      MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (CurZone_7));
                    }
                    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__pre_quantification_scalar_common_2[1]), Var_112, OrElseGoals_80, ((MR_Box) (STATE_VARIABLE_TraceCounter_110_110)), &conv13_STATE_VARIABLE_TraceCounter_93, ((MR_Box) (STATE_VARIABLE_VarsToZones_111_111)), &conv12_STATE_VARIABLE_VarsToZones_95);
                    *STATE_VARIABLE_TraceCounter_93 = ((MR_Word) (conv13_STATE_VARIABLE_TraceCounter_93));
                    *STATE_VARIABLE_VarsToZones_95 = ((MR_Word) (conv12_STATE_VARIABLE_VarsToZones_95));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIOStateVars_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_72, (MR_Integer) 0))));
                    MR_Word ResultVar_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_72, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_VarsToZones_97_97;
                    MR_Word STATE_VARIABLE_VarsToZones_100_100;
                    MR_Word SubGoal_170 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_72, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_8;
                    MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_94;

                    if ((MaybeIOStateVars_87 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarsToZones_97_97 = STATE_VARIABLE_VarsToZones_0_94;
                    else
                    {
                      MR_Word IOStateVars_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOStateVars_87, (MR_Integer) 0))));
                      MR_Word ISVA_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOStateVars_89, (MR_Integer) 0))));
                      MR_Word ISVB_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IOStateVars_89, (MR_Integer) 1))));
                      MR_Word Var_96;
                      MR_Word Var_98;

                      {
                        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (ISVB_91));
                        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ISVA_90));
                        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
                      }
                      hlds__pre_quantification__record_vars_in_zone_4_p_0(CurZone_7, Var_96, STATE_VARIABLE_VarsToZones_0_94, &STATE_VARIABLE_VarsToZones_97_97);
                    }
                    hlds__pre_quantification__record_var_in_zone_4_p_0(CurZone_7, ResultVar_88, STATE_VARIABLE_VarsToZones_97_97, &STATE_VARIABLE_VarsToZones_100_100);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_8 = SubGoal_170;
                    next_value_of_STATE_VARIABLE_VarsToZones_0_94 = STATE_VARIABLE_VarsToZones_100_100;
                    Goal_8 = next_value_of_Goal_8;
                    STATE_VARIABLE_VarsToZones_0_94 = next_value_of_STATE_VARIABLE_VarsToZones_0_94;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__pre_quantification__record_vars_in_zone_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarsToZones_0_3,
  MR_Word * STATE_VARIABLE_VarsToZones_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarsToZones_4 = STATE_VARIABLE_VarsToZones_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarsToZones_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarsToZones_0_3;

      hlds__pre_quantification__record_var_in_zone_4_p_0(HeadVar__1_1, Var_10, STATE_VARIABLE_VarsToZones_0_3, &STATE_VARIABLE_VarsToZones_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_VarsToZones_0_3 = STATE_VARIABLE_VarsToZones_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarsToZones_0_3 = next_value_of_STATE_VARIABLE_VarsToZones_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__pre_quantification__record_var_in_zone_4_p_0(
  MR_Integer Zone_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarsToZones_0_10,
  MR_Word * STATE_VARIABLE_VarsToZones_11)
{
  {
    MR_bool succeeded;
    MR_Word Zones0_8;
    MR_Box conv0_Zones0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), STATE_VARIABLE_VarsToZones_0_10, ((MR_Box) (Var_6)), &conv0_Zones0_8);
    if (succeeded)
    {
      Zones0_8 = ((MR_Word) (conv0_Zones0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_2_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zones0_8, Zone_5);
      if (succeeded)
        *STATE_VARIABLE_VarsToZones_11 = STATE_VARIABLE_VarsToZones_0_10;
      else
      {
        MR_Word Zones_9;

        mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zone_5, Zones0_8, &Zones_9);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), ((MR_Box) (Var_6)), ((MR_Box) (Zones_9)), STATE_VARIABLE_VarsToZones_0_10, STATE_VARIABLE_VarsToZones_11);
      }
    }
    else
    {
      MR_Word Zones_14;

      Zones_14 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_97_107_101_95_115_105_110_103_108_101_116_111_110_95_115_101_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_f_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[3]), Zone_5);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pre_quantification_scalar_common_1[0]), (MR_Word) (&hlds__pre_quantification_scalar_common_1[1]), ((MR_Box) (Var_6)), ((MR_Box) (Zones_14)), STATE_VARIABLE_VarsToZones_0_10, STATE_VARIABLE_VarsToZones_11);
    }
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____vars_to_zones_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pre_quantification____Unify____vars_to_zones_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____vars_to_zones_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pre_quantification____Compare____vars_to_zones_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zone_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pre_quantification____Unify____zone_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zone_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pre_quantification____Compare____zone_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__pre_quantification____Unify____zones_to_dup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__pre_quantification____Unify____zones_to_dup_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__pre_quantification____Compare____zones_to_dup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__pre_quantification____Compare____zones_to_dup_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.pre_quantification.
