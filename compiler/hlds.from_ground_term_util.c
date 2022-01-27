/*
** Automatically generated from `from_ground_term_util.m'
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


/* :- module hlds.from_ground_term_util. */
/* :- implementation. */

/*
INIT mercury__hlds__from_ground_term_util__init
ENDINIT
*/

#include "hlds.from_ground_term_util.mih"


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
#include "hlds.goal_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2];

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2];

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2];

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2];

static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0;

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2];

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2);

static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word * hlds__from_ground_term_util__GoalCord_4);

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6);

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_Kept_5,
  MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6,
  MR_Integer * hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9);

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4);

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
  MR_Box hlds__from_ground_term_util__closure_arg,
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box * hlds__from_ground_term_util__wrapper_arg_2);


static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0])),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_3[0])),
    ((MR_Box) (hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0)),
    ((MR_Box) (&hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0 = {
  (MR_String) "fgt_build_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0 = {
  (MR_String) "fgt_invariants_kept",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1 = {
  (MR_String) "fgt_invariants_broken",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_invariants_status",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0 = {
  (MR_String) "fgt_kept_goal",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1 = {
  (MR_String) "fgt_broken_goal",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_marked_goal",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0 = {
  (MR_String) "construct_bottom_up",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1 = {
  (MR_String) "deconstruct_top_down",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____goal_order_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____goal_order_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "goal_order",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0 = {
  (MR_String) "kept",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1 = {
  (MR_String) "broken",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0
};

static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2] = {
  (MR_String) "mkgi_size",
  (MR_String) "mkgi_old_goal_info"
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0 = {
  (MR_String) "kept_old_gi",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1 = {
  (MR_String) "broken_no_gi",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept_goal_info",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0
};

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____fgt_build_info_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____goal_order_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____goal_order_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____maybe_kept_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____maybe_kept_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    {
      hlds__from_ground_term_util__succeeded = hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
  MR_Box * hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box hlds__from_ground_term_util__wrapper_arg_2,
  MR_Box hlds__from_ground_term_util__wrapper_arg_3)
{
  {
    MR_Word hlds__from_ground_term_util__conv0_HeadVar__1_1;

    {
      hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(&hlds__from_ground_term_util__conv0_HeadVar__1_1, ((MR_Word) hlds__from_ground_term_util__wrapper_arg_2), ((MR_Word) hlds__from_ground_term_util__wrapper_arg_3));
    }
    *hlds__from_ground_term_util__wrapper_arg_1 = ((MR_Box) (hlds__from_ground_term_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_13 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__CastY_14 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_13 == hlds__from_ground_term_util__CastY_14);
    if (hlds__from_ground_term_util__succeeded)
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__from_ground_term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__from_ground_term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word hlds__from_ground_term_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer hlds__from_ground_term_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__from_ground_term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Integer hlds__from_ground_term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__V_8_8;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__from_ground_term_util__V_8_8, hlds__from_ground_term_util__V_18_18, hlds__from_ground_term_util__V_6_6);
            }
            hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
            hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
            if (hlds__from_ground_term_util__succeeded)
              *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_8_8;
            else
              {
                hlds__hlds_goal____Compare____hlds_goal_info_0_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__V_17_17, hlds__from_ground_term_util__V_7_7);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_9 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
    MR_Integer hlds__from_ground_term_util__CastY_10 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_9 == hlds__from_ground_term_util__CastY_10);
    if (hlds__from_ground_term_util__succeeded)
      hlds__from_ground_term_util__succeeded = MR_TRUE;
    else
    if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__from_ground_term_util__CastX_7 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
        MR_Integer hlds__from_ground_term_util__CastY_8 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastY_8 == hlds__from_ground_term_util__CastX_7);
      }
    else
      {
        MR_Integer hlds__from_ground_term_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer hlds__from_ground_term_util__V_5_5;
        MR_Word hlds__from_ground_term_util__V_6_6;

        hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__from_ground_term_util__succeeded)
          {
            hlds__from_ground_term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
            hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
            hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_3_3 == hlds__from_ground_term_util__V_5_5);
            if (hlds__from_ground_term_util__succeeded)
              {
                hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(hlds__from_ground_term_util__V_4_4, hlds__from_ground_term_util__V_6_6);
              }
          }
      }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

    return hlds__from_ground_term_util__succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

    return hlds__from_ground_term_util__succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_32 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__CastY_33 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_32 == hlds__from_ground_term_util__CastY_33);
    if (hlds__from_ground_term_util__succeeded)
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__from_ground_term_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__from_ground_term_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word hlds__from_ground_term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word hlds__from_ground_term_util__V_30_30;

            {
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__from_ground_term_util__V_30_30, hlds__from_ground_term_util__V_42_42, hlds__from_ground_term_util__V_27_27);
            }
            hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_30_30 == (MR_Integer) 0);
            hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
            if (hlds__from_ground_term_util__succeeded)
              *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_30_30;
            else
              {
                MR_Word hlds__from_ground_term_util__V_31_31;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], &hlds__from_ground_term_util__V_31_31, ((MR_Box) (hlds__from_ground_term_util__V_41_41)), ((MR_Box) (hlds__from_ground_term_util__V_28_28)));
                }
                hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_31_31 == (MR_Integer) 0);
                hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
                if (hlds__from_ground_term_util__succeeded)
                  *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_31_31;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[2], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_40_40)), ((MR_Box) (hlds__from_ground_term_util__V_29_29)));
                    }
                  }
              }
          }
        else
          *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word hlds__from_ground_term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__from_ground_term_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word hlds__from_ground_term_util__V_10_10;

            {
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__from_ground_term_util__V_10_10, hlds__from_ground_term_util__V_45_45, hlds__from_ground_term_util__V_7_7);
            }
            hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_10_10 == (MR_Integer) 0);
            hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
            if (hlds__from_ground_term_util__succeeded)
              *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_10_10;
            else
              {
                MR_Word hlds__from_ground_term_util__V_11_11;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], &hlds__from_ground_term_util__V_11_11, ((MR_Box) (hlds__from_ground_term_util__V_44_44)), ((MR_Box) (hlds__from_ground_term_util__V_8_8)));
                }
                hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_11_11 == (MR_Integer) 0);
                hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
                if (hlds__from_ground_term_util__succeeded)
                  *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_11_11;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[2], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_43_43)), ((MR_Box) (hlds__from_ground_term_util__V_9_9)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_15 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
    MR_Integer hlds__from_ground_term_util__CastY_16 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_15 == hlds__from_ground_term_util__CastY_16);
    if (hlds__from_ground_term_util__succeeded)
      hlds__from_ground_term_util__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__from_ground_term_util__TypeInfo_18_18;
        MR_Word hlds__from_ground_term_util__TypeInfo_19_19;
        MR_Word hlds__from_ground_term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__from_ground_term_util__V_12_12;
        MR_Word hlds__from_ground_term_util__V_13_13;
        MR_Word hlds__from_ground_term_util__V_14_14;

        hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__from_ground_term_util__succeeded)
          {
            hlds__from_ground_term_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
            hlds__from_ground_term_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
            hlds__from_ground_term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
            {
              hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__from_ground_term_util__V_9_9, hlds__from_ground_term_util__V_12_12);
            }
            if (hlds__from_ground_term_util__succeeded)
              {
                hlds__from_ground_term_util__TypeInfo_18_18 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
                {
                  hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_18_18, ((MR_Box) (hlds__from_ground_term_util__V_10_10)), ((MR_Box) (hlds__from_ground_term_util__V_13_13)));
                }
                if (hlds__from_ground_term_util__succeeded)
                  {
                    hlds__from_ground_term_util__TypeInfo_19_19 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[2];
                    {
                      hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_19_19, ((MR_Box) (hlds__from_ground_term_util__V_11_11)), ((MR_Box) (hlds__from_ground_term_util__V_14_14)));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word hlds__from_ground_term_util__TypeInfo_21_21;
        MR_Word hlds__from_ground_term_util__TypeInfo_22_22;
        MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__from_ground_term_util__V_6_6;
        MR_Word hlds__from_ground_term_util__V_7_7;
        MR_Word hlds__from_ground_term_util__V_8_8;

        hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__from_ground_term_util__succeeded)
          {
            hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
            hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
            hlds__from_ground_term_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 2)));
            {
              hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__from_ground_term_util__V_3_3, hlds__from_ground_term_util__V_6_6);
            }
            if (hlds__from_ground_term_util__succeeded)
              {
                hlds__from_ground_term_util__TypeInfo_21_21 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
                {
                  hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_21_21, ((MR_Box) (hlds__from_ground_term_util__V_4_4)), ((MR_Box) (hlds__from_ground_term_util__V_7_7)));
                }
                if (hlds__from_ground_term_util__succeeded)
                  {
                    hlds__from_ground_term_util__TypeInfo_22_22 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[2];
                    {
                      hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_22_22, ((MR_Box) (hlds__from_ground_term_util__V_5_5)), ((MR_Box) (hlds__from_ground_term_util__V_8_8)));
                    }
                  }
              }
          }
      }
    return hlds__from_ground_term_util__succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar1_4 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__Cast_HeadVar2_5 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__from_ground_term_util__HeadVar__1_1, hlds__from_ground_term_util__Cast_HeadVar1_4, hlds__from_ground_term_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__2_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__HeadVar__2_1 == hlds__from_ground_term_util__HeadVar__2_2);

    return hlds__from_ground_term_util__succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Word hlds__from_ground_term_util__Cast_HeadVar1_4 = hlds__from_ground_term_util__HeadVar__2_2;
    MR_Word hlds__from_ground_term_util__Cast_HeadVar2_5 = hlds__from_ground_term_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_2[0], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar1_4)), ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Word hlds__from_ground_term_util__Cast_HeadVar1_3 = hlds__from_ground_term_util__HeadVar__1_1;
    MR_Word hlds__from_ground_term_util__Cast_HeadVar2_4 = hlds__from_ground_term_util__HeadVar__2_2;

    {
      hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_2[0], ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar1_3)), ((MR_Box) (hlds__from_ground_term_util__Cast_HeadVar2_4)));
    }
    return hlds__from_ground_term_util__succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0(
  MR_Word * hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__HeadVar__3_3)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_9 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;
    MR_Integer hlds__from_ground_term_util__CastY_10 = (MR_Integer) hlds__from_ground_term_util__HeadVar__3_3;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_9 == hlds__from_ground_term_util__CastY_10);
    if (hlds__from_ground_term_util__succeeded)
      *hlds__from_ground_term_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_8_8;
        MR_Integer hlds__from_ground_term_util__CastX_22 = (MR_Integer) hlds__from_ground_term_util__V_4_4;
        MR_Integer hlds__from_ground_term_util__CastY_23 = (MR_Integer) hlds__from_ground_term_util__V_6_6;

        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_22 == hlds__from_ground_term_util__CastY_23);
        if (hlds__from_ground_term_util__succeeded)
          {
            hlds__from_ground_term_util__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
            hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
            if (hlds__from_ground_term_util__succeeded)
              {
                hlds__from_ground_term_util__V_8_8 = (MR_Integer) 0;
                hlds__from_ground_term_util__succeeded = MR_TRUE;
              }
          }
        else
        if ((hlds__from_ground_term_util__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__from_ground_term_util__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              hlds__from_ground_term_util__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
              hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
              if (hlds__from_ground_term_util__succeeded)
                {
                  hlds__from_ground_term_util__V_8_8 = (MR_Integer) 0;
                  hlds__from_ground_term_util__succeeded = MR_TRUE;
                }
            }
          else
            {
              hlds__from_ground_term_util__V_8_8 = (MR_Integer) 2;
              hlds__from_ground_term_util__succeeded = MR_TRUE;
            }
        else
          {
            MR_Word hlds__from_ground_term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_4_4, (MR_Integer) 1)));
            MR_Integer hlds__from_ground_term_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_4_4, (MR_Integer) 0)));

            if ((hlds__from_ground_term_util__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__from_ground_term_util__V_8_8 = (MR_Integer) 1;
                hlds__from_ground_term_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer hlds__from_ground_term_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_6_6, (MR_Integer) 0)));
                MR_Word hlds__from_ground_term_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_6_6, (MR_Integer) 1)));
                MR_Word hlds__from_ground_term_util__V_17_17;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__from_ground_term_util__V_17_17, hlds__from_ground_term_util__V_27_27, hlds__from_ground_term_util__V_15_15);
                }
                hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_17_17 == (MR_Integer) 0);
                hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
                if (hlds__from_ground_term_util__succeeded)
                  {
                    hlds__from_ground_term_util__V_8_8 = hlds__from_ground_term_util__V_17_17;
                    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
                    hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
                  }
                else
                  {
                    {
                      hlds__hlds_goal____Compare____hlds_goal_info_0_0(&hlds__from_ground_term_util__V_8_8, hlds__from_ground_term_util__V_26_26, hlds__from_ground_term_util__V_16_16);
                    }
                    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_8_8 == (MR_Integer) 0);
                    hlds__from_ground_term_util__succeeded = !(hlds__from_ground_term_util__succeeded);
                  }
              }
          }
        if (hlds__from_ground_term_util__succeeded)
          *hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[1], hlds__from_ground_term_util__HeadVar__1_1, ((MR_Box) (hlds__from_ground_term_util__V_5_5)), ((MR_Box) (hlds__from_ground_term_util__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Integer hlds__from_ground_term_util__CastX_7 = (MR_Integer) hlds__from_ground_term_util__HeadVar__1_1;
    MR_Integer hlds__from_ground_term_util__CastY_8 = (MR_Integer) hlds__from_ground_term_util__HeadVar__2_2;

    hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_7 == hlds__from_ground_term_util__CastY_8);
    if (hlds__from_ground_term_util__succeeded)
      hlds__from_ground_term_util__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__from_ground_term_util__TypeInfo_9_9;
        MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer hlds__from_ground_term_util__CastX_16 = (MR_Integer) hlds__from_ground_term_util__V_3_3;
        MR_Integer hlds__from_ground_term_util__CastY_17 = (MR_Integer) hlds__from_ground_term_util__V_5_5;

        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastX_16 == hlds__from_ground_term_util__CastY_17);
        if (hlds__from_ground_term_util__succeeded)
          hlds__from_ground_term_util__succeeded = MR_TRUE;
        else
        if ((hlds__from_ground_term_util__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer hlds__from_ground_term_util__CastX_14 = (MR_Integer) hlds__from_ground_term_util__V_3_3;
            MR_Integer hlds__from_ground_term_util__CastY_15 = (MR_Integer) hlds__from_ground_term_util__V_5_5;

            hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__CastY_15 == hlds__from_ground_term_util__CastX_14);
          }
        else
          {
            MR_Integer hlds__from_ground_term_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_3_3, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_3_3, (MR_Integer) 1)));
            MR_Integer hlds__from_ground_term_util__V_12_12;
            MR_Word hlds__from_ground_term_util__V_13_13;

            hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__V_5_5)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__from_ground_term_util__succeeded)
              {
                hlds__from_ground_term_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_5_5, (MR_Integer) 0)));
                hlds__from_ground_term_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__V_5_5, (MR_Integer) 1)));
                hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__V_10_10 == hlds__from_ground_term_util__V_12_12);
                if (hlds__from_ground_term_util__succeeded)
                  {
                    hlds__from_ground_term_util__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(hlds__from_ground_term_util__V_11_11, hlds__from_ground_term_util__V_13_13);
                  }
              }
          }
        if (hlds__from_ground_term_util__succeeded)
          {
            hlds__from_ground_term_util__TypeInfo_9_9 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[1];
            {
              hlds__from_ground_term_util__succeeded = mercury__builtin__unify_2_p_0(hlds__from_ground_term_util__TypeInfo_9_9, ((MR_Box) (hlds__from_ground_term_util__V_4_4)), ((MR_Box) (hlds__from_ground_term_util__V_6_6)));
            }
          }
      }
    return hlds__from_ground_term_util__succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word * hlds__from_ground_term_util__GoalCord_4)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Word hlds__from_ground_term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));

    *hlds__from_ground_term_util__GoalCord_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
  }
}

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__from_ground_term_util__succeeded;

        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_6 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5;
            *hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_4 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3;
          }
        else
          {
            MR_Word hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__BuildInfo_19;
            MR_Word hlds__from_ground_term_util__VarKept_20;
            MR_Word hlds__from_ground_term_util__VarGoalCord0_21;
            MR_Word hlds__from_ground_term_util__VarGoalCord_34;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45;
            MR_Box hlds__from_ground_term_util__conv0_BuildInfo_19;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_14)), &hlds__from_ground_term_util__conv0_BuildInfo_19, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39);
            }
            hlds__from_ground_term_util__BuildInfo_19 = ((MR_Word) hlds__from_ground_term_util__conv0_BuildInfo_19);
            hlds__from_ground_term_util__VarKept_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_19, (MR_Integer) 0)));
            hlds__from_ground_term_util__VarGoalCord0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_19, (MR_Integer) 1)));
            if ((hlds__from_ground_term_util__VarKept_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__from_ground_term_util__VarGoalCord_34 = hlds__from_ground_term_util__VarGoalCord0_21;
            else
              {
                MR_Integer hlds__from_ground_term_util__Size0_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_20, (MR_Integer) 0)));
                MR_Word hlds__from_ground_term_util__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_20, (MR_Integer) 1)));

                {
                  hlds__from_ground_term_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__VarGoalCord0_21);
                }
                if (hlds__from_ground_term_util__succeeded)
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.lookup_and_remove_arg_vars_insert_fgt\'/6", (MR_String) "VarGoalCord0 is empty");
                      return;
                    }
                  }
                else
                  {
                    MR_Word hlds__from_ground_term_util__MaybeThreshold_24;
                    MR_Integer hlds__from_ground_term_util__Threshold_25;

                    {
                      hlds__from_ground_term_util__MaybeThreshold_24 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
                    }
                    hlds__from_ground_term_util__succeeded = ((MR_tag((MR_Word) hlds__from_ground_term_util__MaybeThreshold_24)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__from_ground_term_util__succeeded)
                      {
                        hlds__from_ground_term_util__Threshold_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__MaybeThreshold_24, (MR_Integer) 0)));
                        hlds__from_ground_term_util__succeeded = (hlds__from_ground_term_util__Size0_22 >= hlds__from_ground_term_util__Threshold_25);
                      }
                    if (hlds__from_ground_term_util__succeeded)
                      {
                        MR_Word hlds__from_ground_term_util__TypeCtorInfo_52_52;
                        MR_Word hlds__from_ground_term_util__GoalInfo_26;
                        MR_Word hlds__from_ground_term_util__VarGoals0_27;
                        MR_Word hlds__from_ground_term_util__ConjGoalExpr_28;
                        MR_Word hlds__from_ground_term_util__ConjGoal_29;
                        MR_Word hlds__from_ground_term_util__Kind_30;
                        MR_Word hlds__from_ground_term_util__Reason_31;
                        MR_Word hlds__from_ground_term_util__ScopeGoalExpr_32;
                        MR_Word hlds__from_ground_term_util__ScopeGoal_33;
                        MR_Word hlds__from_ground_term_util__V_43_43;

                        {
                          hlds__from_ground_term_util__V_43_43 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__from_ground_term_util__Var_14);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__from_ground_term_util__V_43_43, hlds__from_ground_term_util__GoalInfo0_23, &hlds__from_ground_term_util__GoalInfo_26);
                        }
                        hlds__from_ground_term_util__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                        {
                          hlds__from_ground_term_util__VarGoals0_27 = mercury__cord__list_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_52_52, hlds__from_ground_term_util__VarGoalCord0_21);
                        }
                        {
                          hlds__from_ground_term_util__ConjGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ConjGoalExpr_28, 2) = ((MR_Box) (hlds__from_ground_term_util__VarGoals0_27));
                        }
                        {
                          hlds__from_ground_term_util__ConjGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ConjGoal_29, 0) = ((MR_Box) (hlds__from_ground_term_util__ConjGoalExpr_28));
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ConjGoal_29, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalInfo_26));
                        }
                        switch (hlds__from_ground_term_util__HeadVar__2_2) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            hlds__from_ground_term_util__Kind_30 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 1:
                            hlds__from_ground_term_util__Kind_30 = (MR_Integer) 0;
                            break;
                        }
                        {
                          hlds__from_ground_term_util__Reason_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 1) = ((MR_Box) (hlds__from_ground_term_util__Var_14));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__Reason_31, 2) = ((MR_Box) (hlds__from_ground_term_util__Kind_30));
                        }
                        {
                          hlds__from_ground_term_util__ScopeGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 1) = ((MR_Box) (hlds__from_ground_term_util__Reason_31));
                          MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__ScopeGoalExpr_32, 2) = ((MR_Box) (hlds__from_ground_term_util__ConjGoal_29));
                        }
                        {
                          hlds__from_ground_term_util__ScopeGoal_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ScopeGoal_33, 0) = ((MR_Box) (hlds__from_ground_term_util__ScopeGoalExpr_32));
                          MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__ScopeGoal_33, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalInfo_26));
                        }
                        {
                          hlds__from_ground_term_util__VarGoalCord_34 = mercury__cord__singleton_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_52_52, ((MR_Box) (hlds__from_ground_term_util__ScopeGoal_33)));
                        }
                      }
                    else
                      hlds__from_ground_term_util__VarGoalCord_34 = hlds__from_ground_term_util__VarGoalCord0_21;
                  }
              }
            {
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3, hlds__from_ground_term_util__VarGoalCord_34);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__Vars_15;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_45_45;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_5 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_5 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_5;
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_3;
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_Kept_5,
  MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6,
  MR_Integer * hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__from_ground_term_util__succeeded;

        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_9 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8;
            *hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_7 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6;
            *hlds__from_ground_term_util__STATE_VARIABLE_Kept_5 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4;
            *hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_3 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2;
          }
        else
          {
            MR_Word hlds__from_ground_term_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__BuildInfo_28;
            MR_Word hlds__from_ground_term_util__VarKept_29;
            MR_Word hlds__from_ground_term_util__VarGoalCord_30;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42;
            MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44;
            MR_Box hlds__from_ground_term_util__conv0_BuildInfo_28;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_22)), &hlds__from_ground_term_util__conv0_BuildInfo_28, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41);
            }
            hlds__from_ground_term_util__BuildInfo_28 = ((MR_Word) hlds__from_ground_term_util__conv0_BuildInfo_28);
            hlds__from_ground_term_util__VarKept_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_28, (MR_Integer) 0)));
            hlds__from_ground_term_util__VarGoalCord_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__BuildInfo_28, (MR_Integer) 1)));
            if ((hlds__from_ground_term_util__VarKept_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42 = (MR_Integer) 1;
                hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6;
              }
            else
              {
                MR_Integer hlds__from_ground_term_util__Size_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_29, (MR_Integer) 0)));
                MR_Word hlds__from_ground_term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__VarKept_29, (MR_Integer) 1)));

                hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43 = (hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6 + hlds__from_ground_term_util__Size_31);
                hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4;
              }
            {
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44 = mercury__cord__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2, hlds__from_ground_term_util__VarGoalCord_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__Vars_23;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_2 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_44_44;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_Kept_0__tmp_copy_4 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_42_42;
              MR_Integer hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0__tmp_copy_6 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_43_43;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_8 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_41_41;

              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_8 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_8;
              hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0_6 = hlds__from_ground_term_util__STATE_VARIABLE_TotalSize_0__tmp_copy_6;
              hlds__from_ground_term_util__STATE_VARIABLE_Kept_0_4 = hlds__from_ground_term_util__STATE_VARIABLE_Kept_0__tmp_copy_4;
              hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0_2 = hlds__from_ground_term_util__STATE_VARIABLE_GoalCord_0__tmp_copy_2;
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
  MR_Word hlds__from_ground_term_util__HeadVar__1_1,
  MR_Word hlds__from_ground_term_util__HeadVar__2_2,
  MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3,
  MR_Word * hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__from_ground_term_util__succeeded;

        if ((hlds__from_ground_term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_4 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3;
        else
          {
            MR_Word hlds__from_ground_term_util__RevMarkedGoal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__from_ground_term_util__RevMarkedGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__from_ground_term_util__Goal_13;
            MR_Word hlds__from_ground_term_util__Var_14;
            MR_Word hlds__from_ground_term_util__ArgsGoalCord_20;
            MR_Word hlds__from_ground_term_util__KeptGI_24;
            MR_Word hlds__from_ground_term_util__GoalCord_25;
            MR_Word hlds__from_ground_term_util__VarBuildInfo_26;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37;
            MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

            if (((MR_tag((MR_Word) hlds__from_ground_term_util__RevMarkedGoal_9)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__from_ground_term_util__V_29_29;
                MR_Word hlds__from_ground_term_util__ArgVars_41;

                hlds__from_ground_term_util__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 0)));
                hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 1)));
                hlds__from_ground_term_util__ArgVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 2)));
                {
                  hlds__from_ground_term_util__V_29_29 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                }
                {
                  hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(hlds__from_ground_term_util__ArgVars_41, hlds__from_ground_term_util__HeadVar__2_2, hlds__from_ground_term_util__V_29_29, &hlds__from_ground_term_util__ArgsGoalCord_20, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37);
                }
                hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word hlds__from_ground_term_util__TypeCtorInfo_42_42;
                MR_Word hlds__from_ground_term_util__ArgVars_15;
                MR_Word hlds__from_ground_term_util__ArgsGoalCord0_17;
                MR_Word hlds__from_ground_term_util__Kept_18;
                MR_Integer hlds__from_ground_term_util__TotalArgSize_19;
                MR_Word hlds__from_ground_term_util__V_31_31;
                MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34;

                hlds__from_ground_term_util__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 0)));
                hlds__from_ground_term_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 1)));
                hlds__from_ground_term_util__ArgVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__RevMarkedGoal_9, (MR_Integer) 2)));
                hlds__from_ground_term_util__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                {
                  hlds__from_ground_term_util__V_31_31 = mercury__cord__init_0_f_0(hlds__from_ground_term_util__TypeCtorInfo_42_42);
                }
                {
                  hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(hlds__from_ground_term_util__ArgVars_15, hlds__from_ground_term_util__V_31_31, &hlds__from_ground_term_util__ArgsGoalCord0_17, (MR_Integer) 0, &hlds__from_ground_term_util__Kept_18, (MR_Integer) 0, &hlds__from_ground_term_util__TotalArgSize_19, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34);
                }
                switch (hlds__from_ground_term_util__Kept_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__from_ground_term_util__V_36_36;

                      {
                        hlds__from_ground_term_util__V_36_36 = mercury__cord__init_0_f_0(hlds__from_ground_term_util__TypeCtorInfo_42_42);
                      }
                      {
                        hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(hlds__from_ground_term_util__ArgVars_15, hlds__from_ground_term_util__HeadVar__2_2, hlds__from_ground_term_util__V_36_36, &hlds__from_ground_term_util__ArgsGoalCord_20, hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37);
                      }
                      hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__from_ground_term_util__OldGoalInfo_22;
                      MR_Integer hlds__from_ground_term_util__TotalSize_23;
                      MR_Word hlds__from_ground_term_util__V_21_21;

                      hlds__from_ground_term_util__ArgsGoalCord_20 = hlds__from_ground_term_util__ArgsGoalCord0_17;
                      hlds__from_ground_term_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__Goal_13, (MR_Integer) 0)));
                      hlds__from_ground_term_util__OldGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__Goal_13, (MR_Integer) 1)));
                      hlds__from_ground_term_util__TotalSize_23 = (hlds__from_ground_term_util__TotalArgSize_19 + (MR_Integer) 1);
                      {
                        hlds__from_ground_term_util__KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__KeptGI_24, 0) = ((MR_Box) (hlds__from_ground_term_util__TotalSize_23));
                        MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__KeptGI_24, 1) = ((MR_Box) (hlds__from_ground_term_util__OldGoalInfo_22));
                      }
                      hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_34_34;
                    }
                    break;
                }
              }
            switch (hlds__from_ground_term_util__HeadVar__2_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    hlds__from_ground_term_util__GoalCord_25 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__from_ground_term_util__ArgsGoalCord_20, ((MR_Box) (hlds__from_ground_term_util__Goal_13)));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    hlds__from_ground_term_util__GoalCord_25 = mercury__cord__cons_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (hlds__from_ground_term_util__Goal_13)), hlds__from_ground_term_util__ArgsGoalCord_20);
                  }
                }
                break;
            }
            {
              hlds__from_ground_term_util__VarBuildInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__VarBuildInfo_26, 0) = ((MR_Box) (hlds__from_ground_term_util__KeptGI_24));
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__VarBuildInfo_26, 1) = ((MR_Box) (hlds__from_ground_term_util__GoalCord_25));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__from_ground_term_util_scalar_common_1[0], (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0, ((MR_Box) (hlds__from_ground_term_util__Var_14)), ((MR_Box) (hlds__from_ground_term_util__VarBuildInfo_26)), hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_37_37, &hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__from_ground_term_util__HeadVar__1__tmp_copy_1 = hlds__from_ground_term_util__RevMarkedGoals_10;
              MR_Word hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_3 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_39_39;

              hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0_3 = hlds__from_ground_term_util__STATE_VARIABLE_BuildInfoMap_0__tmp_copy_3;
              hlds__from_ground_term_util__HeadVar__1_1 = hlds__from_ground_term_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
  MR_Box hlds__from_ground_term_util__closure_arg,
  MR_Box hlds__from_ground_term_util__wrapper_arg_1,
  MR_Box * hlds__from_ground_term_util__wrapper_arg_2)
{
  {
    MR_Box hlds__from_ground_term_util__closure = hlds__from_ground_term_util__closure_arg;
    MR_Word hlds__from_ground_term_util__conv0_GoalCord_4;

    {
      hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(((MR_Word) hlds__from_ground_term_util__wrapper_arg_1), &hlds__from_ground_term_util__conv0_GoalCord_4);
    }
    *hlds__from_ground_term_util__wrapper_arg_2 = ((MR_Box) (hlds__from_ground_term_util__conv0_GoalCord_4));
  }
}

