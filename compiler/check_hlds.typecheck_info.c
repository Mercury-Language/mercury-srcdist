/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version DEV
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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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




static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0[6];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5];

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5];

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
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
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


static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[12][2];

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0)),
    ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_get_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_set_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_apply",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5 = {
  (MR_String) "source_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "cons_type_info_source",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
  (MR_String) "overloaded_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
  (MR_String) "overloaded_func",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0),
    (MR_TypeInfo) (&check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "type_error_clause_context",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_error_clause_context_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_error_clause_context_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0),
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
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[5] = {
  (MR_String) "tcsi_calls_are_fully_qualified",
  (MR_String) "tcsi_is_field_access_function",
  (MR_String) "tcsi_non_overload_errors",
  (MR_String) "tcsi_overload_error",
  (MR_String) "tcsi_ambiguity_error_limit"
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
  (MR_String) "typecheck_sub_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "typecheck_sub_info",
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0 },
  {     check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0
};

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word Var_14;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_25, Var_26);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]), &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[10]), &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[11]), &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[11]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;
      MR_Integer CastX_35 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_36 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_35 == CastY_36);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_12 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 0))));
        MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0))));
        MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1))));
        MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1))));
        MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 2))));
        MR_Word ArgY3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 2))));
        MR_Word ArgX4_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 3))));
        MR_Word ArgY4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 3))));
        MR_Integer ArgX5_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 4))));
        MR_Integer ArgY5_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 4))));
        MR_Word Var_31;
        MR_Integer Var_42 = (MR_Integer) (ArgX1_21);
        MR_Integer Var_43 = (MR_Integer) (ArgY1_22);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, Var_42, Var_43);
        succeeded = (Var_31 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_12 = Var_31;
          succeeded = (Var_12 == (MR_Integer) 0);
          succeeded = !(succeeded);
        }
        else
        {
          MR_Word Var_32;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]), &Var_32, ((MR_Box) (ArgX2_23)), ((MR_Box) (ArgY2_24)));
          succeeded = (Var_32 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_12 = Var_32;
            succeeded = (Var_12 == (MR_Integer) 0);
            succeeded = !(succeeded);
          }
          else
          {
            MR_Word Var_33;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[10]), &Var_33, ((MR_Box) (ArgX3_25)), ((MR_Box) (ArgY3_26)));
            succeeded = (Var_33 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_12 = Var_33;
              succeeded = (Var_12 == (MR_Integer) 0);
              succeeded = !(succeeded);
            }
            else
            {
              MR_Word Var_34;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[11]), &Var_34, ((MR_Box) (ArgX4_27)), ((MR_Box) (ArgY4_28)));
              succeeded = (Var_34 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_12 = Var_34;
                succeeded = (Var_12 == (MR_Integer) 0);
                succeeded = !(succeeded);
              }
              else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_12, ArgX5_29, ArgY5_30);
                succeeded = (Var_12 == (MR_Integer) 0);
                succeeded = !(succeeded);
              }
            }
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer CastX_24 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_25 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_24 == CastY_25);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_15_26;
        MR_Word TypeInfo_16_27;
        MR_Word TypeInfo_17_28;
        MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
        MR_Word ArgX2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));
        MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))));
        MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))));
        MR_Word ArgX4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 3))));
        MR_Word ArgY4_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 3))));
        MR_Integer ArgX5_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 4))));
        MR_Integer ArgY5_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 4))));

        succeeded = (ArgX1_14 == ArgY1_15);
        if (succeeded)
        {
          TypeInfo_15_26 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_26, ((MR_Box) (ArgX2_16)), ((MR_Box) (ArgY2_17)));
          if (succeeded)
          {
            TypeInfo_16_27 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_27, ((MR_Box) (ArgX3_18)), ((MR_Box) (ArgY3_19)));
            if (succeeded)
            {
              TypeInfo_17_28 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_28, ((MR_Box) (ArgX4_20)), ((MR_Box) (ArgY4_21)));
              if (succeeded)
                succeeded = (ArgX5_22 == ArgY5_23);
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
}

