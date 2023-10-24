/*
** Automatically generated from `polymorphism_info.m'
** by the Mercury compiler,
** version rotd-2023-10-24
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


// :- module check_hlds.polymorphism_info.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism_info__init
REQUIRED_INIT mercury__check_hlds__polymorphism_info__required_init
ENDINIT
*/

#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_info.mh"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "ops.mih"
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
#include "hlds.make_goal.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_cache_maps_0_0[5];

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_cache_maps_0_0[5];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_cache_maps_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_cache_maps_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_cache_maps_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_cache_maps_0[1];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_cache_maps_0[1];

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_0[1];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_1[1];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_1;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_1[1];

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_const_or_var_arg_0[2];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_const_or_var_arg_0[2];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_const_or_var_arg_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_must_requantify_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_must_requantify_0[2];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_must_requantify_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_selected_pred_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_selected_pred_0[2];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_selected_pred_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_poly_info_0_0[17];

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_poly_info_0_0[17];

static const MR_DuArgLocn check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_locns_poly_info_0_0[17];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_poly_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_poly_info_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_poly_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_poly_info_0[1];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_poly_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_typeclass_info_map_entry_0_0[2];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_typeclass_info_map_entry_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_typeclass_info_map_entry_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_typeclass_info_map_entry_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_typeclass_info_map_entry_0[1];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_typeclass_info_map_entry_0[1];

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_var_maps_0_0[4];

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_var_maps_0_0[4];

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_var_maps_0_0;

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_var_maps_0_0[1];

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_var_maps_0[1];

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_var_maps_0[1];

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_var_maps_0[1];

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_set_indent_level_1_p_0(
  MR_Integer X_1);

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_get_indent_level_1_p_0(
  MR_Integer * X_1);

static void MR_CALL 
check_hlds__polymorphism_info__unlock_indent_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__lock_indent_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__pre_initialise_mutable_indent_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_set_selected_pred_1_p_0(
  MR_Word X_1);

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_get_selected_pred_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
check_hlds__polymorphism_info__unlock_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__lock_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__pre_initialise_mutable_selected_pred_0_p_0(void);

static void MR_CALL 
check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0(void);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____cache_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____cache_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_or_var_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____const_or_var_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_struct_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____const_struct_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____int_const_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____int_const_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____maybe_must_requantify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____maybe_must_requantify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____maybe_selected_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____maybe_selected_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____poly_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____poly_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____type_info_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____type_info_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_info____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_info_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__polymorphism_info_scalar_common_2[11][3];




