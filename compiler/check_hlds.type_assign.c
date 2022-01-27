/*
** Automatically generated from `type_assign.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module check_hlds.type_assign. */
/* :- implementation. */

/*
INIT mercury__check_hlds__type_assign__init
ENDINIT
*/

#include "check_hlds.type_assign.mih"


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
#include "check_hlds.type_util.mih"
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
#include "libs.file_util.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

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

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[7];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0;

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
  MR_Word check_hlds__type_assign__TypeVarSet_1,
  MR_Word check_hlds__type_assign__TypeBindings_2,
  MR_String check_hlds__type_assign__Operator_3,
  MR_Word check_hlds__type_assign__HeadVar__4_4,
  MR_Word check_hlds__type_assign__FoundOne_5);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
  MR_Word check_hlds__type_assign__VarSet_1,
  MR_Word check_hlds__type_assign__TypeVarSet_2,
  MR_Word check_hlds__type_assign__VarTypes_3,
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__FoundOne_5,
  MR_Word check_hlds__type_assign__HeadVar__6_6);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
  MR_Word check_hlds__type_assign__TypeAssign_5,
  MR_Word check_hlds__type_assign__VarSet_6);

static void MR_CALL 
check_hlds__type_assign__write_type_assign_set_4_p_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__VarSet_2);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String check_hlds__type_assign__Operator_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__TypeBindings_3,
  MR_Word check_hlds__type_assign__TypeVarSet_4,
  MR_Word check_hlds__type_assign__FoundOne_5);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__Constraints_5,
  MR_Word check_hlds__type_assign__TypeBindings_6,
  MR_Word check_hlds__type_assign__TypeVarSet_7);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__VarSet_2,
  MR_Word check_hlds__type_assign__VarTypes_3,
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__TypeVarSet_5,
  MR_Word check_hlds__type_assign__FoundOne_6);

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__TypeAssign_5,
  MR_Word check_hlds__type_assign__MaybeSeq_6,
  MR_Word check_hlds__type_assign__VarSet_7);

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__TVar0_5,
  MR_Word * check_hlds__type_assign__TVar_6);

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word check_hlds__type_assign__OldExternalTypeParams_6,
  MR_Word check_hlds__type_assign__TypeBindings_7,
  MR_Word check_hlds__type_assign__TVar_8,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_Renaming_12);

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word check_hlds__type_assign__TypeSubst_6,
  MR_Word check_hlds__type_assign__Type0_7,
  MR_Word * check_hlds__type_assign__Type_8,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box * check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3,
  MR_Box * check_hlds__type_assign__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[17][2];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1];




