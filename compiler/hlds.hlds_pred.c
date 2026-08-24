/*
** Automatically generated from `hlds_pred.m'
** by the Mercury compiler,
** version rotd-2026-08-24
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


// :- module hlds.hlds_pred.
// :- implementation.

/*
INIT mercury__hlds__hlds_pred__init
ENDINIT
*/

#include "hlds.hlds_pred.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_proc__type_ctor_info_proc_info_0;

static const MR_PseudoTypeInfo hlds__hlds_pred__hlds__hlds_pred__field_types_pred_info_0_0[15];

static const MR_ConstString hlds__hlds_pred__hlds__hlds_pred__field_names_pred_info_0_0[15];

static const MR_DuArgLocn hlds__hlds_pred__hlds__hlds_pred__field_locns_pred_info_0_0[15];

static const MR_DuFunctorDesc hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_info_0[1];

static const MR_Integer hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_promise__type_ctor_info_assert_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_format_call_info_0;

static const MR_PseudoTypeInfo hlds__hlds_pred__hlds__hlds_pred__field_types_pred_sub_info_0_0[17];

static const MR_ConstString hlds__hlds_pred__hlds__hlds_pred__field_names_pred_sub_info_0_0[17];

static const MR_DuFunctorDesc hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_sub_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_sub_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_sub_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_sub_info_0[1];

static const MR_Integer hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_sub_info_0[1];

static void MR_CALL 
hlds__hlds_pred____Compare____pred_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_pred__compute_arg_types_modes_6_p_0(
  MR_Word VarTable_1,
  MR_Word InstMapInit_2,
  MR_Word InstMapFinal_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____external_type_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_pred____Compare____external_type_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_pred____Compare____pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_pred____Compare____pred_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____proc_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_pred____Compare____proc_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_pred_scalar_common_1[13][2];

static /* final */ const MR_Box hlds__hlds_pred_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__hlds_pred_scalar_common_3[5][1];




static /* final */ const MR_Box hlds__hlds_pred_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_2[8]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[10]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_format_call_info_0))
  },
};

static /* final */ const MR_Box hlds__hlds_pred_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_1[1])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_2[7])),
    ((MR_Box) (&hlds__hlds_pred_scalar_common_2[7]))
  },
};

static /* final */ const MR_Box hlds__hlds_pred_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (&hlds__hlds_pred_scalar_common_3[0])) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 1)) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

const MR_TypeCtorInfo_Struct hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_external_type_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_pred____Unify____external_type_params_0_0_10001)),
  ((MR_Box) (hlds__hlds_pred____Compare____external_type_params_0_0_10001)),
  (MR_String) "hlds.hlds_pred",
  (MR_String) "external_type_params",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_proc__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_pred__hlds__hlds_pred__field_types_pred_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_pred_status_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_univ_exist_constraints_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_proc__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_sub_info_0)
};

static const MR_ConstString hlds__hlds_pred__hlds__hlds_pred__field_names_pred_info_0_0[15] = {
  (MR_String) "pi_module_name",
  (MR_String) "pi_is_pred_or_func",
  (MR_String) "pi_name",
  (MR_String) "pi_orig_arity",
  (MR_String) "pi_pred_origin",
  (MR_String) "pi_status",
  (MR_String) "pi_markers",
  (MR_String) "pi_arg_types",
  (MR_String) "pi_decl_typevarset",
  (MR_String) "pi_typevarset",
  (MR_String) "pi_exist_quant_tvars",
  (MR_String) "pi_class_context",
  (MR_String) "pi_clauses_info",
  (MR_String) "pi_proc_table",
  (MR_String) "pi_pred_sub_info"
};