static /* final */ const MR_Box check_hlds__polymorphism_info_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_info_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_2[2]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_1[6])),
    ((MR_Box) (&check_hlds__polymorphism_info_scalar_common_2[0]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.polymorphism_info.mh"
#include "io.stream_ops.mh"
#line 799 "polymorphism_info.m"
MR_Word check_hlds__polymorphism_info__mutable_variable_selected_pred;
#ifdef MR_THREAD_SAFE
    MercuryLock check_hlds__polymorphism_info__mutable_variable_selected_pred_lock;
#endif

#line 801 "polymorphism_info.m"
MR_Integer check_hlds__polymorphism_info__mutable_variable_indent_level;
#ifdef MR_THREAD_SAFE
    MercuryLock check_hlds__polymorphism_info__mutable_variable_indent_level_lock;
#endif


#line 799 "polymorphism_info.m"
void 
check_hlds__polymorphism_info__user_init_pred_154_0(void)
#line 799 "polymorphism_info.m"
{
#line 799 "polymorphism_info.m"
	check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0();
}

#line 801 "polymorphism_info.m"
void 
check_hlds__polymorphism_info__user_init_pred_155_0(void)
#line 801 "polymorphism_info.m"
{
#line 801 "polymorphism_info.m"
	check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0();
}


static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_cache_maps_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_cache_maps_0_0[5] = {
  (MR_String) "cm_snapshot_num",
  (MR_String) "cm_type_info_var_map",
  (MR_String) "cm_typeclass_info_map",
  (MR_String) "cm_int_const_map",
  (MR_String) "cm_const_struct_var_map"
};

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_cache_maps_0_0 = {
  (MR_String) "cache_maps",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_cache_maps_0_0,
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_cache_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_cache_maps_0_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_cache_maps_0_0 };

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_cache_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_cache_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_cache_maps_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_cache_maps_0_0 };

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_cache_maps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_cache_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____cache_maps_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____cache_maps_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "cache_maps",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_cache_maps_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_cache_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_cache_maps_0,

};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) };

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_0 = {
  (MR_String) "cova_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_1 = {
  (MR_String) "cova_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_const_or_var_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_0 };

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_1[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_1 };

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_const_or_var_arg_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_const_or_var_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_const_or_var_arg_0[2] = {
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_0,
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_const_or_var_arg_0_1
};

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_const_or_var_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____const_or_var_arg_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____const_or_var_arg_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "const_or_var_arg",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_const_or_var_arg_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_const_or_var_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_const_or_var_arg_0,

};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_struct_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____const_struct_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____const_struct_var_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "const_struct_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_int_const_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____int_const_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____int_const_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "int_const_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_0 = {
  (MR_String) "no_must_requantify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_1 = {
  (MR_String) "must_requantify",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_must_requantify_0[2] = {
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_0,
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_must_requantify_0[2] = {
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_1,
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_must_requantify_0_0
};

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_must_requantify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_maybe_must_requantify_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____maybe_must_requantify_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____maybe_must_requantify_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "maybe_must_requantify",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_must_requantify_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_must_requantify_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_must_requantify_0,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_0 = {
  (MR_String) "is_not_selected_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_1 = {
  (MR_String) "is_selected_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_selected_pred_0[2] = {
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_0,
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_selected_pred_0[2] = {
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_0,
  &check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_functor_desc_maybe_selected_pred_0_1
};

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_selected_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_maybe_selected_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____maybe_selected_pred_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____maybe_selected_pred_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "maybe_selected_pred",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_name_ordered_maybe_selected_pred_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__enum_ordinal_ordered_maybe_selected_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_maybe_selected_pred_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_poly_info_0_0[17] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2hlds__const_struct__type_ctor_info_const_struct_arg_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_defined_where_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_maybe_must_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_poly_info_0_0[17] = {
  (MR_String) "poly_module_info",
  (MR_String) "poly_var_table",
  (MR_String) "poly_rtti_varmaps",
  (MR_String) "poly_typevarset",
  (MR_String) "poly_tvar_kind_map",
  (MR_String) "poly_proof_map",
  (MR_String) "poly_constraint_map",
  (MR_String) "poly_type_info_var_map",
  (MR_String) "poly_typeclass_info_map",
  (MR_String) "poly_int_const_map",
  (MR_String) "poly_const_struct_var_map",
  (MR_String) "poly_num_reuses",
  (MR_String) "poly_snapshot_num",
  (MR_String) "poly_const_struct_db",
  (MR_String) "poly_defined_where",
  (MR_String) "poly_must_requantify",
  (MR_String) "poly_errors"
};

static const MR_DuArgLocn check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_locns_poly_info_0_0[17] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_poly_info_0_0 = {
  (MR_String) "poly_info",
  INT16_C(17),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_poly_info_0_0,
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_poly_info_0_0,
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_locns_poly_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_poly_info_0_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_poly_info_0_0 };

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_poly_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_poly_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_poly_info_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_poly_info_0_0 };

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_poly_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____poly_info_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____poly_info_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "poly_info",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_poly_info_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_poly_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_poly_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_type_info_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____type_info_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____type_info_var_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "type_info_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____typeclass_info_map_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____typeclass_info_map_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "typeclass_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism_info__list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__polymorphism_info__list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0),
    (MR_TypeInfo) (&check_hlds__polymorphism_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_typeclass_info_map_entry_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__tree234__ti_tree234_2list__ti_list_1check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
};

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_typeclass_info_map_entry_0_0 = {
  (MR_String) "typeclass_info_map_entry",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_typeclass_info_map_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_typeclass_info_map_entry_0_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_typeclass_info_map_entry_0_0 };

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_typeclass_info_map_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_typeclass_info_map_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_typeclass_info_map_entry_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_typeclass_info_map_entry_0_0 };

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_typeclass_info_map_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____typeclass_info_map_entry_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____typeclass_info_map_entry_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "typeclass_info_map_entry",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_typeclass_info_map_entry_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_typeclass_info_map_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_typeclass_info_map_entry_0,

};

static const MR_PseudoTypeInfo check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_var_maps_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_cache_maps_0)
};

static const MR_ConstString check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_var_maps_0_0[4] = {
  (MR_String) "vm_snapshot_num",
  (MR_String) "vm_var_table",
  (MR_String) "vm_rtti_varmaps",
  (MR_String) "vm_cache_maps"
};

static const MR_DuFunctorDesc check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_var_maps_0_0 = {
  (MR_String) "var_maps",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_types_var_maps_0_0,
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__field_names_var_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_var_maps_0_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_var_maps_0_0 };

static const MR_DuPtagLayout check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_var_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_stag_ordered_var_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_var_maps_0[1] = { &check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_functor_desc_var_maps_0_0 };

