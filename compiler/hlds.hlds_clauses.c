/*
** Automatically generated from `hlds_clauses.m'
** by the Mercury compiler,
** version rotd-2022-12-28
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


// :- module hlds.hlds_clauses.
// :- implementation.

/*
INIT mercury__hlds__hlds_clauses__init
ENDINIT
*/

#include "hlds.hlds_clauses.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "check_hlds.mode_errors.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

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

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_2;

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_3;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[4];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[4];

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_1[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_init_types_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_init_types_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_init_types_0[2];

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1];

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0[1];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0[1];

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0[2];

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_types_0[2];

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

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10];

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10];

static const MR_DuArgLocn hlds__hlds_clauses__hlds__hlds_clauses__field_locns_clauses_info_0_0[10];

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

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_clause_syntax_errors_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_clause_syntax_errors_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_clause_syntax_errors_0[2];

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_0;

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_foreign_lang_clauses_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_foreign_lang_clauses_0[2];

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_foreign_lang_clauses_0[2];

static void MR_CALL 
hlds__hlds_clauses__IntroducedFrom__pred__clauses_info_init__456__1_8_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Integer LambdaHeadVar__3_36,
  MR_Integer * LambdaHeadVar__4_37,
  MR_Word LambdaHeadVar__5_38,
  MR_Word * LambdaHeadVar__6_39,
  MR_Word LambdaHeadVar__7_40,
  MR_Word * LambdaHeadVar__8_41);

static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
  MR_Integer ItemNum_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Regions_0_18,
  MR_Word * STATE_VARIABLE_Regions_19);

static void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_init_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_init_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____maybe_clause_syntax_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____maybe_clause_syntax_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____maybe_foreign_lang_clauses_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_clauses____Compare____maybe_foreign_lang_clauses_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[10][2];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_3[1][11];




