/*
** Automatically generated from `hlds_clauses.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module hlds.hlds_clauses. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_clauses__init
ENDINIT
*/

#include "hlds.hlds_clauses.mih"


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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2];

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0;

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1];

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
  MR_Integer hlds__hlds_clauses__ItemNum_5,
  MR_Word hlds__hlds_clauses__Context_6,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24);


static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3];




static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0[5] = {
  (MR_String) "clause_applicable_procs",
  (MR_String) "clause_body",
  (MR_String) "clause_lang",
  (MR_String) "clause_context",
  (MR_String) "clause_statevar_warnings"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0 = {
  (MR_String) "clause",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0 = {
  (MR_String) "all_modes",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1 = {
  (MR_String) "selected_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_applicable_modes",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0 = {
  (MR_String) "clause_item_number_region",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_region",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_type",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_types",
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__enum_value_ordered_clause_item_number_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0 = {
  (MR_String) "user_clauses",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1 = {
  (MR_String) "comp_gen_clauses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_numbers",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10] = {
  (MR_String) "cli_varset",
  (MR_String) "cli_explicit_vartypes",
  (MR_String) "cli_tvar_name_map",
  (MR_String) "cli_vartypes",
  (MR_String) "cli_headvars",
  (MR_String) "cli_rep",
  (MR_String) "cli_item_numbers",
  (MR_String) "cli_rtti_varmaps",
  (MR_String) "cli_have_foreign_clauses",
  (MR_String) "cli_had_syntax_errors"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0 = {
  (MR_String) "clauses_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_info_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_info",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "cr_num_clauses",
  (MR_String) "cr_clauses_cord"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
  (MR_String) "clauses_rep",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_rep_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_rep_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_rep",
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0 },
  {     hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0
};

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clauses_info_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
  MR_Box hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    {
      hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) hlds__hlds_clauses__wrapper_arg_1), ((MR_Word) hlds__hlds_clauses__wrapper_arg_2));
    }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
  MR_Box * hlds__hlds_clauses__wrapper_arg_1,
  MR_Box hlds__hlds_clauses__wrapper_arg_2,
  MR_Box hlds__hlds_clauses__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_clauses__conv0_HeadVar__1_1;

    {
      hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_clauses__wrapper_arg_2), ((MR_Word) hlds__hlds_clauses__wrapper_arg_3));
    }
    *hlds__hlds_clauses__wrapper_arg_1 = ((MR_Box) (hlds__hlds_clauses__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer hlds__hlds_clauses__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_6_6);
        }
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
        if (hlds__hlds_clauses__succeeded)
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[7], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));

        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_5_5);
        if (hlds__hlds_clauses__succeeded)
          {
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[7];
            {
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_33 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_34 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_33 == hlds__hlds_clauses__CastY_34);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word hlds__hlds_clauses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word hlds__hlds_clauses__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word hlds__hlds_clauses__V_24_24;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], &hlds__hlds_clauses__V_24_24, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
        }
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_24_24 == (MR_Integer) 0);
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
        if (hlds__hlds_clauses__succeeded)
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_24_24;
        else
          {
            MR_Word hlds__hlds_clauses__V_25_25;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_25_25, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
            }
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_25_25 == (MR_Integer) 0);
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
            if (hlds__hlds_clauses__succeeded)
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_25_25;
            else
              {
                MR_Word hlds__hlds_clauses__V_26_26;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[1], &hlds__hlds_clauses__V_26_26, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                }
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_26_26 == (MR_Integer) 0);
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                if (hlds__hlds_clauses__succeeded)
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_26_26;
                else
                  {
                    MR_Word hlds__hlds_clauses__V_27_27;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_2[0], &hlds__hlds_clauses__V_27_27, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                    }
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_27_27 == (MR_Integer) 0);
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                    if (hlds__hlds_clauses__succeeded)
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_27_27;
                    else
                      {
                        MR_Word hlds__hlds_clauses__V_28_28;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[6], &hlds__hlds_clauses__V_28_28, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_18_18)));
                        }
                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_28_28 == (MR_Integer) 0);
                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                        if (hlds__hlds_clauses__succeeded)
                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_28_28;
                        else
                          {
                            MR_Word hlds__hlds_clauses__V_29_29;

                            {
                              hlds__hlds_clauses____Compare____clauses_rep_0_0(&hlds__hlds_clauses__V_29_29, hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_19_19);
                            }
                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_29_29 == (MR_Integer) 0);
                            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                            if (hlds__hlds_clauses__succeeded)
                              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_29_29;
                            else
                              {
                                MR_Word hlds__hlds_clauses__V_30_30;

                                {
                                  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&hlds__hlds_clauses__V_30_30, hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_20_20);
                                }
                                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_30_30 == (MR_Integer) 0);
                                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                                if (hlds__hlds_clauses__succeeded)
                                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_30_30;
                                else
                                  {
                                    MR_Word hlds__hlds_clauses__V_31_31;

                                    {
                                      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_clauses__V_31_31, hlds__hlds_clauses__V_11_11, hlds__hlds_clauses__V_21_21);
                                    }
                                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 0);
                                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                                    if (hlds__hlds_clauses__succeeded)
                                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_31_31;
                                    else
                                      {
                                        MR_Word hlds__hlds_clauses__V_32_32;
                                        MR_Integer hlds__hlds_clauses__V_45_45 = (MR_Integer) hlds__hlds_clauses__V_12_12;
                                        MR_Integer hlds__hlds_clauses__V_46_46 = (MR_Integer) hlds__hlds_clauses__V_22_22;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_32_32, hlds__hlds_clauses__V_45_45, hlds__hlds_clauses__V_46_46);
                                        }
                                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_32_32 == (MR_Integer) 0);
                                        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                                        if (hlds__hlds_clauses__succeeded)
                                          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_32_32;
                                        else
                                          {
                                            MR_Integer hlds__hlds_clauses__V_47_47 = (MR_Integer) hlds__hlds_clauses__V_13_13;
                                            MR_Integer hlds__hlds_clauses__V_48_48 = (MR_Integer) hlds__hlds_clauses__V_23_23;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_47_47, hlds__hlds_clauses__V_48_48);
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
hlds__hlds_clauses____Unify____clauses_info_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_23 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_24 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_23 == hlds__hlds_clauses__CastY_24);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_clauses__TypeInfo_26_26;
        MR_Word hlds__hlds_clauses__TypeInfo_27_27;
        MR_Word hlds__hlds_clauses__TypeInfo_28_28;
        MR_Word hlds__hlds_clauses__TypeInfo_29_29;
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word hlds__hlds_clauses__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 9)));

        {
          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[5], ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
        }
        if (hlds__hlds_clauses__succeeded)
          {
            hlds__hlds_clauses__TypeInfo_26_26 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
            {
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_26_26, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_14_14)));
            }
            if (hlds__hlds_clauses__succeeded)
              {
                hlds__hlds_clauses__TypeInfo_27_27 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[1];
                {
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_27_27, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_15_15)));
                }
                if (hlds__hlds_clauses__succeeded)
                  {
                    hlds__hlds_clauses__TypeInfo_28_28 = (MR_Word) &hlds__hlds_clauses_scalar_common_2[0];
                    {
                      hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_28_28, ((MR_Box) (hlds__hlds_clauses__V_6_6)), ((MR_Box) (hlds__hlds_clauses__V_16_16)));
                    }
                    if (hlds__hlds_clauses__succeeded)
                      {
                        hlds__hlds_clauses__TypeInfo_29_29 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[6];
                        {
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_29_29, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_17_17)));
                        }
                        if (hlds__hlds_clauses__succeeded)
                          {
                            {
                              hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(hlds__hlds_clauses__V_8_8, hlds__hlds_clauses__V_18_18);
                            }
                            if (hlds__hlds_clauses__succeeded)
                              {
                                {
                                  hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(hlds__hlds_clauses__V_9_9, hlds__hlds_clauses__V_19_19);
                                }
                                if (hlds__hlds_clauses__succeeded)
                                  {
                                    {
                                      hlds__hlds_clauses__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(hlds__hlds_clauses__V_10_10, hlds__hlds_clauses__V_20_20);
                                    }
                                    if (hlds__hlds_clauses__succeeded)
                                      {
                                        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_11_11 == hlds__hlds_clauses__V_21_21);
                                        if (hlds__hlds_clauses__succeeded)
                                          hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == hlds__hlds_clauses__V_22_22);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__hlds_clauses__V_8_8;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], &hlds__hlds_clauses__V_8_8, ((MR_Box) (hlds__hlds_clauses__V_18_18)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_8_8 == (MR_Integer) 0);
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
            if (hlds__hlds_clauses__succeeded)
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[4], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_17_17)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_10 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_9 == hlds__hlds_clauses__CastY_10);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
        MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_8 == hlds__hlds_clauses__CastX_7);
      }
    else
      {
        MR_Word hlds__hlds_clauses__TypeInfo_11_11;
        MR_Word hlds__hlds_clauses__TypeInfo_12_12;
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_5_5;
        MR_Word hlds__hlds_clauses__V_6_6;

        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_clauses__succeeded)
          {
            hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
            hlds__hlds_clauses__TypeInfo_11_11 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
            {
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_11_11, ((MR_Box) (hlds__hlds_clauses__V_3_3)), ((MR_Box) (hlds__hlds_clauses__V_5_5)));
            }
            if (hlds__hlds_clauses__succeeded)
              {
                hlds__hlds_clauses__TypeInfo_12_12 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[4];
                {
                  hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_12_12, ((MR_Box) (hlds__hlds_clauses__V_4_4)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
                }
              }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__Cast_HeadVar1_4, hlds__hlds_clauses__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__2_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__HeadVar__2_1 == hlds__hlds_clauses__HeadVar__2_2);

    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_15 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_16 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_15 == hlds__hlds_clauses__CastY_16);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__hlds_clauses__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_12_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_12_12, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_8_8);
        }
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_12_12 == (MR_Integer) 0);
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
        if (hlds__hlds_clauses__succeeded)
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_12_12;
        else
          {
            MR_Word hlds__hlds_clauses__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_clauses__V_13_13, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
            }
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_13_13 == (MR_Integer) 0);
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
            if (hlds__hlds_clauses__succeeded)
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_13_13;
            else
              {
                MR_Word hlds__hlds_clauses__V_14_14;

                {
                  mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                }
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                if (hlds__hlds_clauses__succeeded)
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
                else
                  {
                    mercury__term____Compare____context_0_0(hlds__hlds_clauses__HeadVar__1_1, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_11 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_12 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_11 == hlds__hlds_clauses__CastY_12);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
      {
        MR_Integer hlds__hlds_clauses__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__hlds_clauses__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer hlds__hlds_clauses__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__hlds_clauses__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));

        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_3_3 == hlds__hlds_clauses__V_7_7);
        if (hlds__hlds_clauses__succeeded)
          {
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_4_4 == hlds__hlds_clauses__V_8_8);
            if (hlds__hlds_clauses__succeeded)
              {
                {
                  hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_9_9);
                }
                if (hlds__hlds_clauses__succeeded)
                  {
                    hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_10_10);
                  }
              }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_9 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_8 == hlds__hlds_clauses__CastY_9);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__hlds_clauses__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__hlds_clauses__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[3], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_11_11)), ((MR_Box) (hlds__hlds_clauses__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_7 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_8 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_7 == hlds__hlds_clauses__CastY_8);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
    if ((hlds__hlds_clauses__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__hlds_clauses__CastX_3 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
        MR_Integer hlds__hlds_clauses__CastY_4 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastY_4 == hlds__hlds_clauses__CastX_3);
      }
    else
      {
        MR_Word hlds__hlds_clauses__TypeInfo_9_9;
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_6_6;

        hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_clauses__succeeded)
          {
            hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
            hlds__hlds_clauses__TypeInfo_9_9 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[3];
            {
              hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_9_9, ((MR_Box) (hlds__hlds_clauses__V_5_5)), ((MR_Box) (hlds__hlds_clauses__V_6_6)));
            }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0(
  MR_Word * hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2,
  MR_Word hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_18 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;
    MR_Integer hlds__hlds_clauses__CastY_19 = (MR_Integer) hlds__hlds_clauses__HeadVar__3_3;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_18 == hlds__hlds_clauses__CastY_19);
    if (hlds__hlds_clauses__succeeded)
      *hlds__hlds_clauses__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_14_14;

        {
          hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&hlds__hlds_clauses__V_14_14, hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
        }
        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_14_14 == (MR_Integer) 0);
        hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
        if (hlds__hlds_clauses__succeeded)
          *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_14_14;
        else
          {
            MR_Word hlds__hlds_clauses__V_15_15;

            {
              hlds__hlds_goal____Compare____hlds_goal_0_0(&hlds__hlds_clauses__V_15_15, hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
            }
            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_15_15 == (MR_Integer) 0);
            hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
            if (hlds__hlds_clauses__succeeded)
              *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_15_15;
            else
              {
                MR_Word hlds__hlds_clauses__V_16_16;

                {
                  hlds__hlds_pred____Compare____implementation_language_0_0(&hlds__hlds_clauses__V_16_16, hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                }
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_16_16 == (MR_Integer) 0);
                hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                if (hlds__hlds_clauses__succeeded)
                  *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_16_16;
                else
                  {
                    MR_Word hlds__hlds_clauses__V_17_17;

                    {
                      mercury__term____Compare____context_0_0(&hlds__hlds_clauses__V_17_17, hlds__hlds_clauses__V_7_7, hlds__hlds_clauses__V_12_12);
                    }
                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_17_17 == (MR_Integer) 0);
                    hlds__hlds_clauses__succeeded = !(hlds__hlds_clauses__succeeded);
                    if (hlds__hlds_clauses__succeeded)
                      *hlds__hlds_clauses__HeadVar__1_1 = hlds__hlds_clauses__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[2], hlds__hlds_clauses__HeadVar__1_1, ((MR_Box) (hlds__hlds_clauses__V_8_8)), ((MR_Box) (hlds__hlds_clauses__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1,
  MR_Word hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__CastX_13 = (MR_Integer) hlds__hlds_clauses__HeadVar__1_1;
    MR_Integer hlds__hlds_clauses__CastY_14 = (MR_Integer) hlds__hlds_clauses__HeadVar__2_2;

    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__CastX_13 == hlds__hlds_clauses__CastY_14);
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__hlds_clauses__TypeInfo_18_18;
        MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__2_2, (MR_Integer) 4)));

        {
          hlds__hlds_clauses__succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(hlds__hlds_clauses__V_3_3, hlds__hlds_clauses__V_8_8);
        }
        if (hlds__hlds_clauses__succeeded)
          {
            {
              hlds__hlds_clauses__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(hlds__hlds_clauses__V_4_4, hlds__hlds_clauses__V_9_9);
            }
            if (hlds__hlds_clauses__succeeded)
              {
                {
                  hlds__hlds_clauses__succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(hlds__hlds_clauses__V_5_5, hlds__hlds_clauses__V_10_10);
                }
                if (hlds__hlds_clauses__succeeded)
                  {
                    {
                      hlds__hlds_clauses__succeeded = mercury__term____Unify____context_0_0(hlds__hlds_clauses__V_6_6, hlds__hlds_clauses__V_11_11);
                    }
                    if (hlds__hlds_clauses__succeeded)
                      {
                        hlds__hlds_clauses__TypeInfo_18_18 = (MR_Word) &hlds__hlds_clauses_scalar_common_1[2];
                        {
                          hlds__hlds_clauses__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_clauses__TypeInfo_18_18, ((MR_Box) (hlds__hlds_clauses__V_7_7)), ((MR_Box) (hlds__hlds_clauses__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
  MR_Integer hlds__hlds_clauses__ItemNum_5,
  MR_Word hlds__hlds_clauses__Context_6,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_Regions_24)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    if ((hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__hlds_clauses__NewRegion_8;

        {
          hlds__hlds_clauses__NewRegion_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_8, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word hlds__hlds_clauses__FirstRegion0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 0)));
        MR_Word hlds__hlds_clauses__LaterRegions0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23, (MR_Integer) 1)));
        MR_Integer hlds__hlds_clauses__LowerNum0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 0)));
        MR_Integer hlds__hlds_clauses__UpperNum0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 1)));
        MR_Word hlds__hlds_clauses__LowerContext0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 2)));
        MR_Word hlds__hlds_clauses__UpperContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion0_9, (MR_Integer) 3)));
        MR_Integer hlds__hlds_clauses__V_25_25 = (hlds__hlds_clauses__LowerNum0_11 - (MR_Integer) 1);

        hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 < hlds__hlds_clauses__V_25_25);
        if (hlds__hlds_clauses__succeeded)
          {
            MR_Word hlds__hlds_clauses__NewRegion_49;

            {
              hlds__hlds_clauses__NewRegion_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
              MR_hl_field(MR_mktag(0), hlds__hlds_clauses__NewRegion_49, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__NewRegion_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__STATE_VARIABLE_Regions_0_23));
            }
          }
        else
          {
            MR_Integer hlds__hlds_clauses__V_31_31 = (hlds__hlds_clauses__LowerNum0_11 - hlds__hlds_clauses__ItemNum_5);

            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_31_31 == (MR_Integer) 1);
            if (hlds__hlds_clauses__succeeded)
              {
                MR_Word hlds__hlds_clauses__FirstRegion_15;

                {
                  hlds__hlds_clauses__FirstRegion_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 0) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum0_12));
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 2) = ((MR_Box) (hlds__hlds_clauses__Context_6));
                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_15, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext0_14));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_15));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
                }
              }
            else
              {
                hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__ItemNum_5 <= hlds__hlds_clauses__UpperNum0_12);
                if (hlds__hlds_clauses__succeeded)
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "duplicate item number");
                      return;
                    }
                  }
                else
                  {
                    MR_Integer hlds__hlds_clauses__V_36_36 = (hlds__hlds_clauses__ItemNum_5 - hlds__hlds_clauses__UpperNum0_12);

                    hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_36_36 == (MR_Integer) 1);
                    if (hlds__hlds_clauses__succeeded)
                      {
                        MR_Word hlds__hlds_clauses__FirstRegion_50;

                        {
                          hlds__hlds_clauses__FirstRegion_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 1) = ((MR_Box) (hlds__hlds_clauses__ItemNum_5));
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
                          MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_50, 3) = ((MR_Box) (hlds__hlds_clauses__Context_6));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_50));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions0_10));
                        }
                      }
                    else
                      {
                        MR_Word hlds__hlds_clauses__LaterRegions1_16;

                        {
                          hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNum_5, hlds__hlds_clauses__Context_6, hlds__hlds_clauses__LaterRegions0_10, &hlds__hlds_clauses__LaterRegions1_16);
                        }
                        if ((hlds__hlds_clauses__LaterRegions1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_clauses", (MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "insertion yields empty list");
                              return;
                            }
                          }
                        else
                          {
                            MR_Word hlds__hlds_clauses__FirstLaterRegion1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 0)));
                            MR_Word hlds__hlds_clauses__LaterLaterRegions1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__LaterRegions1_16, (MR_Integer) 1)));
                            MR_Integer hlds__hlds_clauses__LowerNum1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 0)));
                            MR_Integer hlds__hlds_clauses__UpperNum1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 1)));
                            MR_Word hlds__hlds_clauses__UpperContext1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 3)));
                            MR_Word hlds__hlds_clauses___LowerContext1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstLaterRegion1_17, (MR_Integer) 2)));
                            MR_Integer hlds__hlds_clauses__V_38_38 = (hlds__hlds_clauses__LowerNum1_19 - hlds__hlds_clauses__UpperNum0_12);

                            hlds__hlds_clauses__succeeded = (hlds__hlds_clauses__V_38_38 == (MR_Integer) 1);
                            if (hlds__hlds_clauses__succeeded)
                              {
                                MR_Word hlds__hlds_clauses__FirstRegion_51;

                                {
                                  hlds__hlds_clauses__FirstRegion_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 0) = ((MR_Box) (hlds__hlds_clauses__LowerNum0_11));
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 1) = ((MR_Box) (hlds__hlds_clauses__UpperNum1_20));
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 2) = ((MR_Box) (hlds__hlds_clauses__LowerContext0_13));
                                  MR_hl_field(MR_mktag(0), hlds__hlds_clauses__FirstRegion_51, 3) = ((MR_Box) (hlds__hlds_clauses__UpperContext1_22));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion_51));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterLaterRegions1_18));
                                }
                              }
                            else
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *hlds__hlds_clauses__STATE_VARIABLE_Regions_24 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__FirstRegion0_9));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__LaterRegions1_16));
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0(void)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0(void)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_clauses_scalar_common_1[8]);
  }
}