static const MR_Integer check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_var_maps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_var_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__polymorphism_info____Unify____var_maps_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism_info____Compare____var_maps_0_0_10001)),
  (MR_String) "check_hlds.polymorphism_info",
  (MR_String) "var_maps",
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_name_ordered_var_maps_0 },
  { check_hlds__polymorphism_info__check_hlds__polymorphism_info__du_ptag_ordered_var_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__polymorphism_info__check_hlds__polymorphism_info__functor_number_map_var_maps_0,

};

void MR_CALL 
check_hlds__polymorphism_info____Compare____var_maps_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__polymorphism_info____Compare____cache_maps_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____var_maps_0_0(
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = check_hlds__polymorphism_info____Unify____cache_maps_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_entry_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[10]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_entry_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[10]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____type_info_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____type_info_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____poly_info_0_0(
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[8]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[9]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              hlds__const_struct____Compare____const_struct_db_0_0(&SubResult14_45, ArgX14_43, ArgY14_44);
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_73 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_74 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_73 < Var_74);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_73 > Var_74);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_75 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_76 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_75 < Var_76);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_75 > Var_76);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
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
check_hlds__polymorphism_info____Unify____poly_info_0_0(
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
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word TypeInfo_51_51;
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_42_42 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_43_43 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_44_44 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_45_45 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_46_46 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_47_47 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_48_48 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_49_49 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX14_29, ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    TypeInfo_51_51 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[5]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
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
check_hlds__polymorphism_info____Compare____maybe_selected_pred_0_0(
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
check_hlds__polymorphism_info____Unify____maybe_selected_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____maybe_must_requantify_0_0(
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
check_hlds__polymorphism_info____Unify____maybe_must_requantify_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____int_const_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____int_const_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____const_struct_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_struct_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____const_or_var_arg_0_0(
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

      hlds__const_struct____Compare____const_struct_arg_0_0(HeadVar__1_1, Var_16, ArgY1_5);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_or_var_arg_0_0(
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

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__const_struct____Unify____const_struct_arg_0_0(ArgX1_3, ArgY1_4);
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
      TypeInfo_10_10 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info____Compare____cache_maps_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____cache_maps_0_0(
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
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_15_15 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_set_indent_level_1_p_0(
  MR_Integer X_1)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unsafe_set_indent_level_1_p_0

	MR_Integer X;

	X = X_1 ;
		{
check_hlds__polymorphism_info__mutable_variable_indent_level = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_get_indent_level_1_p_0(
  MR_Integer * X_1)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unsafe_get_indent_level_1_p_0

	MR_Integer X;

		{
X = check_hlds__polymorphism_info__mutable_variable_indent_level;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
check_hlds__polymorphism_info__unlock_indent_level_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unlock_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__lock_indent_level_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__lock_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__pre_initialise_mutable_indent_level_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__pre_initialise_mutable_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0

	MR_Integer X;

	X = (MR_Integer) 0 ;
		{
check_hlds__polymorphism_info__mutable_variable_indent_level = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_indent_level_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_set_selected_pred_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unsafe_set_selected_pred_1_p_0

	MR_Word X;

	X = X_1 ;
		{
check_hlds__polymorphism_info__mutable_variable_selected_pred = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__unsafe_get_selected_pred_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unsafe_get_selected_pred_1_p_0

	MR_Word X;

		{
X = check_hlds__polymorphism_info__mutable_variable_selected_pred;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
check_hlds__polymorphism_info__unlock_selected_pred_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__unlock_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__lock_selected_pred_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__lock_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__pre_initialise_mutable_selected_pred_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__pre_initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0(void)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
check_hlds__polymorphism_info__mutable_variable_selected_pred = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__initialise_mutable_selected_pred_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_debug_stream_4_p_0(
  MR_Word PolyInfo_5,
  MR_Word * Stream_6)
{
  MR_Word ModuleInfo_8 = ((MR_Word) ((MR_hl_field(0, PolyInfo_5, (MR_Integer) 0))));
  MR_Word Globals_9;
  MR_Word ModuleName_10;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_9);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_10);
  libs__globals__get_debug_output_stream_5_p_0(Globals_9, ModuleName_10, Stream_6);
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_indent_level_3_p_0(
  MR_Integer Level_4)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_indent_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_indent_level_3_p_0

	MR_Integer X;

	X = Level_4 ;
		{
check_hlds__polymorphism_info__mutable_variable_indent_level = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_indent_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_indent_level_3_p_0(
  MR_Integer * Level_4)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_indent_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_indent_level_3_p_0

	MR_Integer X;

		{
X = check_hlds__polymorphism_info__mutable_variable_indent_level;


		;}
#undef MR_PROC_LABEL
	*Level_4  = X;
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_indent_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_indent_level_lock, "check_hlds__polymorphism_info__mutable_variable_indent_level_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_selected_pred_3_p_0(
  MR_Word Selected_4)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_selected_pred_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_selected_pred_3_p_0

	MR_Word X;

	X = Selected_4 ;
		{
check_hlds__polymorphism_info__mutable_variable_selected_pred = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_set_selected_pred_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_selected_pred_3_p_0(
  MR_Word * Selected_4)
{
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_selected_pred_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_selected_pred_3_p_0

	MR_Word X;

		{
X = check_hlds__polymorphism_info__mutable_variable_selected_pred;


		;}
#undef MR_PROC_LABEL
	*Selected_4  = X;
}
{
#define MR_PROC_LABEL check_hlds__polymorphism_info__poly_info_get_selected_pred_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&check_hlds__polymorphism_info__mutable_variable_selected_pred_lock, "check_hlds__polymorphism_info__mutable_variable_selected_pred_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(
  MR_Word ConstStructDb_4,
  MR_Word ConstArg_5,
  MR_Word * Inst_6)
{
  if (((MR_tag((MR_Word) ConstArg_5)) == (MR_Integer) 0))
  {
    MR_Integer StructNum_9 = ((MR_Integer) ((MR_hl_field(0, ConstArg_5, (MR_Integer) 0))));
    MR_Word Struct_10;

    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_4, StructNum_9, &Struct_10);
    *Inst_6 = ((MR_Word) ((MR_hl_field(0, Struct_10, (MR_Integer) 3))));
  }
  else
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(1, ConstArg_5, (MR_Integer) 0))));
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (ConsId_7));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Inst_6 = base;
      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(2, base, 2) = ((MR_Box) (Var_17));
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word VarMCA_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarsMCAs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ConstArg_5;
    MR_Word ConstArgs_6;
    MR_Word MCA_8 = ((MR_Word) ((MR_hl_field(0, VarMCA_3, (MR_Integer) 1))));

    succeeded = (MCA_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ConstArg_5 = ((MR_Word) ((MR_hl_field(1, MCA_8, (MR_Integer) 0))));
      succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(VarsMCAs_4, &ConstArgs_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ConstArg_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (ConstArgs_6));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__polymorphism_info__get_poly_const_5_p_0(
  MR_Integer IntConst_6,
  MR_Word * IntVar_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word IntConstMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 9))));
  MR_Word IntVarPrime_11;
  MR_Box conv0_IntVarPrime_11;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), IntConstMap0_10, IntConst_6, &conv0_IntVarPrime_11);
  if (succeeded)
  {
    IntVarPrime_11 = ((MR_Word) (conv0_IntVarPrime_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_12 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 11))));
    MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) NumReuses_12 + (MR_Unsigned) 1);
    MR_Integer Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 11))));

    succeeded = (Var_20 == Var_97);
    if (succeeded)
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    else
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 5))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 6))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 7))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 8))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 9))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 10))));
      MR_Integer Var_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 12))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 13))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 15))));
      MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_81));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_85));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_86));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_87));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_88));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_89));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_90));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_20));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_92));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_93));
        MR_hl_field(0, base, 14) = (MR_Box) (packed_word_3);
        MR_hl_field(0, base, 15) = ((MR_Box) (Var_96));
      }
    }
    *IntVar_7 = IntVarPrime_11;
    *Goals_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String Name_13;
    MR_Word VarTable0_14;
    MR_Word Goal_15;
    MR_Word VarTable_16;
    MR_Word IntConstMap_17;
    MR_String Var_24;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Integer Var_125;
    MR_Integer Var_126;
    MR_Word Var_127;
    MR_Word Var_130;
    MR_Unsigned packed_word_5;
    MR_Word Var_131;

    Var_24 = mercury__string__int_to_string_1_f_0(IntConst_6);
    Name_13 = mercury__string__f_43_43_2_f_0((MR_String) "PolyConst", Var_24);
    VarTable0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
    hlds__make_goal__make_int_const_construction_alloc_6_p_0(IntConst_6, Name_13, &Goal_15, IntVar_7, VarTable0_14, &VarTable_16);
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
    Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 5))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 6))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 7))));
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 8))));
    Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 9))));
    Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 10))));
    Var_125 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 11))));
    Var_126 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 12))));
    Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 13))));
    packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 15))));
    {
      STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (Var_114));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 1) = ((MR_Box) (VarTable_16));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (Var_116));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (Var_118));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (Var_120));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (Var_121));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (Var_124));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 11) = ((MR_Box) (Var_125));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 12) = ((MR_Box) (Var_126));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 13) = ((MR_Box) (Var_127));
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 14) = (MR_Box) (packed_word_5);
      MR_hl_field(0, STATE_VARIABLE_Info_25_25, 15) = ((MR_Box) (Var_130));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), IntConst_6, ((MR_Box) (*IntVar_7)), IntConstMap0_10, &IntConstMap_17);
    Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 9))));
    succeeded = (((MR_Word) IntConstMap_17) == ((MR_Word) Var_131));
    if (succeeded)
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_25_25;
    else
    {
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 0))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 1))));
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 2))));
      MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 3))));
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 4))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 5))));
      MR_Word Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 6))));
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 7))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 8))));
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 10))));
      MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 11))));
      MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 12))));
      MR_Word Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 13))));
      MR_Word Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 15))));
      MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 14)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_19 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_148));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_149));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_150));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_151));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_152));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_153));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_154));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_155));
        MR_hl_field(0, base, 8) = ((MR_Box) (Var_156));
        MR_hl_field(0, base, 9) = ((MR_Box) (IntConstMap_17));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_158));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_159));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_160));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_161));
        MR_hl_field(0, base, 14) = (MR_Box) (packed_word_7);
        MR_hl_field(0, base, 15) = ((MR_Box) (Var_164));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0(
  MR_String Name_5,
  MR_Word VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(VarMaps_6, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

void MR_CALL 
check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(0, VarMaps_6, (MR_Integer) 1))));
  MR_Word RttiVarMaps_10 = ((MR_Word) ((MR_hl_field(0, VarMaps_6, (MR_Integer) 2))));
  MR_Word CacheMaps_11 = ((MR_Word) ((MR_hl_field(0, VarMaps_6, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
  MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
  MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
  MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
  MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
  MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
  MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
  MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
  MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 10))));
  MR_Integer Var_107 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 11))));
  MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 12))));
  MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 13))));
  MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 15))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));

  {
    STATE_VARIABLE_Info_57_57 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 1) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 2) = ((MR_Box) (RttiVarMaps_10));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 3) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 4) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 5) = ((MR_Box) (Var_101));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 6) = ((MR_Box) (Var_102));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 7) = ((MR_Box) (Var_103));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 8) = ((MR_Box) (Var_104));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 9) = ((MR_Box) (Var_105));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 10) = ((MR_Box) (Var_106));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 11) = ((MR_Box) (Var_107));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 12) = ((MR_Box) (Var_108));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 13) = ((MR_Box) (Var_109));
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, STATE_VARIABLE_Info_57_57, 15) = ((MR_Box) (Var_112));
  }
  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(CacheMaps_11, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_18);
}