static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_clauses_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_clauses__clauses_info_init_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_clauses_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_implementation_language_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_0,

};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0 = {
  (MR_String) "all_modes",
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

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1 = {
  (MR_String) "selected_modes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_applicable_modes_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_2 = {
  (MR_String) "unify_in_in_modes",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_3 = {
  (MR_String) "unify_non_in_in_modes",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0[3] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_2,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_3
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_applicable_modes_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0[4] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_1,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_2,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_applicable_modes_0_3
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_applicable_modes",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_applicable_modes_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_applicable_modes_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_applicable_modes_0,

};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_0 = {
  (MR_String) "cit_no_types",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_1 = {
  (MR_String) "cit_types",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_init_types_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_1
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_init_types_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_init_types_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_init_types_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_init_types_0_1
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_init_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_init_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_init_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_init_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_init_types",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_init_types_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_init_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_init_types_0,

};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0[4] = {
  (MR_String) "cnr_lower_item_number",
  (MR_String) "cnr_upper_item_number",
  (MR_String) "cnr_lower_item_context",
  (MR_String) "cnr_upper_item_context"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0 = {
  (MR_String) "clause_item_number_region",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_number_region_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clause_item_number_region_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_number_region_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_number_region_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_region",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_number_region_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_number_region_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_region_0,

};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_0 = {
  (MR_String) "item_is_clause",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_type_0_1 = {
  (MR_String) "item_is_foreign_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_type_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_type",
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_type_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_type_0,

};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_0 = {
  (MR_String) "only_clauses",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_clause_item_number_types_0_1 = {
  (MR_String) "clauses_and_foreign_procs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_types_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_number_types",
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_clause_item_number_types_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_clause_item_number_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_number_types_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0 = {
  (MR_String) "user_clauses",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clause_item_numbers_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1 = {
  (MR_String) "comp_gen_clauses",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clause_item_numbers_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clause_item_numbers_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clause_item_numbers",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clause_item_numbers_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clause_item_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clause_item_numbers_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_TypeInfo) (&hlds__hlds_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_foreign_lang_clauses_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_clause_syntax_errors_0)
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0[10] = {
  (MR_String) "cli_varset",
  (MR_String) "cli_explicit_vartypes",
  (MR_String) "cli_var_table",
  (MR_String) "cli_rtti_varmaps",
  (MR_String) "cli_tvar_name_map",
  (MR_String) "cli_headvars",
  (MR_String) "cli_rep",
  (MR_String) "cli_item_numbers",
  (MR_String) "cli_have_foreign_clauses",
  (MR_String) "cli_had_syntax_errors"
};

static const MR_DuArgLocn hlds__hlds_clauses__hlds__hlds_clauses__field_locns_clauses_info_0_0[10] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0 = {
  (MR_String) "clauses_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_info_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_info_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_locns_clauses_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_info_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_info",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_info_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__cord__ti_cord_1hlds__hlds_clauses__type_ctor_info_clause_0)
};

static const MR_ConstString hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0[2] = {
  (MR_String) "cr_num_clauses",
  (MR_String) "cr_clauses_cord"
};

static const MR_DuFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
  (MR_String) "clauses_rep",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_clauses__hlds__hlds_clauses__field_types_clauses_rep_0_0,
  hlds__hlds_clauses__hlds__hlds_clauses__field_names_clauses_rep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[1] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

static const MR_DuPtagLayout hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_clauses__hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_clauses____Unify____clauses_rep_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____clauses_rep_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "clauses_rep",
  { hlds__hlds_clauses__hlds__hlds_clauses__du_name_ordered_clauses_rep_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_clauses_rep_0,

};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_0 = {
  (MR_String) "no_clause_syntax_errors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_1 = {
  (MR_String) "some_clause_syntax_errors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_clause_syntax_errors_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_clause_syntax_errors_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_clause_syntax_errors_0_1
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_clause_syntax_errors_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_clause_syntax_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____maybe_clause_syntax_errors_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____maybe_clause_syntax_errors_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "maybe_clause_syntax_errors",
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_clause_syntax_errors_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_clause_syntax_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_clause_syntax_errors_0,

};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_0 = {
  (MR_String) "no_foreign_lang_clauses",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_1 = {
  (MR_String) "some_foreign_lang_clauses",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_foreign_lang_clauses_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_foreign_lang_clauses_0[2] = {
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_0,
  &hlds__hlds_clauses__hlds__hlds_clauses__enum_functor_desc_maybe_foreign_lang_clauses_0_1
};

static const MR_Integer hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_foreign_lang_clauses_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_foreign_lang_clauses_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_clauses____Unify____maybe_foreign_lang_clauses_0_0_10001)),
  ((MR_Box) (hlds__hlds_clauses____Compare____maybe_foreign_lang_clauses_0_0_10001)),
  (MR_String) "hlds.hlds_clauses",
  (MR_String) "maybe_foreign_lang_clauses",
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_name_ordered_maybe_foreign_lang_clauses_0 },
  { hlds__hlds_clauses__hlds__hlds_clauses__enum_ordinal_ordered_maybe_foreign_lang_clauses_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_clauses__hlds__hlds_clauses__functor_number_map_maybe_foreign_lang_clauses_0,

};

static void MR_CALL 
hlds__hlds_clauses__IntroducedFrom__pred__clauses_info_init__456__1_8_p_0(
  MR_Word LambdaHeadVar__1_34,
  MR_Word * LambdaHeadVar__2_35,
  MR_Integer LambdaHeadVar__3_36,
  MR_Integer * LambdaHeadVar__4_37,
  MR_Word LambdaHeadVar__5_38,
  MR_Word * LambdaHeadVar__6_39,
  MR_Word LambdaHeadVar__7_40,
  MR_Word * LambdaHeadVar__8_41)
{
  MR_String Name_26;
  MR_String Var_43;

  Var_43 = mercury__string__int_to_string_1_f_0(LambdaHeadVar__3_36);
  Name_26 = mercury__string__f_43_43_2_f_0((MR_String) "HeadVar__", Var_43);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_26, LambdaHeadVar__2_35, LambdaHeadVar__5_38, LambdaHeadVar__6_39);
  parse_tree__vartypes__add_var_type_4_p_0(*LambdaHeadVar__2_35, LambdaHeadVar__1_34, LambdaHeadVar__7_40, LambdaHeadVar__8_41);
  *LambdaHeadVar__4_37 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__3_36 + (MR_Unsigned) 1);
}

void MR_CALL 
hlds__hlds_clauses____Compare____maybe_foreign_lang_clauses_0_0(
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
hlds__hlds_clauses____Unify____maybe_foreign_lang_clauses_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____maybe_clause_syntax_errors_0_0(
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
hlds__hlds_clauses____Unify____maybe_clause_syntax_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_2[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_clauses____Compare____clauses_rep_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_45 > Var_46);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Integer Var_47 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_48 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_47 < Var_48);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_47 > Var_48);
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
          }
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0);
      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_29_29 = (MR_Word) (&hlds__hlds_clauses_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_30_30 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                      succeeded = (ArgX10_21 == ArgY10_22);
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

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0(
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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0(
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
hlds__hlds_clauses____Unify____clause_item_number_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0(
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
hlds__hlds_clauses____Unify____clause_item_number_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
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

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_init_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_18 = (MR_Integer) (Var_16);
      MR_Integer Var_19 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_18 < Var_19);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_18 > Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_init_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Integer Var_11;
    MR_Integer Var_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      Var_11 = (MR_Integer) (ArgX1_3);
      Var_12 = (MR_Integer) (ArgY1_4);
      succeeded = (Var_11 == Var_12);
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____implementation_language_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__term_context____Compare____term_context_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_15)), ((MR_Box) (ArgY1_7)));
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____implementation_language_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&hlds__hlds_clauses_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_5_p_0(
  MR_Word SeqNum_6,
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_ClauseItemNumbers_0_17,
  MR_Word * STATE_VARIABLE_ClauseItemNumbers_18)
{
  if ((SeqNum_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ClauseItemNumbers_18 = STATE_VARIABLE_ClauseItemNumbers_0_17;
  else
  {
    MR_Integer ItemNumber_12 = ((MR_Integer) ((MR_hl_field(1, SeqNum_6, (MR_Integer) 0))));

    if ((STATE_VARIABLE_ClauseItemNumbers_0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ClauseItemNumbers_18 = STATE_VARIABLE_ClauseItemNumbers_0_17;
    else
    {
      MR_Word MercuryRegions0_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 0))));
      MR_Word BothRegions0_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ClauseItemNumbers_0_17, (MR_Integer) 1))));
      MR_Word MercuryRegions_15;
      MR_Word BothRegions_16;

      switch (Type_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(ItemNumber_12, Context_7, MercuryRegions0_13, &MercuryRegions_15);
          break;
        case (MR_Integer) 1:
          MercuryRegions_15 = MercuryRegions0_13;
          break;
      }
      hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(ItemNumber_12, Context_7, BothRegions0_14, &BothRegions_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ClauseItemNumbers_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MercuryRegions_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (BothRegions_16));
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(
  MR_Integer ItemNum_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Regions_0_18,
  MR_Word * STATE_VARIABLE_Regions_19)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_Regions_0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NewRegion_8;

    {
      NewRegion_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewRegion_8, 0) = ((MR_Box) (ItemNum_5));
      MR_hl_field(0, NewRegion_8, 1) = ((MR_Box) (ItemNum_5));
      MR_hl_field(0, NewRegion_8, 2) = ((MR_Box) (Context_6));
      MR_hl_field(0, NewRegion_8, 3) = ((MR_Box) (Context_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Regions_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NewRegion_8));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word FirstRegion0_9 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Regions_0_18, (MR_Integer) 0))));
    MR_Word LaterRegions0_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Regions_0_18, (MR_Integer) 1))));
    MR_Integer LowerNum0_11 = ((MR_Integer) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 0))));
    MR_Integer UpperNum0_12 = ((MR_Integer) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 1))));
    MR_Word LowerContext0_13 = ((MR_Word) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 2))));
    MR_Word UpperContext0_14 = ((MR_Word) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 3))));
    MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) LowerNum0_11 - (MR_Unsigned) 1);

    succeeded = (ItemNum_5 < Var_24);
    if (succeeded)
    {
      MR_Word NewRegion_37;

      {
        NewRegion_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewRegion_37, 0) = ((MR_Box) (ItemNum_5));
        MR_hl_field(0, NewRegion_37, 1) = ((MR_Box) (ItemNum_5));
        MR_hl_field(0, NewRegion_37, 2) = ((MR_Box) (Context_6));
        MR_hl_field(0, NewRegion_37, 3) = ((MR_Box) (Context_6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Regions_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NewRegion_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Regions_0_18));
      }
    }
    else
    {
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) LowerNum0_11 - (MR_Unsigned) ItemNum_5);

      succeeded = (Var_30 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word FirstRegion_15;

        {
          FirstRegion_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FirstRegion_15, 0) = ((MR_Box) (ItemNum_5));
          MR_hl_field(0, FirstRegion_15, 1) = ((MR_Box) (UpperNum0_12));
          MR_hl_field(0, FirstRegion_15, 2) = ((MR_Box) (Context_6));
          MR_hl_field(0, FirstRegion_15, 3) = ((MR_Box) (UpperContext0_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Regions_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FirstRegion_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterRegions0_10));
        }
      }
      else
      {
        succeeded = (ItemNum_5 <= UpperNum0_12);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_clauses.add_clause_item_number_regions\'/4", (MR_String) "duplicate item number");
            return;
          }
        else
        {
          MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) ItemNum_5 - (MR_Unsigned) UpperNum0_12);

          succeeded = (Var_34 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word FirstRegion1_16;

            {
              FirstRegion1_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FirstRegion1_16, 0) = ((MR_Box) (LowerNum0_11));
              MR_hl_field(0, FirstRegion1_16, 1) = ((MR_Box) (ItemNum_5));
              MR_hl_field(0, FirstRegion1_16, 2) = ((MR_Box) (LowerContext0_13));
              MR_hl_field(0, FirstRegion1_16, 3) = ((MR_Box) (Context_6));
            }
            if ((LaterRegions0_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Regions_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FirstRegion1_16));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            else
            {
              MR_Word Region1_38 = ((MR_Word) ((MR_hl_field(1, LaterRegions0_10, (MR_Integer) 0))));
              MR_Word Regions2_39 = ((MR_Word) ((MR_hl_field(1, LaterRegions0_10, (MR_Integer) 1))));
              MR_Integer LowerNum1_44 = ((MR_Integer) ((MR_hl_field(0, Region1_38, (MR_Integer) 0))));
              MR_Integer UpperNum1_45 = ((MR_Integer) ((MR_hl_field(0, Region1_38, (MR_Integer) 1))));
              MR_Word UpperContext1_47 = ((MR_Word) ((MR_hl_field(0, Region1_38, (MR_Integer) 3))));
              MR_Integer Var_50 = (MR_Integer) ((MR_Unsigned) LowerNum1_44 - (MR_Unsigned) ItemNum_5);

              succeeded = (Var_50 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word Region01_48;

                {
                  Region01_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Region01_48, 0) = ((MR_Box) (LowerNum0_11));
                  MR_hl_field(0, Region01_48, 1) = ((MR_Box) (UpperNum1_45));
                  MR_hl_field(0, Region01_48, 2) = ((MR_Box) (LowerContext0_13));
                  MR_hl_field(0, Region01_48, 3) = ((MR_Box) (UpperContext1_47));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Regions_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Region01_48));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Regions2_39));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Regions_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstRegion1_16));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LaterRegions0_10));
                }
            }
          }
          else
          {
            MR_Word LaterRegions1_17;

            hlds__hlds_clauses__add_clause_item_number_regions_4_p_0(ItemNum_5, Context_6, LaterRegions0_10, &LaterRegions1_17);
            if ((LaterRegions1_17 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Regions_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FirstRegion0_9));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            else
            {
              MR_Word Region1_52 = ((MR_Word) ((MR_hl_field(1, LaterRegions1_17, (MR_Integer) 0))));
              MR_Word Regions2_53 = ((MR_Word) ((MR_hl_field(1, LaterRegions1_17, (MR_Integer) 1))));
              MR_Integer LowerNum0_54 = ((MR_Integer) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 0))));
              MR_Integer UpperNum0_55 = ((MR_Integer) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 1))));
              MR_Word LowerContext0_56 = ((MR_Word) ((MR_hl_field(0, FirstRegion0_9, (MR_Integer) 2))));
              MR_Integer LowerNum1_58 = ((MR_Integer) ((MR_hl_field(0, Region1_52, (MR_Integer) 0))));
              MR_Integer UpperNum1_59 = ((MR_Integer) ((MR_hl_field(0, Region1_52, (MR_Integer) 1))));
              MR_Word UpperContext1_61 = ((MR_Word) ((MR_hl_field(0, Region1_52, (MR_Integer) 3))));
              MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) LowerNum1_58 - (MR_Unsigned) UpperNum0_55);

              succeeded = (Var_64 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word Region01_62;

                {
                  Region01_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Region01_62, 0) = ((MR_Box) (LowerNum0_54));
                  MR_hl_field(0, Region01_62, 1) = ((MR_Box) (UpperNum1_59));
                  MR_hl_field(0, Region01_62, 2) = ((MR_Box) (LowerContext0_56));
                  MR_hl_field(0, Region01_62, 3) = ((MR_Box) (UpperContext1_61));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Regions_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Region01_62));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Regions2_53));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Regions_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstRegion0_9));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LaterRegions1_17));
                }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(
  MR_Word ClauseItemNumbers_6,
  MR_Word Type_7,
  MR_Word * FirstRegion_8,
  MR_Word * SecondRegion_9,
  MR_Word * LaterRegions_10)
{
  MR_bool succeeded = (ClauseItemNumbers_6 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word MercuryRegions_11;
  MR_Word BothRegions_12;

  if (succeeded)
  {
    MercuryRegions_11 = ((MR_Word) ((MR_hl_field(1, ClauseItemNumbers_6, (MR_Integer) 0))));
    BothRegions_12 = ((MR_Word) ((MR_hl_field(1, ClauseItemNumbers_6, (MR_Integer) 1))));
    switch (Type_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_14;

          succeeded = (BothRegions_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            *FirstRegion_8 = ((MR_Word) ((MR_hl_field(1, BothRegions_12, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, BothRegions_12, (MR_Integer) 1))));
            succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *SecondRegion_9 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
              *LaterRegions_10 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_13;

          succeeded = (MercuryRegions_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            *FirstRegion_8 = ((MR_Word) ((MR_hl_field(1, MercuryRegions_11, (MR_Integer) 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(1, MercuryRegions_11, (MR_Integer) 1))));
            succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              *SecondRegion_9 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
              *LaterRegions_10 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
            }
          }
        }
        break;
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses__clause_item_number_regions_3_p_0(
  MR_Word ClauseItemNumbers_4,
  MR_Word Type_5,
  MR_Word * Regions_6)
{
  if ((ClauseItemNumbers_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *Regions_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MercuryRegions_7 = ((MR_Word) ((MR_hl_field(1, ClauseItemNumbers_4, (MR_Integer) 0))));
    MR_Word BothRegions_8 = ((MR_Word) ((MR_hl_field(1, ClauseItemNumbers_4, (MR_Integer) 1))));

    switch (Type_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Regions_6 = BothRegions_8;
        break;
      case (MR_Integer) 0:
        *Regions_6 = MercuryRegions_7;
        break;
    }
  }
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &hlds__hlds_clauses_scalar_common_1[9]));
}

MR_Word MR_CALL 
hlds__hlds_clauses__clause_body_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return HeadVar__2_2;
}

void MR_CALL 
hlds__hlds_clauses__add_clause_3_p_0(
  MR_Word Clause_4,
  MR_Word STATE_VARIABLE_ClausesRep_0_10,
  MR_Word * STATE_VARIABLE_ClausesRep_11)
{
  MR_Integer NumClauses0_6 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 0))));
  MR_Word ClausesCord0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesRep_0_10, (MR_Integer) 1))));
  MR_Integer NumClauses_8 = (MR_Integer) ((MR_Unsigned) NumClauses0_6 + (MR_Unsigned) 1);
  MR_Word ClausesCord_9;

  ClausesCord_9 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord0_7, ((MR_Box) (Clause_4)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ClausesRep_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NumClauses_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClausesCord_9));
  }
}