static const MR_DuArgLocn hlds__hlds_pred__hlds__hlds_pred__field_locns_pred_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_info_0_0 = {
  (MR_String) "pred_info",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_pred__hlds__hlds_pred__field_types_pred_info_0_0,
  hlds__hlds_pred__hlds__hlds_pred__field_names_pred_info_0_0,
  hlds__hlds_pred__hlds__hlds_pred__field_locns_pred_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_info_0_0[1] = { &hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_info_0[1] = { &hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_info_0_0 };

static const MR_Integer hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_pred____Unify____pred_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_pred____Compare____pred_info_0_0_10001)),
  (MR_String) "hlds.hlds_pred",
  (MR_String) "pred_info",
  { hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_info_0 },
  { hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_promise__type_ctor_info_assert_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_format_call_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_format_call_info_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_pred__hlds__hlds_pred__field_types_pred_sub_info_0_0[17] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_goal_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_inst_graph_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__set_ordlist__ti_set_ordlist_1hlds__hlds_promise__type_ctor_info_assert_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__maybe__ti_maybe_1hlds__pred_info_types__type_ctor_info_format_call_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString hlds__hlds_pred__hlds__hlds_pred__field_names_pred_sub_info_0_0[17] = {
  (MR_String) "psi_context",
  (MR_String) "psi_cur_user_decl",
  (MR_String) "psi_goal_type",
  (MR_String) "psi_tvar_kind_map",
  (MR_String) "psi_existq_tvar_binding",
  (MR_String) "psi_polymorphism_added_args",
  (MR_String) "psi_external_type_params",
  (MR_String) "psi_constraint_proof_map",
  (MR_String) "psi_constraint_map",
  (MR_String) "psi_unproven_body_constraints",
  (MR_String) "psi_inst_graph_info",
  (MR_String) "psi_arg_modes_maps",
  (MR_String) "psi_var_name_remap",
  (MR_String) "psi_assertions",
  (MR_String) "psi_obsolete_in_favour_of",
  (MR_String) "psi_format_call_info",
  (MR_String) "psi_instance_method_arg_types"
};

static const MR_DuFunctorDesc hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_sub_info_0_0 = {
  (MR_String) "pred_sub_info",
  INT16_C(17),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_pred__hlds__hlds_pred__field_types_pred_sub_info_0_0,
  hlds__hlds_pred__hlds__hlds_pred__field_names_pred_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_sub_info_0_0[1] = { &hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_sub_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_pred__hlds__hlds_pred__du_stag_ordered_pred_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_sub_info_0[1] = { &hlds__hlds_pred__hlds__hlds_pred__du_functor_desc_pred_sub_info_0_0 };

static const MR_Integer hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_pred____Unify____pred_sub_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_pred____Compare____pred_sub_info_0_0_10001)),
  (MR_String) "hlds.hlds_pred",
  (MR_String) "pred_sub_info",
  { hlds__hlds_pred__hlds__hlds_pred__du_name_ordered_pred_sub_info_0 },
  { hlds__hlds_pred__hlds__hlds_pred__du_ptag_ordered_pred_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_pred__hlds__hlds_pred__functor_number_map_pred_sub_info_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_pred____Unify____proc_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_pred____Compare____proc_table_0_0_10001)),
  (MR_String) "hlds.hlds_pred",
  (MR_String) "proc_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_proc__type_ctor_info_proc_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__hlds_pred____Compare____proc_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_pred____Unify____proc_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred____Compare____pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_65 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_66 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_65 < Var_66);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_65 > Var_66);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_67 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_68 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_67 < Var_68);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_67 > Var_68);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__pred_name____Compare____pred_origin_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__status____Compare____pred_status_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[5]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[6]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[2]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[2]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[3]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          parse_tree__prog_data____Compare____univ_exist_constraints_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            hlds__hlds_clauses____Compare____clauses_info_0_0(&SubResult13_42, ArgX13_40, ArgY13_41);
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[5]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                                hlds__hlds_pred____Compare____pred_sub_info_0_0(HeadVar__1_1, ArgX15_46, ArgY15_47);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_pred____Compare____pred_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_54 == CastY_55);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__pred_info_types____Compare____goal_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[2]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[3]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[4]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        hlds__inst_graph____Compare____inst_graph_info_0_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[8]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[4]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[9]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[11]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[12]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_46_46;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Integer Var_47;
    MR_Integer Var_48;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          Var_47 = (MR_Integer) (ArgX4_9);
          Var_48 = (MR_Integer) (ArgY4_10);
          succeeded = (Var_47 == Var_48);
          if (succeeded)
          {
            succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = hlds__status____Unify____pred_status_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_39_39 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_40_40 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_41_41 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_42_42 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_43_43 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[3]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          succeeded = parse_tree__prog_data____Unify____univ_exist_constraints_0_0(ArgX12_25, ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(ArgX13_27, ArgY13_28);
                            if (succeeded)
                            {
                              TypeInfo_46_46 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[5]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                                succeeded = hlds__hlds_pred____Unify____pred_sub_info_0_0(ArgX15_31, ArgY15_32);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_37 == CastY_38);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_50_50;
    MR_Word TypeInfo_51_51;
    MR_Word TypeInfo_52_52;
    MR_Word TypeInfo_53_53;
    MR_Word TypeInfo_54_54;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_40_40 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__pred_info_types____Unify____goal_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_42_42 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_43_43 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                TypeInfo_44_44 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_45_45 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_46_46 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_47_47 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        succeeded = hlds__inst_graph____Unify____inst_graph_info_0_0(ArgX11_23, ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_49_49 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[8]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_50_50 = (MR_Word) (&hlds__hlds_pred_scalar_common_2[4]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_51_51 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[9]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_52_52 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[11]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_53_53 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[12]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_54_54 = (MR_Word) (&hlds__hlds_pred_scalar_common_1[6]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred____Compare____external_type_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_pred____Unify____external_type_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_instance_method_arg_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (X_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_format_call_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_obsolete_in_favour_of_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_assertions_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_var_name_remap_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, 3))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, 6))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, 7))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, 8))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_11, 9))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_64));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_arg_modes_maps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_inst_graph_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, 3))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, 6))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, 7))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, 8))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Var_11, 12))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_64));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, 3))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, 6))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, 7))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_11, 9))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Var_11, 12))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_64));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, 3))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, 6))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, 8))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_11, 9))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Var_11, 12))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, 3))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, 7))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, 8))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_11, 9))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Var_11, 12))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_64));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_polymorphism_added_args_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_existq_tvar_binding_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_tvar_kind_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
    MR_Word Var_12;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_45 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, 2))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, 4))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, Var_11, 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, 6))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, 7))));
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, 8))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, Var_11, 9))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_11, 10))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, 11))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Var_11, 12))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_11, 13))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_11, 14))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_11, 15))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_11, 16))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_62));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_63));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_64));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_65));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_71));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_44));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_class_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_typevarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_25 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_24));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 9) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_37));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_markers_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_goal_type_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, 4))));
  MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_9, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_9, 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, 10))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, 11))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, 12))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, 13))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, 14))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, 15))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, 16))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_41));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_status_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_origin_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
    MR_String Var_25 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_24));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_37));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_orig_arity_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_name_3_p_0(
  MR_String X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_is_pred_or_func_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);

  succeeded = (X_4 == Var_37);
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
    MR_String Var_24 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (X_4));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_module_name_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_instance_method_arg_types_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 16))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 15))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 14))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_assertions_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 13))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 12))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_arg_modes_maps_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 11))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 10))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 9))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 8))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 7))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 6))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_polymorphism_added_args_2_p_0(
  MR_Word PI_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, 5))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_existq_tvar_binding_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 4))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 3))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_goal_type_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_context_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PI_3, 14))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 0))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_proc_table_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 13))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 12))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_class_context_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 11))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 10))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_typevarset_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 9))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_arg_types_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 7))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_markers_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 6))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_status_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 5))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 3))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_name_2_p_0(
  MR_Word PI_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(0, PI_3, 2))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, PI_3, 1))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_module_name_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 0))));
}

void MR_CALL 
hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(
  MR_Word PredInfo_4,
  MR_Word Globals_5,
  MR_Word * BodyTypeInfoLiveness_6)
{
  MR_bool succeeded;
  MR_Word PredModule_7 = ((MR_Word) ((MR_hl_field(0, PredInfo_4, 0))));
  MR_String PredName_8 = ((MR_String) ((MR_hl_field(0, PredInfo_4, 2))));
  MR_Integer PredFormArityInt_9;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, PredInfo_4, 3))));

  PredFormArityInt_9 = (MR_Integer) (Var_13);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_7, PredName_8, PredFormArityInt_9);
  if (succeeded)
    *BodyTypeInfoLiveness_6 = (MR_Integer) 0;
  else
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 763, BodyTypeInfoLiveness_6);
}