void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word Var_16;

      hlds__hlds_module____Compare____module_info_0_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        hlds__hlds_pred____Compare____pred_id_0_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]), &Var_18, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__term____Compare____context_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_21;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_21, Var_29, ArgY1_18);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_20)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_8;

        parse_tree__prog_data____Compare____simple_call_id_0_0(&Var_8, Var_31, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_7)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_7, ArgY1_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word Var_16;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), &Var_16, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[3]), &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          parse_tree__prog_data____Compare____mer_type_0_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[4]), &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              hlds__hlds_class____Compare____hlds_constraints_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
                check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX6_14, ArgY6_15);
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_76 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_77 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_76 == CastY_77);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_89, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_85 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_85, ArgY1_19);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_86, ArgY1_33);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_88, ArgY1_47);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_84 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_61 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_84, ArgY1_61);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_87, ArgY1_75);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_info_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
                succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_9, ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_13, ArgY1_14);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * Errors_4)
{
  {
    MR_Word Errors0_5;
    MR_Word MaybeOverloadError_6;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Integer Var_17;

    Errors0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MaybeOverloadError_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4))));
    if ((MaybeOverloadError_6 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Errors_4 = Errors0_5;
    else
    {
      MR_Word OverloadError_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOverloadError_6, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OverloadError_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Errors0_5));
      }
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Errors0_6;
    MR_Word Errors_7;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_27;

    Errors0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4))));
    {
      Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Errors_7, 0) = ((MR_Box) (Error_4));
      MR_hl_field(MR_mktag(1), Errors_7, 1) = ((MR_Box) (Errors0_6));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (Errors_7));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Var_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
  MR_Word Symbol_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_bool succeeded;
    MR_Word OverloadedSymbolMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
    MR_Word OverloadedSymbolMap_11;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
    MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
    MR_Word OldContexts_9;
    MR_Box conv0_OldContexts_9;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Integer Var_36;
    MR_Word Var_35;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]), OverloadedSymbolMap0_8, ((MR_Box) (Symbol_5)), &conv0_OldContexts_9);
    if (succeeded)
    {
      OldContexts_9 = ((MR_Word) (conv0_OldContexts_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Contexts_10;

      {
        Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Contexts_10, 0) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(1), Contexts_10, 1) = ((MR_Box) (OldContexts_9));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]), ((MR_Box) (Symbol_5)), ((MR_Box) (Contexts_10)), OverloadedSymbolMap0_8, &OverloadedSymbolMap_11);
    }
    else
    {
      MR_Word Contexts_16;

      {
        Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Contexts_16, 0) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(1), Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]), ((MR_Box) (Symbol_5)), ((MR_Box) (Contexts_16)), OverloadedSymbolMap0_8, &OverloadedSymbolMap_11);
    }
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OverloadedSymbolMap_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
  MR_Word Info_3,
  MR_Word * Ctors_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, Ctors_4);
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
  MR_Word Info_3,
  MR_Word * Types_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, Types_4);
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
  MR_Word Info_3,
  MR_Word * Preds_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, Preds_4);
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
  MR_Word Info_3,
  MR_Word * Name_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, Name_4);
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_non_overload_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbol_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));

    *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Integer Var_7;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    MR_Integer Var_12;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_non_overload_errors_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    MR_Word Var_11;
    MR_Integer Var_12;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer Var_12;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer Var_12;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));

    *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_6;
    MR_Integer Var_7;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
    MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
  MR_Word CTI_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 5))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 2))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 3))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CTI_3, (MR_Integer) 4))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word IsFieldAccessFunction_11,
  MR_Word ClauseVarSet_12,
  MR_Word Status_13,
  MR_Word PredMarkers_14,
  MR_Word NonOverloadErrors_15,
  MR_Word * Info_16)
{
  {
    MR_Word CallsAreFullyQualified_17;
    MR_Word MaybeFieldAccessFunction_18;
    MR_Word Globals_20;
    MR_Integer WarnLimit_21;
    MR_Integer ErrorLimit_22;
    MR_Word SubInfo_23;
    MR_Word ClauseContext_25;
    MR_Word OverloadedSymbolMap_26;
    MR_Word Var_29;

    CallsAreFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_14);
    switch (IsFieldAccessFunction_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeFieldAccessFunction_18 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
        {
          MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFieldAccessFunction_18, 0) = ((MR_Box) (Status_13));
        }
        break;
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_20);
    libs__globals__lookup_int_option_3_p_0(Globals_20, (MR_Integer) 671, &WarnLimit_21);
    libs__globals__lookup_int_option_3_p_0(Globals_20, (MR_Integer) 672, &ErrorLimit_22);
    {
      SubInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_23, 0) = ((MR_Box) (CallsAreFullyQualified_17));
      MR_hl_field(MR_mktag(0), SubInfo_23, 1) = ((MR_Box) (MaybeFieldAccessFunction_18));
      MR_hl_field(MR_mktag(0), SubInfo_23, 2) = ((MR_Box) (NonOverloadErrors_15));
      MR_hl_field(MR_mktag(0), SubInfo_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SubInfo_23, 4) = ((MR_Box) (ErrorLimit_22));
    }
    Var_29 = mercury__term__context_init_0_f_0();
    {
      ClauseContext_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClauseContext_25, 0) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), ClauseContext_25, 1) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), ClauseContext_25, 2) = ((MR_Box) (PredMarkers_14));
      MR_hl_field(MR_mktag(0), ClauseContext_25, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ClauseContext_25, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), ClauseContext_25, 5) = ((MR_Box) (ClauseVarSet_12));
    }
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0), (MR_Word) (&check_hlds__typecheck_info_scalar_common_1[0]), &OverloadedSymbolMap_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Info_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubInfo_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClauseContext_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OverloadedSymbolMap_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (WarnLimit_21));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____typecheck_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__typecheck_info__init(void)
{
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0);
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
