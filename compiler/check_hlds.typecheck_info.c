/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module check_hlds.typecheck_info. */
/* :- implementation. */

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

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2);


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
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_get_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_set_field_access",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_apply",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5 = {
  (MR_String) "source_pred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
  (MR_String) "overloaded_pred",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
  (MR_String) "overloaded_func",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001)),
  (MR_String) "check_hlds.typecheck_info",
  (MR_String) "overloaded_symbol_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_marker_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_error_clause_context_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_error_clause_context_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_error_clause_context_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_error_clause_context_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_error_clause_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_error_clause_context_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) &hlds__status__hlds__status__type_ctor_info_pred_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1hlds__status__type_ctor_info_pred_status_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
  check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;

    {
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

    {
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_18 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_19 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_18 == check_hlds__typecheck_info__CastY_19);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_14_14;
        MR_Integer check_hlds__typecheck_info__V_25_25 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
        MR_Integer check_hlds__typecheck_info__V_26_26 = (MR_Integer) check_hlds__typecheck_info__V_9_9;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_14_14, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_26_26);
        }
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
        if (check_hlds__typecheck_info__succeeded)
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
        else
          {
            MR_Word check_hlds__typecheck_info__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_15_15, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_15_15 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_15_15;
            else
              {
                MR_Word check_hlds__typecheck_info__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                if (check_hlds__typecheck_info__succeeded)
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
                else
                  {
                    MR_Word check_hlds__typecheck_info__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                    if (check_hlds__typecheck_info__succeeded)
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
                    else
                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_13_13);
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_13 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_14 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_13 == check_hlds__typecheck_info__CastY_14);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15;
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
        MR_Word check_hlds__typecheck_info__TypeInfo_17_17;
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));

        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_3_3 == check_hlds__typecheck_info__V_8_8);
        if (check_hlds__typecheck_info__succeeded)
          {
            check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
            {
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__TypeInfo_17_17 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
                    {
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_17, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                    }
                    if (check_hlds__typecheck_info__succeeded)
                      check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_7_7 == check_hlds__typecheck_info__V_12_12);
                  }
              }
          }
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_12_12;
        MR_Integer check_hlds__typecheck_info__CastX_35 = (MR_Integer) check_hlds__typecheck_info__V_4_4;
        MR_Integer check_hlds__typecheck_info__CastY_36 = (MR_Integer) check_hlds__typecheck_info__V_8_8;

        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_35 == check_hlds__typecheck_info__CastY_36);
        if (check_hlds__typecheck_info__succeeded)
          {
            check_hlds__typecheck_info__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__V_12_12 = (MR_Integer) 0;
                check_hlds__typecheck_info__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
            MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
            MR_Integer check_hlds__typecheck_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
            MR_Integer check_hlds__typecheck_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
            MR_Word check_hlds__typecheck_info__V_31_31;
            MR_Integer check_hlds__typecheck_info__V_42_42 = (MR_Integer) check_hlds__typecheck_info__V_21_21;
            MR_Integer check_hlds__typecheck_info__V_43_43 = (MR_Integer) check_hlds__typecheck_info__V_26_26;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_42_42, check_hlds__typecheck_info__V_43_43);
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_31_31 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_31_31;
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
              }
            else
              {
                MR_Word check_hlds__typecheck_info__V_32_32;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[9], &check_hlds__typecheck_info__V_32_32, ((MR_Box) (check_hlds__typecheck_info__V_22_22)), ((MR_Box) (check_hlds__typecheck_info__V_27_27)));
                }
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_32_32 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_32_32;
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                  }
                else
                  {
                    MR_Word check_hlds__typecheck_info__V_33_33;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[10], &check_hlds__typecheck_info__V_33_33, ((MR_Box) (check_hlds__typecheck_info__V_23_23)), ((MR_Box) (check_hlds__typecheck_info__V_28_28)));
                    }
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_33_33 == (MR_Integer) 0);
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                    if (check_hlds__typecheck_info__succeeded)
                      {
                        check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_33_33;
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                      }
                    else
                      {
                        MR_Word check_hlds__typecheck_info__V_34_34;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[11], &check_hlds__typecheck_info__V_34_34, ((MR_Box) (check_hlds__typecheck_info__V_24_24)), ((MR_Box) (check_hlds__typecheck_info__V_29_29)));
                        }
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_34_34 == (MR_Integer) 0);
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                        if (check_hlds__typecheck_info__succeeded)
                          {
                            check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__V_34_34;
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                          }
                        else
                          {
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_12_12, check_hlds__typecheck_info__V_25_25, check_hlds__typecheck_info__V_30_30);
                            }
                            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_12_12 == (MR_Integer) 0);
                            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                          }
                      }
                  }
              }
          }
        if (check_hlds__typecheck_info__succeeded)
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_12_12;
        else
          {
            MR_Word check_hlds__typecheck_info__V_13_13;

            {
              check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(&check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_9_9);
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_13_13 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_13_13;
            else
              {
                MR_Word check_hlds__typecheck_info__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], &check_hlds__typecheck_info__V_14_14, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                if (check_hlds__typecheck_info__succeeded)
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_14_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_13_13;
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer check_hlds__typecheck_info__CastX_24 = (MR_Integer) check_hlds__typecheck_info__V_3_3;
        MR_Integer check_hlds__typecheck_info__CastY_25 = (MR_Integer) check_hlds__typecheck_info__V_7_7;

        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_24 == check_hlds__typecheck_info__CastY_25);
        if (check_hlds__typecheck_info__succeeded)
          check_hlds__typecheck_info__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__typecheck_info__TypeInfo_15_26;
            MR_Word check_hlds__typecheck_info__TypeInfo_16_27;
            MR_Word check_hlds__typecheck_info__TypeInfo_17_28;
            MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 2)));
            MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 3)));
            MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_3_3, (MR_Integer) 4)));
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 2)));
            MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 3)));
            MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, (MR_Integer) 4)));

            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_14_14 == check_hlds__typecheck_info__V_19_19);
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_15_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_15_26, ((MR_Box) (check_hlds__typecheck_info__V_15_15)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__TypeInfo_16_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
                    {
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_27, ((MR_Box) (check_hlds__typecheck_info__V_16_16)), ((MR_Box) (check_hlds__typecheck_info__V_21_21)));
                    }
                    if (check_hlds__typecheck_info__succeeded)
                      {
                        check_hlds__typecheck_info__TypeInfo_17_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
                        {
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_17_28, ((MR_Box) (check_hlds__typecheck_info__V_17_17)), ((MR_Box) (check_hlds__typecheck_info__V_22_22)));
                        }
                        if (check_hlds__typecheck_info__succeeded)
                          check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == check_hlds__typecheck_info__V_23_23);
                      }
                  }
              }
          }
        if (check_hlds__typecheck_info__succeeded)
          {
            {
              check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_8_8);
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_13_13, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
                }
                if (check_hlds__typecheck_info__succeeded)
                  check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_10_10);
              }
          }
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____type_error_clause_context_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_16_16;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__typecheck_info__V_16_16, check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
        }
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
        if (check_hlds__typecheck_info__succeeded)
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
        else
          {
            MR_Word check_hlds__typecheck_info__V_17_17;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
            else
              {
                MR_Word check_hlds__typecheck_info__V_18_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[7], &check_hlds__typecheck_info__V_18_18, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                if (check_hlds__typecheck_info__succeeded)
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
                else
                  {
                    MR_Word check_hlds__typecheck_info__V_19_19;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__typecheck_info__V_19_19, check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                    }
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                    if (check_hlds__typecheck_info__succeeded)
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
                    else
                      {
                        MR_Word check_hlds__typecheck_info__V_20_20;

                        {
                          mercury__term____Compare____context_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                        if (check_hlds__typecheck_info__succeeded)
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[8], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
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
check_hlds__typecheck_info____Unify____type_error_clause_context_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_19_19;
        MR_Word check_hlds__typecheck_info__TypeInfo_21_21;
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

        {
          check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_9_9);
        }
        if (check_hlds__typecheck_info__succeeded)
          {
            {
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_10_10);
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_19_19 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_19_19, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
                }
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_12_12);
                    if (check_hlds__typecheck_info__succeeded)
                      {
                        {
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
                        if (check_hlds__typecheck_info__succeeded)
                          {
                            check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
                            {
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_4 = check_hlds__typecheck_info__HeadVar__2_2;
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_5 = check_hlds__typecheck_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__Cast_HeadVar1_3 = check_hlds__typecheck_info__HeadVar__1_1;
    MR_Word check_hlds__typecheck_info__Cast_HeadVar2_4 = check_hlds__typecheck_info__HeadVar__2_2;

    {
      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_2[0], ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck_info__Cast_HeadVar2_4)));
    }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_23 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_22 == check_hlds__typecheck_info__CastY_23);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_21_21;

            {
              parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__typecheck_info__V_21_21, check_hlds__typecheck_info__V_29_29, check_hlds__typecheck_info__V_19_19);
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_21_21 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_21_21;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[5], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_28_28)), ((MR_Box) (check_hlds__typecheck_info__V_20_20)));
                }
              }
          }
        else
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__typecheck_info__V_8_8;

            {
              parse_tree__prog_data____Compare____simple_call_id_0_0(&check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_31_31, check_hlds__typecheck_info__V_6_6);
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_8_8 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], check_hlds__typecheck_info__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck_info__V_30_30)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_11 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_12 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_11 == check_hlds__typecheck_info__CastY_12);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_9_9;
        MR_Word check_hlds__typecheck_info__V_10_10;

        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__typecheck_info__succeeded)
          {
            check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[5];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
                }
              }
          }
      }
    else
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_5_5;
        MR_Word check_hlds__typecheck_info__V_6_6;

        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__typecheck_info__succeeded)
          {
            check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
                {
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_6_6)));
                }
              }
          }
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_76 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_77 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_76 == check_hlds__typecheck_info__CastY_77);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_89_89, check_hlds__typecheck_info__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__typecheck_info__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String check_hlds__typecheck_info__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_85_85, check_hlds__typecheck_info__V_19_19);
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__typecheck_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_86_86, check_hlds__typecheck_info__V_33_33);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__typecheck_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            parse_tree__prog_data____Compare____type_ctor_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_88_88, check_hlds__typecheck_info__V_47_47);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String check_hlds__typecheck_info__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String check_hlds__typecheck_info__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_84_84, check_hlds__typecheck_info__V_61_61);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__typecheck_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__typecheck_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            hlds__hlds_pred____Compare____pred_id_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_87_87, check_hlds__typecheck_info__V_75_75);
                          }
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
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_4_4;

            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
                {
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__typecheck_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_String check_hlds__typecheck_info__V_6_6;

            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_6_6) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__typecheck_info__V_8_8;

            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__typecheck_info__succeeded)
              {
                check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
                {
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__typecheck_info__V_10_10;

                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_10_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String check_hlds__typecheck_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
                MR_String check_hlds__typecheck_info__V_12_12;

                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__typecheck_info__succeeded = (strcmp(check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__typecheck_info__V_14_14;

                check_hlds__typecheck_info__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__V_14_14);
                    }
                  }
              }
              break;
          }
          break;
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0(
  MR_Word * check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
  MR_Word check_hlds__typecheck_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_21 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;
    MR_Integer check_hlds__typecheck_info__CastY_22 = (MR_Integer) check_hlds__typecheck_info__HeadVar__3_3;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_21 == check_hlds__typecheck_info__CastY_22);
    if (check_hlds__typecheck_info__succeeded)
      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_16_16;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__V_16_16, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_16_16 == (MR_Integer) 0);
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
        if (check_hlds__typecheck_info__succeeded)
          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_16_16;
        else
          {
            MR_Word check_hlds__typecheck_info__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], &check_hlds__typecheck_info__V_17_17, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
            check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_17_17 == (MR_Integer) 0);
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
            if (check_hlds__typecheck_info__succeeded)
              *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_17_17;
            else
              {
                MR_Word check_hlds__typecheck_info__V_18_18;

                {
                  parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck_info__V_18_18, check_hlds__typecheck_info__V_6_6, check_hlds__typecheck_info__V_12_12);
                }
                check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_18_18 == (MR_Integer) 0);
                check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                if (check_hlds__typecheck_info__succeeded)
                  *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_18_18;
                else
                  {
                    MR_Word check_hlds__typecheck_info__V_19_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[4], &check_hlds__typecheck_info__V_19_19, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_19_19 == (MR_Integer) 0);
                    check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                    if (check_hlds__typecheck_info__succeeded)
                      *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_19_19;
                    else
                      {
                        MR_Word check_hlds__typecheck_info__V_20_20;

                        {
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__typecheck_info__V_20_20, check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                        }
                        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_20_20 == (MR_Integer) 0);
                        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
                        if (check_hlds__typecheck_info__succeeded)
                          *check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__V_20_20;
                        else
                          {
                            check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(check_hlds__typecheck_info__HeadVar__1_1, check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__V_15_15);
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0(
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
  MR_Word check_hlds__typecheck_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Integer check_hlds__typecheck_info__CastX_15 = (MR_Integer) check_hlds__typecheck_info__HeadVar__1_1;
    MR_Integer check_hlds__typecheck_info__CastY_16 = (MR_Integer) check_hlds__typecheck_info__HeadVar__2_2;

    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__CastX_15 == check_hlds__typecheck_info__CastY_16);
    if (check_hlds__typecheck_info__succeeded)
      check_hlds__typecheck_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__typecheck_info__TypeInfo_18_18;
        MR_Word check_hlds__typecheck_info__TypeInfo_20_20;
        MR_Word check_hlds__typecheck_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 5)));

        {
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
        if (check_hlds__typecheck_info__succeeded)
          {
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[3];
            {
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
            if (check_hlds__typecheck_info__succeeded)
              {
                {
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
                if (check_hlds__typecheck_info__succeeded)
                  {
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
                    {
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
                    if (check_hlds__typecheck_info__succeeded)
                      {
                        {
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
                        if (check_hlds__typecheck_info__succeeded)
                          {
                            check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_14_14);
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__typecheck_info__succeeded;
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__Errors_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__Errors0_5;
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
    MR_Integer check_hlds__typecheck_info__V_17_17;

    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
    else
      {
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__typecheck_info__Errors_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
        }
      }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(
  MR_Word check_hlds__typecheck_info__Error_4,
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__Errors0_6;
    MR_Word check_hlds__typecheck_info__Errors_7;
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_19_19;
    MR_Integer check_hlds__typecheck_info__V_20_20;
    MR_Word check_hlds__typecheck_info__V_27_27;

    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, (MR_Integer) 4)));
    {
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
    }
    {
      check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 2) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 3) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_27_27, 4) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(
  MR_Word check_hlds__typecheck_info__Symbol_5,
  MR_Word check_hlds__typecheck_info__Context_6,
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12,
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_13)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_11;
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__OldContexts_9;
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
    MR_Word check_hlds__typecheck_info__V_33_33;
    MR_Word check_hlds__typecheck_info__V_34_34;
    MR_Integer check_hlds__typecheck_info__V_36_36;
    MR_Word check_hlds__typecheck_info__V_35_35;

    {
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__OverloadedSymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
    if (check_hlds__typecheck_info__succeeded)
      {
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
        check_hlds__typecheck_info__succeeded = MR_TRUE;
      }
    if (check_hlds__typecheck_info__succeeded)
      {
        MR_Word check_hlds__typecheck_info__Contexts_10;

        {
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
      }
    else
      {
        MR_Word check_hlds__typecheck_info__Contexts_16;

        {
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__OverloadedSymbolMap0_8, &check_hlds__typecheck_info__OverloadedSymbolMap_11);
        }
      }
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__Ctors_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;
    MR_Integer check_hlds__typecheck_info__V_14_14;
    MR_Word check_hlds__typecheck_info__V_15_15;
    MR_Word check_hlds__typecheck_info__V_16_16;

    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Ctors_4);
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__Types_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;
    MR_Integer check_hlds__typecheck_info__V_14_14;
    MR_Word check_hlds__typecheck_info__V_15_15;
    MR_Word check_hlds__typecheck_info__V_16_16;

    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Types_4);
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__Preds_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;
    MR_Integer check_hlds__typecheck_info__V_14_14;
    MR_Word check_hlds__typecheck_info__V_15_15;
    MR_Word check_hlds__typecheck_info__V_16_16;

    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Preds_4);
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_name_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__Name_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__ModuleInfo_5;
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;
    MR_Integer check_hlds__typecheck_info__V_14_14;
    MR_Word check_hlds__typecheck_info__V_15_15;
    MR_Word check_hlds__typecheck_info__V_16_16;

    check_hlds__typecheck_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_8_8, (MR_Integer) 5)));
    {
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__ModuleInfo_5, check_hlds__typecheck_info__Name_4);
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_non_overload_errors_3_p_0(
  MR_Word check_hlds__typecheck_info__X_4,
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));

    {
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overloaded_symbol_map_3_p_0(
  MR_Word check_hlds__typecheck_info__X_4,
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(
  MR_Word check_hlds__typecheck_info__X_4,
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));

    {
      check_hlds__typecheck_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 2) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 3) = ((MR_Box) (check_hlds__typecheck_info__X_4));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, 4) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
    }
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Integer * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));

    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Integer check_hlds__typecheck_info__V_7_7;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_12_12;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_non_overload_errors_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_11_11;
    MR_Integer check_hlds__typecheck_info__V_12_12;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Word check_hlds__typecheck_info__V_11_11;
    MR_Integer check_hlds__typecheck_info__V_12_12;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9;
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Word check_hlds__typecheck_info__V_11_11;
    MR_Integer check_hlds__typecheck_info__V_12_12;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Integer check_hlds__typecheck_info__V_11_11;
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Integer * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));

    *check_hlds__typecheck_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_6_6;
    MR_Integer check_hlds__typecheck_info__V_7_7;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(
  MR_Word check_hlds__typecheck_info__Info_3,
  MR_Word * check_hlds__typecheck_info__X_4)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_9_9;
    MR_Word check_hlds__typecheck_info__V_10_10;
    MR_Integer check_hlds__typecheck_info__V_11_11;
    MR_Word check_hlds__typecheck_info__V_12_12;
    MR_Word check_hlds__typecheck_info__V_13_13;

    *check_hlds__typecheck_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 0)));
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 1)));
    check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 2)));
    check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 3)));
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 4)));
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, (MR_Integer) 5)));
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(
  MR_Word check_hlds__typecheck_info__CTI_3)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

    return check_hlds__typecheck_info__HeadVar__2_2;
  }
}