void MR_CALL 
hlds__hlds_pred__proc_interface_should_use_typeinfo_liveness_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word Globals_7,
  MR_Word * InterfaceTypeInfoLiveness_8)
{
  MR_bool succeeded;
  MR_Word PredModule_9 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 0))));
  MR_String PredName_10 = ((MR_String) ((MR_hl_field(0, PredInfo_5, 2))));
  MR_Integer PredFormArityInt_11;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 3))));

  PredFormArityInt_11 = (MR_Integer) (Var_21);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_9, PredName_10, PredFormArityInt_11);
  if (succeeded)
    *InterfaceTypeInfoLiveness_8 = (MR_Integer) 0;
  else
  {
    MR_Word Status_12 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
    MR_Word ProcTable_13 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 13))));
    MR_Word ProcInfo_14;
    MR_Word IsAddressTaken_15;
    MR_Box conv0_ProcInfo_14;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_13, ((MR_Box) (ProcId_6)), &conv0_ProcInfo_14);
    ProcInfo_14 = ((MR_Word) (conv0_ProcInfo_14));
    hlds__hlds_proc__proc_info_get_is_address_taken_2_p_0(ProcInfo_14, &IsAddressTaken_15);
    succeeded = (IsAddressTaken_15 == (MR_Integer) 0);
    if (!(succeeded))
    {
      {
        MR_Word Var_89 = (MR_Word) (Status_12);

        succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 32U));
      }
      if (!(succeeded))
      {
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, (MR_Integer) 83, (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_7, (MR_Integer) 84, (MR_Integer) 1);
          if (!(succeeded))
          {
            MR_Word Var_95;

            libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 763, &Var_95);
            succeeded = ((MR_Integer) 1 == Var_95);
          }
        }
      }
    }
    if (succeeded)
      *InterfaceTypeInfoLiveness_8 = (MR_Integer) 1;
    else
      *InterfaceTypeInfoLiveness_8 = (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
hlds__hlds_pred__calls_are_fully_qualified_1_f_0(
  MR_Word Markers_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 23);
  if (succeeded)
    HeadVar__2_2 = (MR_Integer) 0;
  else
    HeadVar__2_2 = (MR_Integer) 1;
  return HeadVar__2_2;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(
  MR_Word PredInfo0_2)
{
  MR_bool succeeded;
  MR_Word Markers_3 = ((MR_Word) ((MR_hl_field(0, PredInfo0_2, 6))));

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 8);
  if (!(succeeded))
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 9);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_requested_inlining_1_p_0(
  MR_Word PredInfo0_2)
{
  MR_bool succeeded;
  MR_Word Markers_3 = ((MR_Word) ((MR_hl_field(0, PredInfo0_2, 6))));

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 6);
  if (!(succeeded))
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 7);
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(
  MR_Word PredInfo0_3,
  MR_Word * MaybePromisedPurity_4)
{
  MR_bool succeeded;
  MR_Word Markers_5 = ((MR_Word) ((MR_hl_field(0, PredInfo0_3, 6))));

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_5, (MR_Integer) 17);
  if (succeeded)
    *MaybePromisedPurity_4 = (MR_Word) (MR_mkword(1, &hlds__hlds_pred_scalar_common_3[3]));
  else
  {
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_5, (MR_Integer) 18);
    if (succeeded)
      *MaybePromisedPurity_4 = (MR_Word) (MR_mkword(1, &hlds__hlds_pred_scalar_common_3[4]));
    else
      *MaybePromisedPurity_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_purity_2_p_0(
  MR_Word PredInfo0_3,
  MR_Word * Purity_4)
{
  MR_bool succeeded;
  MR_Word Markers_5 = ((MR_Word) ((MR_hl_field(0, PredInfo0_3, 6))));

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_5, (MR_Integer) 15);
  if (succeeded)
    *Purity_4 = (MR_Integer) 2;
  else
  {
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_5, (MR_Integer) 16);
    if (succeeded)
      *Purity_4 = (MR_Integer) 1;
    else
      *Purity_4 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_infer_modes_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word Markers_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 6))));

  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_3, (MR_Integer) 3);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_defn_has_foreign_proc_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word GoalType_3;
  MR_Word NPGoalType_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 14))));

  GoalType_3 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
  succeeded = ((MR_tag((MR_Word) GoalType_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    NPGoalType_4 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_3, 0))) & (MR_Integer) 3);
    switch (NPGoalType_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_defn_has_clause_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word GoalType_3;
  MR_Word NPGoalType_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 14))));

  GoalType_3 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
  succeeded = ((MR_tag((MR_Word) GoalType_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    NPGoalType_4 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_3, 0))) & (MR_Integer) 3);
    switch (NPGoalType_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__procedure_is_exported_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredInfo_5,
  MR_Integer ProcId_6)
{
  MR_bool succeeded;

  {
    MR_Word PredStatus_24 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
    MR_Word Var_25 = (MR_Word) (PredStatus_24);

    succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 12U));
  }
  if (!(succeeded))
  {
    {
      MR_Word PredStatus_40 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
      MR_Word Var_41 = (MR_Word) (PredStatus_40);

      succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 16U));
    }
    if (!(succeeded))
    {
      {
        MR_Word PredStatus_56 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
        MR_Word Var_57 = (MR_Word) (PredStatus_56);

        succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 28U));
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_19;
          MR_Word PredStatus_72 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
          MR_Word Var_73 = (MR_Word) (PredStatus_72);

          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 24U));
          if (succeeded)
          {
            hlds__pred_proc_id__in_in_unification_proc_id_1_p_0(&Var_19);
            succeeded = (ProcId_6 == Var_19);
          }
        }
        if (!(succeeded))
        {
          {
            MR_Word PredStatus_7 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 5))));
            MR_Word ExternalImportStatus_8;
            MR_Word Var_14 = (MR_Word) (PredStatus_7);
            MR_Word Var_15;
            MR_Word Var_16;

            succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              ExternalImportStatus_8 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
              Var_16 = (MR_Word) (ExternalImportStatus_8);
              Var_15 = hlds__status__pred_status_is_exported_1_f_0(Var_16);
              succeeded = (Var_15 == (MR_Integer) 1);
            }
          }
          if (!(succeeded))
          {
            MR_Word Origin_9;
            MR_Word SpecialPredId_10;
            MR_Word TypeCtor_11;
            MR_Word TypeTable_12;
            MR_Word TypeDefn_13;
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_20;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_9);
            succeeded = ((MR_tag((MR_Word) Origin_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_17 = ((MR_Word) ((MR_hl_field(1, Origin_9, 0))));
              succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
              if (succeeded)
              {
                SpecialPredId_10 = ((MR_Unsigned) ((MR_hl_field(0, Var_17, 0))) & (MR_Integer) 3);
                TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
                hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_12);
                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_11, &TypeDefn_13);
                if (succeeded)
                {
                  Var_18 = (MR_Integer) 1;
                  hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(TypeDefn_13, &Var_20);
                  succeeded = (Var_18 == Var_20);
                  if (succeeded)
                    switch (SpecialPredId_10) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Integer Var_21;

                          hlds__pred_proc_id__in_in_unification_proc_id_1_p_0(&Var_21);
                          succeeded = (ProcId_6 == Var_21);
                        }
                        break;
                    }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_origin_2_p_0(
  MR_Word PI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 4))));
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_pseudo_exported_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_4 = (MR_Word) (PredStatus_3);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 24U));
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_4 = (MR_Word) (PredStatus_3);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 28U));
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_4 = (MR_Word) (PredStatus_3);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 16U));
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_exported_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_4 = (MR_Word) (PredStatus_3);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 12U));
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_4 = (MR_Word) (PredStatus_3);

  succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 8U));
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_5 = (MR_Word) (PredStatus_3);

  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 2);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_pred__pred_info_is_imported_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3 = ((MR_Word) ((MR_hl_field(0, PredInfo_2, 5))));
  MR_Word Var_8 = (MR_Word) (PredStatus_3);

  if (((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * UnivQVars_4)
{
  MR_Word ArgTypes_5 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 7))));
  MR_Word ArgTypeVars0_6;
  MR_Word ArgTypeVars_7;
  MR_Word ExistQVars_8;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_5, &ArgTypeVars0_6);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), ArgTypeVars0_6, &ArgTypeVars_7);
  ExistQVars_8 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 10))));
  mercury__list__delete_elems_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), ArgTypeVars_7, ExistQVars_8, UnivQVars_4);
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_arg_types_5_p_0(
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word Z_8,
  MR_Word STATE_VARIABLE_PredInfo_0_10,
  MR_Word * STATE_VARIABLE_PredInfo_11)
{
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 0))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 1))) & (MR_Integer) 1);
  MR_String Var_16 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 2))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 3))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 4))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 5))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 6))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 9))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 11))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 12))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 13))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 7) = ((MR_Box) (Z_8));
    MR_hl_field(0, base, 8) = ((MR_Box) (X_6));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 10) = ((MR_Box) (Y_7));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_arg_types_4_p_0(
  MR_Word PredInfo_5,
  MR_Word * X_6,
  MR_Word * Y_7,
  MR_Word * Z_8)
{
  *Z_8 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 7))));
  *X_6 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 8))));
  *Y_7 = ((MR_Word) ((MR_hl_field(0, PredInfo_5, 10))));
}

