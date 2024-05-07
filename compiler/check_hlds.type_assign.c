/*
** Automatically generated from `type_assign.m'
** by the Mercury compiler,
** version rotd-2024-05-07
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


// :- module check_hlds.type_assign.
// :- implementation.

/*
INIT mercury__check_hlds__type_assign__init
ENDINIT
*/

#include "check_hlds.type_assign.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.type_util.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0[4];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0[4];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0[4];

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0[1];

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0;

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1;

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0[2];

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0[2];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0[6];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0[1];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2[4];

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3[2];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0[5];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0[5];

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[8];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[8];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0;

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word OldExternalTypeParams_6,
  MR_Word TypeBindings_7,
  MR_Word TVar_8,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12);

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word TypeBindings_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6);

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word TypeSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * STATE_VARIABLE_TypeVarsSet_12);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6];




static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[4] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_expected_arg_types",
  (MR_String) "ata_expected_constraints",
  (MR_String) "ata_source"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0 = {
  (MR_String) "atas_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1 = {
  (MR_String) "atas_higher_order_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2 = {
  (MR_String) "atas_cons",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3 = {
  (MR_String) "atas_ensure_have_a_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0[4] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_source",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0[4] = {
  (MR_String) "coerce_from",
  (MR_String) "coerce_to",
  (MR_String) "coerce_context",
  (MR_String) "coerce_status"
};

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0[4] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 = {
  (MR_String) "coerce_constraint",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____coerce_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____coerce_constraint_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "coerce_constraint",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0,

};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0 = {
  (MR_String) "need_to_check",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1 = {
  (MR_String) "unsatisfiable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "coerce_constraint_status",
  { check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0 },
  { check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_existq_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "cons_type_info",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2[4] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_field_access",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2,
  NULL,
  check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_apply",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0[5] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "cons_type_info_source",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[8] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[8] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_existq_tvars",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_coerce_constraints",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proof_map",
  (MR_String) "ta_constraint_map"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0(
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__hlds_class____Compare____hlds_constraints_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0(
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
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_20_20;
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0(
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
check_hlds__type_assign____Unify____coerce_constraint_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0(
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
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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
check_hlds__type_assign____Unify____coerce_constraint_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0(
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_class____Compare____hlds_constraints_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__type_assign____Compare____args_type_assign_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_class____Compare____hlds_constraints_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_String ArgX4_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_String ArgY4_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_13;
              MR_Integer Var_37 = (MR_Integer) (ArgX1_11);
              MR_Integer Var_38 = (MR_Integer) (ArgY1_12);

              succeeded = (Var_37 < Var_38);
              if (succeeded)
              {
                SubResult1_13 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_37 > Var_38);
                if (succeeded)
                {
                  SubResult1_13 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_13 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word SubResult2_16;

                parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_16, ArgX2_14, ArgY2_15);
                succeeded = (SubResult2_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_16;
                else
                {
                  MR_Word SubResult3_19;

                  parse_tree__prog_data____Compare____cons_id_0_0(&SubResult3_19, ArgX3_17, ArgY3_18);
                  succeeded = (SubResult3_19 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_19;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_20, ArgY4_21);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_22, ArgY1_23);
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, ArgX1_24, ArgY1_25);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0(
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
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____args_type_assign_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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
check_hlds__type_assign____Unify____args_type_assign_source_0_0(
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
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;
          MR_String ArgX4_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_String ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (ArgX1_9 == ArgY1_10);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX3_13, ArgY3_14);
                if (succeeded)
                  succeeded = (strcmp(ArgX4_15, ArgY4_16) == 0);
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_19, ArgY1_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word OldExternalTypeParams_6,
  MR_Word TypeBindings_7,
  MR_Word TVar_8,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12)
{
  MR_bool succeeded;
  MR_Word NewTVar_10;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_13_13;

  succeeded = check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(TypeBindings_7, TVar_8, &NewTVar_10);
  if (succeeded)
  {
    TypeInfo_15_15 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (NewTVar_10)), ((MR_Box) (TVar_8)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_13_13, ((MR_Box) (NewTVar_10)), OldExternalTypeParams_6);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ((MR_Box) (TVar_8)), ((MR_Box) (NewTVar_10)), STATE_VARIABLE_Renaming_0_11, STATE_VARIABLE_Renaming_12);
  else
    *STATE_VARIABLE_Renaming_12 = STATE_VARIABLE_Renaming_0_11;
}

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word TypeBindings_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Type_7;
    MR_Box conv0_Type_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_4, ((MR_Box) (TVar0_5)), &conv0_Type_7);
    if (succeeded)
    {
      Type_7 = ((MR_Word) (conv0_Type_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TVar1_8;
      MR_Word next_value_of_TVar0_5;

      succeeded = ((MR_tag((MR_Word) Type_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        TVar1_8 = ((MR_Word) ((MR_hl_field(0, Type_7, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_TVar0_5 = TVar1_8;
        TVar0_5 = next_value_of_TVar0_5;
        continue;
      }
    }
    else
    {
      *TVar_6 = TVar0_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word TypeSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * STATE_VARIABLE_TypeVarsSet_12)
{
  MR_Word TypeVars_10;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeSubst_6, Type0_7, Type_8);
  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(*Type_8, &TypeVars_10);
  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars_10, STATE_VARIABLE_TypeVarsSet_0_11, STATE_VARIABLE_TypeVarsSet_12);
}

MR_Word MR_CALL 
check_hlds__type_assign__project_cons_type_info_source_1_f_0(
  MR_Word CTI_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CTI_3, (MR_Integer) 5))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgsTypeAssign_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgsTypeAssigns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word TypeAssign0_7 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, (MR_Integer) 0))));
    MR_Word Constraints0_9 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, (MR_Integer) 2))));
    MR_Word OldConstraints_11 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 5))));
    MR_Word Bindings_12 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 3))));
    MR_Word Constraints_13;
    MR_Word NewConstraints_14;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;

    check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(Bindings_12, Constraints0_9, &Constraints_13);
    hlds__hlds_class__merge_hlds_constraints_3_p_0(Constraints_13, OldConstraints_11, &NewConstraints_14);
    Var_29 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 6))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, (MR_Integer) 7))));
    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_5, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_5, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, Var_5, 2) = ((MR_Box) (Var_31));
      MR_hl_field(0, Var_5, 3) = ((MR_Box) (Var_32));
      MR_hl_field(0, Var_5, 4) = ((MR_Box) (Var_33));
      MR_hl_field(0, Var_5, 5) = ((MR_Box) (NewConstraints_14));
      MR_hl_field(0, Var_5, 6) = ((MR_Box) (Var_35));
      MR_hl_field(0, Var_5, 7) = ((MR_Box) (Var_36));
    }
    Var_6 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssigns_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_expected_constraints_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, (MR_Integer) 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_expected_arg_types_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_caller_arg_assign_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Renaming_12;

  check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Renaming_12);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Renaming_12));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;

  hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_8;
  MR_Word conv0_STATE_VARIABLE_TypeVarsSet_12;

  check_hlds__type_assign__expand_types_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeVarsSet_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeVarsSet_12));
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(
  MR_Word TypeAssignSet_13,
  MR_Word OldExternalTypeParams_14,
  MR_Word OldExistQVars_15,
  MR_Word OldExplicitVarTypes_16,
  MR_Word * NewTypeVarSet_17,
  MR_Word * NewExternalTypeParams_18,
  MR_Word * NewVarTypes_19,
  MR_Word * NewTypeConstraints_20,
  MR_Word * NewConstraintProofMap_21,
  MR_Word * NewConstraintMap_22,
  MR_Word * TSubst_23,
  MR_Word * ExistTypeRenaming_24)
{
  MR_bool succeeded;
  MR_Word TypeAssign_25;
  MR_Word VarTypes0_27;
  MR_Word OldTypeVarSet_28;
  MR_Word ExternalTypeParams_29;
  MR_Word TypeBindings_30;
  MR_Word HLDSTypeConstraints_32;
  MR_Word ConstraintProofMap0_33;
  MR_Word ConstraintMap0_34;
  MR_Word VarTypes1_35;
  MR_Word ConstraintProofMap_36;
  MR_Word ConstraintMap1_37;
  MR_Word TypeVars1_39;
  MR_Word HLDSUnivConstraints_41;
  MR_Word HLDSExistConstraints_42;
  MR_Word ConstraintMap2_45;
  MR_Word ConstraintMap_46;
  MR_Word ExplicitTypes_47;
  MR_Word ExplicitTypeVars0_48;
  MR_Word ExistQVarsToBeRenamed_49;
  MR_Word ExistQVarsToRemain_50;
  MR_Word TypeVars2_51;
  MR_Word TypeVars_52;
  MR_Word TypeConstraints_53;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Box conv4_ConstraintMap2_45;
  MR_Box conv6_ConstraintMap_46;
  MR_Box conv8_ExistTypeRenaming_24;

  if ((TypeAssignSet_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_assign.type_assign_set_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
      return;
    }
  else
    TypeAssign_25 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_13, (MR_Integer) 0))));
  VarTypes0_27 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 0))));
  OldTypeVarSet_28 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 1))));
  ExternalTypeParams_29 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 2))));
  TypeBindings_30 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 3))));
  HLDSTypeConstraints_32 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 5))));
  ConstraintProofMap0_33 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 6))));
  ConstraintMap0_34 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, (MR_Integer) 7))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_30);
  if (succeeded)
  {
    MR_Word Types1_38;

    VarTypes1_35 = VarTypes0_27;
    ConstraintProofMap_36 = ConstraintProofMap0_33;
    ConstraintMap1_37 = ConstraintMap0_34;
    parse_tree__vartypes__vartypes_types_2_p_0(VarTypes1_35, &Types1_38);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Types1_38, &TypeVars1_39);
  }
  else
  {
    MR_Word TypeVarsSet1_40;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv2_TypeVarsSet1_40;

    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[0]));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1));
      MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_56, 3) = ((MR_Box) (TypeBindings_30));
    }
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
    parse_tree__vartypes__transform_foldl_var_types_5_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[1]), Var_56, VarTypes0_27, &VarTypes1_35, ((MR_Box) (Var_57)), &conv2_TypeVarsSet1_40);
    TypeVarsSet1_40 = ((MR_Word) (conv2_TypeVarsSet1_40));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVarsSet1_40, &TypeVars1_39);
    check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(TypeBindings_30, ConstraintProofMap0_33, &ConstraintProofMap_36);
    check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(TypeBindings_30, ConstraintMap0_34, &ConstraintMap1_37);
  }
  HLDSUnivConstraints_41 = ((MR_Word) ((MR_hl_field(0, HLDSTypeConstraints_32, (MR_Integer) 0))));
  HLDSExistConstraints_42 = ((MR_Word) ((MR_hl_field(0, HLDSTypeConstraints_32, (MR_Integer) 1))));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[4]), HLDSUnivConstraints_41, ((MR_Box) (ConstraintMap1_37)), &conv4_ConstraintMap2_45);
  ConstraintMap2_45 = ((MR_Word) (conv4_ConstraintMap2_45));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[5]), HLDSExistConstraints_42, ((MR_Box) (ConstraintMap2_45)), &conv6_ConstraintMap_46);
  ConstraintMap_46 = ((MR_Word) (conv6_ConstraintMap_46));
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[1]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (OldExternalTypeParams_14));
    MR_hl_field(0, Var_83, 4) = ((MR_Box) (TypeBindings_30));
  }
  Var_84 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[1]), Var_83, OldExistQVars_15, ((MR_Box) (Var_84)), &conv8_ExistTypeRenaming_24);
  *ExistTypeRenaming_24 = ((MR_Word) (conv8_ExistTypeRenaming_24));
  parse_tree__vartypes__vartypes_types_2_p_0(OldExplicitVarTypes_16, &ExplicitTypes_47);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ExplicitTypes_47, &ExplicitTypeVars0_48);
  mercury__map__keys_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *ExistTypeRenaming_24, &ExistQVarsToBeRenamed_49);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), OldExistQVars_15, ExistQVarsToBeRenamed_49, &ExistQVarsToRemain_50);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (ExplicitTypeVars0_48));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (TypeVars1_39));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (ExternalTypeParams_29));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (ExistQVarsToRemain_50));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), Var_60, &TypeVars2_51);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars2_51, &TypeVars_52);
  mercury__varset__squash_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), OldTypeVarSet_28, TypeVars_52, NewTypeVarSet_17, TSubst_23);
  hlds__hlds_class__retrieve_univ_exist_constraints_2_p_0(HLDSTypeConstraints_32, &TypeConstraints_53);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *TSubst_23);
  if (succeeded)
  {
    *NewVarTypes_19 = VarTypes1_35;
    *NewExternalTypeParams_18 = ExternalTypeParams_29;
    *NewTypeConstraints_20 = TypeConstraints_53;
    *NewConstraintProofMap_21 = ConstraintProofMap_36;
    *NewConstraintMap_22 = ConstraintMap_46;
  }
  else
  {
    parse_tree__vartypes__apply_variable_renaming_to_vartypes_3_p_0(*TSubst_23, VarTypes1_35, NewVarTypes_19);
    mercury__map__apply_to_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ExternalTypeParams_29, *TSubst_23, NewExternalTypeParams_18);
    parse_tree__prog_type_subst__apply_variable_renaming_to_univ_exist_constraints_3_p_0(*TSubst_23, TypeConstraints_53, NewTypeConstraints_20);
    check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(*TSubst_23, ConstraintProofMap_36, NewConstraintProofMap_21);
    check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*TSubst_23, ConstraintMap_46, NewConstraintMap_22);
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_init_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word VarTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word Constraints_9,
  MR_Word * TypeAssignSet_10)
{
  MR_Word TypeBindings_11;
  MR_Word ProofMap_13;
  MR_Word ConstraintMap_14;
  MR_Word Var_15;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeBindings_11);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_13);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (VarTypes_7));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (TypeVarSet_6));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (ExternalTypeParams_8));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeBindings_11));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (Constraints_9));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) (ProofMap_13));
    MR_hl_field(0, Var_15, 7) = ((MR_Box) (ConstraintMap_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TypeAssignSet_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(
  MR_Word TVarSet_8,
  MR_Word Bindings_9,
  MR_Word Constraints_10,
  MR_Word ProofMap_11,
  MR_Word ConstraintMap_12,
  MR_Word TypeAssign0_13,
  MR_Word * TypeAssign_14)
{
  MR_Word VarTypes_15 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, (MR_Integer) 0))));
  MR_Word ExternalTypeParams_17 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, (MR_Integer) 2))));
  MR_Word Coercions_19 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, (MR_Integer) 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeAssign_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarTypes_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (ExternalTypeParams_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Bindings_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Coercions_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Constraints_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProofMap_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (ConstraintMap_12));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_proof_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typevarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 7))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typevarset_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_var_types_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____coerce_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____coerce_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____coerce_constraint_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____coerce_constraint_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____cons_type_info_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__type_assign__init(void)
{
}

void mercury__check_hlds__type_assign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0);
}

void mercury__check_hlds__type_assign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__type_assign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.type_assign.