void MR_CALL 
hlds__hlds_clauses__set_clause_list_2_p_0(
  MR_Word Clauses_3,
  MR_Word * ClausesRep_4)
{
  MR_Integer Var_5;
  MR_Word Var_6;

  Var_5 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), Clauses_3);
  Var_6 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), Clauses_3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ClausesRep_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_6));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_clauses_4_p_0(
  MR_Word * Clauses_5,
  MR_Word * ItemNumbers_6,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11)
{
  MR_Word ClausesRep0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 6))));
  MR_Word ClausesRep_9;
  MR_Integer NumClauses_40;
  MR_Word ClausesCord0_41;
  MR_Word ClausesCord_42;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Unsigned packed_word_1;

  *ItemNumbers_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 7))));
  NumClauses_40 = ((MR_Integer) ((MR_hl_field(0, ClausesRep0_8, (MR_Integer) 0))));
  ClausesCord0_41 = ((MR_Word) ((MR_hl_field(0, ClausesRep0_8, (MR_Integer) 1))));
  *Clauses_5 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord0_41);
  ClausesCord_42 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), *Clauses_5);
  {
    ClausesRep_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesRep_9, 0) = ((MR_Box) (NumClauses_40));
    MR_hl_field(0, ClausesRep_9, 1) = ((MR_Box) (ClausesCord_42));
  }
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 2))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 3))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 4))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 7))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_10, (MR_Integer) 8)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_9));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_1);
  }
}