void MR_CALL 
check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0(
  MR_String Name_5,
  MR_Word * VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(VarMaps_6, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
}

void MR_CALL 
check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_118_97_114_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * VarMaps_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Integer SnapshotNum_8 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 12))));
  MR_Word VarTable_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
  MR_Word RttiVarMaps_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
  MR_Word CacheMaps_17;

  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(&CacheMaps_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *VarMaps_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SnapshotNum_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (CacheMaps_17));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__empty_cache_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  MR_bool succeeded;
  MR_Word Var_6;
  MR_Word STATE_VARIABLE_Info_7_7;
  MR_Word Var_8;
  MR_Word STATE_VARIABLE_Info_9_9;
  MR_Word Var_10;
  MR_Word STATE_VARIABLE_Info_11_11;
  MR_Word Var_12;
  MR_Word Var_20;
  MR_Word Var_55;
  MR_Word Var_90;
  MR_Word Var_125;

  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[1]));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 7))));
  succeeded = (((MR_Word) Var_6) == ((MR_Word) Var_20));
  if (succeeded)
    STATE_VARIABLE_Info_7_7 = STATE_VARIABLE_Info_0_4;
  else
  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 3))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 4))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 5))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 6))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 8))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 9))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 10))));
    MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 11))));
    MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 12))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 13))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_4, (MR_Integer) 14)));

    {
      STATE_VARIABLE_Info_7_7 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 6) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 7) = ((MR_Box) (Var_6));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 8) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 9) = ((MR_Box) (Var_46));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 10) = ((MR_Box) (Var_47));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 11) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 12) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 13) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, STATE_VARIABLE_Info_7_7, 15) = ((MR_Box) (Var_53));
    }
  }
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[2]));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 8))));
  succeeded = (((MR_Word) Var_8) == ((MR_Word) Var_55));
  if (succeeded)
    STATE_VARIABLE_Info_9_9 = STATE_VARIABLE_Info_7_7;
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 0))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 2))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 3))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 4))));
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 5))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 6))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 7))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 9))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 10))));
    MR_Integer Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 11))));
    MR_Integer Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 12))));
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 13))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 15))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_7_7, (MR_Integer) 14)));

    {
      STATE_VARIABLE_Info_9_9 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 0) = ((MR_Box) (Var_72));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 1) = ((MR_Box) (Var_73));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 2) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 3) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 4) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 5) = ((MR_Box) (Var_77));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 6) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 7) = ((MR_Box) (Var_79));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 8) = ((MR_Box) (Var_8));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 9) = ((MR_Box) (Var_81));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 10) = ((MR_Box) (Var_82));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 11) = ((MR_Box) (Var_83));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 12) = ((MR_Box) (Var_84));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 13) = ((MR_Box) (Var_85));
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 14) = (MR_Box) (packed_word_3);
      MR_hl_field(0, STATE_VARIABLE_Info_9_9, 15) = ((MR_Box) (Var_88));
    }
  }
  Var_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 9))));
  succeeded = (((MR_Word) Var_10) == ((MR_Word) Var_90));
  if (succeeded)
    STATE_VARIABLE_Info_11_11 = STATE_VARIABLE_Info_9_9;
  else
  {
    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 0))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 1))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 2))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 3))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 4))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 5))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 6))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 7))));
    MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 8))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 10))));
    MR_Integer Var_118 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 11))));
    MR_Integer Var_119 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 12))));
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 13))));
    MR_Word Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 15))));
    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_9_9, (MR_Integer) 14)));

    {
      STATE_VARIABLE_Info_11_11 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 0) = ((MR_Box) (Var_107));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 1) = ((MR_Box) (Var_108));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 2) = ((MR_Box) (Var_109));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 3) = ((MR_Box) (Var_110));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 4) = ((MR_Box) (Var_111));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 5) = ((MR_Box) (Var_112));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 6) = ((MR_Box) (Var_113));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 7) = ((MR_Box) (Var_114));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 8) = ((MR_Box) (Var_115));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 9) = ((MR_Box) (Var_10));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 10) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 11) = ((MR_Box) (Var_118));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 12) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 13) = ((MR_Box) (Var_120));
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 14) = (MR_Box) (packed_word_5);
      MR_hl_field(0, STATE_VARIABLE_Info_11_11, 15) = ((MR_Box) (Var_123));
    }
  }
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]));
  Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 10))));
  succeeded = (((MR_Word) Var_12) == ((MR_Word) Var_125));
  if (succeeded)
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_11_11;
  else
  {
    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 0))));
    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 1))));
    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 2))));
    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 3))));
    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 4))));
    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 5))));
    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 6))));
    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 7))));
    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 8))));
    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 9))));
    MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 11))));
    MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 12))));
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 13))));
    MR_Word Var_158 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 15))));
    MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_11_11, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_142));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_143));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_144));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_145));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_146));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_147));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_148));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_149));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_150));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_151));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_12));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_153));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_154));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_155));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_7);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_158));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0(
  MR_String Name_5,
  MR_Word CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(CacheMaps_6, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
}

void MR_CALL 
check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word TypeInfoVarMap_9 = ((MR_Word) ((MR_hl_field(0, CacheMaps_6, (MR_Integer) 1))));
  MR_Word TypeClassInfoMap_10 = ((MR_Word) ((MR_hl_field(0, CacheMaps_6, (MR_Integer) 2))));
  MR_Word IntConstMap_11 = ((MR_Word) ((MR_hl_field(0, CacheMaps_6, (MR_Integer) 3))));
  MR_Word ConstStructVarMap_12 = ((MR_Word) ((MR_hl_field(0, CacheMaps_6, (MR_Integer) 4))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 7))));
  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 9))));
  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 10))));

  succeeded = (((MR_Word) TypeInfoVarMap_9) == ((MR_Word) Var_22));
  if (succeeded)
  {
    succeeded = (((MR_Word) TypeClassInfoMap_10) == ((MR_Word) Var_82));
    if (succeeded)
    {
      succeeded = (((MR_Word) IntConstMap_11) == ((MR_Word) Var_83));
      if (succeeded)
        succeeded = (((MR_Word) ConstStructVarMap_12) == ((MR_Word) Var_84));
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  else
  {
    MR_Word Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
    MR_Word Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
    MR_Word Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
    MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 11))));
    MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 12))));
    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 13))));
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_139));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_140));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_141));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_142));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_143));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_144));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_145));
      MR_hl_field(0, base, 7) = ((MR_Box) (TypeInfoVarMap_9));
      MR_hl_field(0, base, 8) = ((MR_Box) (TypeClassInfoMap_10));
      MR_hl_field(0, base, 9) = ((MR_Box) (IntConstMap_11));
      MR_hl_field(0, base, 10) = ((MR_Box) (ConstStructVarMap_12));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_150));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_151));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_152));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_155));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0(
  MR_String Name_5,
  MR_Word * CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(CacheMaps_6, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
}

void MR_CALL 
check_hlds__polymorphism_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_99_97_99_104_101_95_109_97_112_115_95_115_110_97_112_115_104_111_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word * CacheMaps_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word TypeInfoVarMap_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 7))));
  MR_Word TypeClassInfoMap_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
  MR_Word IntConstMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 9))));
  MR_Word ConstStructVarMap_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 10))));
  MR_Integer SnapshotNum_12 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 12))));
  MR_Integer Var_23;
  MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
  MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
  MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
  MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
  MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
  MR_Integer Var_118 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 11))));
  MR_Word Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 13))));
  MR_Word Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 15))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 14)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *CacheMaps_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SnapshotNum_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeInfoVarMap_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeClassInfoMap_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntConstMap_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (ConstStructVarMap_11));
  }
  Var_23 = (MR_Integer) ((MR_Unsigned) SnapshotNum_12 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_109));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_110));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_111));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_112));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_113));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_114));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeInfoVarMap_8));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClassInfoMap_9));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntConstMap_10));
    MR_hl_field(0, base, 10) = ((MR_Box) (ConstStructVarMap_11));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_118));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_120));
    MR_hl_field(0, base, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_123));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
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
    MR_hl_field(0, base, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 15) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_must_requantify_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_4,
  MR_Word * STATE_VARIABLE_PI_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 10))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 11))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 13))));
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_4, (MR_Integer) 15))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
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
    MR_hl_field(0, base, 14) = (MR_Box) (((((MR_Unsigned) (Var_22) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));

  succeeded = (X_4 == Var_41);
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 11) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_40));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_int_const_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_typeclass_info_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_proof_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
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
    MR_hl_field(0, base, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_PI_7 = STATE_VARIABLE_PI_0_6;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 1))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_PI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_var_table_rtti_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_PI_0_8,
  MR_Word * STATE_VARIABLE_PI_9)
{
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 3))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 4))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 5))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 6))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 7))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 8))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 9))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 10))));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 11))));
  MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 12))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 13))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 15))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_8, (MR_Integer) 14)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (Y_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PI_0_6,
  MR_Word * STATE_VARIABLE_PI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 10))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 11))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 13))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 15))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_6, (MR_Integer) 14)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
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
    MR_hl_field(0, base, 14) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 15))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_must_requantify_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 14))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 14))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 13))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Integer * X_4)
{
  *X_4 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 11))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 10))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_int_const_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 9))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 8))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 7))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_var_table_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(
  MR_Word STATE_VARIABLE_PI_0_5,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PI_0_5, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__polymorphism_info__poly_info_extract_7_p_0(
  MR_Word Info_8,
  MR_Word * Specs_9,
  MR_Word STATE_VARIABLE_PredInfo_0_28,
  MR_Word * STATE_VARIABLE_PredInfo_29,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_Word VarTable_13 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
  MR_Word RttiVarMaps_14 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 2))));
  MR_Word TypeVarSet_15 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 3))));
  MR_Word TypeVarKinds_16 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 4))));
  MR_Word ConstStructDb_25 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 13))));
  MR_Word STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_ProcInfo_35_35;
  MR_Word STATE_VARIABLE_PredInfo_37_37;

  *Specs_9 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 15))));
  hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_25, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_32);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_13, STATE_VARIABLE_ProcInfo_0_30, &STATE_VARIABLE_ProcInfo_35_35);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_14, STATE_VARIABLE_ProcInfo_35_35, STATE_VARIABLE_ProcInfo_31);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_15, STATE_VARIABLE_PredInfo_0_28, &STATE_VARIABLE_PredInfo_37_37);
  hlds__hlds_pred__pred_info_set_tvar_kind_map_3_p_0(TypeVarKinds_16, STATE_VARIABLE_PredInfo_37_37, STATE_VARIABLE_PredInfo_29);
}