void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_5_p_0(
  MR_Word hlds__hlds_clauses__MaybeItemNumber_6,
  MR_Word hlds__hlds_clauses__Context_7,
  MR_Word hlds__hlds_clauses__Type_8,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;

    if ((hlds__hlds_clauses__MaybeItemNumber_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
    else
      {
        MR_Integer hlds__hlds_clauses__ItemNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MaybeItemNumber_6, (MR_Integer) 0)));

        if ((hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17;
        else
          {
            MR_Word hlds__hlds_clauses__MercuryRegions0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 0)));
            MR_Word hlds__hlds_clauses__BothRegions0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 1)));
            MR_Word hlds__hlds_clauses__MercuryRegions_15;
            MR_Word hlds__hlds_clauses__BothRegions_16;

            switch (hlds__hlds_clauses__Type_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__MercuryRegions0_13, &hlds__hlds_clauses__MercuryRegions_15);
                }
                break;
              case (MR_Integer) 1:
                hlds__hlds_clauses__MercuryRegions_15 = hlds__hlds_clauses__MercuryRegions0_13;
                break;
            }
            {
              hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(hlds__hlds_clauses__ItemNumber_12, hlds__hlds_clauses__Context_7, hlds__hlds_clauses__BothRegions0_14, &hlds__hlds_clauses__BothRegions_16);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hlds_clauses__STATE_VARIABLE_ClauseItemNumbers_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_clauses__MercuryRegions_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_clauses__BothRegions_16));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(
  MR_Word hlds__hlds_clauses__ClauseItemNumbers_6,
  MR_Word hlds__hlds_clauses__Type_7,
  MR_Word * hlds__hlds_clauses__FirstRegion_8,
  MR_Word * hlds__hlds_clauses__SecondRegion_9,
  MR_Word * hlds__hlds_clauses__LaterRegions_10)
{
  {
    MR_bool hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__ClauseItemNumbers_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__MercuryRegions_11;
    MR_Word hlds__hlds_clauses__BothRegions_12;

    if (hlds__hlds_clauses__succeeded)
      {
        hlds__hlds_clauses__MercuryRegions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 0)));
        hlds__hlds_clauses__BothRegions_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__ClauseItemNumbers_6, (MR_Integer) 1)));
        switch (hlds__hlds_clauses__Type_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_clauses__V_13_13;

              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__BothRegions_12)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__hlds_clauses__succeeded)
                {
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 0)));
                  hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__BothRegions_12, (MR_Integer) 1)));
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_13_13)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__hlds_clauses__succeeded)
                    {
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 0)));
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_13_13, (MR_Integer) 1)));
                    }
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_clauses__V_14_14;

              hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__MercuryRegions_11)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__hlds_clauses__succeeded)
                {
                  *hlds__hlds_clauses__FirstRegion_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 0)));
                  hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__MercuryRegions_11, (MR_Integer) 1)));
                  hlds__hlds_clauses__succeeded = ((MR_tag((MR_Word) hlds__hlds_clauses__V_14_14)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__hlds_clauses__succeeded)
                    {
                      *hlds__hlds_clauses__SecondRegion_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 0)));
                      *hlds__hlds_clauses__LaterRegions_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_clauses__V_14_14, (MR_Integer) 1)));
                    }
                }
            }
            break;
        }
      }
    return hlds__hlds_clauses__succeeded;
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__clause_body_1_f_0(
  MR_Word hlds__hlds_clauses__HeadVar__1_1)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, (MR_Integer) 4)));

    return hlds__hlds_clauses__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_p_0(
  MR_Word hlds__hlds_clauses__X_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__X_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(
  MR_Word hlds__hlds_clauses__X_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(
  MR_Word hlds__hlds_clauses__X_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_varset_3_p_0(
  MR_Word hlds__hlds_clauses__X_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(
  MR_Word hlds__hlds_clauses__X_5,
  MR_Word hlds__hlds_clauses__Y_6,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_8,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_9)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_8, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_13_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__X_5));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__Y_6));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_19_19));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_20_20));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_21_21));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(
  MR_Word hlds__hlds_clauses__X_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_6,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_7)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 9)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_15_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_16_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_17_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_18_18));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_clauses_4_p_0(
  MR_Word * hlds__hlds_clauses__Clauses_5,
  MR_Word * hlds__hlds_clauses__ItemNumbers_6,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_CI_0_10,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_CI_11)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_47;
    MR_Word hlds__hlds_clauses__ClausesRep0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__ClausesRep_9;
    MR_Integer hlds__hlds_clauses__NumClauses_44;
    MR_Word hlds__hlds_clauses__ClausesCord0_45;
    MR_Word hlds__hlds_clauses__ClausesCord_46;
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_19_19;
    MR_Word hlds__hlds_clauses__V_20_20;
    MR_Word hlds__hlds_clauses__V_21_21;
    MR_Word hlds__hlds_clauses__V_31_31;
    MR_Word hlds__hlds_clauses__V_32_32;
    MR_Word hlds__hlds_clauses__V_33_33;
    MR_Word hlds__hlds_clauses__V_34_34;
    MR_Word hlds__hlds_clauses__V_35_35;
    MR_Word hlds__hlds_clauses__V_37_37;
    MR_Word hlds__hlds_clauses__V_38_38;
    MR_Word hlds__hlds_clauses__V_39_39;
    MR_Word hlds__hlds_clauses__V_40_40;
    MR_Word hlds__hlds_clauses__V_36_36;

    *hlds__hlds_clauses__ItemNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
    hlds__hlds_clauses__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
    hlds__hlds_clauses__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
    hlds__hlds_clauses__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 9)));
    hlds__hlds_clauses__NumClauses_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 0)));
    hlds__hlds_clauses__ClausesCord0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_8, (MR_Integer) 1)));
    hlds__hlds_clauses__TypeCtorInfo_10_47 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    {
      *hlds__hlds_clauses__Clauses_5 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_47, hlds__hlds_clauses__ClausesCord0_45);
    }
    {
      hlds__hlds_clauses__ClausesCord_46 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_47, *hlds__hlds_clauses__Clauses_5);
    }
    {
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_44));
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_46));
    }
    hlds__hlds_clauses__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
    hlds__hlds_clauses__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
    hlds__hlds_clauses__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 2)));
    hlds__hlds_clauses__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 3)));
    hlds__hlds_clauses__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 4)));
    hlds__hlds_clauses__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 5)));
    hlds__hlds_clauses__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 6)));
    hlds__hlds_clauses__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 7)));
    hlds__hlds_clauses__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
    hlds__hlds_clauses__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_CI_0_10, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_CI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_31_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_32_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__V_33_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__V_34_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__V_35_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__V_37_37));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__V_38_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (hlds__hlds_clauses__V_39_39));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__hlds_clauses__V_40_40));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(
  MR_Word hlds__hlds_clauses__CI_4,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2,
  MR_Word * hlds__hlds_clauses__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;
    MR_Word hlds__hlds_clauses__V_13_13;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 5)));
    *hlds__hlds_clauses__HeadVar__3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 6)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 7)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 8)));
    hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_4, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__List_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    MR_Word hlds__hlds_clauses__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    MR_Word hlds__hlds_clauses__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));

    {
      *hlds__hlds_clauses__List_4 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__V_5_5);
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_8_8;
    MR_Word hlds__hlds_clauses__V_9_9;
    MR_Word hlds__hlds_clauses__V_10_10;
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    MR_Word hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    MR_Word hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    MR_Word hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    MR_Word hlds__hlds_clauses__V_7_7;
    MR_Word hlds__hlds_clauses__V_8_8;
    MR_Word hlds__hlds_clauses__V_9_9;
    MR_Word hlds__hlds_clauses__V_10_10;
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_5_5;
    MR_Word hlds__hlds_clauses__V_6_6;
    MR_Word hlds__hlds_clauses__V_7_7;
    MR_Word hlds__hlds_clauses__V_8_8;
    MR_Word hlds__hlds_clauses__V_9_9;
    MR_Word hlds__hlds_clauses__V_10_10;
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_varset_2_p_0(
  MR_Word hlds__hlds_clauses__CI_3,
  MR_Word * hlds__hlds_clauses__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__V_4_4;
    MR_Word hlds__hlds_clauses__V_5_5;
    MR_Word hlds__hlds_clauses__V_6_6;
    MR_Word hlds__hlds_clauses__V_7_7;
    MR_Word hlds__hlds_clauses__V_8_8;
    MR_Word hlds__hlds_clauses__V_9_9;
    MR_Word hlds__hlds_clauses__V_10_10;
    MR_Word hlds__hlds_clauses__V_11_11;
    MR_Word hlds__hlds_clauses__V_12_12;

    *hlds__hlds_clauses__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 0)));
    hlds__hlds_clauses__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 1)));
    hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 2)));
    hlds__hlds_clauses__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 3)));
    hlds__hlds_clauses__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 4)));
    hlds__hlds_clauses__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 5)));
    hlds__hlds_clauses__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 6)));
    hlds__hlds_clauses__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 7)));
    hlds__hlds_clauses__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 8)));
    hlds__hlds_clauses__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__CI_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
