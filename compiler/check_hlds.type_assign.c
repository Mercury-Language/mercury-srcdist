/*
** Automatically generated from `type_assign.m'
** by the Mercury compiler,
** version rotd-2020-04-09
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[3];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[3];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[7];

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
check_hlds__type_assign__write_type_assign_set_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word VarSet_6);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
  MR_Word TypeVarSet_1,
  MR_Word TypeBindings_2,
  MR_String Operator_3,
  MR_Word HeadVar__4_4,
  MR_Word FoundOne_5);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
  MR_Word VarSet_1,
  MR_Word TypeVarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word FoundOne_5,
  MR_Word HeadVar__6_6);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
  MR_Word TypeAssign_5,
  MR_Word MaybeSeq_6,
  MR_Word VarSet_7);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
  MR_Word Constraints_5,
  MR_Word TypeBindings_6,
  MR_Word TypeVarSet_7);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word TypeVarSet_5,
  MR_Word FoundOne_6);

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


static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1];




static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  INT16_C(3),
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

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[7] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_external_type_params",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proof_map",
  (MR_String) "ta_constraint_map"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  INT16_C(7),
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

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_class____Compare____hlds_constraints_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

              hlds__hlds_class____Compare____hlds_constraints_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
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
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word OldExternalTypeParams_6,
  MR_Word TypeBindings_7,
  MR_Word TVar_8,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12)
{
  {
    MR_bool succeeded;
    MR_Word NewTVar_10;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_14_14;

    succeeded = check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(TypeBindings_7, TVar_8, &NewTVar_10);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (NewTVar_10)), ((MR_Box) (TVar_8)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_14_14, ((MR_Box) (NewTVar_10)), OldExternalTypeParams_6);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ((MR_Box) (TVar_8)), ((MR_Box) (NewTVar_10)), STATE_VARIABLE_Renaming_0_11, STATE_VARIABLE_Renaming_12);
    else
      *STATE_VARIABLE_Renaming_12 = STATE_VARIABLE_Renaming_0_11;
  }
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
        TVar1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0))));
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
  {
    MR_Word TypeVars_10;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeSubst_6, Type0_7, Type_8);
    parse_tree__prog_type__type_vars_2_p_0(*Type_8, &TypeVars_10);
    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars_10, STATE_VARIABLE_TypeVarsSet_0_11, STATE_VARIABLE_TypeVarsSet_12);
  }
}

void MR_CALL 
check_hlds__type_assign__type_checkpoint_6_p_0(
  MR_String Msg_7,
  MR_Word ModuleInfo_8,
  MR_Word VarSet_9,
  MR_Word TypeAssignSet_10)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word DoCheckPoint_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 79, &DoCheckPoint_13);
    switch (DoCheckPoint_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_25;
          MR_Word Statistics_26;
          MR_Word TypeAssign_27;
          MR_Word Var_28;

          mercury__io__write_string_3_p_0((MR_String) "At ");
          mercury__io__write_string_3_p_0(Msg_7);
          mercury__io__write_string_3_p_0((MR_String) ": ");
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_25);
          libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 76, &Statistics_26);
          libs__file_util__maybe_report_stats_3_p_0(Statistics_26);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          succeeded = (Statistics_26 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (TypeAssignSet_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeAssign_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 1))));
            }
          }
          if (succeeded)
          {
            MR_Word VarTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_27, (MR_Integer) 0))));
            MR_Integer VarTypesCount_30;
            MR_Word TypeBindings_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_27, (MR_Integer) 3))));
            MR_Integer TypeBindingsCount_32;
            MR_String Var_58;
            MR_String Var_69;

            hlds__vartypes__vartypes_count_2_p_0(VarTypes_29, &VarTypesCount_30);
            mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map: count = ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_5[0]), VarTypesCount_30, &Var_58);
            mercury__io__write_string_3_p_0(Var_58);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__map__count_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_31, &TypeBindingsCount_32);
            mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map: count = ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_5[0]), TypeBindingsCount_32, &Var_69);
            mercury__io__write_string_3_p_0(Var_69);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0((MR_String) "\t");
            check_hlds__type_assign__write_type_assign_4_p_0(TypeAssign_27, VarSet_9);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            check_hlds__type_assign__write_type_assign_set_4_p_0(Var_28, VarSet_9);
          }
          else
            check_hlds__type_assign__write_type_assign_set_4_p_0(TypeAssignSet_10, VarSet_9);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_set_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeAssign_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      check_hlds__type_assign__write_type_assign_4_p_0(TypeAssign_9, VarSet_2);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word VarSet_6)
{
  {
    MR_Word ExternalTypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 2))));
    MR_Word VarTypes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 0))));
    MR_Word Constraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 4))));
    MR_Word TypeBindings_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 3))));
    MR_Word TypeVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 1))));
    MR_Word Vars_13;
    MR_Word ConstraintsToProve_76;
    MR_Word AssumedConstraints_77;

    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_9, &Vars_13);
    if (!((ExternalTypeParams_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) "some [");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_12, (MR_Integer) 1, ExternalTypeParams_8);
      mercury__io__write_string_3_p_0((MR_String) "]\n\t");
    }
    check_hlds__type_assign__write_type_assign_types_8_p_0(VarSet_6, TypeVarSet_12, VarTypes_9, TypeBindings_11, (MR_Integer) 0, Vars_13);
    ConstraintsToProve_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_10, (MR_Integer) 0))));
    AssumedConstraints_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_10, (MR_Integer) 1))));
    check_hlds__type_assign__write_type_assign_constraints_7_p_0(TypeVarSet_12, TypeBindings_11, (MR_String) "&", AssumedConstraints_77, (MR_Integer) 0);
    check_hlds__type_assign__write_type_assign_constraints_7_p_0(TypeVarSet_12, TypeBindings_11, (MR_String) "<=", ConstraintsToProve_76, (MR_Integer) 0);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
  MR_Word TypeVarSet_1,
  MR_Word TypeBindings_2,
  MR_String Operator_3,
  MR_Word HeadVar__4_4,
  MR_Word FoundOne_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Constraint_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Constraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word BoundConstraint_22;
      MR_Word ProgConstraint_23;
      MR_Word next_value_of_HeadVar__4_4;

      switch (FoundOne_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_28;
            MR_Word Var_31;

            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Operator_3));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[15])));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
              MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
            }
            mercury__io__write_strings_3_p_0(Var_28);
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
          break;
      }
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(TypeBindings_2, Constraint_18, &BoundConstraint_22);
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(BoundConstraint_22, &ProgConstraint_23);
      parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(TypeVarSet_1, (MR_Integer) 1, ProgConstraint_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Constraints_19;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      FoundOne_5 = (MR_Integer) 1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
  MR_Word VarSet_1,
  MR_Word TypeVarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word FoundOne_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (FoundOne_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Type_27;

      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_3, Var_24, &Type_27);
      if (succeeded)
      {
        MR_Word Type1_47;
        MR_Word Type_48;
        MR_Word next_value_of_HeadVar__6_6;

        switch (FoundOne_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "\n\t");
            break;
        }
        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, (MR_Integer) 1, Var_24);
        mercury__io__write_string_3_p_0((MR_String) ": ");
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_4, Type_27, &Type1_47);
        parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_47, &Type_48);
        parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TypeVarSet_2, (MR_Integer) 1, Type_48);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__6_6 = Vars_25;
        FoundOne_5 = (MR_Integer) 1;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
      else
      {
        MR_Word next_value_of_HeadVar__6_6 = Vars_25;

        // direct tailcall eliminated
        ;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgTypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeAssign_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_7, (MR_Integer) 0))));
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

      Var_15 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(TypeAssign_12, MaybeSeq_2, VarSet_3);
      if ((MaybeSeq_2 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_2, (MR_Integer) 0))));
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) N_19 + (MR_Unsigned) 1);

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_20));
        }
      }
      Var_16 = check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(ArgTypeAssigns_8, Var_17, VarSet_3);
      HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeSeq_2,
  MR_Word VarSet_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;

      Var_11 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(TypeAssign_7, MaybeSeq_2, VarSet_3);
      if ((MaybeSeq_2 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_2, (MR_Integer) 0))));
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) N_15 + (MR_Unsigned) 1);

        {
          Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_16));
        }
      }
      Var_12 = check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(TypeAssigns_8, Var_13, VarSet_3);
      HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_11, Var_12);
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
  MR_Word TypeAssign_5,
  MR_Word MaybeSeq_6,
  MR_Word VarSet_7)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_8;
    MR_Word SeqPieces_11;
    MR_Word ExternalTypeParams_12;
    MR_Word VarTypes_13;
    MR_Word Constraints_14;
    MR_Word TypeBindings_15;
    MR_Word TypeVarSet_16;
    MR_Word Vars_17;
    MR_Word HeadPieces_18;
    MR_Word TypePieces_22;
    MR_Word ConstraintPieces_23;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    if ((MaybeSeq_6 == (MR_Word) ((MR_Unsigned) 0U)))
      SeqPieces_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSeq_6, (MR_Integer) 0))));
      MR_Word SeqPieces0_10;
      MR_Word Var_26;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (N_9));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[10])));
      }
      {
        SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[14])));
        MR_hl_field(MR_mktag(1), SeqPieces0_10, 1) = ((MR_Box) (Var_26));
      }
      succeeded = (N_9 > (MR_Integer) 1);
      if (succeeded)
        {
          SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SeqPieces_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(1), SeqPieces_11, 1) = ((MR_Box) (SeqPieces0_10));
        }
      else
        SeqPieces_11 = SeqPieces0_10;
    }
    VarTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 0))));
    TypeVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 1))));
    ExternalTypeParams_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 2))));
    TypeBindings_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 3))));
    Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_5, (MR_Integer) 4))));
    hlds__vartypes__vartypes_vars_2_p_0(VarTypes_13, &Vars_17);
    if ((ExternalTypeParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String VarsStr_21;
      MR_Word Var_37;
      MR_String Var_38;
      MR_String Var_40;

      VarsStr_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_16, (MR_Integer) 1, ExternalTypeParams_12);
      Var_40 = mercury__string__f_43_43_2_f_0(VarsStr_21, (MR_String) "]");
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", Var_40);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadPieces_18, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[8])));
      }
    }
    TypePieces_22 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(Vars_17, VarSet_7, VarTypes_13, TypeBindings_15, TypeVarSet_16, (MR_Integer) 0);
    ConstraintPieces_23 = check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(Constraints_14, TypeBindings_15, TypeVarSet_16);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConstraintPieces_23, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[8])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), TypePieces_22, Var_48);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_18, Var_47);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SeqPieces_11, Var_46);
    return Pieces_8;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
  MR_Word Constraints_5,
  MR_Word TypeBindings_6,
  MR_Word TypeVarSet_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Pieces1_8;
    MR_Word Pieces2_9;
    MR_Word ConstraintsToProve_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_5, (MR_Integer) 0))));
    MR_Word AssumedConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_5, (MR_Integer) 1))));
    MR_Word PiecesList1_14;
    MR_Word PiecesList2_15;

    PiecesList1_14 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", AssumedConstraints_11, TypeBindings_6, TypeVarSet_7, (MR_Integer) 0);
    PiecesList2_15 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", ConstraintsToProve_10, TypeBindings_6, TypeVarSet_7, (MR_Integer) 0);
    Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PiecesList1_14, (MR_Word) ((MR_Unsigned) 0U));
    Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PiecesList2_15, (MR_Word) ((MR_Unsigned) 0U));
    HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_8, Pieces2_9);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String Operator_1,
  MR_Word HeadVar__2_2,
  MR_Word TypeBindings_3,
  MR_Word TypeVarSet_4,
  MR_Word FoundOne_5)
{
  {
    MR_Word HeadVar__6_6;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ThisPieces_17;
      MR_Word TailPieceLists_18;
      MR_String Prefix_19;
      MR_Word BoundConstraint_20;
      MR_Word ProgConstraint_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_String Var_26;
      MR_String Var_27;

      switch (FoundOne_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Prefix_19 = mercury__string__f_43_43_2_f_0(Operator_1, (MR_String) " ");
          break;
        case (MR_Integer) 1:
          Prefix_19 = (MR_String) "   ";
          break;
      }
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(TypeBindings_3, Constraint_12, &BoundConstraint_20);
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(BoundConstraint_20, &ProgConstraint_21);
      Var_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(TypeVarSet_4, ProgConstraint_21);
      Var_26 = mercury__string__f_43_43_2_f_0(Prefix_19, Var_27);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
      }
      {
        ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ThisPieces_17, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), ThisPieces_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ThisPieces_17));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      TailPieceLists_18 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(Operator_1, Constraints_13, TypeBindings_3, TypeVarSet_4, (MR_Integer) 1);
      HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[2]), Var_22, TailPieceLists_18);
    }
    return HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word TypeBindings_4,
  MR_Word TypeVarSet_5,
  MR_Word FoundOne_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Pieces_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (FoundOne_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Pieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[12]));
          break;
        case (MR_Integer) 1:
          Pieces_7 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_25;

      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes_3, Var_17, &Type_25);
      if (succeeded)
      {
        MR_Word PrefixPieces_26;
        MR_String VarStr_27;
        MR_String TypeStr_28;
        MR_Word AssignPieces_29;
        MR_Word TailPieces_30;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Type1_49;
        MR_Word Type_50;

        switch (FoundOne_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrefixPieces_26 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            PrefixPieces_26 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[8]));
            break;
        }
        VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, (MR_Integer) 1, Var_17);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_4, Type_25, &Type1_49);
        parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(Type1_49, &Type_50);
        TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TypeVarSet_5, (MR_Integer) 0, Type_50);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (VarStr_27));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (TypeStr_28));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssignPieces_29, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), AssignPieces_29, 1) = ((MR_Box) (Var_35));
        }
        TailPieces_30 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(Vars_18, VarSet_2, VarTypes_3, TypeBindings_4, TypeVarSet_5, (MR_Integer) 1);
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AssignPieces_29, TailPieces_30);
        Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_26, Var_42);
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return Pieces_7;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgTypeAssign_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_3, (MR_Integer) 0))));
      MR_Word Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_3, (MR_Integer) 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign_3, (MR_Integer) 2))));

      if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word OldConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 4))));
        MR_Word Bindings_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 3))));
        MR_Word Constraints_22;
        MR_Word NewConstraints_23;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_50;
        MR_Word Var_51;

        check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(Bindings_21, Var_8, &Constraints_22);
        hlds__hlds_class__merge_hlds_constraints_3_p_0(Constraints_22, OldConstraints_20, &NewConstraints_23);
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 2))));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 3))));
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 5))));
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 6))));
        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (NewConstraints_23));
          MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (Var_51));
        }
        Var_14 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(ArgTypeAssigns_4);
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_14));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.type_assign.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ArgsTypeAssign_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsTypeAssigns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_5;
      MR_Word Var_6;
      MR_Word TypeAssign0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_3, (MR_Integer) 0))));
      MR_Word Constraints0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_3, (MR_Integer) 2))));
      MR_Word OldConstraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 4))));
      MR_Word Bindings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 3))));
      MR_Word Constraints_14;
      MR_Word NewConstraints_15;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;

      check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(Bindings_13, Constraints0_11, &Constraints_14);
      hlds__hlds_class__merge_hlds_constraints_3_p_0(Constraints_14, OldConstraints_12, &NewConstraints_15);
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 0))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 1))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 2))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 3))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 5))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_9, (MR_Integer) 6))));
      {
        Var_5 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_5, 2) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_5, 3) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), Var_5, 4) = ((MR_Box) (NewConstraints_15));
        MR_hl_field(MR_mktag(0), Var_5, 5) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_5, 6) = ((MR_Box) (Var_43));
      }
      Var_6 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssigns_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_callee_constraints_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_3, (MR_Integer) 2))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_callee_arg_types_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_3, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_caller_arg_assign_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Renaming_12;

    check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Renaming_12);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Renaming_12));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;

    hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_8;
    MR_Word conv0_STATE_VARIABLE_TypeVarsSet_12;

    check_hlds__type_assign__expand_types_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeVarsSet_12);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeVarsSet_12));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeAssign_25;
    MR_Word VarTypes0_27;
    MR_Word OldTypeVarSet_28;
    MR_Word ExternalTypeParams_29;
    MR_Word TypeBindings_30;
    MR_Word HLDSTypeConstraints_31;
    MR_Word ConstraintProofMap0_32;
    MR_Word ConstraintMap0_33;
    MR_Word VarTypes1_34;
    MR_Word ConstraintProofMap_35;
    MR_Word ConstraintMap1_36;
    MR_Word TypeVars1_38;
    MR_Word HLDSUnivConstraints_40;
    MR_Word HLDSExistConstraints_41;
    MR_Word ConstraintMap2_44;
    MR_Word ConstraintMap_45;
    MR_Word ExplicitTypes_46;
    MR_Word ExplicitTypeVars0_47;
    MR_Word ExistQVarsToBeRenamed_48;
    MR_Word ExistQVarsToRemain_49;
    MR_Word TypeVars2_50;
    MR_Word TypeVars_51;
    MR_Word TypeConstraints_52;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Box conv4_ConstraintMap2_44;
    MR_Box conv6_ConstraintMap_45;
    MR_Box conv8_ExistTypeRenaming_24;

    if ((TypeAssignSet_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_assign.type_assign_set_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
        return;
      }
    else
      TypeAssign_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_13, (MR_Integer) 0))));
    VarTypes0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 0))));
    OldTypeVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 1))));
    ExternalTypeParams_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 2))));
    TypeBindings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 3))));
    HLDSTypeConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 4))));
    ConstraintProofMap0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 5))));
    ConstraintMap0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign_25, (MR_Integer) 6))));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_30);
    if (succeeded)
    {
      MR_Word Types1_37;

      VarTypes1_34 = VarTypes0_27;
      ConstraintProofMap_35 = ConstraintProofMap0_32;
      ConstraintMap1_36 = ConstraintMap0_33;
      hlds__vartypes__vartypes_types_2_p_0(VarTypes1_34, &Types1_37);
      parse_tree__prog_type__type_vars_list_2_p_0(Types1_37, &TypeVars1_38);
    }
    else
    {
      MR_Word TypeVarsSet1_39;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Box conv2_TypeVarsSet1_39;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (TypeBindings_30));
      }
      Var_56 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
      hlds__vartypes__transform_foldl_var_types_5_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[1]), Var_55, VarTypes0_27, &VarTypes1_34, ((MR_Box) (Var_56)), &conv2_TypeVarsSet1_39);
      TypeVarsSet1_39 = ((MR_Word) (conv2_TypeVarsSet1_39));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVarsSet1_39, &TypeVars1_38);
      check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(TypeBindings_30, ConstraintProofMap0_32, &ConstraintProofMap_35);
      check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(TypeBindings_30, ConstraintMap0_33, &ConstraintMap1_36);
    }
    HLDSUnivConstraints_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSTypeConstraints_31, (MR_Integer) 0))));
    HLDSExistConstraints_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSTypeConstraints_31, (MR_Integer) 1))));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[4]), HLDSUnivConstraints_40, ((MR_Box) (ConstraintMap1_36)), &conv4_ConstraintMap2_44);
    ConstraintMap2_44 = ((MR_Word) (conv4_ConstraintMap2_44));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[5]), HLDSExistConstraints_41, ((MR_Box) (ConstraintMap2_44)), &conv6_ConstraintMap_45);
    ConstraintMap_45 = ((MR_Word) (conv6_ConstraintMap_45));
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4));
      MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (OldExternalTypeParams_14));
      MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (TypeBindings_30));
    }
    Var_87 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[1]), Var_86, OldExistQVars_15, ((MR_Box) (Var_87)), &conv8_ExistTypeRenaming_24);
    *ExistTypeRenaming_24 = ((MR_Word) (conv8_ExistTypeRenaming_24));
    hlds__vartypes__vartypes_types_2_p_0(OldExplicitVarTypes_16, &ExplicitTypes_46);
    parse_tree__prog_type__type_vars_list_2_p_0(ExplicitTypes_46, &ExplicitTypeVars0_47);
    mercury__map__keys_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *ExistTypeRenaming_24, &ExistQVarsToBeRenamed_48);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), OldExistQVars_15, ExistQVarsToBeRenamed_48, &ExistQVarsToRemain_49);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ExplicitTypeVars0_47));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (TypeVars1_38));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ExternalTypeParams_29));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ExistQVarsToRemain_49));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), Var_59, &TypeVars2_50);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars2_50, &TypeVars_51);
    mercury__varset__squash_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), OldTypeVarSet_28, TypeVars_51, NewTypeVarSet_17, TSubst_23);
    hlds__hlds_class__retrieve_prog_constraints_2_p_0(HLDSTypeConstraints_31, &TypeConstraints_52);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *TSubst_23);
    if (succeeded)
    {
      *NewVarTypes_19 = VarTypes1_34;
      *NewExternalTypeParams_18 = ExternalTypeParams_29;
      *NewTypeConstraints_20 = TypeConstraints_52;
      *NewConstraintProofMap_21 = ConstraintProofMap_35;
      *NewConstraintMap_22 = ConstraintMap_45;
    }
    else
    {
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(*TSubst_23, VarTypes1_34, NewVarTypes_19);
      mercury__map__apply_to_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ExternalTypeParams_29, *TSubst_23, NewExternalTypeParams_18);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*TSubst_23, TypeConstraints_52, NewTypeConstraints_20);
      check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(*TSubst_23, ConstraintProofMap_35, NewConstraintProofMap_21);
      check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*TSubst_23, ConstraintMap_45, NewConstraintMap_22);
    }
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
  {
    MR_Word TypeBindings_11;
    MR_Word ProofMap_12;
    MR_Word ConstraintMap_13;
    MR_Word Var_14;

    mercury__map__init_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeBindings_11);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_12);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_13);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (VarTypes_7));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (ExternalTypeParams_8));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeBindings_11));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Constraints_9));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (ProofMap_12));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (ConstraintMap_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TypeAssignSet_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
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
  {
    MR_Word VarTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_13, (MR_Integer) 0))));
    MR_Word ExternalTypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAssign0_13, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *TypeAssign_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarTypes_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ExternalTypeParams_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Bindings_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Constraints_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ProofMap_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ConstraintMap_12));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_proof_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typevarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TA_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typevarset_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_var_types_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TA_3, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_assign____Unify____args_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_assign____Compare____args_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_assign____Unify____args_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_assign____Compare____args_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_assign____Compare____type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__type_assign____Unify____type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__type_assign____Compare____type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