void MR_CALL 
check_hlds__polymorphism_info__create_poly_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * PolyInfo_8)
{
  MR_Word TypeVarSet_9;
  MR_Word TypeVarKinds_10;
  MR_Word ProofMap_11;
  MR_Word ConstraintMap_12;
  MR_Word VarTable_13;
  MR_Word RttiVarMaps_14;
  MR_Word TypeInfoVarMap_15;
  MR_Word TypeClassInfoMap_16;
  MR_Word IntConstMap_17;
  MR_Word ConstStructVarMap_18;
  MR_Word ConstStructDb_21;
  MR_Word PredStatus_22;
  MR_Word InThisModule_23;
  MR_Word DefinedWhere_24;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TypeVarSet_9);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_6, &TypeVarKinds_10);
  hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_6, &ProofMap_11);
  hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_6, &ConstraintMap_12);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_7, &VarTable_13);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_7, &RttiVarMaps_14);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[1]), &TypeInfoVarMap_15);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[2]), &TypeClassInfoMap_16);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), &IntConstMap_17);
  mercury__map__init_1_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), &ConstStructVarMap_18);
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_21);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_6, &PredStatus_22);
  InThisModule_23 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_22);
  switch (InThisModule_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DefinedWhere_24 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      DefinedWhere_24 = (MR_Integer) 0;
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *PolyInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (TypeVarSet_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeVarKinds_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (ProofMap_11));
    MR_hl_field(0, base, 6) = ((MR_Box) (ConstraintMap_12));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeInfoVarMap_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClassInfoMap_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntConstMap_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (ConstStructVarMap_18));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 13) = ((MR_Box) (ConstStructDb_21));
    MR_hl_field(0, base, 14) = (MR_Box) (((((MR_Unsigned) (DefinedWhere_24) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(0, base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
check_hlds__polymorphism_info__init_poly_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ClausesInfo_7,
  MR_Word * PolyInfo_8)
{
  MR_Word VarTable_9;
  MR_Word TypeVarSet_10;
  MR_Word TypeVarKinds_11;
  MR_Word ProofMap_12;
  MR_Word ConstraintMap_13;
  MR_Word RttiVarMaps_14;
  MR_Word TypeInfoVarMap_15;
  MR_Word TypeClassInfoMap_16;
  MR_Word IntConstMap_17;
  MR_Word ConstStructVarMap_18;
  MR_Word ConstStructDb_21;
  MR_Word PredStatus_22;
  MR_Word InThisModule_23;
  MR_Word DefinedWhere_24;

  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_7, &VarTable_9);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TypeVarSet_10);
  hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_6, &TypeVarKinds_11);
  hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo_6, &ProofMap_12);
  hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_6, &ConstraintMap_13);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_14);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[1]), &TypeInfoVarMap_15);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_2[2]), &TypeClassInfoMap_16);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), &IntConstMap_17);
  mercury__map__init_1_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_info_scalar_common_1[1]), &ConstStructVarMap_18);
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_21);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_6, &PredStatus_22);
  InThisModule_23 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_22);
  switch (InThisModule_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DefinedWhere_24 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      DefinedWhere_24 = (MR_Integer) 0;
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
    *PolyInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_14));
    MR_hl_field(0, base, 3) = ((MR_Box) (TypeVarSet_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeVarKinds_11));
    MR_hl_field(0, base, 5) = ((MR_Box) (ProofMap_12));
    MR_hl_field(0, base, 6) = ((MR_Box) (ConstraintMap_13));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeInfoVarMap_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClassInfoMap_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntConstMap_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (ConstStructVarMap_18));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 13) = ((MR_Box) (ConstStructDb_21));
    MR_hl_field(0, base, 14) = (MR_Box) (((((MR_Unsigned) (DefinedWhere_24) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(0, base, 15) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____cache_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____cache_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____cache_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____cache_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_or_var_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____const_or_var_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____const_or_var_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____const_or_var_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____const_struct_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____const_struct_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____const_struct_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____const_struct_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____int_const_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____int_const_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____int_const_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____int_const_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____maybe_must_requantify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____maybe_must_requantify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____maybe_must_requantify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____maybe_must_requantify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____maybe_selected_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____maybe_selected_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____maybe_selected_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____maybe_selected_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____poly_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____poly_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____poly_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____poly_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____type_info_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____type_info_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____type_info_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____type_info_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____typeclass_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____typeclass_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____typeclass_info_map_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____typeclass_info_map_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____typeclass_info_map_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____typeclass_info_map_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__polymorphism_info____Unify____var_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__polymorphism_info____Unify____var_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism_info____Compare____var_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__polymorphism_info____Compare____var_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__polymorphism_info__init(void)
{
}

void mercury__check_hlds__polymorphism_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_cache_maps_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_struct_var_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_int_const_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_maybe_must_requantify_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_maybe_selected_pred_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_type_info_var_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_var_maps_0);
}

void mercury__check_hlds__polymorphism_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__check_hlds__polymorphism_info__required_init(void)
{
	check_hlds__polymorphism_info__user_init_pred_154_0();
	check_hlds__polymorphism_info__user_init_pred_155_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism_info.