MR_bool MR_CALL 
hlds__hlds_clauses__get_first_clause_2_p_0(
  MR_Word ClausesRep_3,
  MR_Word * FirstClause_4)
{
  MR_bool succeeded;
  MR_Word ClausesCord_6 = ((MR_Word) ((MR_hl_field(0, ClausesRep_3, (MR_Integer) 1))));
  MR_Box conv0_FirstClause_4;

  succeeded = mercury__cord__get_first_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord_6, &conv0_FirstClause_4);
  if (succeeded)
  {
    *FirstClause_4 = ((MR_Word) (conv0_FirstClause_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(
  MR_Word ClausesRep_3,
  MR_Word * Clauses_4)
{
  MR_Word ClausesCord_6 = ((MR_Word) ((MR_hl_field(0, ClausesRep_3, (MR_Integer) 1))));

  *Clauses_4 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord_6);
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(
  MR_Word ClausesRep_3,
  MR_Word * Clauses_4)
{
  MR_Word ClausesCord_6 = ((MR_Word) ((MR_hl_field(0, ClausesRep_3, (MR_Integer) 1))));

  *Clauses_4 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord_6);
}

void MR_CALL 
hlds__hlds_clauses__get_clause_list_3_p_0(
  MR_Word * Clauses_4,
  MR_Word ClausesRep0_5,
  MR_Word * ClausesRep_6)
{
  MR_Integer NumClauses_7 = ((MR_Integer) ((MR_hl_field(0, ClausesRep0_5, (MR_Integer) 0))));
  MR_Word ClausesCord0_8 = ((MR_Word) ((MR_hl_field(0, ClausesRep0_5, (MR_Integer) 1))));
  MR_Word ClausesCord_9;

  *Clauses_4 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord0_8);
  ClausesCord_9 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), *Clauses_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ClausesRep_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NumClauses_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClausesCord_9));
  }
}