void MR_CALL 
hlds__hlds_pred__pred_info_remove_proc_id_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_PredInfo_0_8,
  MR_Word * STATE_VARIABLE_PredInfo_9)
{
  MR_Word Procs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 13))));
  MR_Word Procs_7;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;

  mercury__map__delete_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_4)), Procs0_6, &Procs_7);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 0))));
  Var_27 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 1))) & (MR_Integer) 1);
  Var_28 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 2))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 3))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 4))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 5))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 6))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 7))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 8))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 9))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 10))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 11))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 12))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_8, 14))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 13) = ((MR_Box) (Procs_7));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_40));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_proc_info_4_p_0(
  MR_Integer ProcId_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_PredInfo_0_10,
  MR_Word * STATE_VARIABLE_PredInfo_11)
{
  MR_Word ProcTable0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 13))));
  MR_Word ProcTable_9;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_String Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;

  mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_5)), ((MR_Box) (ProcInfo_6)), ProcTable0_8, &ProcTable_9);
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 0))));
  Var_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 1))) & (MR_Integer) 1);
  Var_30 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 2))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 6))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 7))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 8))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 9))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 10))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 11))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 12))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_10, 14))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 13) = ((MR_Box) (ProcTable_9));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_42));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_proc_info_3_p_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5,
  MR_Word * ProcInfo_6)
{
  MR_Word ProcTable_7 = ((MR_Word) ((MR_hl_field(0, PredInfo_4, 13))));
  MR_Box conv0_ProcInfo_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_7, ((MR_Box) (ProcId_5)), &conv0_ProcInfo_6);
  *ProcInfo_6 = ((MR_Word) (conv0_ProcInfo_6));
}

void MR_CALL 
hlds__hlds_pred__next_proc_id_2_p_0(
  MR_Word ProcTable_3,
  MR_Integer * ProcId_4)
{
  MR_Word ProcIdsInfos_5;
  MR_Integer Num_6;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_3, &ProcIdsInfos_5);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[0]), ProcIdsInfos_5, &Num_6);
  hlds__pred_proc_id__proc_id_to_int_2_p_1(ProcId_4, Num_6);
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_will_codegen_proc_ids_1_f_0(
  MR_Word PredInfo_3)
{
  MR_Word ProcIds_4;
  MR_Word OldImportStatus_5;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 13))));

  OldImportStatus_5 = (MR_Word) (Var_10);
  switch (MR_tag((MR_Word) OldImportStatus_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldImportStatus_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Var_26, &ProcIds_4);
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_pred.pred_info_will_codegen_proc_ids\'/1", (MR_String) "status_abstract_imported");
          break;
        case (MR_Integer) 2:
          {
            MR_Word ProcIds0_8;
            MR_Integer InInUnifyProcId_9;

            mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Var_26, &ProcIds0_8);
            hlds__pred_proc_id__in_in_unification_proc_id_1_p_0(&InInUnifyProcId_9);
            mercury__list__delete_all_3_p_1((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), ProcIds0_8, ((MR_Box) (InInUnifyProcId_9)), &ProcIds_4);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ProcIds_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return ProcIds_4;
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_all_exported_proc_ids_1_f_0(
  MR_Word PredInfo_3)
{
  MR_Word ProcIds_4;
  MR_Word OldImportStatus_5;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 5))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 13))));

  OldImportStatus_5 = (MR_Word) (Var_9);
  switch (MR_tag((MR_Word) OldImportStatus_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldImportStatus_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
          ProcIds_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 7:
          mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Var_23, &ProcIds_4);
          break;
        case (MR_Integer) 6:
          {
            MR_Integer InInUnifyProcId_6;

            hlds__pred_proc_id__in_in_unification_proc_id_1_p_0(&InInUnifyProcId_6);
            {
              ProcIds_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ProcIds_4, 0) = ((MR_Box) (InInUnifyProcId_6));
              MR_hl_field(1, ProcIds_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ProcIds_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return ProcIds_4;
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(
  MR_Word PredInfo_3)
{
  MR_Word ProcIds_4;
  MR_Word ProcTable_5 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 13))));

  mercury__map__keys_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_5, &ProcIds_4);
  return ProcIds_4;
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_pf_sym_name_pred_form_arity_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * PFSymNameArity_4)
{
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PredInfo_3, 1))) & (MR_Integer) 1);
  MR_Word SymName_6;
  MR_Word PredFormArity_7 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 3))));
  MR_Word Module_22 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 0))));
  MR_String Name_23 = ((MR_String) ((MR_hl_field(0, PredInfo_3, 2))));

  {
    SymName_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_6, 0) = ((MR_Box) (Module_22));
    MR_hl_field(1, SymName_6, 1) = ((MR_Box) (Name_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *PFSymNameArity_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (SymName_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredFormArity_7));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_get_sym_name_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * SymName_4)
{
  MR_Word Module_5 = ((MR_Word) ((MR_hl_field(0, PredInfo_3, 0))));
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, PredInfo_3, 2))));

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *SymName_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Module_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (Name_6));
  }
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_user_arity_1_f_0(
  MR_Word PI_3)
{
  MR_Word UserArity_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PI_3, 1))) & (MR_Integer) 1);
  MR_Word PredFormArity_6 = ((MR_Word) ((MR_hl_field(0, PI_3, 3))));

  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_5, &UserArity_4, PredFormArity_6);
  return UserArity_4;
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(
  MR_Word PI_3)
{
  MR_Word PredFormArity_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 3))));

  return PredFormArity_4;
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(
  MR_Word PI_3)
{
  MR_Word X_4 = ((MR_Unsigned) ((MR_hl_field(0, PI_3, 1))) & (MR_Integer) 1);

  return X_4;
}

MR_String MR_CALL 
hlds__hlds_pred__pred_info_name_1_f_0(
  MR_Word PI_3)
{
  MR_String X_4 = ((MR_String) ((MR_hl_field(0, PI_3, 2))));

  return X_4;
}

MR_Word MR_CALL 
hlds__hlds_pred__pred_info_module_1_f_0(
  MR_Word PI_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, PI_3, 0))));

  return X_4;
}