void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(
  MR_Word hlds__from_ground_term_util__GoalInfo0_6,
  MR_Word hlds__from_ground_term_util__SubGoalInfo0_7,
  MR_Word hlds__from_ground_term_util__RevMarkedSubGoals_8,
  MR_Word hlds__from_ground_term_util__Order_9,
  MR_Word * hlds__from_ground_term_util__SubGoal_10)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;
    MR_Word hlds__from_ground_term_util__TypeInfo_34_34 = (MR_Word) &hlds__from_ground_term_util_scalar_common_1[0];
    MR_Word hlds__from_ground_term_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;
    MR_Word hlds__from_ground_term_util__TypeCtorInfo_39_39;
    MR_Word hlds__from_ground_term_util__BuildInfoMap_11;
    MR_Word hlds__from_ground_term_util__BuildInfos_12;
    MR_Word hlds__from_ground_term_util__BuildGoalCords_13;
    MR_Word hlds__from_ground_term_util__BuildGoalCord_14;
    MR_Word hlds__from_ground_term_util__BuildGoals_15;
    MR_Word hlds__from_ground_term_util__SubGoal1_16;
    MR_Word hlds__from_ground_term_util__V_21_21;

    {
      hlds__from_ground_term_util__V_21_21 = mercury__map__init_0_f_0(hlds__from_ground_term_util__TypeInfo_34_34, hlds__from_ground_term_util__TypeCtorInfo_35_35);
    }
    {
      hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(hlds__from_ground_term_util__RevMarkedSubGoals_8, hlds__from_ground_term_util__Order_9, hlds__from_ground_term_util__V_21_21, &hlds__from_ground_term_util__BuildInfoMap_11);
    }
    {
      mercury__map__values_2_p_0(hlds__from_ground_term_util__TypeInfo_34_34, hlds__from_ground_term_util__TypeCtorInfo_35_35, hlds__from_ground_term_util__BuildInfoMap_11, &hlds__from_ground_term_util__BuildInfos_12);
    }
    {
      mercury__list__map_3_p_0(hlds__from_ground_term_util__TypeCtorInfo_35_35, (MR_Word) &hlds__from_ground_term_util_scalar_common_1[1], (MR_Word) &hlds__from_ground_term_util_scalar_common_2[1], hlds__from_ground_term_util__BuildInfos_12, &hlds__from_ground_term_util__BuildGoalCords_13);
    }
    hlds__from_ground_term_util__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      hlds__from_ground_term_util__BuildGoalCord_14 = mercury__cord__cord_list_to_cord_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_39_39, hlds__from_ground_term_util__BuildGoalCords_13);
    }
    {
      hlds__from_ground_term_util__BuildGoals_15 = mercury__cord__list_1_f_0(hlds__from_ground_term_util__TypeCtorInfo_39_39, hlds__from_ground_term_util__BuildGoalCord_14);
    }
    if ((hlds__from_ground_term_util__BuildGoals_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.introduce_partial_fgt_scopes\'/5", (MR_String) "BuildGoals = []");
          return;
        }
      }
    else
      {
        MR_Word hlds__from_ground_term_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__BuildGoals_15, (MR_Integer) 1)));
        MR_Word hlds__from_ground_term_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__from_ground_term_util__BuildGoals_15, (MR_Integer) 0)));

        if ((hlds__from_ground_term_util__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__from_ground_term_util__SubGoal1_16 = hlds__from_ground_term_util__V_41_41;
        else
          {
            MR_Word hlds__from_ground_term_util__SubGoalExpr1_20;

            {
              hlds__from_ground_term_util__SubGoalExpr1_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__from_ground_term_util__SubGoalExpr1_20, 2) = ((MR_Box) (hlds__from_ground_term_util__BuildGoals_15));
            }
            {
              hlds__from_ground_term_util__SubGoal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__SubGoal1_16, 0) = ((MR_Box) (hlds__from_ground_term_util__SubGoalExpr1_20));
              MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__SubGoal1_16, 1) = ((MR_Box) (hlds__from_ground_term_util__SubGoalInfo0_7));
            }
          }
      }
    {
      hlds__from_ground_term_util__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__from_ground_term_util__GoalInfo0_6, (MR_Integer) 1);
    }
    if (hlds__from_ground_term_util__succeeded)
      {
        {
          hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__from_ground_term_util_scalar_common_1[3]), (MR_Integer) 0, hlds__from_ground_term_util__SubGoal1_16, hlds__from_ground_term_util__SubGoal_10);
        }
      }
    else
      *hlds__from_ground_term_util__SubGoal_10 = hlds__from_ground_term_util__SubGoal1_16;
  }
}

void MR_CALL 
hlds__from_ground_term_util__project_kept_goal_2_p_0(
  MR_Word hlds__from_ground_term_util__MarkedGoal_3,
  MR_Word * hlds__from_ground_term_util__Goal_4)
{
  {
    MR_bool hlds__from_ground_term_util__succeeded;

    if (((MR_tag((MR_Word) hlds__from_ground_term_util__MarkedGoal_3)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.from_ground_term_util", (MR_String) "predicate \140hlds.from_ground_term_util.project_kept_goal\'/2", (MR_String) "broken goal");
          return;
        }
      }
    else
      {
        MR_Word hlds__from_ground_term_util__V_5_5;
        MR_Word hlds__from_ground_term_util__V_6_6;

        *hlds__from_ground_term_util__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 0)));
        hlds__from_ground_term_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 1)));
        hlds__from_ground_term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__from_ground_term_util__MarkedGoal_3, (MR_Integer) 2)));
      }
  }
}

void mercury__hlds__from_ground_term_util__init(void)
{
}

void mercury__hlds__from_ground_term_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0);
}

void mercury__hlds__from_ground_term_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.from_ground_term_util. */