MR_Integer MR_CALL 
hlds__hlds_clauses__num_clauses_in_clauses_rep_1_f_0(
  MR_Word ClausesRep_3)
{
  MR_Integer NumClauses_4 = ((MR_Integer) ((MR_hl_field(0, ClausesRep_3, (MR_Integer) 0))));

  return NumClauses_4;
}

MR_Word MR_CALL 
hlds__hlds_clauses__clause_list_is_empty_1_f_0(
  MR_Word ClausesRep_3)
{
  MR_bool succeeded;
  MR_Word IsEmpty_4;
  MR_Word ClausesCord_6 = ((MR_Word) ((MR_hl_field(0, ClausesRep_3, (MR_Integer) 1))));

  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), ClausesCord_6);
  if (succeeded)
    IsEmpty_4 = (MR_Integer) 1;
  else
    IsEmpty_4 = (MR_Integer) 0;
  return IsEmpty_4;
}

MR_Word MR_CALL 
hlds__hlds_clauses__init_clauses_rep_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_3;

  Var_3 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
  }
  return HeadVar__1_1;
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVarList_4)
{
  MR_Word HeadVars_5 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 5))));

  *HeadVarList_4 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[0]), HeadVars_5);
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_had_syntax_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) (Var_16) << 1)) | (MR_Unsigned) (X_4)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_have_foreign_clauses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) (X_4) << 1)) | (MR_Unsigned) (Var_17)));
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_CI_0_8,
  MR_Word * STATE_VARIABLE_CI_9)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_8, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_5));
    MR_hl_field(0, base, 7) = ((MR_Box) (Y_6));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_tvar_name_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_CI_0_6,
  MR_Word * STATE_VARIABLE_CI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 7))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_CI_0_6, (MR_Integer) 8)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = (MR_Box) (packed_word_0);
  }
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(0, CI_3, (MR_Integer) 8))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_have_foreign_clauses_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((((MR_Unsigned) ((MR_hl_field(0, CI_3, (MR_Integer) 8))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(
  MR_Word CI_4,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 6))));
  *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(0, CI_4, (MR_Integer) 7))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_tvar_name_map_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 1))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_get_varset_2_p_0(
  MR_Word CI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CI_3, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(
  MR_Word HeadVars_3,
  MR_Word * ClausesInfo_4)
{
  MR_Word VarSet_5;
  MR_Word ExplicitVarTypes_6;
  MR_Word VarTable_7;
  MR_Word RttiVarMaps_8;
  MR_Word TVarNameMap_9;
  MR_Word HeadVarVec_10;
  MR_Word ClausesRep_11;
  MR_Integer Var_21;
  MR_Word Var_22;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_5);
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_6);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_7);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_8);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_clauses_scalar_common_1[2]), &TVarNameMap_9);
  HeadVarVec_10 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[0]), (MR_Integer) 0, HeadVars_3);
  Var_21 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) ((MR_Unsigned) 0U));
  Var_22 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) ((MR_Unsigned) 0U));
  {
    ClausesRep_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesRep_11, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, ClausesRep_11, 1) = ((MR_Box) (Var_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ClausesInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (HeadVarVec_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_11));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
}