void MR_CALL 
hlds__hlds_pred__pred_info_mark_as_external_2_p_0(
  MR_Word STATE_VARIABLE_PredInfo_0_7,
  MR_Word * STATE_VARIABLE_PredInfo_8)
{
  MR_Word PredStatus0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 5))));
  MR_Word OldImportStatus0_5 = (MR_Word) (PredStatus0_4);
  MR_Word PredStatus_6;
  MR_Word Var_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 0))));
  MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 1))) & (MR_Integer) 1);
  MR_String Var_12 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 9))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 10))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 11))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 12))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 13))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_7, 14))));

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (OldImportStatus0_5));
  }
  PredStatus_6 = (MR_Word) (Var_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (PredStatus_6));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_23));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_update_goal_type_3_p_0(
  MR_Word NPGoalType1_4,
  MR_Word STATE_VARIABLE_PredInfo_0_11,
  MR_Word * STATE_VARIABLE_PredInfo_12)
{
  MR_bool succeeded;
  MR_Word GoalType0_6;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 14))));

  GoalType0_6 = ((MR_Word) ((MR_hl_field(0, Var_17, 2))));
  if (((MR_tag((MR_Word) GoalType0_6)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_pred.pred_info_update_goal_type\'/3", (MR_String) "promise");
      return;
    }
  else
  {
    MR_Word NPGoalType0_7 = ((MR_Unsigned) ((MR_hl_field(0, GoalType0_6, 0))) & (MR_Integer) 3);
    MR_Word NPGoalType_8;
    MR_Word GoalType_9;

    switch (NPGoalType0_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          switch (NPGoalType1_4) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            NPGoalType_8 = (MR_Integer) 3;
          else
            NPGoalType_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        NPGoalType_8 = NPGoalType0_7;
        break;
      case (MR_Integer) 2:
        {
          switch (NPGoalType1_4) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            NPGoalType_8 = (MR_Integer) 3;
          else
            NPGoalType_8 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 0:
        NPGoalType_8 = NPGoalType1_4;
        break;
    }
    {
      GoalType_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalType_9, 0) = (MR_Box) ((MR_Unsigned) (NPGoalType_8));
    }
    succeeded = hlds__pred_info_types____Unify____goal_type_0_0(GoalType_9, GoalType0_6);
    if (succeeded)
      *STATE_VARIABLE_PredInfo_12 = STATE_VARIABLE_PredInfo_0_11;
    else
    {
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 14))));
      MR_Word Var_49;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 0))));
      MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 1))) & (MR_Integer) 1);
      MR_String Var_52 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 2))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 3))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 4))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 5))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 6))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 7))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 8))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 9))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 10))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 11))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 12))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_11, 13))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_48, 0))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_48, 1))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Var_48, 3))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_48, 4))));
      MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(0, Var_48, 5))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Var_48, 6))));
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Var_48, 7))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Var_48, 8))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Var_48, 9))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, Var_48, 10))));
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Var_48, 11))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, Var_48, 12))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, Var_48, 13))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Var_48, 14))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, Var_48, 15))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, Var_48, 16))));

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_64));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_65));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) (GoalType_9));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (Var_67));
        MR_hl_field(0, Var_49, 4) = ((MR_Box) (Var_68));
        MR_hl_field(0, Var_49, 5) = ((MR_Box) (Var_69));
        MR_hl_field(0, Var_49, 6) = ((MR_Box) (Var_70));
        MR_hl_field(0, Var_49, 7) = ((MR_Box) (Var_71));
        MR_hl_field(0, Var_49, 8) = ((MR_Box) (Var_72));
        MR_hl_field(0, Var_49, 9) = ((MR_Box) (Var_73));
        MR_hl_field(0, Var_49, 10) = ((MR_Box) (Var_74));
        MR_hl_field(0, Var_49, 11) = ((MR_Box) (Var_75));
        MR_hl_field(0, Var_49, 12) = ((MR_Box) (Var_76));
        MR_hl_field(0, Var_49, 13) = ((MR_Box) (Var_77));
        MR_hl_field(0, Var_49, 14) = ((MR_Box) (Var_78));
        MR_hl_field(0, Var_49, 15) = ((MR_Box) (Var_79));
        MR_hl_field(0, Var_49, 16) = ((MR_Box) (Var_80));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_PredInfo_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
        MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_51));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_52));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_53));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_54));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_55));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_56));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_57));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_58));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_59));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_60));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_61));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_62));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_63));
        MR_hl_field(0, base, 14) = ((MR_Box) (Var_49));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_pred__add_new_proc_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word InstVarSet_18,
  MR_Word ArgModes_19,
  MR_Word MaybeDeclaredArgModes_20,
  MR_Word MaybeArgLives_21,
  MR_Word DetismDecl_22,
  MR_Word MaybeDetism_23,
  MR_Word IsAddressTaken_24,
  MR_Word HasParallelConj_25,
  MR_Word STATE_VARIABLE_PredInfo_0_33,
  MR_Word * STATE_VARIABLE_PredInfo_34,
  MR_Integer * ProcId_27)
{
  MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_33, 7))));
  MR_Word VarNameRemap_29;
  MR_Word ProcInfo_30;
  MR_Word ProcTable0_31;
  MR_Word ProcTable_32;
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_33, 14))));
  MR_Word ProcIdsInfos_96;
  MR_Integer Num_97;

  VarNameRemap_29 = ((MR_Word) ((MR_hl_field(0, Var_50, 12))));
  hlds__hlds_proc__proc_info_init_14_p_0(ModuleInfo_15, Context_16, SeqNum_17, ArgTypes_28, InstVarSet_18, MaybeDeclaredArgModes_20, ArgModes_19, MaybeArgLives_21, DetismDecl_22, MaybeDetism_23, IsAddressTaken_24, HasParallelConj_25, VarNameRemap_29, &ProcInfo_30);
  ProcTable0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredInfo_0_33, 13))));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable0_31, &ProcIdsInfos_96);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[0]), ProcIdsInfos_96, &Num_97);
  hlds__pred_proc_id__proc_id_to_int_2_p_1(ProcId_27, Num_97);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (*ProcId_27)), ((MR_Box) (ProcInfo_30)), ProcTable0_31, &ProcTable_32);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_32, STATE_VARIABLE_PredInfo_0_33, STATE_VARIABLE_PredInfo_34);
}