void MR_CALL 
check_hlds__typecheck_info__typecheck_info_init_8_p_0(
  MR_Word check_hlds__typecheck_info__ModuleInfo_9,
  MR_Word check_hlds__typecheck_info__PredId_10,
  MR_Word check_hlds__typecheck_info__IsFieldAccessFunction_11,
  MR_Word check_hlds__typecheck_info__ClauseVarSet_12,
  MR_Word check_hlds__typecheck_info__Status_13,
  MR_Word check_hlds__typecheck_info__PredMarkers_14,
  MR_Word check_hlds__typecheck_info__NonOverloadErrors_15,
  MR_Word * check_hlds__typecheck_info__Info_16)
{
  {
    MR_bool check_hlds__typecheck_info__succeeded;
    MR_Word check_hlds__typecheck_info__CallsAreFullyQualified_17;
    MR_Word check_hlds__typecheck_info__MaybeFieldAccessFunction_18;
    MR_Word check_hlds__typecheck_info__Globals_20;
    MR_Integer check_hlds__typecheck_info__WarnLimit_21;
    MR_Integer check_hlds__typecheck_info__ErrorLimit_22;
    MR_Word check_hlds__typecheck_info__SubInfo_23;
    MR_Word check_hlds__typecheck_info__ClauseContext_25;
    MR_Word check_hlds__typecheck_info__OverloadedSymbolMap_26;
    MR_Word check_hlds__typecheck_info__V_29_29;

    {
      check_hlds__typecheck_info__CallsAreFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck_info__PredMarkers_14);
    }
    switch (check_hlds__typecheck_info__IsFieldAccessFunction_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          check_hlds__typecheck_info__MaybeFieldAccessFunction_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeFieldAccessFunction_18, 0) = ((MR_Box) (check_hlds__typecheck_info__Status_13));
        }
        break;
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_9, &check_hlds__typecheck_info__Globals_20);
    }
    {
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 648, &check_hlds__typecheck_info__WarnLimit_21);
    }
    {
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_20, (MR_Integer) 649, &check_hlds__typecheck_info__ErrorLimit_22);
    }
    {
      check_hlds__typecheck_info__SubInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 0) = ((MR_Box) (check_hlds__typecheck_info__CallsAreFullyQualified_17));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 1) = ((MR_Box) (check_hlds__typecheck_info__MaybeFieldAccessFunction_18));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 2) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_15));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_23, 4) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_22));
    }
    {
      check_hlds__typecheck_info__V_29_29 = mercury__term__context_init_0_f_0();
    }
    {
      check_hlds__typecheck_info__ClauseContext_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 0) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 1) = ((MR_Box) (check_hlds__typecheck_info__PredId_10));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_14));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 4) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ClauseContext_25, 5) = ((MR_Box) (check_hlds__typecheck_info__ClauseVarSet_12));
    }
    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], &check_hlds__typecheck_info__OverloadedSymbolMap_26);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__typecheck_info__Info_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ClauseContext_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbolMap_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_21));
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typecheck_info. */
