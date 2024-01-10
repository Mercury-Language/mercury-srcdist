/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version rotd-2024-01-10
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


// :- module check_hlds.typecheck_info.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_info__init
ENDINIT
*/

#include "check_hlds.typecheck_info.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_EnumFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__enum_ordinal_ordered_maybe_rhs_lambda_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__enum_name_ordered_maybe_rhs_lambda_0[2];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_maybe_rhs_lambda_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_source_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_debug_info_0_1[2];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_debug_info_0_1[2];

static const MR_DuArgLocn check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_debug_info_0_1[2];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_debug_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_debug_info_0[2];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_debug_info_0[2];

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9];

static const MR_DuArgLocn check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_sub_info_0_0[9];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____maybe_rhs_lambda_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____maybe_rhs_lambda_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[10][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[1]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_0 = {
  (MR_String) "has_no_rhs_lambda",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_1 = {
  (MR_String) "has_rhs_lambda",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__enum_ordinal_ordered_maybe_rhs_lambda_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_0,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__enum_name_ordered_maybe_rhs_lambda_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_0,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__enum_functor_desc_maybe_rhs_lambda_0_1
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_maybe_rhs_lambda_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_maybe_rhs_lambda_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_info____Unify____maybe_rhs_lambda_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____maybe_rhs_lambda_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "maybe_rhs_lambda",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__enum_name_ordered_maybe_rhs_lambda_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__enum_ordinal_ordered_maybe_rhs_lambda_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_maybe_rhs_lambda_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
  (MR_String) "overloaded_pred",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
  (MR_String) "overloaded_func",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0),
    (MR_TypeInfo) (&check_hlds__typecheck_info__list__ti_list_1term_context__type_ctor_info_term_context_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6] = {
  (MR_String) "tecc_module_info",
  (MR_String) "tecc_pred_id",
  (MR_String) "tecc_pred_markers",
  (MR_String) "tecc_clause_num",
  (MR_String) "tecc_clause_context",
  (MR_String) "tecc_varset"
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0 = {
  (MR_String) "type_error_clause_context",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0 };

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_error_clause_context",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0,

};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_0 = {
  (MR_String) "no_typecheck_debug",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_debug_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_debug_info_0_1[2] = {
  (MR_String) "td_detailed_statistics",
  (MR_String) "td_progress_stream"
};

static const MR_DuArgLocn check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_debug_info_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_1 = {
  (MR_String) "typecheck_debug",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_debug_info_0_1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_debug_info_0_1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_debug_info_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_1[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_debug_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_debug_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_debug_info_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_0,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_debug_info_0_1
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_debug_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_debug_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_debug_info",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_debug_info_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_debug_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_debug_info_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4] = {
  (MR_String) "tci_sub_info",
  (MR_String) "tci_error_clause_context",
  (MR_String) "tci_overloaded_symbol_map",
  (MR_String) "tci_ambiguity_warn_limit"
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 = {
  (MR_String) "typecheck_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 };

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_info",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_pred_status_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_maybe_rhs_lambda_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_debug_info_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9] = {
  (MR_String) "tcsi_verbose_errors",
  (MR_String) "tcsi_calls_are_fully_qualified",
  (MR_String) "tcsi_ambiguity_error_limit",
  (MR_String) "tcsi_is_field_access_function",
  (MR_String) "tcsi_non_overload_errors",
  (MR_String) "tcsi_overload_error",
  (MR_String) "tcsi_nosuffix_integer_vars",
  (MR_String) "tcsi_has_rhs_lambda",
  (MR_String) "tcsi_debug_info"
};

static const MR_DuArgLocn check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_sub_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
  (MR_String) "typecheck_sub_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_locns_typecheck_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = { &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 };

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_sub_info",
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0 },
  { check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0,

};

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;
    MR_Integer Var_41 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_42 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_41 < Var_42);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_41 > Var_42);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_43 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_44 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_43 < Var_44);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_43 > Var_44);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_45 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_46 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_45 < Var_46);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_45 > Var_46);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0(HeadVar__1_1, ArgX9_28, ArgY9_29);
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                    succeeded = check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0(ArgX9_19, ArgY9_20);
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
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Integer CastX_47 = (MR_Integer) (ArgX1_4);
    MR_Integer CastY_48 = (MR_Integer) (ArgY1_5);

    succeeded = (CastX_47 == CastY_48);
    if (succeeded)
    {
      succeeded = MR_TRUE;
      succeeded = !(succeeded);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgX1_21 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_22 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX2_24 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_25 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX3_27 = ((MR_Integer) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 1))));
      MR_Integer ArgY3_28 = ((MR_Integer) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 1))));
      MR_Word ArgX4_30 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 2))));
      MR_Word ArgY4_31 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 2))));
      MR_Word ArgX5_33 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 3))));
      MR_Word ArgY5_34 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 3))));
      MR_Word ArgX6_36 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 4))));
      MR_Word ArgY6_37 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 4))));
      MR_Word ArgX7_39 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 5))));
      MR_Word ArgY7_40 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 5))));
      MR_Word ArgX8_42 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY8_43 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgX9_45 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 7))));
      MR_Word ArgY9_46 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 7))));
      MR_Word SubResult1_23;
      MR_Integer Var_58 = (MR_Integer) (ArgX1_21);
      MR_Integer Var_59 = (MR_Integer) (ArgY1_22);

      succeeded = (Var_58 < Var_59);
      if (succeeded)
      {
        SubResult1_23 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_58 > Var_59);
        if (succeeded)
        {
          SubResult1_23 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_23 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        SubResult1_6 = SubResult1_23;
        succeeded = (SubResult1_6 != (MR_Integer) 0);
      }
      else
      {
        MR_Word SubResult2_26;
        MR_Integer Var_60 = (MR_Integer) (ArgX2_24);
        MR_Integer Var_61 = (MR_Integer) (ArgY2_25);

        succeeded = (Var_60 < Var_61);
        if (succeeded)
        {
          SubResult2_26 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_60 > Var_61);
          if (succeeded)
          {
            SubResult2_26 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_26 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          SubResult1_6 = SubResult2_26;
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          MR_Word SubResult3_29;

          succeeded = (ArgX3_27 < ArgY3_28);
          if (succeeded)
          {
            SubResult3_29 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_27 > ArgY3_28);
            if (succeeded)
            {
              SubResult3_29 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_29 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            SubResult1_6 = SubResult3_29;
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
          else
          {
            MR_Word SubResult4_32;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]), &SubResult4_32, ((MR_Box) (ArgX4_30)), ((MR_Box) (ArgY4_31)));
            succeeded = (SubResult4_32 != (MR_Integer) 0);
            if (succeeded)
            {
              SubResult1_6 = SubResult4_32;
              succeeded = (SubResult1_6 != (MR_Integer) 0);
            }
            else
            {
              MR_Word SubResult5_35;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]), &SubResult5_35, ((MR_Box) (ArgX5_33)), ((MR_Box) (ArgY5_34)));
              succeeded = (SubResult5_35 != (MR_Integer) 0);
              if (succeeded)
              {
                SubResult1_6 = SubResult5_35;
                succeeded = (SubResult1_6 != (MR_Integer) 0);
              }
              else
              {
                MR_Word SubResult6_38;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]), &SubResult6_38, ((MR_Box) (ArgX6_36)), ((MR_Box) (ArgY6_37)));
                succeeded = (SubResult6_38 != (MR_Integer) 0);
                if (succeeded)
                {
                  SubResult1_6 = SubResult6_38;
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                }
                else
                {
                  MR_Word SubResult7_41;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]), &SubResult7_41, ((MR_Box) (ArgX7_39)), ((MR_Box) (ArgY7_40)));
                  succeeded = (SubResult7_41 != (MR_Integer) 0);
                  if (succeeded)
                  {
                    SubResult1_6 = SubResult7_41;
                    succeeded = (SubResult1_6 != (MR_Integer) 0);
                  }
                  else
                  {
                    MR_Word SubResult8_44;
                    MR_Integer Var_62 = (MR_Integer) (ArgX8_42);
                    MR_Integer Var_63 = (MR_Integer) (ArgY8_43);

                    succeeded = (Var_62 < Var_63);
                    if (succeeded)
                    {
                      SubResult8_44 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_62 > Var_63);
                      if (succeeded)
                      {
                        SubResult8_44 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_44 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                    {
                      SubResult1_6 = SubResult8_44;
                      succeeded = (SubResult1_6 != (MR_Integer) 0);
                    }
                    else
                    {
                      check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0(&SubResult1_6, ArgX9_45, ArgY9_46);
                      succeeded = (SubResult1_6 != (MR_Integer) 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer CastX_32 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_33 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_32 == CastY_33);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_23_34;
      MR_Word TypeInfo_24_35;
      MR_Word TypeInfo_25_36;
      MR_Word TypeInfo_26_37;
      MR_Word ArgX1_14 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_15 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX2_16 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_17 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 1))));
      MR_Integer ArgY3_19 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 1))));
      MR_Word ArgX4_20 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 2))));
      MR_Word ArgY4_21 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 2))));
      MR_Word ArgX5_22 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 3))));
      MR_Word ArgY5_23 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 3))));
      MR_Word ArgX6_24 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 4))));
      MR_Word ArgY6_25 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 4))));
      MR_Word ArgX7_26 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 5))));
      MR_Word ArgY7_27 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 5))));
      MR_Word ArgX8_28 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY8_29 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgX9_30 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 7))));
      MR_Word ArgY9_31 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 7))));

      succeeded = (ArgX1_14 == ArgY1_15);
      if (succeeded)
      {
        succeeded = (ArgX2_16 == ArgY2_17);
        if (succeeded)
        {
          succeeded = (ArgX3_18 == ArgY3_19);
          if (succeeded)
          {
            TypeInfo_23_34 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_34, ((MR_Box) (ArgX4_20)), ((MR_Box) (ArgY4_21)));
            if (succeeded)
            {
              TypeInfo_24_35 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_35, ((MR_Box) (ArgX5_22)), ((MR_Box) (ArgY5_23)));
              if (succeeded)
              {
                TypeInfo_25_36 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_36, ((MR_Box) (ArgX6_24)), ((MR_Box) (ArgY6_25)));
                if (succeeded)
                {
                  TypeInfo_26_37 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_37, ((MR_Box) (ArgX7_26)), ((MR_Box) (ArgY7_27)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_28 == ArgY8_29);
                    if (succeeded)
                      succeeded = check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0(ArgX9_30, ArgY9_31);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_10;
      MR_Integer Var_19 = (MR_Integer) (Var_18);
      MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult1_10 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
        mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, Var_17, ArgY2_12);
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
        succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__term_context____Compare____term_context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_19;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_19, Var_29, ArgY1_18);
      succeeded = (SubResult1_19 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_19;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_21)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____sym_name_pred_form_arity_0_0(&SubResult1_6, Var_31, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_7, ArgY1_8);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____sym_name_pred_form_arity_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info____Compare____maybe_rhs_lambda_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____maybe_rhs_lambda_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * Errors_4)
{
  MR_Word Errors0_5;
  MR_Word MaybeOverloadError_6;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  Errors0_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 3))));
  MaybeOverloadError_6 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 4))));
  if ((MaybeOverloadError_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *Errors_4 = Errors0_5;
  else
  {
    MR_Word OverloadError_7 = ((MR_Word) ((MR_hl_field(1, MaybeOverloadError_6, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Errors_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OverloadError_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (Errors0_5));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Errors0_6;
  MR_Word Errors_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 0)));

  Errors0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 3))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 4))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 5))));
  Var_20 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 6))) & (MR_Integer) 1);
  Var_21 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 7))));
  {
    Errors_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Errors_7, 0) = ((MR_Box) (Error_4));
    MR_hl_field(1, Errors_7, 1) = ((MR_Box) (Errors0_6));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Errors_7));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_23, 6) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, Var_23, 7) = ((MR_Box) (Var_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word NoSuffixIntegerMap0_6;
  MR_Word NoSuffixIntegerMap_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Integer Var_27;
  MR_Integer Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Unsigned packed_word_2;

  NoSuffixIntegerMap0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
  mercury__set_tree234__insert_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]), ((MR_Box) (Var_4)), NoSuffixIntegerMap0_6, &NoSuffixIntegerMap_7);
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_27 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Var_23, (MR_Integer) 0)));
  Var_30 = ((MR_Integer) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 3))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 4))));
  Var_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_23, (MR_Integer) 6))) & (MR_Integer) 1);
  Var_36 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 7))));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = (MR_Box) (packed_word_2);
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (NoSuffixIntegerMap_7));
    MR_hl_field(0, Var_24, 6) = (MR_Box) ((MR_Unsigned) (Var_35));
    MR_hl_field(0, Var_24, 7) = ((MR_Box) (Var_36));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
  MR_Word Symbol_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word OverloadedSymbolMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
  MR_Word OverloadedSymbolMap_11;
  MR_Word OldContexts_9;
  MR_Box conv0_OldContexts_9;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Integer Var_29;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), OverloadedSymbolMap0_8, ((MR_Box) (Symbol_5)), &conv0_OldContexts_9);
  if (succeeded)
  {
    OldContexts_9 = ((MR_Word) (conv0_OldContexts_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Contexts_10;

    {
      Contexts_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Contexts_10, 0) = ((MR_Box) (Context_6));
      MR_hl_field(1, Contexts_10, 1) = ((MR_Box) (OldContexts_9));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), ((MR_Box) (Symbol_5)), ((MR_Box) (Contexts_10)), OverloadedSymbolMap0_8, &OverloadedSymbolMap_11);
  }
  else
  {
    MR_Word Contexts_16;

    {
      Contexts_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Contexts_16, 0) = ((MR_Box) (Context_6));
      MR_hl_field(1, Contexts_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), ((MR_Box) (Symbol_5)), ((MR_Box) (Contexts_16)), OverloadedSymbolMap0_8, &OverloadedSymbolMap_11);
  }
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
  Var_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (OverloadedSymbolMap_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(
  MR_Word Info_3,
  MR_Word * Ctors_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, Ctors_4);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(
  MR_Word Info_3,
  MR_Word * Types_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, Types_4);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_predicate_table_2_p_0(
  MR_Word Info_3,
  MR_Word * Preds_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, Preds_4);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
  MR_Word Info_3,
  MR_Word * Name_4)
{
  MR_Word ModuleInfo_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, Name_4);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_rhs_lambda_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 6) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 6) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_non_overload_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 6) = (MR_Box) ((MR_Unsigned) (Var_21));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbol_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_debug_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_rhs_lambda_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 6))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_nosuffix_integer_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_non_overload_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 0))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_verbose_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  *X_4 = ((MR_Integer) ((MR_hl_field(0, Info_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Word PredInfo_13,
  MR_Word ClauseVarSet_14,
  MR_Word Status_15,
  MR_Word PredMarkers_16,
  MR_Word NonOverloadErrors_17,
  MR_Word * Info_18)
{
  MR_bool succeeded;
  MR_Word CallsAreFullyQualified_19;
  MR_Word MaybeFieldAccessFunctionStatus_20;
  MR_Word Globals_22;
  MR_Word Verbose_23;
  MR_Integer AmbiguityWarnLimit_24;
  MR_Word NoSuffixIntegerMap_25;
  MR_Word DebugTypesPredNames_26;
  MR_Word DebugInfo_31;
  MR_Word SubInfo_33;
  MR_Integer AmbiguityErrorLimit_34;
  MR_Word ClauseContext_36;
  MR_Word OverloadedSymbolMap_37;
  MR_Word Var_45;

  CallsAreFullyQualified_19 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_16);
  succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_11, PredInfo_13);
  if (succeeded)
    {
      MaybeFieldAccessFunctionStatus_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFieldAccessFunctionStatus_20, 0) = ((MR_Box) (Status_15));
    }
  else
    MaybeFieldAccessFunctionStatus_20 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 74, &Verbose_23);
  libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 704, &AmbiguityWarnLimit_24);
  NoSuffixIntegerMap_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]));
  libs__globals__lookup_accumulating_option_3_p_0(Globals_22, (MR_Integer) 88, &DebugTypesPredNames_26);
  if ((DebugTypesPredNames_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DebugTypes_32;

    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 87, &DebugTypes_32);
    switch (DebugTypes_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stats_47;

          libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 83, &Stats_47);
          {
            DebugInfo_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DebugInfo_31, 0) = (MR_Box) ((MR_Unsigned) (Stats_47));
            MR_hl_field(1, DebugInfo_31, 1) = ((MR_Box) (ProgressStream_10));
          }
        }
        break;
    }
  }
  else
  {
    MR_String Name_29;

    Name_29 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_29)), DebugTypesPredNames_26);
    if (succeeded)
    {
      MR_Word Stats_30;

      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 83, &Stats_30);
      {
        DebugInfo_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DebugInfo_31, 0) = (MR_Box) ((MR_Unsigned) (Stats_30));
        MR_hl_field(1, DebugInfo_31, 1) = ((MR_Box) (ProgressStream_10));
      }
    }
    else
      DebugInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
  }
  Var_45 = mercury__term_context__dummy_context_0_f_0();
  {
    ClauseContext_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClauseContext_36, 0) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(0, ClauseContext_36, 1) = ((MR_Box) (PredId_12));
    MR_hl_field(0, ClauseContext_36, 2) = ((MR_Box) (PredMarkers_16));
    MR_hl_field(0, ClauseContext_36, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ClauseContext_36, 4) = ((MR_Box) (Var_45));
    MR_hl_field(0, ClauseContext_36, 5) = ((MR_Box) (ClauseVarSet_14));
  }
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), &OverloadedSymbolMap_37);
  libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 705, &AmbiguityErrorLimit_34);
  {
    SubInfo_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SubInfo_33, 0) = (MR_Box) (((((MR_Unsigned) (Verbose_23) << 1)) | (MR_Unsigned) (CallsAreFullyQualified_19)));
    MR_hl_field(0, SubInfo_33, 1) = ((MR_Box) (AmbiguityErrorLimit_34));
    MR_hl_field(0, SubInfo_33, 2) = ((MR_Box) (MaybeFieldAccessFunctionStatus_20));
    MR_hl_field(0, SubInfo_33, 3) = ((MR_Box) (NonOverloadErrors_17));
    MR_hl_field(0, SubInfo_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SubInfo_33, 5) = ((MR_Box) (NoSuffixIntegerMap_25));
    MR_hl_field(0, SubInfo_33, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, SubInfo_33, 7) = ((MR_Box) (DebugInfo_31));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Info_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SubInfo_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClauseContext_36));
    MR_hl_field(0, base, 2) = ((MR_Box) (OverloadedSymbolMap_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (AmbiguityWarnLimit_24));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____maybe_rhs_lambda_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____maybe_rhs_lambda_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____maybe_rhs_lambda_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____maybe_rhs_lambda_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____typecheck_debug_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____typecheck_debug_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____typecheck_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_info__init(void)
{
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_maybe_rhs_lambda_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_debug_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0);
}

void mercury__check_hlds__typecheck_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_info.