void MR_CALL 
hlds__hlds_pred__pred_info_set_proc_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 1))) & (MR_Integer) 1);
  MR_String Var_10 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 12))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, 14))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_create_32_p_0(
  MR_Word ModuleName_33,
  MR_Word PredOrFunc_34,
  MR_String PredName_35,
  MR_Word PredFormArity_36,
  MR_Word Origin_37,
  MR_Word Status_38,
  MR_Word Markers_39,
  MR_Word ArgTypes_40,
  MR_Word DeclTypeVarSet_41,
  MR_Word TypeVarSet_42,
  MR_Word ExistQVars_43,
  MR_Integer PolymorphismAddedArgs_44,
  MR_Word ClassContext_45,
  MR_Word ClausesInfo_46,
  MR_Word ProcTable_47,
  MR_Word Context_48,
  MR_Word CurUserDecl_49,
  MR_Word GoalType_50,
  MR_Word Kinds_51,
  MR_Word ExistQVarBindings_52,
  MR_Word HeadTypeParams_53,
  MR_Word ClassProofs_54,
  MR_Word ClassConstraintMap_55,
  MR_Word UnprovenBodyConstraints_56,
  MR_Word InstGraphInfo_57,
  MR_Word ArgModesMaps_58,
  MR_Word VarNameRemap_59,
  MR_Word Assertions_60,
  MR_Word ObsoleteInFavourOf_61,
  MR_Word FormatCall_62,
  MR_Word InstanceMethodArgTypes_63,
  MR_Word * PredInfo_64)
{
  MR_Word PredSubInfo_65;

  {
    PredSubInfo_65 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSubInfo_65, 0) = ((MR_Box) (Context_48));
    MR_hl_field(0, PredSubInfo_65, 1) = ((MR_Box) (CurUserDecl_49));
    MR_hl_field(0, PredSubInfo_65, 2) = ((MR_Box) (GoalType_50));
    MR_hl_field(0, PredSubInfo_65, 3) = ((MR_Box) (Kinds_51));
    MR_hl_field(0, PredSubInfo_65, 4) = ((MR_Box) (ExistQVarBindings_52));
    MR_hl_field(0, PredSubInfo_65, 5) = ((MR_Box) (PolymorphismAddedArgs_44));
    MR_hl_field(0, PredSubInfo_65, 6) = ((MR_Box) (HeadTypeParams_53));
    MR_hl_field(0, PredSubInfo_65, 7) = ((MR_Box) (ClassProofs_54));
    MR_hl_field(0, PredSubInfo_65, 8) = ((MR_Box) (ClassConstraintMap_55));
    MR_hl_field(0, PredSubInfo_65, 9) = ((MR_Box) (UnprovenBodyConstraints_56));
    MR_hl_field(0, PredSubInfo_65, 10) = ((MR_Box) (InstGraphInfo_57));
    MR_hl_field(0, PredSubInfo_65, 11) = ((MR_Box) (ArgModesMaps_58));
    MR_hl_field(0, PredSubInfo_65, 12) = ((MR_Box) (VarNameRemap_59));
    MR_hl_field(0, PredSubInfo_65, 13) = ((MR_Box) (Assertions_60));
    MR_hl_field(0, PredSubInfo_65, 14) = ((MR_Box) (ObsoleteInFavourOf_61));
    MR_hl_field(0, PredSubInfo_65, 15) = ((MR_Box) (FormatCall_62));
    MR_hl_field(0, PredSubInfo_65, 16) = ((MR_Box) (InstanceMethodArgTypes_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *PredInfo_64 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_33));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredName_35));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredFormArity_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Origin_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (Status_38));
    MR_hl_field(0, base, 6) = ((MR_Box) (Markers_39));
    MR_hl_field(0, base, 7) = ((MR_Box) (ArgTypes_40));
    MR_hl_field(0, base, 8) = ((MR_Box) (DeclTypeVarSet_41));
    MR_hl_field(0, base, 9) = ((MR_Box) (TypeVarSet_42));
    MR_hl_field(0, base, 10) = ((MR_Box) (ExistQVars_43));
    MR_hl_field(0, base, 11) = ((MR_Box) (ClassContext_45));
    MR_hl_field(0, base, 12) = ((MR_Box) (ClausesInfo_46));
    MR_hl_field(0, base, 13) = ((MR_Box) (ProcTable_47));
    MR_hl_field(0, base, 14) = ((MR_Box) (PredSubInfo_65));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_prepare_to_clone_32_p_0(
  MR_Word PredInfo_33,
  MR_Word * ModuleName_34,
  MR_Word * PredOrFunc_35,
  MR_String * PredName_36,
  MR_Word * PredFormArity_37,
  MR_Word * Origin_38,
  MR_Word * Status_39,
  MR_Word * Markers_40,
  MR_Word * ArgTypes_41,
  MR_Word * DeclTypeVarSet_42,
  MR_Word * TypeVarSet_43,
  MR_Word * ExistQVars_44,
  MR_Integer * PolymorphismAddedArgs_45,
  MR_Word * ClassContext_46,
  MR_Word * ClausesInfo_47,
  MR_Word * ProcTable_48,
  MR_Word * Context_49,
  MR_Word * CurUserDecl_50,
  MR_Word * GoalType_51,
  MR_Word * Kinds_52,
  MR_Word * ExistQVarBindings_53,
  MR_Word * HeadTypeParams_54,
  MR_Word * ClassProofs_55,
  MR_Word * ClassConstraintMap_56,
  MR_Word * UnprovenBodyConstraints_57,
  MR_Word * InstGraphInfo_58,
  MR_Word * ArgModesMaps_59,
  MR_Word * VarNameRemap_60,
  MR_Word * Assertions_61,
  MR_Word * ObsoleteInFavourOf_62,
  MR_Word * FormatCall_63,
  MR_Word * InstanceMethodArgTypes_64)
{
  MR_Word PredSubInfo_65;

  *ModuleName_34 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 0))));
  *PredOrFunc_35 = ((MR_Unsigned) ((MR_hl_field(0, PredInfo_33, 1))) & (MR_Integer) 1);
  *PredName_36 = ((MR_String) ((MR_hl_field(0, PredInfo_33, 2))));
  *PredFormArity_37 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 3))));
  *Origin_38 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 4))));
  *Status_39 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 5))));
  *Markers_40 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 6))));
  *ArgTypes_41 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 7))));
  *DeclTypeVarSet_42 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 8))));
  *TypeVarSet_43 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 9))));
  *ExistQVars_44 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 10))));
  *ClassContext_46 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 11))));
  *ClausesInfo_47 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 12))));
  *ProcTable_48 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 13))));
  PredSubInfo_65 = ((MR_Word) ((MR_hl_field(0, PredInfo_33, 14))));
  *Context_49 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 0))));
  *CurUserDecl_50 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 1))));
  *GoalType_51 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 2))));
  *Kinds_52 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 3))));
  *ExistQVarBindings_53 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 4))));
  *PolymorphismAddedArgs_45 = ((MR_Integer) ((MR_hl_field(0, PredSubInfo_65, 5))));
  *HeadTypeParams_54 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 6))));
  *ClassProofs_55 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 7))));
  *ClassConstraintMap_56 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 8))));
  *UnprovenBodyConstraints_57 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 9))));
  *InstGraphInfo_58 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 10))));
  *ArgModesMaps_59 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 11))));
  *VarNameRemap_60 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 12))));
  *Assertions_61 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 13))));
  *ObsoleteInFavourOf_62 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 14))));
  *FormatCall_63 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 15))));
  *InstanceMethodArgTypes_64 = ((MR_Word) ((MR_hl_field(0, PredSubInfo_65, 16))));
}