static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[17][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0)),
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
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
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
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;

    {
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____args_type_assign_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
    return check_hlds__type_assign__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

    {
      check_hlds__type_assign____Compare____args_type_assign_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;

    {
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____args_type_assign_set_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
    return check_hlds__type_assign__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

    {
      check_hlds__type_assign____Compare____args_type_assign_set_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;

    {
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
    return check_hlds__type_assign__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

    {
      check_hlds__type_assign____Compare____type_assign_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;

    {
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_set_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
    return check_hlds__type_assign__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

    {
      check_hlds__type_assign____Compare____type_assign_set_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0(
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Cast_HeadVar1_4 = check_hlds__type_assign__HeadVar__2_2;
    MR_Word check_hlds__type_assign__Cast_HeadVar2_5 = check_hlds__type_assign__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[8], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Cast_HeadVar1_3 = check_hlds__type_assign__HeadVar__1_1;
    MR_Word check_hlds__type_assign__Cast_HeadVar2_4 = check_hlds__type_assign__HeadVar__2_2;

    {
      check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[8], ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_4)));
    }
    return check_hlds__type_assign__succeeded;
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0(
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Integer check_hlds__type_assign__CastX_24 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;
    MR_Integer check_hlds__type_assign__CastY_25 = (MR_Integer) check_hlds__type_assign__HeadVar__3_3;

    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_24 == check_hlds__type_assign__CastY_25);
    if (check_hlds__type_assign__succeeded)
      *check_hlds__type_assign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__type_assign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word check_hlds__type_assign__V_18_18;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[2], &check_hlds__type_assign__V_18_18, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_11_11)));
        }
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_18_18 == (MR_Integer) 0);
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
        if (check_hlds__type_assign__succeeded)
          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_18_18;
        else
          {
            MR_Word check_hlds__type_assign__V_19_19;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[6], &check_hlds__type_assign__V_19_19, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_12_12)));
            }
            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_19_19 == (MR_Integer) 0);
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
            if (check_hlds__type_assign__succeeded)
              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_19_19;
            else
              {
                MR_Word check_hlds__type_assign__V_20_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[7], &check_hlds__type_assign__V_20_20, ((MR_Box) (check_hlds__type_assign__V_6_6)), ((MR_Box) (check_hlds__type_assign__V_13_13)));
                }
                check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_20_20 == (MR_Integer) 0);
                check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
                if (check_hlds__type_assign__succeeded)
                  *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_20_20;
                else
                  {
                    MR_Word check_hlds__type_assign__V_21_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[3], &check_hlds__type_assign__V_21_21, ((MR_Box) (check_hlds__type_assign__V_7_7)), ((MR_Box) (check_hlds__type_assign__V_14_14)));
                    }
                    check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_21_21 == (MR_Integer) 0);
                    check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
                    if (check_hlds__type_assign__succeeded)
                      *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_21_21;
                    else
                      {
                        MR_Word check_hlds__type_assign__V_22_22;

                        {
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__type_assign__V_22_22, check_hlds__type_assign__V_8_8, check_hlds__type_assign__V_15_15);
                        }
                        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_22_22 == (MR_Integer) 0);
                        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
                        if (check_hlds__type_assign__succeeded)
                          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_22_22;
                        else
                          {
                            MR_Word check_hlds__type_assign__V_23_23;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[4], &check_hlds__type_assign__V_23_23, ((MR_Box) (check_hlds__type_assign__V_9_9)), ((MR_Box) (check_hlds__type_assign__V_16_16)));
                            }
                            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_23_23 == (MR_Integer) 0);
                            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
                            if (check_hlds__type_assign__succeeded)
                              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_23_23;
                            else
                              {
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[0], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__V_10_10)), ((MR_Box) (check_hlds__type_assign__V_17_17)));
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
check_hlds__type_assign____Unify____type_assign_0_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Integer check_hlds__type_assign__CastX_17 = (MR_Integer) check_hlds__type_assign__HeadVar__1_1;
    MR_Integer check_hlds__type_assign__CastY_18 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;

    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_17 == check_hlds__type_assign__CastY_18);
    if (check_hlds__type_assign__succeeded)
      check_hlds__type_assign__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__type_assign__TypeInfo_20_20;
        MR_Word check_hlds__type_assign__TypeInfo_21_21;
        MR_Word check_hlds__type_assign__TypeInfo_22_22;
        MR_Word check_hlds__type_assign__TypeInfo_24_24;
        MR_Word check_hlds__type_assign__TypeInfo_25_25;
        MR_Word check_hlds__type_assign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 6)));

        {
          check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[2], ((MR_Box) (check_hlds__type_assign__V_3_3)), ((MR_Box) (check_hlds__type_assign__V_10_10)));
        }
        if (check_hlds__type_assign__succeeded)
          {
            check_hlds__type_assign__TypeInfo_20_20 = (MR_Word) &check_hlds__type_assign_scalar_common_1[6];
            {
              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_20_20, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_11_11)));
            }
            if (check_hlds__type_assign__succeeded)
              {
                check_hlds__type_assign__TypeInfo_21_21 = (MR_Word) &check_hlds__type_assign_scalar_common_1[7];
                {
                  check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_21_21, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_12_12)));
                }
                if (check_hlds__type_assign__succeeded)
                  {
                    check_hlds__type_assign__TypeInfo_22_22 = (MR_Word) &check_hlds__type_assign_scalar_common_2[3];
                    {
                      check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_22_22, ((MR_Box) (check_hlds__type_assign__V_6_6)), ((MR_Box) (check_hlds__type_assign__V_13_13)));
                    }
                    if (check_hlds__type_assign__succeeded)
                      {
                        {
                          check_hlds__type_assign__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__type_assign__V_7_7, check_hlds__type_assign__V_14_14);
                        }
                        if (check_hlds__type_assign__succeeded)
                          {
                            check_hlds__type_assign__TypeInfo_24_24 = (MR_Word) &check_hlds__type_assign_scalar_common_2[4];
                            {
                              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_24_24, ((MR_Box) (check_hlds__type_assign__V_8_8)), ((MR_Box) (check_hlds__type_assign__V_15_15)));
                            }
                            if (check_hlds__type_assign__succeeded)
                              {
                                check_hlds__type_assign__TypeInfo_25_25 = (MR_Word) &check_hlds__type_assign_scalar_common_2[0];
                                {
                                  check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_25_25, ((MR_Box) (check_hlds__type_assign__V_9_9)), ((MR_Box) (check_hlds__type_assign__V_16_16)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__type_assign__succeeded;
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0(
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Cast_HeadVar1_4 = check_hlds__type_assign__HeadVar__2_2;
    MR_Word check_hlds__type_assign__Cast_HeadVar2_5 = check_hlds__type_assign__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[4], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Cast_HeadVar1_3 = check_hlds__type_assign__HeadVar__1_1;
    MR_Word check_hlds__type_assign__Cast_HeadVar2_4 = check_hlds__type_assign__HeadVar__2_2;

    {
      check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[4], ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_4)));
    }
    return check_hlds__type_assign__succeeded;
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0(
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__HeadVar__3_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Integer check_hlds__type_assign__CastX_12 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;
    MR_Integer check_hlds__type_assign__CastY_13 = (MR_Integer) check_hlds__type_assign__HeadVar__3_3;

    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_12 == check_hlds__type_assign__CastY_13);
    if (check_hlds__type_assign__succeeded)
      *check_hlds__type_assign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_10_10;

        {
          check_hlds__type_assign____Compare____type_assign_0_0(&check_hlds__type_assign__V_10_10, check_hlds__type_assign__V_4_4, check_hlds__type_assign__V_7_7);
        }
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_10_10 == (MR_Integer) 0);
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
        if (check_hlds__type_assign__succeeded)
          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_10_10;
        else
          {
            MR_Word check_hlds__type_assign__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[3], &check_hlds__type_assign__V_11_11, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_8_8)));
            }
            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_11_11 == (MR_Integer) 0);
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
            if (check_hlds__type_assign__succeeded)
              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_11_11;
            else
              {
                hlds__hlds_data____Compare____hlds_constraints_0_0(check_hlds__type_assign__HeadVar__1_1, check_hlds__type_assign__V_6_6, check_hlds__type_assign__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Integer check_hlds__type_assign__CastX_9 = (MR_Integer) check_hlds__type_assign__HeadVar__1_1;
    MR_Integer check_hlds__type_assign__CastY_10 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;

    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_9 == check_hlds__type_assign__CastY_10);
    if (check_hlds__type_assign__succeeded)
      check_hlds__type_assign__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__type_assign__TypeInfo_11_11;
        MR_Word check_hlds__type_assign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_0_0(check_hlds__type_assign__V_3_3, check_hlds__type_assign__V_6_6);
        }
        if (check_hlds__type_assign__succeeded)
          {
            check_hlds__type_assign__TypeInfo_11_11 = (MR_Word) &check_hlds__type_assign_scalar_common_1[3];
            {
              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_11_11, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_7_7)));
            }
            if (check_hlds__type_assign__succeeded)
              {
                check_hlds__type_assign__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__type_assign__V_5_5, check_hlds__type_assign__V_8_8);
              }
          }
      }
    return check_hlds__type_assign__succeeded;
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
  MR_Word check_hlds__type_assign__TypeVarSet_1,
  MR_Word check_hlds__type_assign__TypeBindings_2,
  MR_String check_hlds__type_assign__Operator_3,
  MR_Word check_hlds__type_assign__HeadVar__4_4,
  MR_Word check_hlds__type_assign__FoundOne_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_assign__succeeded;

        if ((check_hlds__type_assign__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word check_hlds__type_assign__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__type_assign__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word check_hlds__type_assign__BoundConstraint_22;
            MR_Word check_hlds__type_assign__ProgConstraint_23;

            switch (check_hlds__type_assign__FoundOne_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__type_assign__V_28_28;
                  MR_Word check_hlds__type_assign__V_31_31;

                  {
                    check_hlds__type_assign__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_31_31, 0) = ((MR_Box) (check_hlds__type_assign__Operator_3));
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[16])));
                  }
                  {
                    check_hlds__type_assign__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_28_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_28_28, 1) = ((MR_Box) (check_hlds__type_assign__V_31_31));
                  }
                  {
                    mercury__io__write_strings_3_p_0(check_hlds__type_assign__V_28_28);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
                  }
                }
                break;
            }
            {
              check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__type_assign__TypeBindings_2, check_hlds__type_assign__Constraint_18, &check_hlds__type_assign__BoundConstraint_22);
            }
            {
              hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__type_assign__BoundConstraint_22, &check_hlds__type_assign__ProgConstraint_23);
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(check_hlds__type_assign__TypeVarSet_1, (MR_Integer) 1, check_hlds__type_assign__ProgConstraint_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__type_assign__HeadVar__4__tmp_copy_4 = check_hlds__type_assign__Constraints_19;

              check_hlds__type_assign__FoundOne_5 = (MR_Integer) 1;
              check_hlds__type_assign__HeadVar__4_4 = check_hlds__type_assign__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
  MR_Word check_hlds__type_assign__VarSet_1,
  MR_Word check_hlds__type_assign__TypeVarSet_2,
  MR_Word check_hlds__type_assign__VarTypes_3,
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__FoundOne_5,
  MR_Word check_hlds__type_assign__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_assign__succeeded;

        if ((check_hlds__type_assign__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (check_hlds__type_assign__FoundOne_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
                }
              }
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        else
          {
            MR_Word check_hlds__type_assign__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word check_hlds__type_assign__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word check_hlds__type_assign__Type_27;

            {
              check_hlds__type_assign__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__Var_24, &check_hlds__type_assign__Type_27);
            }
            if (check_hlds__type_assign__succeeded)
              {
                MR_Word check_hlds__type_assign__Type1_47;
                MR_Word check_hlds__type_assign__Type_48;

                switch (check_hlds__type_assign__FoundOne_5) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\n\t");
                      }
                    }
                    break;
                }
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__type_assign__VarSet_1, (MR_Integer) 1, check_hlds__type_assign__Var_24);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ": ");
                }
                {
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__Type_27, &check_hlds__type_assign__Type1_47);
                }
                {
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__type_assign__Type1_47, &check_hlds__type_assign__Type_48);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(check_hlds__type_assign__TypeVarSet_2, (MR_Integer) 1, check_hlds__type_assign__Type_48);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__type_assign__HeadVar__6__tmp_copy_6 = check_hlds__type_assign__Vars_25;

                  check_hlds__type_assign__HeadVar__6_6 = check_hlds__type_assign__HeadVar__6__tmp_copy_6;
                  check_hlds__type_assign__FoundOne_5 = (MR_Integer) 1;
                }
                continue;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__type_assign__HeadVar__6__tmp_copy_6 = check_hlds__type_assign__Vars_25;

                  check_hlds__type_assign__HeadVar__6_6 = check_hlds__type_assign__HeadVar__6__tmp_copy_6;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
  MR_Word check_hlds__type_assign__TypeAssign_5,
  MR_Word check_hlds__type_assign__VarSet_6)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__ExternalTypeParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__VarTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__TypeBindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__Vars_13;
    MR_Word check_hlds__type_assign__ConstraintsToProve_76;
    MR_Word check_hlds__type_assign__AssumedConstraints_77;
    MR_Word check_hlds__type_assign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_78_78;
    MR_Word check_hlds__type_assign__V_79_79;

    {
      hlds__vartypes__vartypes_vars_2_p_0(check_hlds__type_assign__VarTypes_9, &check_hlds__type_assign__Vars_13);
    }
    if ((check_hlds__type_assign__ExternalTypeParams_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__TypeVarSet_12, (MR_Integer) 1, check_hlds__type_assign__ExternalTypeParams_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "]\n\t");
        }
      }
    {
      check_hlds__type_assign__write_type_assign_types_8_p_0(check_hlds__type_assign__VarSet_6, check_hlds__type_assign__TypeVarSet_12, check_hlds__type_assign__VarTypes_9, check_hlds__type_assign__TypeBindings_11, (MR_Integer) 0, check_hlds__type_assign__Vars_13);
    }
    check_hlds__type_assign__ConstraintsToProve_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 0)));
    check_hlds__type_assign__AssumedConstraints_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 1)));
    check_hlds__type_assign__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 2)));
    check_hlds__type_assign__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 3)));
    {
      check_hlds__type_assign__write_type_assign_constraints_7_p_0(check_hlds__type_assign__TypeVarSet_12, check_hlds__type_assign__TypeBindings_11, (MR_String) "&", check_hlds__type_assign__AssumedConstraints_77, (MR_Integer) 0);
    }
    {
      check_hlds__type_assign__write_type_assign_constraints_7_p_0(check_hlds__type_assign__TypeVarSet_12, check_hlds__type_assign__TypeBindings_11, (MR_String) "<=", check_hlds__type_assign__ConstraintsToProve_76, (MR_Integer) 0);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
check_hlds__type_assign__write_type_assign_set_4_p_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__VarSet_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_assign__succeeded;

        if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word check_hlds__type_assign__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__type_assign__TypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              check_hlds__type_assign__write_type_assign_4_p_0(check_hlds__type_assign__TypeAssign_9, check_hlds__type_assign__VarSet_2);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__TypeAssigns_10;

              check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
  MR_String check_hlds__type_assign__Operator_1,
  MR_Word check_hlds__type_assign__HeadVar__2_2,
  MR_Word check_hlds__type_assign__TypeBindings_3,
  MR_Word check_hlds__type_assign__TypeVarSet_4,
  MR_Word check_hlds__type_assign__FoundOne_5)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__6_6;

    if ((check_hlds__type_assign__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_assign__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__ThisPieces_17;
        MR_Word check_hlds__type_assign__TailPieceLists_18;
        MR_String check_hlds__type_assign__Prefix_19;
        MR_Word check_hlds__type_assign__BoundConstraint_20;
        MR_Word check_hlds__type_assign__ProgConstraint_21;
        MR_Word check_hlds__type_assign__V_22_22;
        MR_Word check_hlds__type_assign__V_25_25;
        MR_String check_hlds__type_assign__V_26_26;
        MR_String check_hlds__type_assign__V_27_27;

        switch (check_hlds__type_assign__FoundOne_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                check_hlds__type_assign__Prefix_19 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__Operator_1, (MR_String) " ");
              }
            }
            break;
          case (MR_Integer) 1:
            check_hlds__type_assign__Prefix_19 = (MR_String) "   ";
            break;
        }
        {
          check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__type_assign__TypeBindings_3, check_hlds__type_assign__Constraint_12, &check_hlds__type_assign__BoundConstraint_20);
        }
        {
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__type_assign__BoundConstraint_20, &check_hlds__type_assign__ProgConstraint_21);
        }
        {
          check_hlds__type_assign__V_27_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__type_assign__TypeVarSet_4, check_hlds__type_assign__ProgConstraint_21);
        }
        {
          check_hlds__type_assign__V_26_26 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__Prefix_19, check_hlds__type_assign__V_27_27);
        }
        {
          check_hlds__type_assign__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__type_assign__V_25_25, 0) = ((MR_Box) (check_hlds__type_assign__V_26_26));
        }
        {
          check_hlds__type_assign__ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__ThisPieces_17, 0) = ((MR_Box) (check_hlds__type_assign__V_25_25));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__ThisPieces_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__type_assign__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_22_22, 0) = ((MR_Box) (check_hlds__type_assign__ThisPieces_17));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__type_assign__TailPieceLists_18 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(check_hlds__type_assign__Operator_1, check_hlds__type_assign__Constraints_13, check_hlds__type_assign__TypeBindings_3, check_hlds__type_assign__TypeVarSet_4, (MR_Integer) 1);
        }
        {
          check_hlds__type_assign__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign_scalar_common_1[2], check_hlds__type_assign__V_22_22, check_hlds__type_assign__TailPieceLists_18);
        }
      }
    return check_hlds__type_assign__HeadVar__6_6;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__Constraints_5,
  MR_Word check_hlds__type_assign__TypeBindings_6,
  MR_Word check_hlds__type_assign__TypeVarSet_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__4_4;
    MR_Word check_hlds__type_assign__Pieces1_8;
    MR_Word check_hlds__type_assign__Pieces2_9;
    MR_Word check_hlds__type_assign__ConstraintsToProve_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__AssumedConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__PiecesList1_14;
    MR_Word check_hlds__type_assign__PiecesList2_15;
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 3)));

    {
      check_hlds__type_assign__PiecesList1_14 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", check_hlds__type_assign__AssumedConstraints_11, check_hlds__type_assign__TypeBindings_6, check_hlds__type_assign__TypeVarSet_7, (MR_Integer) 0);
    }
    {
      check_hlds__type_assign__PiecesList2_15 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", check_hlds__type_assign__ConstraintsToProve_10, check_hlds__type_assign__TypeBindings_6, check_hlds__type_assign__TypeVarSet_7, (MR_Integer) 0);
    }
    {
      check_hlds__type_assign__Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__type_assign__PiecesList1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      check_hlds__type_assign__Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__type_assign__PiecesList2_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__Pieces1_8, check_hlds__type_assign__Pieces2_9);
    }
    return check_hlds__type_assign__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__VarSet_2,
  MR_Word check_hlds__type_assign__VarTypes_3,
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__TypeVarSet_5,
  MR_Word check_hlds__type_assign__FoundOne_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_assign__succeeded;
        MR_Word check_hlds__type_assign__Pieces_7;

        if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (check_hlds__type_assign__FoundOne_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                check_hlds__type_assign__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[14]);
              }
              break;
            case (MR_Integer) 1:
              check_hlds__type_assign__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
        else
          {
            MR_Word check_hlds__type_assign__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__type_assign__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__type_assign__Type_25;

            {
              check_hlds__type_assign__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__Var_17, &check_hlds__type_assign__Type_25);
            }
            if (check_hlds__type_assign__succeeded)
              {
                MR_Word check_hlds__type_assign__TypeCtorInfo_44_44;
                MR_Word check_hlds__type_assign__PrefixPieces_26;
                MR_String check_hlds__type_assign__VarStr_27;
                MR_String check_hlds__type_assign__TypeStr_28;
                MR_Word check_hlds__type_assign__AssignPieces_29;
                MR_Word check_hlds__type_assign__TailPieces_30;
                MR_Word check_hlds__type_assign__V_34_34;
                MR_Word check_hlds__type_assign__V_35_35;
                MR_Word check_hlds__type_assign__V_38_38;
                MR_Word check_hlds__type_assign__V_39_39;
                MR_Word check_hlds__type_assign__V_42_42;
                MR_Word check_hlds__type_assign__Type1_49;
                MR_Word check_hlds__type_assign__Type_50;

                switch (check_hlds__type_assign__FoundOne_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__type_assign__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__type_assign__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9]);
                    }
                    break;
                }
                {
                  check_hlds__type_assign__VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__type_assign__VarSet_2, (MR_Integer) 1, check_hlds__type_assign__Var_17);
                }
                {
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__Type_25, &check_hlds__type_assign__Type1_49);
                }
                {
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__type_assign__Type1_49, &check_hlds__type_assign__Type_50);
                }
                {
                  check_hlds__type_assign__TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__type_assign__TypeVarSet_5, (MR_Integer) 0, check_hlds__type_assign__Type_50);
                }
                {
                  check_hlds__type_assign__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__type_assign__V_34_34, 0) = ((MR_Box) (check_hlds__type_assign__VarStr_27));
                }
                {
                  check_hlds__type_assign__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_39_39, 1) = ((MR_Box) (check_hlds__type_assign__TypeStr_28));
                }
                {
                  check_hlds__type_assign__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_38_38, 0) = ((MR_Box) (check_hlds__type_assign__V_39_39));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__type_assign__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[15])));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_35_35, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
                }
                {
                  check_hlds__type_assign__AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__AssignPieces_29, 0) = ((MR_Box) (check_hlds__type_assign__V_34_34));
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__AssignPieces_29, 1) = ((MR_Box) (check_hlds__type_assign__V_35_35));
                }
                {
                  check_hlds__type_assign__TailPieces_30 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(check_hlds__type_assign__Vars_18, check_hlds__type_assign__VarSet_2, check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__TypeVarSet_5, (MR_Integer) 1);
                }
                check_hlds__type_assign__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  check_hlds__type_assign__V_42_42 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_44_44, check_hlds__type_assign__AssignPieces_29, check_hlds__type_assign__TailPieces_30);
                }
                {
                  check_hlds__type_assign__Pieces_7 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_44_44, check_hlds__type_assign__PrefixPieces_26, check_hlds__type_assign__V_42_42);
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__Vars_18;

                  check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__type_assign__Pieces_7;
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__TypeAssign_5,
  MR_Word check_hlds__type_assign__MaybeSeq_6,
  MR_Word check_hlds__type_assign__VarSet_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Pieces_8;
    MR_Word check_hlds__type_assign__TypeCtorInfo_53_53;
    MR_Word check_hlds__type_assign__SeqPieces_11;
    MR_Word check_hlds__type_assign__ExternalTypeParams_12;
    MR_Word check_hlds__type_assign__VarTypes_13;
    MR_Word check_hlds__type_assign__Constraints_14;
    MR_Word check_hlds__type_assign__TypeBindings_15;
    MR_Word check_hlds__type_assign__TypeVarSet_16;
    MR_Word check_hlds__type_assign__Vars_17;
    MR_Word check_hlds__type_assign__HeadPieces_18;
    MR_Word check_hlds__type_assign__TypePieces_22;
    MR_Word check_hlds__type_assign__ConstraintPieces_23;
    MR_Word check_hlds__type_assign__V_46_46;
    MR_Word check_hlds__type_assign__V_47_47;
    MR_Word check_hlds__type_assign__V_48_48;
    MR_Word check_hlds__type_assign__V_60_60;
    MR_Word check_hlds__type_assign__V_61_61;

    if ((check_hlds__type_assign__MaybeSeq_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer check_hlds__type_assign__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_6, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__SeqPieces0_10;
        MR_Word check_hlds__type_assign__V_26_26;
        MR_Word check_hlds__type_assign__V_27_27;

        {
          check_hlds__type_assign__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_27_27, 1) = ((MR_Box) (check_hlds__type_assign__N_9));
        }
        {
          check_hlds__type_assign__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_26_26, 0) = ((MR_Box) (check_hlds__type_assign__V_27_27));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[11])));
        }
        {
          check_hlds__type_assign__SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces0_10, 1) = ((MR_Box) (check_hlds__type_assign__V_26_26));
        }
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__N_9 > (MR_Integer) 1);
        if (check_hlds__type_assign__succeeded)
          {
            {
              check_hlds__type_assign__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces_11, 1) = ((MR_Box) (check_hlds__type_assign__SeqPieces0_10));
            }
          }
        else
          check_hlds__type_assign__SeqPieces_11 = check_hlds__type_assign__SeqPieces0_10;
      }
    check_hlds__type_assign__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 0)));
    check_hlds__type_assign__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 1)));
    check_hlds__type_assign__ExternalTypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 2)));
    check_hlds__type_assign__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 3)));
    check_hlds__type_assign__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 4)));
    check_hlds__type_assign__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 5)));
    check_hlds__type_assign__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 6)));
    {
      hlds__vartypes__vartypes_vars_2_p_0(check_hlds__type_assign__VarTypes_13, &check_hlds__type_assign__Vars_17);
    }
    if ((check_hlds__type_assign__ExternalTypeParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String check_hlds__type_assign__VarsStr_21;
        MR_Word check_hlds__type_assign__V_37_37;
        MR_String check_hlds__type_assign__V_38_38;
        MR_String check_hlds__type_assign__V_40_40;

        {
          check_hlds__type_assign__VarsStr_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__TypeVarSet_16, (MR_Integer) 1, check_hlds__type_assign__ExternalTypeParams_12);
        }
        {
          check_hlds__type_assign__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__VarsStr_21, (MR_String) "]");
        }
        {
          check_hlds__type_assign__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", check_hlds__type_assign__V_40_40);
        }
        {
          check_hlds__type_assign__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_37_37, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
        }
        {
          check_hlds__type_assign__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadPieces_18, 0) = ((MR_Box) (check_hlds__type_assign__V_37_37));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9])));
        }
      }
    {
      check_hlds__type_assign__TypePieces_22 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(check_hlds__type_assign__Vars_17, check_hlds__type_assign__VarSet_7, check_hlds__type_assign__VarTypes_13, check_hlds__type_assign__TypeBindings_15, check_hlds__type_assign__TypeVarSet_16, (MR_Integer) 0);
    }
    {
      check_hlds__type_assign__ConstraintPieces_23 = check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(check_hlds__type_assign__Constraints_14, check_hlds__type_assign__TypeBindings_15, check_hlds__type_assign__TypeVarSet_16);
    }
    check_hlds__type_assign__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__type_assign__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__ConstraintPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9]));
    }
    {
      check_hlds__type_assign__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__TypePieces_22, check_hlds__type_assign__V_48_48);
    }
    {
      check_hlds__type_assign__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__HeadPieces_18, check_hlds__type_assign__V_47_47);
    }
    {
      check_hlds__type_assign__Pieces_8 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__SeqPieces_11, check_hlds__type_assign__V_46_46);
    }
    return check_hlds__type_assign__Pieces_8;
  }
}

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word check_hlds__type_assign__TypeBindings_4,
  MR_Word check_hlds__type_assign__TVar0_5,
  MR_Word * check_hlds__type_assign__TVar_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__type_assign__succeeded;
        MR_Word check_hlds__type_assign__Type_7;
        MR_Box check_hlds__type_assign__conv0_Type_7;

        {
          check_hlds__type_assign__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_4, ((MR_Box) (check_hlds__type_assign__TVar0_5)), &check_hlds__type_assign__conv0_Type_7);
        }
        if (check_hlds__type_assign__succeeded)
          {
            check_hlds__type_assign__Type_7 = ((MR_Word) check_hlds__type_assign__conv0_Type_7);
            check_hlds__type_assign__succeeded = MR_TRUE;
          }
        if (check_hlds__type_assign__succeeded)
          {
            MR_Word check_hlds__type_assign__TVar1_8;
            MR_Word check_hlds__type_assign__V_9_9;

            check_hlds__type_assign__succeeded = ((MR_tag((MR_Word) check_hlds__type_assign__Type_7)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__type_assign__succeeded)
              {
                check_hlds__type_assign__TVar1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Type_7, (MR_Integer) 0)));
                check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Type_7, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__type_assign__TVar0__tmp_copy_5 = check_hlds__type_assign__TVar1_8;

                  check_hlds__type_assign__TVar0_5 = check_hlds__type_assign__TVar0__tmp_copy_5;
                }
                continue;
              }
          }
        else
          {
            *check_hlds__type_assign__TVar_6 = check_hlds__type_assign__TVar0_5;
            check_hlds__type_assign__succeeded = MR_TRUE;
          }
        return check_hlds__type_assign__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word check_hlds__type_assign__OldExternalTypeParams_6,
  MR_Word check_hlds__type_assign__TypeBindings_7,
  MR_Word check_hlds__type_assign__TVar_8,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_Renaming_12)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__NewTVar_10;
    MR_Word check_hlds__type_assign__TypeInfo_16_16;
    MR_Word check_hlds__type_assign__TypeInfo_14_14;

    {
      check_hlds__type_assign__succeeded = check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(check_hlds__type_assign__TypeBindings_7, check_hlds__type_assign__TVar_8, &check_hlds__type_assign__NewTVar_10);
    }
    if (check_hlds__type_assign__succeeded)
      {
        check_hlds__type_assign__TypeInfo_16_16 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
        {
          check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_16_16, ((MR_Box) (check_hlds__type_assign__NewTVar_10)), ((MR_Box) (check_hlds__type_assign__TVar_8)));
        }
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
        if (check_hlds__type_assign__succeeded)
          {
            check_hlds__type_assign__TypeInfo_14_14 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
            {
              check_hlds__type_assign__succeeded = mercury__list__member_2_p_0(check_hlds__type_assign__TypeInfo_14_14, ((MR_Box) (check_hlds__type_assign__NewTVar_10)), check_hlds__type_assign__OldExternalTypeParams_6);
            }
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
          }
      }
    if (check_hlds__type_assign__succeeded)
      {
        MR_Word check_hlds__type_assign__TypeInfo_15_15 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];

        {
          mercury__map__det_insert_4_p_0(check_hlds__type_assign__TypeInfo_15_15, check_hlds__type_assign__TypeInfo_15_15, ((MR_Box) (check_hlds__type_assign__TVar_8)), ((MR_Box) (check_hlds__type_assign__NewTVar_10)), check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11, check_hlds__type_assign__STATE_VARIABLE_Renaming_12);
        }
      }
    else
      *check_hlds__type_assign__STATE_VARIABLE_Renaming_12 = check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11;
  }
}

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word check_hlds__type_assign__TypeSubst_6,
  MR_Word check_hlds__type_assign__Type0_7,
  MR_Word * check_hlds__type_assign__Type_8,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__TypeVars_10;

    {
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeSubst_6, check_hlds__type_assign__Type0_7, check_hlds__type_assign__Type_8);
    }
    {
      parse_tree__prog_type__type_vars_2_p_0(*check_hlds__type_assign__Type_8, &check_hlds__type_assign__TypeVars_10);
    }
    {
      mercury__set__insert_list_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], check_hlds__type_assign__TypeVars_10, check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11, check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12);
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_checkpoint_6_p_0(
  MR_String check_hlds__type_assign__Msg_7,
  MR_Word check_hlds__type_assign__ModuleInfo_8,
  MR_Word check_hlds__type_assign__VarSet_9,
  MR_Word check_hlds__type_assign__TypeAssignSet_10)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__Globals_12;
    MR_Word check_hlds__type_assign__DoCheckPoint_13;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_assign__ModuleInfo_8, &check_hlds__type_assign__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__type_assign__Globals_12, (MR_Integer) 61, &check_hlds__type_assign__DoCheckPoint_13);
    }
    switch (check_hlds__type_assign__DoCheckPoint_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__type_assign__Globals_25;
          MR_Word check_hlds__type_assign__Statistics_26;
          MR_Word check_hlds__type_assign__TypeAssign_27;
          MR_Word check_hlds__type_assign__V_28_28;

          {
            mercury__io__write_string_3_p_0((MR_String) "At ");
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__type_assign__Msg_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_assign__ModuleInfo_8, &check_hlds__type_assign__Globals_25);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(check_hlds__type_assign__Globals_25, (MR_Integer) 58, &check_hlds__type_assign__Statistics_26);
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__type_assign__Statistics_26);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          check_hlds__type_assign__succeeded = (check_hlds__type_assign__Statistics_26 == (MR_Integer) 1);
          if (check_hlds__type_assign__succeeded)
            {
              check_hlds__type_assign__succeeded = ((MR_tag((MR_Word) check_hlds__type_assign__TypeAssignSet_10)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__type_assign__succeeded)
                {
                  check_hlds__type_assign__TypeAssign_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_10, (MR_Integer) 0)));
                  check_hlds__type_assign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_10, (MR_Integer) 1)));
                }
            }
          if (check_hlds__type_assign__succeeded)
            {
              MR_Word check_hlds__type_assign__VarTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 0)));
              MR_Integer check_hlds__type_assign__VarTypesCount_30;
              MR_Word check_hlds__type_assign__TypeBindings_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 3)));
              MR_Integer check_hlds__type_assign__TypeBindingsCount_32;
              MR_String check_hlds__type_assign__V_58_58;
              MR_Word check_hlds__type_assign__V_64_64;
              MR_String check_hlds__type_assign__V_69_69;
              MR_Word check_hlds__type_assign__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 1)));
              MR_Word check_hlds__type_assign__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 2)));
              MR_Word check_hlds__type_assign__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 4)));
              MR_Word check_hlds__type_assign__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 5)));
              MR_Word check_hlds__type_assign__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 6)));

              {
                hlds__vartypes__vartypes_count_2_p_0(check_hlds__type_assign__VarTypes_29, &check_hlds__type_assign__VarTypesCount_30);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map: count = ");
              }
              check_hlds__type_assign__V_64_64 = (MR_Word) &check_hlds__type_assign_scalar_common_5[0];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__type_assign__V_64_64, check_hlds__type_assign__VarTypesCount_30, &check_hlds__type_assign__V_58_58);
              }
              {
                mercury__io__write_string_3_p_0(check_hlds__type_assign__V_58_58);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                mercury__map__count_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_31, &check_hlds__type_assign__TypeBindingsCount_32);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map: count = ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__type_assign__V_64_64, check_hlds__type_assign__TypeBindingsCount_32, &check_hlds__type_assign__V_69_69);
              }
              {
                mercury__io__write_string_3_p_0(check_hlds__type_assign__V_69_69);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
              {
                check_hlds__type_assign__write_type_assign_4_p_0(check_hlds__type_assign__TypeAssign_27, check_hlds__type_assign__VarSet_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                check_hlds__type_assign__write_type_assign_set_4_p_0(check_hlds__type_assign__V_28_28, check_hlds__type_assign__VarSet_9);
              }
            }
          else
            {
              check_hlds__type_assign__write_type_assign_set_4_p_0(check_hlds__type_assign__TypeAssignSet_10, check_hlds__type_assign__VarSet_9);
            }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__MaybeSeq_2,
  MR_Word check_hlds__type_assign__VarSet_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__4_4;

    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_assign__ArgTypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__ArgTypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_15_15;
        MR_Word check_hlds__type_assign__V_16_16;
        MR_Word check_hlds__type_assign__V_17_17;
        MR_Word check_hlds__type_assign___ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign___Cnstrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 2)));

        {
          check_hlds__type_assign__V_15_15 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(check_hlds__type_assign__TypeAssign_12, check_hlds__type_assign__MaybeSeq_2, check_hlds__type_assign__VarSet_3);
        }
        if ((check_hlds__type_assign__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__type_assign__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer check_hlds__type_assign__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_2, (MR_Integer) 0)));
            MR_Integer check_hlds__type_assign__V_20_20 = (check_hlds__type_assign__N_19 + (MR_Integer) 1);

            {
              check_hlds__type_assign__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_17_17, 0) = ((MR_Box) (check_hlds__type_assign__V_20_20));
            }
          }
        {
          check_hlds__type_assign__V_16_16 = check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(check_hlds__type_assign__ArgTypeAssigns_8, check_hlds__type_assign__V_17_17, check_hlds__type_assign__VarSet_3);
        }
        {
          check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__V_15_15, check_hlds__type_assign__V_16_16);
        }
      }
    return check_hlds__type_assign__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1,
  MR_Word check_hlds__type_assign__MaybeSeq_2,
  MR_Word check_hlds__type_assign__VarSet_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__4_4;

    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_assign__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__TypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_11_11;
        MR_Word check_hlds__type_assign__V_12_12;
        MR_Word check_hlds__type_assign__V_13_13;

        {
          check_hlds__type_assign__V_11_11 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(check_hlds__type_assign__TypeAssign_7, check_hlds__type_assign__MaybeSeq_2, check_hlds__type_assign__VarSet_3);
        }
        if ((check_hlds__type_assign__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__type_assign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer check_hlds__type_assign__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_2, (MR_Integer) 0)));
            MR_Integer check_hlds__type_assign__V_16_16 = (check_hlds__type_assign__N_15 + (MR_Integer) 1);

            {
              check_hlds__type_assign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_13_13, 0) = ((MR_Box) (check_hlds__type_assign__V_16_16));
            }
          }
        {
          check_hlds__type_assign__V_12_12 = check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(check_hlds__type_assign__TypeAssigns_8, check_hlds__type_assign__V_13_13, check_hlds__type_assign__VarSet_3);
        }
        {
          check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__V_11_11, check_hlds__type_assign__V_12_12);
        }
      }
    return check_hlds__type_assign__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__2_2;

    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_assign__ArgTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__ArgTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 2)));

        if ((check_hlds__type_assign__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__type_assign__V_14_14;
            MR_Word check_hlds__type_assign__V_15_15;
            MR_Word check_hlds__type_assign__OldConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 4)));
            MR_Word check_hlds__type_assign__Bindings_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 3)));
            MR_Word check_hlds__type_assign__Constraints_23;
            MR_Word check_hlds__type_assign__NewConstraints_24;
            MR_Word check_hlds__type_assign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 0)));
            MR_Word check_hlds__type_assign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 1)));
            MR_Word check_hlds__type_assign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 2)));
            MR_Word check_hlds__type_assign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 5)));
            MR_Word check_hlds__type_assign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 6)));
            MR_Word check_hlds__type_assign__V_46_46;
            MR_Word check_hlds__type_assign__V_47_47;
            MR_Word check_hlds__type_assign__V_48_48;
            MR_Word check_hlds__type_assign__V_49_49;
            MR_Word check_hlds__type_assign__V_51_51;
            MR_Word check_hlds__type_assign__V_52_52;
            MR_Word check_hlds__type_assign__V_50_50;

            {
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__type_assign__Bindings_22, check_hlds__type_assign__V_8_8, &check_hlds__type_assign__Constraints_23);
            }
            {
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__type_assign__Constraints_23, check_hlds__type_assign__OldConstraints_21, &check_hlds__type_assign__NewConstraints_24);
            }
            check_hlds__type_assign__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 0)));
            check_hlds__type_assign__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 1)));
            check_hlds__type_assign__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 2)));
            check_hlds__type_assign__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 3)));
            check_hlds__type_assign__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 4)));
            check_hlds__type_assign__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 5)));
            check_hlds__type_assign__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 6)));
            {
              check_hlds__type_assign__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 0) = ((MR_Box) (check_hlds__type_assign__V_46_46));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 1) = ((MR_Box) (check_hlds__type_assign__V_47_47));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 2) = ((MR_Box) (check_hlds__type_assign__V_48_48));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 3) = ((MR_Box) (check_hlds__type_assign__V_49_49));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 4) = ((MR_Box) (check_hlds__type_assign__NewConstraints_24));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 5) = ((MR_Box) (check_hlds__type_assign__V_51_51));
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 6) = ((MR_Box) (check_hlds__type_assign__V_52_52));
            }
            {
              check_hlds__type_assign__V_15_15 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__type_assign__ArgTypeAssigns_4);
            }
            {
              check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__type_assign__V_14_14));
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__type_assign__V_15_15));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_assign", (MR_String) "function \140check_hlds.type_assign.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
            }
          }
      }
    return check_hlds__type_assign__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_1_f_0(
  MR_Word check_hlds__type_assign__HeadVar__1_1)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__2_2;

    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__type_assign__ArgsTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__ArgsTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_5_5;
        MR_Word check_hlds__type_assign__V_6_6;
        MR_Word check_hlds__type_assign__TypeAssign0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__Constraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__OldConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 4)));
        MR_Word check_hlds__type_assign__Bindings_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 3)));
        MR_Word check_hlds__type_assign__Constraints_14;
        MR_Word check_hlds__type_assign__NewConstraints_15;
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 0)));
        MR_Word check_hlds__type_assign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 1)));
        MR_Word check_hlds__type_assign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 2)));
        MR_Word check_hlds__type_assign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 5)));
        MR_Word check_hlds__type_assign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 6)));
        MR_Word check_hlds__type_assign__V_37_37;
        MR_Word check_hlds__type_assign__V_38_38;
        MR_Word check_hlds__type_assign__V_39_39;
        MR_Word check_hlds__type_assign__V_40_40;
        MR_Word check_hlds__type_assign__V_42_42;
        MR_Word check_hlds__type_assign__V_43_43;
        MR_Word check_hlds__type_assign__V_41_41;

        {
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__type_assign__Bindings_13, check_hlds__type_assign__Constraints0_11, &check_hlds__type_assign__Constraints_14);
        }
        {
          hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__type_assign__Constraints_14, check_hlds__type_assign__OldConstraints_12, &check_hlds__type_assign__NewConstraints_15);
        }
        check_hlds__type_assign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 0)));
        check_hlds__type_assign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 1)));
        check_hlds__type_assign__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 2)));
        check_hlds__type_assign__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 3)));
        check_hlds__type_assign__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 4)));
        check_hlds__type_assign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 5)));
        check_hlds__type_assign__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 6)));
        {
          check_hlds__type_assign__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 0) = ((MR_Box) (check_hlds__type_assign__V_37_37));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 2) = ((MR_Box) (check_hlds__type_assign__V_39_39));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 3) = ((MR_Box) (check_hlds__type_assign__V_40_40));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 4) = ((MR_Box) (check_hlds__type_assign__NewConstraints_15));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 5) = ((MR_Box) (check_hlds__type_assign__V_42_42));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 6) = ((MR_Box) (check_hlds__type_assign__V_43_43));
        }
        {
          check_hlds__type_assign__V_6_6 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(check_hlds__type_assign__ArgsTypeAssigns_4);
        }
        {
          check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__type_assign__V_5_5));
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__type_assign__V_6_6));
        }
      }
    return check_hlds__type_assign__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_callee_constraints_1_f_0(
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));

    return check_hlds__type_assign__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_callee_arg_types_1_f_0(
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));

    return check_hlds__type_assign__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__type_assign__get_caller_arg_assign_1_f_0(
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));

    return check_hlds__type_assign__HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
    MR_Word check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12;

    {
      check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12);
    }
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
    MR_Word check_hlds__type_assign__conv5_HeadVar__3_3;

    {
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv5_HeadVar__3_3);
    }
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv5_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box check_hlds__type_assign__wrapper_arg_2,
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
{
  {
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
    MR_Word check_hlds__type_assign__conv3_HeadVar__3_3;

    {
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv3_HeadVar__3_3);
    }
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box check_hlds__type_assign__closure_arg,
  MR_Box check_hlds__type_assign__wrapper_arg_1,
  MR_Box * check_hlds__type_assign__wrapper_arg_2,
  MR_Box check_hlds__type_assign__wrapper_arg_3,
  MR_Box * check_hlds__type_assign__wrapper_arg_4)
{
  {
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
    MR_Word check_hlds__type_assign__conv1_Type_8;
    MR_Word check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12;

    {
      check_hlds__type_assign__expand_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_assign__wrapper_arg_1), &check_hlds__type_assign__conv1_Type_8, ((MR_Word) check_hlds__type_assign__wrapper_arg_3), &check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12);
    }
    *check_hlds__type_assign__wrapper_arg_2 = ((MR_Box) (check_hlds__type_assign__conv1_Type_8));
    *check_hlds__type_assign__wrapper_arg_4 = ((MR_Box) (check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(
  MR_Word check_hlds__type_assign__TypeAssignSet_13,
  MR_Word check_hlds__type_assign__OldExternalTypeParams_14,
  MR_Word check_hlds__type_assign__OldExistQVars_15,
  MR_Word check_hlds__type_assign__OldExplicitVarTypes_16,
  MR_Word * check_hlds__type_assign__NewTypeVarSet_17,
  MR_Word * check_hlds__type_assign__NewExternalTypeParams_18,
  MR_Word * check_hlds__type_assign__NewVarTypes_19,
  MR_Word * check_hlds__type_assign__NewTypeConstraints_20,
  MR_Word * check_hlds__type_assign__NewConstraintProofMap_21,
  MR_Word * check_hlds__type_assign__NewConstraintMap_22,
  MR_Word * check_hlds__type_assign__TSubst_23,
  MR_Word * check_hlds__type_assign__ExistTypeRenaming_24)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__TypeCtorInfo_76_76;
    MR_Word check_hlds__type_assign__TypeInfo_77_77;
    MR_Word check_hlds__type_assign__TypeInfo_81_81;
    MR_Word check_hlds__type_assign__TypeInfo_14_92;
    MR_Word check_hlds__type_assign__TypeAssign_25;
    MR_Word check_hlds__type_assign__VarTypes0_27;
    MR_Word check_hlds__type_assign__OldTypeVarSet_28;
    MR_Word check_hlds__type_assign__ExternalTypeParams_29;
    MR_Word check_hlds__type_assign__TypeBindings_30;
    MR_Word check_hlds__type_assign__HLDSTypeConstraints_31;
    MR_Word check_hlds__type_assign__ConstraintProofMap0_32;
    MR_Word check_hlds__type_assign__ConstraintMap0_33;
    MR_Word check_hlds__type_assign__VarTypes1_34;
    MR_Word check_hlds__type_assign__ConstraintProofMap_35;
    MR_Word check_hlds__type_assign__ConstraintMap1_36;
    MR_Word check_hlds__type_assign__TypeVars1_38;
    MR_Word check_hlds__type_assign__HLDSUnivConstraints_40;
    MR_Word check_hlds__type_assign__HLDSExistConstraints_41;
    MR_Word check_hlds__type_assign__ConstraintMap2_44;
    MR_Word check_hlds__type_assign__ConstraintMap_45;
    MR_Word check_hlds__type_assign__ExplicitTypes_46;
    MR_Word check_hlds__type_assign__ExplicitTypeVars0_47;
    MR_Word check_hlds__type_assign__ExistQVarsToBeRenamed_48;
    MR_Word check_hlds__type_assign__ExistQVarsToRemain_49;
    MR_Word check_hlds__type_assign__TypeVars2_50;
    MR_Word check_hlds__type_assign__TypeVars_51;
    MR_Word check_hlds__type_assign__TypeConstraints_52;
    MR_Word check_hlds__type_assign__V_60_60;
    MR_Word check_hlds__type_assign__V_61_61;
    MR_Word check_hlds__type_assign__V_62_62;
    MR_Word check_hlds__type_assign__V_63_63;
    MR_Word check_hlds__type_assign__V_87_87;
    MR_Word check_hlds__type_assign__V_88_88;
    MR_Word check_hlds__type_assign__V_42_42;
    MR_Word check_hlds__type_assign__V_43_43;
    MR_Box check_hlds__type_assign__conv4_ConstraintMap2_44;
    MR_Box check_hlds__type_assign__conv6_ConstraintMap_45;
    MR_Box check_hlds__type_assign__conv8_ExistTypeRenaming_24;

    if ((check_hlds__type_assign__TypeAssignSet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_assign", (MR_String) "predicate \140check_hlds.type_assign.type_assign_set_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__type_assign__V_26_26;

        check_hlds__type_assign__TypeAssign_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_13, (MR_Integer) 0)));
        check_hlds__type_assign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_13, (MR_Integer) 1)));
      }
    check_hlds__type_assign__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 0)));
    check_hlds__type_assign__OldTypeVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 1)));
    check_hlds__type_assign__ExternalTypeParams_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 2)));
    check_hlds__type_assign__TypeBindings_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 3)));
    check_hlds__type_assign__HLDSTypeConstraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 4)));
    check_hlds__type_assign__ConstraintProofMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 5)));
    check_hlds__type_assign__ConstraintMap0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 6)));
    {
      check_hlds__type_assign__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_30);
    }
    if (check_hlds__type_assign__succeeded)
      {
        MR_Word check_hlds__type_assign__Types1_37;

        check_hlds__type_assign__VarTypes1_34 = check_hlds__type_assign__VarTypes0_27;
        check_hlds__type_assign__ConstraintProofMap_35 = check_hlds__type_assign__ConstraintProofMap0_32;
        check_hlds__type_assign__ConstraintMap1_36 = check_hlds__type_assign__ConstraintMap0_33;
        {
          hlds__vartypes__vartypes_types_2_p_0(check_hlds__type_assign__VarTypes1_34, &check_hlds__type_assign__Types1_37);
        }
        {
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__type_assign__Types1_37, &check_hlds__type_assign__TypeVars1_38);
        }
      }
    else
      {
        MR_Word check_hlds__type_assign__TypeInfo_71_71;
        MR_Word check_hlds__type_assign__TypeVarsSet1_39;
        MR_Word check_hlds__type_assign__V_56_56;
        MR_Word check_hlds__type_assign__V_57_57;
        MR_Box check_hlds__type_assign__conv2_TypeVarsSet1_39;

        {
          check_hlds__type_assign__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 3) = ((MR_Box) (check_hlds__type_assign__TypeBindings_30));
        }
        check_hlds__type_assign__TypeInfo_71_71 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
        {
          check_hlds__type_assign__V_57_57 = mercury__set__init_0_f_0(check_hlds__type_assign__TypeInfo_71_71);
        }
        {
          hlds__vartypes__transform_foldl_var_types_5_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[1], check_hlds__type_assign__V_56_56, check_hlds__type_assign__VarTypes0_27, &check_hlds__type_assign__VarTypes1_34, ((MR_Box) (check_hlds__type_assign__V_57_57)), &check_hlds__type_assign__conv2_TypeVarsSet1_39);
        }
        check_hlds__type_assign__TypeVarsSet1_39 = ((MR_Word) check_hlds__type_assign__conv2_TypeVarsSet1_39);
        {
          mercury__set__to_sorted_list_2_p_0(check_hlds__type_assign__TypeInfo_71_71, check_hlds__type_assign__TypeVarsSet1_39, &check_hlds__type_assign__TypeVars1_38);
        }
        {
          check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(check_hlds__type_assign__TypeBindings_30, check_hlds__type_assign__ConstraintProofMap0_32, &check_hlds__type_assign__ConstraintProofMap_35);
        }
        {
          check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(check_hlds__type_assign__TypeBindings_30, check_hlds__type_assign__ConstraintMap0_33, &check_hlds__type_assign__ConstraintMap1_36);
        }
      }
    check_hlds__type_assign__HLDSUnivConstraints_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 0)));
    check_hlds__type_assign__HLDSExistConstraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 1)));
    check_hlds__type_assign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 2)));
    check_hlds__type_assign__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 3)));
    check_hlds__type_assign__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
    check_hlds__type_assign__TypeInfo_77_77 = (MR_Word) &check_hlds__type_assign_scalar_common_2[0];
    {
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeCtorInfo_76_76, check_hlds__type_assign__TypeInfo_77_77, (MR_Word) &check_hlds__type_assign_scalar_common_2[5], check_hlds__type_assign__HLDSUnivConstraints_40, ((MR_Box) (check_hlds__type_assign__ConstraintMap1_36)), &check_hlds__type_assign__conv4_ConstraintMap2_44);
    }
    check_hlds__type_assign__ConstraintMap2_44 = ((MR_Word) check_hlds__type_assign__conv4_ConstraintMap2_44);
    {
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeCtorInfo_76_76, check_hlds__type_assign__TypeInfo_77_77, (MR_Word) &check_hlds__type_assign_scalar_common_2[6], check_hlds__type_assign__HLDSExistConstraints_41, ((MR_Box) (check_hlds__type_assign__ConstraintMap2_44)), &check_hlds__type_assign__conv6_ConstraintMap_45);
    }
    check_hlds__type_assign__ConstraintMap_45 = ((MR_Word) check_hlds__type_assign__conv6_ConstraintMap_45);
    {
      check_hlds__type_assign__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 3) = ((MR_Box) (check_hlds__type_assign__OldExternalTypeParams_14));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 4) = ((MR_Box) (check_hlds__type_assign__TypeBindings_30));
    }
    check_hlds__type_assign__TypeInfo_14_92 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
    {
      check_hlds__type_assign__V_88_88 = mercury__map__init_0_f_0(check_hlds__type_assign__TypeInfo_14_92, check_hlds__type_assign__TypeInfo_14_92);
    }
    {
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeInfo_14_92, (MR_Word) &check_hlds__type_assign_scalar_common_2[1], check_hlds__type_assign__V_87_87, check_hlds__type_assign__OldExistQVars_15, ((MR_Box) (check_hlds__type_assign__V_88_88)), &check_hlds__type_assign__conv8_ExistTypeRenaming_24);
    }
    *check_hlds__type_assign__ExistTypeRenaming_24 = ((MR_Word) check_hlds__type_assign__conv8_ExistTypeRenaming_24);
    {
      hlds__vartypes__vartypes_types_2_p_0(check_hlds__type_assign__OldExplicitVarTypes_16, &check_hlds__type_assign__ExplicitTypes_46);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__type_assign__ExplicitTypes_46, &check_hlds__type_assign__ExplicitTypeVars0_47);
    }
    check_hlds__type_assign__TypeInfo_81_81 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
    {
      mercury__map__keys_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, *check_hlds__type_assign__ExistTypeRenaming_24, &check_hlds__type_assign__ExistQVarsToBeRenamed_48);
    }
    {
      mercury__list__delete_elems_3_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__OldExistQVars_15, check_hlds__type_assign__ExistQVarsToBeRenamed_48, &check_hlds__type_assign__ExistQVarsToRemain_49);
    }
    {
      check_hlds__type_assign__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_63_63, 0) = ((MR_Box) (check_hlds__type_assign__ExplicitTypeVars0_47));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__type_assign__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_62_62, 0) = ((MR_Box) (check_hlds__type_assign__TypeVars1_38));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_62_62, 1) = ((MR_Box) (check_hlds__type_assign__V_63_63));
    }
    {
      check_hlds__type_assign__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_61_61, 0) = ((MR_Box) (check_hlds__type_assign__ExternalTypeParams_29));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_61_61, 1) = ((MR_Box) (check_hlds__type_assign__V_62_62));
    }
    {
      check_hlds__type_assign__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_60_60, 0) = ((MR_Box) (check_hlds__type_assign__ExistQVarsToRemain_49));
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_60_60, 1) = ((MR_Box) (check_hlds__type_assign__V_61_61));
    }
    {
      mercury__list__condense_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__V_60_60, &check_hlds__type_assign__TypeVars2_50);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeVars2_50, &check_hlds__type_assign__TypeVars_51);
    }
    {
      mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__OldTypeVarSet_28, check_hlds__type_assign__TypeVars_51, check_hlds__type_assign__NewTypeVarSet_17, check_hlds__type_assign__TSubst_23);
    }
    {
      hlds__hlds_data__retrieve_prog_constraints_2_p_0(check_hlds__type_assign__HLDSTypeConstraints_31, &check_hlds__type_assign__TypeConstraints_52);
    }
    {
      check_hlds__type_assign__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, *check_hlds__type_assign__TSubst_23);
    }
    if (check_hlds__type_assign__succeeded)
      {
        *check_hlds__type_assign__NewVarTypes_19 = check_hlds__type_assign__VarTypes1_34;
        *check_hlds__type_assign__NewExternalTypeParams_18 = check_hlds__type_assign__ExternalTypeParams_29;
        *check_hlds__type_assign__NewTypeConstraints_20 = check_hlds__type_assign__TypeConstraints_52;
        *check_hlds__type_assign__NewConstraintProofMap_21 = check_hlds__type_assign__ConstraintProofMap_35;
        *check_hlds__type_assign__NewConstraintMap_22 = check_hlds__type_assign__ConstraintMap_45;
      }
    else
      {
        {
          hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__VarTypes1_34, check_hlds__type_assign__NewVarTypes_19);
        }
        {
          mercury__map__apply_to_list_3_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__ExternalTypeParams_29, *check_hlds__type_assign__TSubst_23, check_hlds__type_assign__NewExternalTypeParams_18);
        }
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__TypeConstraints_52, check_hlds__type_assign__NewTypeConstraints_20);
        }
        {
          check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__ConstraintProofMap_35, check_hlds__type_assign__NewConstraintProofMap_21);
        }
        {
          check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__ConstraintMap_45, check_hlds__type_assign__NewConstraintMap_22);
        }
      }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_init_5_p_0(
  MR_Word check_hlds__type_assign__TypeVarSet_6,
  MR_Word check_hlds__type_assign__VarTypes_7,
  MR_Word check_hlds__type_assign__ExternalTypeParams_8,
  MR_Word check_hlds__type_assign__Constraints_9,
  MR_Word * check_hlds__type_assign__TypeAssignSet_10)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__TypeCtorInfo_18_18;
    MR_Word check_hlds__type_assign__TypeBindings_11;
    MR_Word check_hlds__type_assign__ProofMap_12;
    MR_Word check_hlds__type_assign__ConstraintMap_13;
    MR_Word check_hlds__type_assign__V_14_14;

    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__type_assign__TypeBindings_11);
    }
    check_hlds__type_assign__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__init_1_p_0(check_hlds__type_assign__TypeCtorInfo_18_18, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &check_hlds__type_assign__ProofMap_12);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_assign__TypeCtorInfo_18_18, &check_hlds__type_assign__ConstraintMap_13);
    }
    {
      check_hlds__type_assign__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 0) = ((MR_Box) (check_hlds__type_assign__VarTypes_7));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 1) = ((MR_Box) (check_hlds__type_assign__TypeVarSet_6));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 2) = ((MR_Box) (check_hlds__type_assign__ExternalTypeParams_8));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 3) = ((MR_Box) (check_hlds__type_assign__TypeBindings_11));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 4) = ((MR_Box) (check_hlds__type_assign__Constraints_9));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 5) = ((MR_Box) (check_hlds__type_assign__ProofMap_12));
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 6) = ((MR_Box) (check_hlds__type_assign__ConstraintMap_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__type_assign__TypeAssignSet_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(
  MR_Word check_hlds__type_assign__TVarSet_8,
  MR_Word check_hlds__type_assign__Bindings_9,
  MR_Word check_hlds__type_assign__Constraints_10,
  MR_Word check_hlds__type_assign__ProofMap_11,
  MR_Word check_hlds__type_assign__ConstraintMap_12,
  MR_Word check_hlds__type_assign__TypeAssign0_13,
  MR_Word * check_hlds__type_assign__TypeAssign_14)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__ExternalTypeParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__TypeAssign_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__VarTypes_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__TVarSet_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__ExternalTypeParams_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__Bindings_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__Constraints_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__ProofMap_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__ConstraintMap_12));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_map_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__X_4));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_proof_map_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typevarset_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_var_types_3_p_0(
  MR_Word check_hlds__type_assign__X_4,
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    MR_Word check_hlds__type_assign__V_9_9;
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    MR_Word check_hlds__type_assign__V_8_8;
    MR_Word check_hlds__type_assign__V_9_9;
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    MR_Word check_hlds__type_assign__V_7_7;
    MR_Word check_hlds__type_assign__V_8_8;
    MR_Word check_hlds__type_assign__V_9_9;
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typevarset_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    MR_Word check_hlds__type_assign__V_6_6;
    MR_Word check_hlds__type_assign__V_7_7;
    MR_Word check_hlds__type_assign__V_8_8;
    MR_Word check_hlds__type_assign__V_9_9;
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_var_types_2_p_0(
  MR_Word check_hlds__type_assign__TA_3,
  MR_Word * check_hlds__type_assign__X_4)
{
  {
    MR_bool check_hlds__type_assign__succeeded;
    MR_Word check_hlds__type_assign__V_5_5;
    MR_Word check_hlds__type_assign__V_6_6;
    MR_Word check_hlds__type_assign__V_7_7;
    MR_Word check_hlds__type_assign__V_8_8;
    MR_Word check_hlds__type_assign__V_9_9;
    MR_Word check_hlds__type_assign__V_10_10;

    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
    check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
    check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.type_assign. */