hlds__hlds_clauses__set_clause_list_2_p_0(
  MR_Word hlds__hlds_clauses__Clauses_3,
  MR_Word * hlds__hlds_clauses__ClausesRep_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    MR_Integer hlds__hlds_clauses__V_5_5;
    MR_Word hlds__hlds_clauses__V_6_6;

    {
      hlds__hlds_clauses__V_5_5 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
    {
      hlds__hlds_clauses__V_6_6 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_7, hlds__hlds_clauses__Clauses_3);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__ClausesRep_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__V_5_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__V_6_6));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses__get_first_clause_2_p_0(
  MR_Word hlds__hlds_clauses__ClausesRep_3,
  MR_Word * hlds__hlds_clauses__FirstClause_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
    MR_Box hlds__hlds_clauses__conv0_FirstClause_4;

    {
      hlds__hlds_clauses__succeeded = mercury__cord__get_first_2_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6, &hlds__hlds_clauses__conv0_FirstClause_4);
    }
    if (hlds__hlds_clauses__succeeded)
      {
        *hlds__hlds_clauses__FirstClause_4 = ((MR_Word) hlds__hlds_clauses__conv0_FirstClause_4);
        hlds__hlds_clauses__succeeded = MR_TRUE;
      }
    return hlds__hlds_clauses__succeeded;
  }
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(
  MR_Word hlds__hlds_clauses__ClausesRep_3,
  MR_Word * hlds__hlds_clauses__Clauses_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

    {
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(
  MR_Word hlds__hlds_clauses__ClausesRep_3,
  MR_Word * hlds__hlds_clauses__Clauses_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
    MR_Integer hlds__hlds_clauses___NumClauses_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

    {
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_3_p_0(
  MR_Word * hlds__hlds_clauses__Clauses_4,
  MR_Word hlds__hlds_clauses__ClausesRep0_5,
  MR_Word * hlds__hlds_clauses__ClausesRep_6)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_10_10 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    MR_Integer hlds__hlds_clauses__NumClauses_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__ClausesCord0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep0_5, (MR_Integer) 1)));
    MR_Word hlds__hlds_clauses__ClausesCord_9;

    {
      *hlds__hlds_clauses__Clauses_4 = mercury__cord__list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, hlds__hlds_clauses__ClausesCord0_8);
    }
    {
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_10_10, *hlds__hlds_clauses__Clauses_4);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__ClausesRep_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__add_clause_3_p_0(
  MR_Word hlds__hlds_clauses__Clause_4,
  MR_Word hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10,
  MR_Word * hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__NumClauses0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__ClausesCord0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 1)));
    MR_Integer hlds__hlds_clauses__NumClauses_8 = (hlds__hlds_clauses__NumClauses0_6 + (MR_Integer) 1);
    MR_Word hlds__hlds_clauses__ClausesCord_9;

    {
      hlds__hlds_clauses__ClausesCord_9 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord0_7, ((MR_Box) (hlds__hlds_clauses__Clause_4)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__STATE_VARIABLE_ClausesRep_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__NumClauses_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__ClausesCord_9));
    }
  }
}