void MR_CALL 
hlds__hlds_pred__define_new_pred_19_p_0(
  MR_Word PredSymName_20,
  MR_Word Origin_21,
  MR_Word TVarSet_22,
  MR_Word InstVarSet_23,
  MR_Word VarTable0_24,
  MR_Word RttiVarMaps_25,
  MR_Word ClassContext_26,
  MR_Word InstMap0_27,
  MR_Word VarNameRemap_28,
  MR_Word Markers_29,
  MR_Word IsAddressTaken_30,
  MR_Word HasParallelConj_31,
  MR_Word * PredProcId_32,
  MR_Word ArgVars0_33,
  MR_Word * ExtraTiTcis_34,
  MR_Word Goal0_35,
  MR_Word * CallGoal_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75)
{
  MR_bool succeeded;
  MR_Word GoalInfo_39 = ((MR_Word) ((MR_hl_field(0, Goal0_35, 1))));
  MR_Word InstMapDelta_40;
  MR_Word InstMap_41;
  MR_Word Globals_43;
  MR_Word PredStatus_44;
  MR_Word ArgVars_49;
  MR_Word Context_50;
  MR_Word Detism_52;
  MR_Word ArgTypes_53;
  MR_Word ArgModes_54;
  MR_Word PredModuleName_55;
  MR_String PredName_56;
  MR_Word GoalVars0_58;
  MR_Word GoalVars_59;
  MR_Word GoalVarsSet_60;
  MR_Word VarTable_61;
  MR_Word TermInfo_62;
  MR_Word ProcInfo0_64;
  MR_Word ProcInfo_65;
  MR_Word Assertions_66;
  MR_Integer ProcId_68;
  MR_Word PredInfo_69;
  MR_Word PredTable0_70;
  MR_Word PredId_71;
  MR_Word PredTable_72;
  MR_Word CallGoalExpr_73;

  InstMapDelta_40 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_39);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_40, InstMap0_27, &InstMap_41);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, &Globals_43);
  PredStatus_44 = (MR_Word) (((MR_Box) ((MR_Unsigned) 32U)));
  succeeded = (IsAddressTaken_30 == (MR_Integer) 0);
  if (!(succeeded))
  {
    {
      MR_Word Var_89 = (MR_Word) (PredStatus_44);

      succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 32U));
    }
    if (!(succeeded))
    {
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_43, (MR_Integer) 83, (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_43, (MR_Integer) 84, (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word Var_95;

          libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 763, &Var_95);
          succeeded = ((MR_Integer) 1 == Var_95);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word NonLocals_46;
    MR_Word ExtraTiTcis0_47;
    MR_Word ExtraTiTcis1_48;

    NonLocals_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_39);
    hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(RttiVarMaps_25, VarTable0_24, (MR_Word) ((MR_Unsigned) 0U), NonLocals_46, &ExtraTiTcis0_47);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_33, ExtraTiTcis0_47, &ExtraTiTcis1_48);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraTiTcis1_48, ExtraTiTcis_34);
    ArgVars_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[1]), *ExtraTiTcis_34, ArgVars0_33);
  }
  else
  {
    ArgVars_49 = ArgVars0_33;
    *ExtraTiTcis_34 = (MR_Word) ((MR_Unsigned) 0U);
  }
  Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_39);
  Detism_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_39);
  hlds__hlds_pred__compute_arg_types_modes_6_p_0(VarTable0_24, InstMap0_27, InstMap_41, ArgVars_49, &ArgTypes_53, &ArgModes_54);
  if (((MR_tag((MR_Word) PredSymName_20)) == (MR_Integer) 1))
  {
    PredModuleName_55 = ((MR_Word) ((MR_hl_field(1, PredSymName_20, 0))));
    PredName_56 = ((MR_String) ((MR_hl_field(1, PredSymName_20, 1))));
  }
  else
  {
    PredName_56 = ((MR_String) ((MR_hl_field(0, PredSymName_20, 0))));
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, &PredModuleName_55);
  }
  hlds__goal_vars__vars_in_goal_2_p_0(Goal0_35, &GoalVars0_58);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_49, GoalVars0_58, &GoalVars_59);
  GoalVarsSet_60 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars_59);
  parse_tree__var_table__var_table_select_3_p_0(GoalVarsSet_60, VarTable0_24, &VarTable_61);
  succeeded = hlds__goal_form__goal_cannot_loop_term_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, Goal0_35);
  if (succeeded)
    TermInfo_62 = (MR_Word) (MR_mkword(1, &hlds__hlds_pred_scalar_common_3[1]));
  else
    TermInfo_62 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_proc__proc_info_create_with_declared_detism_15_p_0(Context_50, (MR_Word) ((MR_Unsigned) 0U), VarTable_61, ArgVars_49, InstVarSet_23, ArgModes_54, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Detism_52, Goal0_35, RttiVarMaps_25, IsAddressTaken_30, HasParallelConj_31, VarNameRemap_28, &ProcInfo0_64);
  hlds__hlds_proc__proc_info_set_maybe_termination_info_3_p_0(TermInfo_62, ProcInfo0_64, &ProcInfo_65);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), &Assertions_66);
  hlds__hlds_pred__pred_info_create_17_p_0((MR_Integer) 0, PredModuleName_55, PredName_56, Context_50, Origin_21, PredStatus_44, Markers_29, ArgTypes_53, TVarSet_22, (MR_Word) ((MR_Unsigned) 0U), ClassContext_26, Assertions_66, VarNameRemap_28, (MR_Word) (&hlds__hlds_pred_scalar_common_3[2]), ProcInfo_65, &ProcId_68, &PredInfo_69);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_74, &PredTable0_70);
  hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_69, &PredId_71, PredTable0_70, &PredTable_72);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_72, STATE_VARIABLE_ModuleInfo_0_74, STATE_VARIABLE_ModuleInfo_75);
  {
    CallGoalExpr_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallGoalExpr_73, 0) = ((MR_Box) (PredId_71));
    MR_hl_field(2, CallGoalExpr_73, 1) = ((MR_Box) (ProcId_68));
    MR_hl_field(2, CallGoalExpr_73, 2) = ((MR_Box) (ArgVars_49));
    MR_hl_field(2, CallGoalExpr_73, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, CallGoalExpr_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, CallGoalExpr_73, 5) = ((MR_Box) (PredSymName_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CallGoal_36 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CallGoalExpr_73));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *PredProcId_32 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_68));
  }
}

static void MR_CALL 
hlds__hlds_pred__compute_arg_types_modes_6_p_0(
  MR_Word VarTable_1,
  MR_Word InstMapInit_2,
  MR_Word InstMapFinal_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Type_15;
    MR_Word Types_16;
    MR_Word Mode_17;
    MR_Word Modes_18;
    MR_Word InstInit_19;
    MR_Word InstFinal_20;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Var_13, &Type_15);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMapInit_2, Var_13, &InstInit_19);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMapFinal_3, Var_13, &InstFinal_20);
    {
      Mode_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mode_17, 0) = ((MR_Box) (InstInit_19));
      MR_hl_field(0, Mode_17, 1) = ((MR_Box) (InstFinal_20));
    }
    hlds__hlds_pred__compute_arg_types_modes_6_p_0(VarTable_1, InstMapInit_2, InstMapFinal_3, Vars_14, &Types_16, &Modes_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Mode_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Modes_18));
    }
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_create_17_p_0(
  MR_Word PredOrFunc_18,
  MR_Word PredModuleName_19,
  MR_String PredName_20,
  MR_Word Context_21,
  MR_Word Origin_22,
  MR_Word Status_23,
  MR_Word Markers_24,
  MR_Word ArgTypes_25,
  MR_Word TypeVarSet_26,
  MR_Word ExistQVars_27,
  MR_Word ClassContext_28,
  MR_Word Assertions_29,
  MR_Word VarNameRemap_30,
  MR_Word GoalType_31,
  MR_Word ProcInfo_32,
  MR_Integer * ProcId_33,
  MR_Word * PredInfo_34)
{
  MR_Word Kinds_36;
  MR_Word ExistQVarBindings_37;
  MR_Word TVars_39;
  MR_Word HeadTypeParams_40;
  MR_Word ClassProofs_41;
  MR_Word ClassConstraintMap_42;
  MR_Word InstGraphInfo_44;
  MR_Word PredSubInfo_49;
  MR_Word VarSet_50;
  MR_Word ExplicitVarTypes_51;
  MR_Word VarTable_52;
  MR_Word TVarNameMap_53;
  MR_Word HeadVars_54;
  MR_Word HeadVarVec_55;
  MR_Word ClausesRep_56;
  MR_Word ItemNumbers_57;
  MR_Word RttiVarMaps_58;
  MR_Word ClausesInfo_59;
  MR_Integer NumArgs_60;
  MR_Word PredFormArity_61;
  MR_Word ProcTable0_62;
  MR_Word ProcTable_63;
  MR_Word ProcIdsInfos_78;
  MR_Integer Num_79;

  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &Kinds_36);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &ExistQVarBindings_37);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_25, &TVars_39);
  mercury__list__delete_elems_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), TVars_39, ExistQVars_27, &HeadTypeParams_40);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ClassProofs_41);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ClassConstraintMap_42);
  InstGraphInfo_44 = hlds__inst_graph__inst_graph_info_init_0_f_0();
  {
    PredSubInfo_49 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSubInfo_49, 0) = ((MR_Box) (Context_21));
    MR_hl_field(0, PredSubInfo_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_49, 2) = ((MR_Box) (GoalType_31));
    MR_hl_field(0, PredSubInfo_49, 3) = ((MR_Box) (Kinds_36));
    MR_hl_field(0, PredSubInfo_49, 4) = ((MR_Box) (ExistQVarBindings_37));
    MR_hl_field(0, PredSubInfo_49, 5) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, PredSubInfo_49, 6) = ((MR_Box) (HeadTypeParams_40));
    MR_hl_field(0, PredSubInfo_49, 7) = ((MR_Box) (ClassProofs_41));
    MR_hl_field(0, PredSubInfo_49, 8) = ((MR_Box) (ClassConstraintMap_42));
    MR_hl_field(0, PredSubInfo_49, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_49, 10) = ((MR_Box) (InstGraphInfo_44));
    MR_hl_field(0, PredSubInfo_49, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_49, 12) = ((MR_Box) (VarNameRemap_30));
    MR_hl_field(0, PredSubInfo_49, 13) = ((MR_Box) (Assertions_29));
    MR_hl_field(0, PredSubInfo_49, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_49, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_49, 16) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_50);
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_51);
  hlds__hlds_proc__proc_info_get_var_table_2_p_0(ProcInfo_32, &VarTable_52);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), &TVarNameMap_53);
  hlds__hlds_proc__proc_info_get_headvars_2_p_0(ProcInfo_32, &HeadVars_54);
  HeadVarVec_55 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[1]), PredOrFunc_18, HeadVars_54);
  ClausesRep_56 = hlds__hlds_clauses__init_clauses_rep_0_f_0();
  ItemNumbers_57 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_proc__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_32, &RttiVarMaps_58);
  {
    ClausesInfo_59 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesInfo_59, 0) = ((MR_Box) (VarSet_50));
    MR_hl_field(0, ClausesInfo_59, 1) = ((MR_Box) (ExplicitVarTypes_51));
    MR_hl_field(0, ClausesInfo_59, 2) = ((MR_Box) (VarTable_52));
    MR_hl_field(0, ClausesInfo_59, 3) = ((MR_Box) (RttiVarMaps_58));
    MR_hl_field(0, ClausesInfo_59, 4) = ((MR_Box) (TVarNameMap_53));
    MR_hl_field(0, ClausesInfo_59, 5) = ((MR_Box) (HeadVarVec_55));
    MR_hl_field(0, ClausesInfo_59, 6) = ((MR_Box) (ClausesRep_56));
    MR_hl_field(0, ClausesInfo_59, 7) = ((MR_Box) (ItemNumbers_57));
    MR_hl_field(0, ClausesInfo_59, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_25, &NumArgs_60);
  PredFormArity_61 = (MR_Word) (NumArgs_60);
  mercury__map__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), &ProcTable0_62);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable0_62, &ProcIdsInfos_78);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_2[0]), ProcIdsInfos_78, &Num_79);
  hlds__pred_proc_id__proc_id_to_int_2_p_1(ProcId_33, Num_79);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (*ProcId_33)), ((MR_Box) (ProcInfo_32)), ProcTable0_62, &ProcTable_63);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *PredInfo_34 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredModuleName_19));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredName_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredFormArity_61));
    MR_hl_field(0, base, 4) = ((MR_Box) (Origin_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Status_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (Markers_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (ArgTypes_25));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeVarSet_26));
    MR_hl_field(0, base, 9) = ((MR_Box) (TypeVarSet_26));
    MR_hl_field(0, base, 10) = ((MR_Box) (ExistQVars_27));
    MR_hl_field(0, base, 11) = ((MR_Box) (ClassContext_28));
    MR_hl_field(0, base, 12) = ((MR_Box) (ClausesInfo_59));
    MR_hl_field(0, base, 13) = ((MR_Box) (ProcTable_63));
    MR_hl_field(0, base, 14) = ((MR_Box) (PredSubInfo_49));
  }
}