static void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_35;
  MR_Integer conv2_LambdaHeadVar__4_37;
  MR_Word conv1_LambdaHeadVar__6_39;
  MR_Word conv0_LambdaHeadVar__8_41;

  hlds__hlds_clauses__IntroducedFrom__pred__clauses_info_init__456__1_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_LambdaHeadVar__2_35, ((MR_Integer) (wrapper_arg_3)), &conv2_LambdaHeadVar__4_37, ((MR_Word) (wrapper_arg_5)), &conv1_LambdaHeadVar__6_39, ((MR_Word) (wrapper_arg_7)), &conv0_LambdaHeadVar__8_41);
  *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_35));
  *wrapper_arg_4 = ((MR_Box) (conv2_LambdaHeadVar__4_37));
  *wrapper_arg_6 = ((MR_Box) (conv1_LambdaHeadVar__6_39));
  *wrapper_arg_8 = ((MR_Box) (conv0_LambdaHeadVar__8_41));
}

void MR_CALL 
hlds__hlds_clauses__clauses_info_init_4_p_0(
  MR_Word PredOrFunc_5,
  MR_Word InitTypes_6,
  MR_Word ItemNumbers_7,
  MR_Word * ClausesInfo_8)
{
  MR_Word VarSet0_9;
  MR_Word ExplicitVarTypes0_10;
  MR_Word HeadVars_13;
  MR_Word VarSet_14;
  MR_Word ExplicitVarTypes_15;
  MR_Word VarTable_28;
  MR_Word RttiVarMaps_29;
  MR_Word TVarNameMap_30;
  MR_Word HeadVarVec_31;
  MR_Word ClausesRep_32;
  MR_Integer Var_67;
  MR_Word Var_68;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_9);
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes0_10);
  if (((MR_tag((MR_Word) InitTypes_6)) == (MR_Integer) 0))
  {
    MR_Word PredFormArity_11 = ((MR_Word) ((MR_hl_field(0, InitTypes_6, (MR_Integer) 0))));
    MR_Integer PredFormArityInt_12 = (MR_Integer) (PredFormArity_11);

    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_12, &HeadVars_13, VarSet0_9, &VarSet_14);
    ExplicitVarTypes_15 = ExplicitVarTypes0_10;
  }
  else
  {
    MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, InitTypes_6, (MR_Integer) 0))));
    MR_Box conv6_Var_27;
    MR_Box conv5_VarSet_14;
    MR_Box conv4_ExplicitVarTypes_15;

    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_clauses_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_clauses_scalar_common_1[1]), (MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&hlds__hlds_clauses_scalar_common_2[1]), ArgTypes_16, &HeadVars_13, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_27, ((MR_Box) (VarSet0_9)), &conv5_VarSet_14, ((MR_Box) (ExplicitVarTypes0_10)), &conv4_ExplicitVarTypes_15);
    VarSet_14 = ((MR_Word) (conv5_VarSet_14));
    ExplicitVarTypes_15 = ((MR_Word) (conv4_ExplicitVarTypes_15));
  }
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_28);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_29);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_clauses_scalar_common_1[2]), &TVarNameMap_30);
  HeadVarVec_31 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__hlds_clauses_scalar_common_1[0]), PredOrFunc_5, HeadVars_13);
  Var_67 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) ((MR_Unsigned) 0U));
  Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) ((MR_Unsigned) 0U));
  {
    ClausesRep_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesRep_32, 0) = ((MR_Box) (Var_67));
    MR_hl_field(0, ClausesRep_32, 1) = ((MR_Box) (Var_68));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ClausesInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_30));
    MR_hl_field(0, base, 5) = ((MR_Box) (HeadVarVec_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_32));
    MR_hl_field(0, base, 7) = ((MR_Box) (ItemNumbers_7));
    MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_applicable_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_applicable_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_applicable_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_applicable_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_init_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_init_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_init_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_init_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_region_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_item_number_region_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_region_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_item_number_region_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_item_number_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_item_number_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_number_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_item_number_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_number_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_item_number_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clause_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clause_item_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clause_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clause_item_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clauses_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clauses_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____clauses_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____clauses_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____clauses_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____clauses_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____maybe_clause_syntax_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____maybe_clause_syntax_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____maybe_clause_syntax_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____maybe_clause_syntax_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_clauses____Unify____maybe_foreign_lang_clauses_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_clauses____Unify____maybe_foreign_lang_clauses_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_clauses____Compare____maybe_foreign_lang_clauses_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_clauses____Compare____maybe_foreign_lang_clauses_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_init_types_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_region_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_type_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_numbers_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_rep_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_clause_syntax_errors_0);
	MR_register_type_ctor_info(&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_maybe_foreign_lang_clauses_0);
}

void mercury__hlds__hlds_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_clauses__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_clauses.