MR_Integer MR_CALL 
hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(
  MR_Word hlds__hlds_clauses__ClausesRep_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Integer hlds__hlds_clauses__NumClauses_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_clauses__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));

    return hlds__hlds_clauses__NumClauses_4;
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__clause_list_is_empty_1_f_0(
  MR_Word hlds__hlds_clauses__ClausesRep_3)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__IsEmpty_4;
    MR_Word hlds__hlds_clauses__ClausesCord_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 1)));
    MR_Integer hlds__hlds_clauses__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_3, (MR_Integer) 0)));

    {
      hlds__hlds_clauses__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, hlds__hlds_clauses__ClausesCord_6);
    }
    if (hlds__hlds_clauses__succeeded)
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 1;
    else
      hlds__hlds_clauses__IsEmpty_4 = (MR_Integer) 0;
    return hlds__hlds_clauses__IsEmpty_4;
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clauses_rep_0_f_0(void)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__HeadVar__1_1;
    MR_Word hlds__hlds_clauses__V_3_3;

    {
      hlds__hlds_clauses__V_3_3 = mercury__cord__init_0_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
    }
    {
      hlds__hlds_clauses__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__HeadVar__1_1, 1) = ((MR_Box) (hlds__hlds_clauses__V_3_3));
    }
    return hlds__hlds_clauses__HeadVar__1_1;
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(
  MR_Word hlds__hlds_clauses__HeadVars_3,
  MR_Word * hlds__hlds_clauses__ClausesInfo_4)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_25;
    MR_Word hlds__hlds_clauses__VarSet_5;
    MR_Word hlds__hlds_clauses__VarTypes_6;
    MR_Word hlds__hlds_clauses__TVarNameMap_7;
    MR_Word hlds__hlds_clauses__HeadVarVec_8;
    MR_Word hlds__hlds_clauses__ClausesRep_9;
    MR_Word hlds__hlds_clauses__RttiVarMaps_11;
    MR_Word hlds__hlds_clauses__V_15_15;
    MR_Integer hlds__hlds_clauses__V_23_23;
    MR_Word hlds__hlds_clauses__V_24_24;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__hlds_clauses__VarSet_5);
    }
    {
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_6);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_7);
    }
    {
      hlds__hlds_clauses__HeadVarVec_8 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], (MR_Integer) 0, hlds__hlds_clauses__HeadVars_3);
    }
    hlds__hlds_clauses__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__hlds_clauses__TypeCtorInfo_7_25 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    {
      hlds__hlds_clauses__V_23_23 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_25, hlds__hlds_clauses__V_15_15);
    }
    {
      hlds__hlds_clauses__V_24_24 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_25, hlds__hlds_clauses__V_15_15);
    }
    {
      hlds__hlds_clauses__ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 0) = ((MR_Box) (hlds__hlds_clauses__V_23_23));
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_9, 1) = ((MR_Box) (hlds__hlds_clauses__V_24_24));
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__ClausesInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_11));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0(
  MR_Word hlds__hlds_clauses__PredOrFunc_5,
  MR_Integer hlds__hlds_clauses__Arity_6,
  MR_Word hlds__hlds_clauses__ItemNumbers_7,
  MR_Word * hlds__hlds_clauses__ClausesInfo_8)
{
  {
    MR_bool hlds__hlds_clauses__succeeded;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__hlds_clauses__TypeCtorInfo_7_30;
    MR_Word hlds__hlds_clauses__VarSet0_9;
    MR_Word hlds__hlds_clauses__HeadVars_10;
    MR_Word hlds__hlds_clauses__VarSet_11;
    MR_Word hlds__hlds_clauses__VarTypes_12;
    MR_Word hlds__hlds_clauses__TVarNameMap_13;
    MR_Word hlds__hlds_clauses__HeadVarVec_14;
    MR_Word hlds__hlds_clauses__ClausesRep_15;
    MR_Word hlds__hlds_clauses__RttiVarMaps_16;
    MR_Word hlds__hlds_clauses__V_20_20;
    MR_Integer hlds__hlds_clauses__V_28_28;
    MR_Word hlds__hlds_clauses__V_29_29;

    {
      mercury__varset__init_1_p_0(hlds__hlds_clauses__TypeCtorInfo_22_22, &hlds__hlds_clauses__VarSet0_9);
    }
    {
      parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__hlds_clauses__TypeCtorInfo_22_22, (MR_String) "HeadVar__", hlds__hlds_clauses__Arity_6, &hlds__hlds_clauses__HeadVars_10, hlds__hlds_clauses__VarSet0_9, &hlds__hlds_clauses__VarSet_11);
    }
    {
      hlds__vartypes__init_vartypes_1_p_0(&hlds__hlds_clauses__VarTypes_12);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_clauses_scalar_common_1[0], &hlds__hlds_clauses__TVarNameMap_13);
    }
    {
      hlds__hlds_clauses__HeadVarVec_14 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__hlds_clauses_scalar_common_1[1], hlds__hlds_clauses__PredOrFunc_5, hlds__hlds_clauses__HeadVars_10);
    }
    hlds__hlds_clauses__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__hlds_clauses__TypeCtorInfo_7_30 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    {
      hlds__hlds_clauses__V_28_28 = mercury__list__length_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_30, hlds__hlds_clauses__V_20_20);
    }
    {
      hlds__hlds_clauses__V_29_29 = mercury__cord__from_list_1_f_0(hlds__hlds_clauses__TypeCtorInfo_7_30, hlds__hlds_clauses__V_20_20);
    }
    {
      hlds__hlds_clauses__ClausesRep_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_15, 0) = ((MR_Box) (hlds__hlds_clauses__V_28_28));
      MR_hl_field(MR_mktag(0), hlds__hlds_clauses__ClausesRep_15, 1) = ((MR_Box) (hlds__hlds_clauses__V_29_29));
    }
    {
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__hlds_clauses__RttiVarMaps_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_clauses__ClausesInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_clauses__VarSet_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_clauses__VarTypes_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_clauses__TVarNameMap_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_clauses__VarTypes_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_clauses__HeadVarVec_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_clauses__ClausesRep_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_clauses__ItemNumbers_7));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_clauses__RttiVarMaps_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

void mercury__hlds__hlds_clauses__init(void)
{
}

void mercury__hlds__hlds_clauses__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0);
}

void mercury__hlds__hlds_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_clauses. */