void MR_CALL 
hlds__hlds_pred__pred_info_init_19_p_0(
  MR_Word PredOrFunc_20,
  MR_Word PredModuleName_21,
  MR_String PredName_22,
  MR_Word PredFormArity_23,
  MR_Word Context_24,
  MR_Word Origin_25,
  MR_Word Status_26,
  MR_Word CurUserDecl_27,
  MR_Word GoalType_28,
  MR_Word Markers_29,
  MR_Word ArgTypes_30,
  MR_Word TypeVarSet_31,
  MR_Word ExistQVars_32,
  MR_Word ClassContext_33,
  MR_Word ClassProofs_34,
  MR_Word ClassConstraintMap_35,
  MR_Word ClausesInfo_36,
  MR_Word VarNameRemap_37,
  MR_Word * PredInfo_38)
{
  MR_Word Kinds_39;
  MR_Word ExistQVarBindings_40;
  MR_Word TVars_42;
  MR_Word HeadTypeParams_43;
  MR_Word InstGraphInfo_45;
  MR_Word Assertions_47;
  MR_Word PredSubInfo_51;
  MR_Word ProcTable_52;

  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &Kinds_39);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &ExistQVarBindings_40);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_30, &TVars_42);
  mercury__list__delete_elems_3_p_0((MR_Word) (&hlds__hlds_pred_scalar_common_1[0]), TVars_42, ExistQVars_32, &HeadTypeParams_43);
  InstGraphInfo_45 = hlds__inst_graph__inst_graph_info_init_0_f_0();
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), &Assertions_47);
  {
    PredSubInfo_51 = (MR_Word) MR_new_object(MR_Word, (17 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredSubInfo_51, 0) = ((MR_Box) (Context_24));
    MR_hl_field(0, PredSubInfo_51, 1) = ((MR_Box) (CurUserDecl_27));
    MR_hl_field(0, PredSubInfo_51, 2) = ((MR_Box) (GoalType_28));
    MR_hl_field(0, PredSubInfo_51, 3) = ((MR_Box) (Kinds_39));
    MR_hl_field(0, PredSubInfo_51, 4) = ((MR_Box) (ExistQVarBindings_40));
    MR_hl_field(0, PredSubInfo_51, 5) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, PredSubInfo_51, 6) = ((MR_Box) (HeadTypeParams_43));
    MR_hl_field(0, PredSubInfo_51, 7) = ((MR_Box) (ClassProofs_34));
    MR_hl_field(0, PredSubInfo_51, 8) = ((MR_Box) (ClassConstraintMap_35));
    MR_hl_field(0, PredSubInfo_51, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_51, 10) = ((MR_Box) (InstGraphInfo_45));
    MR_hl_field(0, PredSubInfo_51, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_51, 12) = ((MR_Box) (VarNameRemap_37));
    MR_hl_field(0, PredSubInfo_51, 13) = ((MR_Box) (Assertions_47));
    MR_hl_field(0, PredSubInfo_51, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_51, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredSubInfo_51, 16) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__init_1_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), &ProcTable_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *PredInfo_38 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredModuleName_21));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredName_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredFormArity_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (Origin_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (Status_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (Markers_29));
    MR_hl_field(0, base, 7) = ((MR_Box) (ArgTypes_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeVarSet_31));
    MR_hl_field(0, base, 9) = ((MR_Box) (TypeVarSet_31));
    MR_hl_field(0, base, 10) = ((MR_Box) (ExistQVars_32));
    MR_hl_field(0, base, 11) = ((MR_Box) (ClassContext_33));
    MR_hl_field(0, base, 12) = ((MR_Box) (ClausesInfo_36));
    MR_hl_field(0, base, 13) = ((MR_Box) (ProcTable_52));
    MR_hl_field(0, base, 14) = ((MR_Box) (PredSubInfo_51));
  }
}

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____external_type_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____external_type_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_pred____Compare____external_type_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_pred____Compare____external_type_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_pred____Compare____pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_pred____Compare____pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____pred_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_pred____Compare____pred_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_pred____Compare____pred_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_pred____Unify____proc_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____proc_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_pred____Compare____proc_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_pred____Compare____proc_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_pred__init(void)
{
}

void mercury__hlds__hlds_pred__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_external_type_params_0);
  MR_register_type_ctor_info(&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0);
  MR_register_type_ctor_info(&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_sub_info_0);
  MR_register_type_ctor_info(&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_0);
}

void mercury__hlds__hlds_pred__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_pred__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_pred.
