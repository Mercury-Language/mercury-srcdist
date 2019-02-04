/*
** Automatically generated from `resolve_unify_functor.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module check_hlds.resolve_unify_functor. */
/* :- implementation. */

/*
INIT mercury__check_hlds__resolve_unify_functor__init
ENDINIT
*/

#include "check_hlds.resolve_unify_functor.mih"


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
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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
#include "term_io.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0;

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1;

static const MR_PseudoTypeInfo check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2[1];

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2;

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1[1];

static const MR_DuPtagLayout check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_ptag_ordered_is_plain_unify_0[2];

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_name_ordered_is_plain_unify_0[3];

static const MR_Integer check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__functor_number_map_is_plain_unify_0[3];

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001(
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2);

static void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001(
  MR_Box * check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__470__1_1_f_0(
  MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__1_51);

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__307__1_1_f_0(
  MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__1_31);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_6_p_0(
  MR_Word check_hlds__resolve_unify_functor__Type_7,
  MR_Word * check_hlds__resolve_unify_functor__Var_8,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_11,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_12,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_13,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_14);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_6_p_0(
  MR_Word check_hlds__resolve_unify_functor__Types_7,
  MR_Word * check_hlds__resolve_unify_functor__Vars_8,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_12,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_13,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_14,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_15);

static void MR_CALL 
check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(
  MR_Word check_hlds__resolve_unify_functor__Var_8,
  MR_Word check_hlds__resolve_unify_functor__RHS_9,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_10,
  MR_Word check_hlds__resolve_unify_functor__RestrictNonLocals_11,
  MR_Word check_hlds__resolve_unify_functor__VarsList_12,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_13,
  MR_Word * check_hlds__resolve_unify_functor__Goal_14);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(
  MR_Word check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_String check_hlds__resolve_unify_functor__UnqualFieldName_7,
  MR_Integer check_hlds__resolve_unify_functor__CurFieldNumber_8,
  MR_Integer * check_hlds__resolve_unify_functor__NamedFieldNumber_9);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__TypeCtor_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2,
  MR_String check_hlds__resolve_unify_functor__UnqualFieldName_3,
  MR_Word * check_hlds__resolve_unify_functor__ConsId_4,
  MR_Integer * check_hlds__resolve_unify_functor__FieldNumber_5);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_6,
  MR_Word check_hlds__resolve_unify_functor__TermType_7,
  MR_Word check_hlds__resolve_unify_functor__FieldSymName_8,
  MR_Word * check_hlds__resolve_unify_functor__ConsId_9,
  MR_Integer * check_hlds__resolve_unify_functor__FieldNumber_10);

static void MR_CALL 
check_hlds__resolve_unify_functor__split_list_at_index_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__TypeInfo_for_T_20,
  MR_Integer check_hlds__resolve_unify_functor__Index_6,
  MR_Word check_hlds__resolve_unify_functor__List_7,
  MR_Word * check_hlds__resolve_unify_functor__Before_8,
  MR_Box * check_hlds__resolve_unify_functor__At_9,
  MR_Word * check_hlds__resolve_unify_functor__After_10);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2,
  MR_Word check_hlds__resolve_unify_functor__TVars_3,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_5);

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_9,
  MR_Word check_hlds__resolve_unify_functor__GoalId_10,
  MR_Word check_hlds__resolve_unify_functor__ConsId_11,
  MR_Word check_hlds__resolve_unify_functor__TermType_12,
  MR_Word * check_hlds__resolve_unify_functor__ActualArgTypes_13,
  MR_Word * check_hlds__resolve_unify_functor__ActualExistQVars_14,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_48,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_49);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_14_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_15,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_55,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_56,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_57,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_58,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_59,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_60,
  MR_Word check_hlds__resolve_unify_functor__FieldName_19,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_20,
  MR_Word check_hlds__resolve_unify_functor__FieldVar_21,
  MR_Word check_hlds__resolve_unify_functor__TermInputVar_22,
  MR_Word check_hlds__resolve_unify_functor__TermOutputVar_23,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_24,
  MR_Word * check_hlds__resolve_unify_functor__Goal_25);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_13_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_14,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_45,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_46,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_47,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_48,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_49,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_50,
  MR_Word check_hlds__resolve_unify_functor__FieldName_18,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_19,
  MR_Word check_hlds__resolve_unify_functor__FieldVar_20,
  MR_Word check_hlds__resolve_unify_functor__TermInputVar_21,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_22,
  MR_Word * check_hlds__resolve_unify_functor__GoalExpr_23);

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_15,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_29,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_30,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_31,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_32,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_33,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_34,
  MR_Word check_hlds__resolve_unify_functor__AccessType_19,
  MR_Word check_hlds__resolve_unify_functor__FieldName_20,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_21,
  MR_Word check_hlds__resolve_unify_functor__Var_22,
  MR_Word check_hlds__resolve_unify_functor__Args_23,
  MR_Word check_hlds__resolve_unify_functor__GoalInfo_24,
  MR_Word * check_hlds__resolve_unify_functor__HeadVar__14_14);

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_6,
  MR_Word check_hlds__resolve_unify_functor__TVarSet_7,
  MR_Word check_hlds__resolve_unify_functor__ConsId_8,
  MR_Word check_hlds__resolve_unify_functor__Type_9,
  MR_Word check_hlds__resolve_unify_functor__ArgTypes_10);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box * check_hlds__resolve_unify_functor__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_5[2][3];


/* sealed */ struct check_hlds__resolve_unify_functor__vector_common_type_2_0_s {
  const MR_String check_hlds__resolve_unify_functor__vector_common_type_2_0__vct_2_f_0;
  const MR_Word check_hlds__resolve_unify_functor__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_2_0_s check_hlds__resolve_unify_functor_vector_common_2[4];



static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__resolve_unify_functor_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: reference to"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undeclared function or predicate"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_2_0_s check_hlds__resolve_unify_functor_vector_common_2[4] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "apply",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0 = {
  (MR_String) "is_not_plain_unify",
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

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1 = {
  (MR_String) "is_plain_unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2 = {
  (MR_String) "is_unknown_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_0[2] = {
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1
};

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1[1] = {
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2
};

static const MR_DuPtagLayout check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_ptag_ordered_is_plain_unify_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_name_ordered_is_plain_unify_0[3] = {
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1,
  &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2
};

static const MR_Integer check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__functor_number_map_is_plain_unify_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__type_ctor_info_is_plain_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001)),
  ((MR_Box) (check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001)),
  (MR_String) "check_hlds.resolve_unify_functor",
  (MR_String) "is_plain_unify",
  {     check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_name_ordered_is_plain_unify_0 },
  {     check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_ptag_ordered_is_plain_unify_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__functor_number_map_is_plain_unify_0
};

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001(
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;

    {
      check_hlds__resolve_unify_functor__succeeded = check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0(((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_1), ((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_2));
    }
    return check_hlds__resolve_unify_functor__succeeded;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001(
  MR_Box * check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_3)
{
  {
    MR_Word check_hlds__resolve_unify_functor__conv0_HeadVar__1_1;

    {
      check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(&check_hlds__resolve_unify_functor__conv0_HeadVar__1_1, ((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_2), ((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_3));
    }
    *check_hlds__resolve_unify_functor__wrapper_arg_1 = ((MR_Box) (check_hlds__resolve_unify_functor__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__470__1_1_f_0(
  MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__1_51)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__2_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_51, (MR_Integer) 1)));
    MR_Word check_hlds__resolve_unify_functor__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_51, (MR_Integer) 0)));
    MR_Word check_hlds__resolve_unify_functor__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_51, (MR_Integer) 2)));
    MR_Word check_hlds__resolve_unify_functor__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_51, (MR_Integer) 3)));

    return check_hlds__resolve_unify_functor__LambdaHeadVar__2_52;
  }
}

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__307__1_1_f_0(
  MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__1_31)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__LambdaHeadVar__2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_31, (MR_Integer) 1)));
    MR_Word check_hlds__resolve_unify_functor__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_31, (MR_Integer) 0)));
    MR_Word check_hlds__resolve_unify_functor__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_31, (MR_Integer) 2)));
    MR_Word check_hlds__resolve_unify_functor__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__LambdaHeadVar__1_31, (MR_Integer) 3)));

    return check_hlds__resolve_unify_functor__LambdaHeadVar__2_32;
  }
}

void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(
  MR_Word * check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__3_3)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Integer check_hlds__resolve_unify_functor__CastX_10 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__2_2;
    MR_Integer check_hlds__resolve_unify_functor__CastY_11 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__3_3;

    check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__CastX_10 == check_hlds__resolve_unify_functor__CastY_11);
    if (check_hlds__resolve_unify_functor__succeeded)
      *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__resolve_unify_functor__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__resolve_unify_functor__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__resolve_unify_functor__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__resolve_unify_functor__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__resolve_unify_functor__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__resolve_unify_functor__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__resolve_unify_functor__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__error_util____Compare____error_spec_0_0(check_hlds__resolve_unify_functor__HeadVar__1_1, check_hlds__resolve_unify_functor__V_13_13, check_hlds__resolve_unify_functor__V_9_9);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0(
  MR_Word check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Integer check_hlds__resolve_unify_functor__CastX_9 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__1_1;
    MR_Integer check_hlds__resolve_unify_functor__CastY_10 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__2_2;

    check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__CastX_9 == check_hlds__resolve_unify_functor__CastY_10);
    if (check_hlds__resolve_unify_functor__succeeded)
      check_hlds__resolve_unify_functor__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__resolve_unify_functor__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__resolve_unify_functor__CastX_3 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__1_1;
                MR_Integer check_hlds__resolve_unify_functor__CastY_4 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__2_2;

                check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__CastY_4 == check_hlds__resolve_unify_functor__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__resolve_unify_functor__CastX_5 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__1_1;
                MR_Integer check_hlds__resolve_unify_functor__CastY_6 = (MR_Integer) check_hlds__resolve_unify_functor__HeadVar__2_2;

                check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__CastY_6 == check_hlds__resolve_unify_functor__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__resolve_unify_functor__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__resolve_unify_functor__V_8_8;

            check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 0)));
                {
                  check_hlds__resolve_unify_functor__succeeded = parse_tree__error_util____Unify____error_spec_0_0(check_hlds__resolve_unify_functor__V_7_7, check_hlds__resolve_unify_functor__V_8_8);
                }
              }
          }
          break;
      }
    return check_hlds__resolve_unify_functor__succeeded;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_6_p_0(
  MR_Word check_hlds__resolve_unify_functor__Type_7,
  MR_Word * check_hlds__resolve_unify_functor__Var_8,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_11,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_12,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_13,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_14)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;

    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__resolve_unify_functor__Var_8, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_13, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_14);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__resolve_unify_functor__Var_8, check_hlds__resolve_unify_functor__Type_7, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_11, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_12);
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_6_p_0(
  MR_Word check_hlds__resolve_unify_functor__Types_7,
  MR_Word * check_hlds__resolve_unify_functor__Vars_8,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_12,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_13,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_14,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_15)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Integer check_hlds__resolve_unify_functor__NumVars_11;

    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__resolve_unify_functor__Types_7, &check_hlds__resolve_unify_functor__NumVars_11);
    }
    {
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__resolve_unify_functor__NumVars_11, check_hlds__resolve_unify_functor__Vars_8, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_14, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_15);
    }
    {
      hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(*check_hlds__resolve_unify_functor__Vars_8, check_hlds__resolve_unify_functor__Types_7, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_12, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_13);
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(
  MR_Word check_hlds__resolve_unify_functor__Var_8,
  MR_Word check_hlds__resolve_unify_functor__RHS_9,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_10,
  MR_Word check_hlds__resolve_unify_functor__RestrictNonLocals_11,
  MR_Word check_hlds__resolve_unify_functor__VarsList_12,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_13,
  MR_Word * check_hlds__resolve_unify_functor__Goal_14)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_26_26;
    MR_Word check_hlds__resolve_unify_functor__Context_15;
    MR_Word check_hlds__resolve_unify_functor__GoalId_16;
    MR_Word check_hlds__resolve_unify_functor__UnifyMainContext_17;
    MR_Word check_hlds__resolve_unify_functor__UnifySubContext_18;
    MR_Word check_hlds__resolve_unify_functor__Goal0_19;
    MR_Word check_hlds__resolve_unify_functor__GoalExpr0_20;
    MR_Word check_hlds__resolve_unify_functor__GoalInfo0_21;
    MR_Word check_hlds__resolve_unify_functor__NonLocals1_22;
    MR_Word check_hlds__resolve_unify_functor__NonLocals_23;
    MR_Word check_hlds__resolve_unify_functor__GoalInfo1_24;
    MR_Word check_hlds__resolve_unify_functor__GoalInfo_25;

    {
      check_hlds__resolve_unify_functor__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_10);
    }
    {
      check_hlds__resolve_unify_functor__GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_10);
    }
    check_hlds__resolve_unify_functor__UnifyMainContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__UnifyContext_13, (MR_Integer) 0)));
    check_hlds__resolve_unify_functor__UnifySubContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__UnifyContext_13, (MR_Integer) 1)));
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__resolve_unify_functor__Var_8, check_hlds__resolve_unify_functor__RHS_9, check_hlds__resolve_unify_functor__Context_15, check_hlds__resolve_unify_functor__UnifyMainContext_17, check_hlds__resolve_unify_functor__UnifySubContext_18, &check_hlds__resolve_unify_functor__Goal0_19);
    }
    check_hlds__resolve_unify_functor__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Goal0_19, (MR_Integer) 0)));
    check_hlds__resolve_unify_functor__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Goal0_19, (MR_Integer) 1)));
    check_hlds__resolve_unify_functor__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__resolve_unify_functor__TypeCtorInfo_26_26, check_hlds__resolve_unify_functor__VarsList_12, &check_hlds__resolve_unify_functor__NonLocals1_22);
    }
    {
      parse_tree__set_of_var__intersect_3_p_0(check_hlds__resolve_unify_functor__TypeCtorInfo_26_26, check_hlds__resolve_unify_functor__RestrictNonLocals_11, check_hlds__resolve_unify_functor__NonLocals1_22, &check_hlds__resolve_unify_functor__NonLocals_23);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__resolve_unify_functor__NonLocals_23, check_hlds__resolve_unify_functor__GoalInfo0_21, &check_hlds__resolve_unify_functor__GoalInfo1_24);
    }
    {
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(check_hlds__resolve_unify_functor__GoalId_16, check_hlds__resolve_unify_functor__GoalInfo1_24, &check_hlds__resolve_unify_functor__GoalInfo_25);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__resolve_unify_functor__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalExpr0_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo_25));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(
  MR_Word check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_String check_hlds__resolve_unify_functor__UnqualFieldName_7,
  MR_Integer check_hlds__resolve_unify_functor__CurFieldNumber_8,
  MR_Integer * check_hlds__resolve_unify_functor__NamedFieldNumber_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__resolve_unify_functor__CtorArg_5;
        MR_Word check_hlds__resolve_unify_functor__CtorArgs_6;
        MR_Word check_hlds__resolve_unify_functor__ArgFieldName_10;
        MR_Word check_hlds__resolve_unify_functor__V_12_12;
        MR_Word check_hlds__resolve_unify_functor__V_13_13;
        MR_String check_hlds__resolve_unify_functor__V_19_19;
        MR_Word check_hlds__resolve_unify_functor__V_16_16;
        MR_Word check_hlds__resolve_unify_functor__V_17_17;
        MR_Word check_hlds__resolve_unify_functor__V_18_18;
        MR_Word check_hlds__resolve_unify_functor__V_11_11;

        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__CtorArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__resolve_unify_functor__CtorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__resolve_unify_functor__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__CtorArg_5, (MR_Integer) 0)));
            check_hlds__resolve_unify_functor__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__CtorArg_5, (MR_Integer) 1)));
            check_hlds__resolve_unify_functor__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__CtorArg_5, (MR_Integer) 2)));
            check_hlds__resolve_unify_functor__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__CtorArg_5, (MR_Integer) 3)));
            check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__V_12_12)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_12_12, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__ArgFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_13_13, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_13_13, (MR_Integer) 1)));
                {
                  check_hlds__resolve_unify_functor__V_19_19 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__resolve_unify_functor__ArgFieldName_10);
                }
                check_hlds__resolve_unify_functor__succeeded = (strcmp(check_hlds__resolve_unify_functor__UnqualFieldName_7, check_hlds__resolve_unify_functor__V_19_19) == 0);
              }
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                *check_hlds__resolve_unify_functor__NamedFieldNumber_9 = check_hlds__resolve_unify_functor__CurFieldNumber_8;
                check_hlds__resolve_unify_functor__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer check_hlds__resolve_unify_functor__V_14_14 = (check_hlds__resolve_unify_functor__CurFieldNumber_8 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__resolve_unify_functor__HeadVar__1__tmp_copy_1 = check_hlds__resolve_unify_functor__CtorArgs_6;
                  MR_Integer check_hlds__resolve_unify_functor__CurFieldNumber__tmp_copy_8 = check_hlds__resolve_unify_functor__V_14_14;

                  check_hlds__resolve_unify_functor__CurFieldNumber_8 = check_hlds__resolve_unify_functor__CurFieldNumber__tmp_copy_8;
                  check_hlds__resolve_unify_functor__HeadVar__1_1 = check_hlds__resolve_unify_functor__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__resolve_unify_functor__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__TypeCtor_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2,
  MR_String check_hlds__resolve_unify_functor__UnqualFieldName_3,
  MR_Word * check_hlds__resolve_unify_functor__ConsId_4,
  MR_Integer * check_hlds__resolve_unify_functor__FieldNumber_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__resolve_unify_functor__succeeded;

        if ((check_hlds__resolve_unify_functor__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field_loop\'/5", (MR_String) "can\'t find field");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__resolve_unify_functor__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__resolve_unify_functor__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__resolve_unify_functor__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 2)));
            MR_Word check_hlds__resolve_unify_functor__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 3)));
            MR_Integer check_hlds__resolve_unify_functor__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 4)));
            MR_Word check_hlds__resolve_unify_functor__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 0)));
            MR_Word check_hlds__resolve_unify_functor__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 1)));
            MR_Word check_hlds__resolve_unify_functor___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Ctor_14, (MR_Integer) 5)));
            MR_Integer check_hlds__resolve_unify_functor__FieldNumberPrime_25;

            {
              check_hlds__resolve_unify_functor__succeeded = check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(check_hlds__resolve_unify_functor__CtorArgs_22, check_hlds__resolve_unify_functor__UnqualFieldName_3, (MR_Integer) 1, &check_hlds__resolve_unify_functor__FieldNumberPrime_25);
            }
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__resolve_unify_functor__ConsId_4 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__SymName_21));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__Arity_23));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__TypeCtor_1));
                }
                *check_hlds__resolve_unify_functor__FieldNumber_5 = check_hlds__resolve_unify_functor__FieldNumberPrime_25;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__resolve_unify_functor__HeadVar__2__tmp_copy_2 = check_hlds__resolve_unify_functor__Ctors_15;

                  check_hlds__resolve_unify_functor__HeadVar__2_2 = check_hlds__resolve_unify_functor__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_6,
  MR_Word check_hlds__resolve_unify_functor__TermType_7,
  MR_Word check_hlds__resolve_unify_functor__FieldSymName_8,
  MR_Word * check_hlds__resolve_unify_functor__ConsId_9,
  MR_Integer * check_hlds__resolve_unify_functor__FieldNumber_10)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TermTypeCtor_11;
    MR_Word check_hlds__resolve_unify_functor__TypeTable_12;
    MR_Word check_hlds__resolve_unify_functor__TermTypeDefn_13;
    MR_Word check_hlds__resolve_unify_functor__TermTypeBody_14;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__resolve_unify_functor__TermType_7, &check_hlds__resolve_unify_functor__TermTypeCtor_11);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_6, &check_hlds__resolve_unify_functor__TypeTable_12);
    }
    {
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__resolve_unify_functor__TypeTable_12, check_hlds__resolve_unify_functor__TermTypeCtor_11, &check_hlds__resolve_unify_functor__TermTypeDefn_13);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__resolve_unify_functor__TermTypeDefn_13, &check_hlds__resolve_unify_functor__TermTypeBody_14);
    }
    switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__TermTypeBody_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__resolve_unify_functor__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 0)));
          MR_String check_hlds__resolve_unify_functor__FieldName_24;
          MR_Word check_hlds__resolve_unify_functor__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 1)));
          MR_Word check_hlds__resolve_unify_functor__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 2)));
          MR_Word check_hlds__resolve_unify_functor__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 3)));
          MR_Word check_hlds__resolve_unify_functor__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 4)));
          MR_Word check_hlds__resolve_unify_functor__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 5)));
          MR_Word check_hlds__resolve_unify_functor__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__resolve_unify_functor__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__resolve_unify_functor__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_14, (MR_Integer) 7)));

          {
            check_hlds__resolve_unify_functor__FieldName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__resolve_unify_functor__FieldSymName_8);
          }
          {
            check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(check_hlds__resolve_unify_functor__TermTypeCtor_11, check_hlds__resolve_unify_functor__Ctors_15, check_hlds__resolve_unify_functor__FieldName_24, check_hlds__resolve_unify_functor__ConsId_9, check_hlds__resolve_unify_functor__FieldNumber_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__split_list_at_index_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__TypeInfo_for_T_20,
  MR_Integer check_hlds__resolve_unify_functor__Index_6,
  MR_Word check_hlds__resolve_unify_functor__List_7,
  MR_Word * check_hlds__resolve_unify_functor__Before_8,
  MR_Box * check_hlds__resolve_unify_functor__At_9,
  MR_Word * check_hlds__resolve_unify_functor__After_10)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__BeforePrime_11;
    MR_Box check_hlds__resolve_unify_functor__AtPrime_13;
    MR_Word check_hlds__resolve_unify_functor__AfterPrime_14;
    MR_Word check_hlds__resolve_unify_functor__AtAndAfter_12;
    MR_Integer check_hlds__resolve_unify_functor__V_15_15 = (check_hlds__resolve_unify_functor__Index_6 - (MR_Integer) 1);

    {
      check_hlds__resolve_unify_functor__succeeded = mercury__list__split_list_4_p_0(check_hlds__resolve_unify_functor__TypeInfo_for_T_20, check_hlds__resolve_unify_functor__V_15_15, check_hlds__resolve_unify_functor__List_7, &check_hlds__resolve_unify_functor__BeforePrime_11, &check_hlds__resolve_unify_functor__AtAndAfter_12);
    }
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__AtAndAfter_12)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__AtPrime_13 = (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__AtAndAfter_12, (MR_Integer) 0));
            check_hlds__resolve_unify_functor__AfterPrime_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__AtAndAfter_12, (MR_Integer) 1)));
          }
      }
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        *check_hlds__resolve_unify_functor__Before_8 = check_hlds__resolve_unify_functor__BeforePrime_11;
        *check_hlds__resolve_unify_functor__At_9 = check_hlds__resolve_unify_functor__AtPrime_13;
        *check_hlds__resolve_unify_functor__After_10 = check_hlds__resolve_unify_functor__AfterPrime_14;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.split_list_at_index\'/5", (MR_String) "split_list_at_index");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__HeadVar__1_1,
  MR_Word check_hlds__resolve_unify_functor__HeadVar__2_2,
  MR_Word check_hlds__resolve_unify_functor__TVars_3,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0_4,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__resolve_unify_functor__succeeded;

        if ((check_hlds__resolve_unify_functor__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                *check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_5 = check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0_4;
                check_hlds__resolve_unify_functor__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__resolve_unify_functor__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__resolve_unify_functor__As_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__resolve_unify_functor__B_12;
            MR_Word check_hlds__resolve_unify_functor__Bs_13;
            MR_Word check_hlds__resolve_unify_functor__ArgTypesA_17;
            MR_Word check_hlds__resolve_unify_functor__ArgTypesB_19;
            MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_22_22;
            MR_Word check_hlds__resolve_unify_functor___ClassNameA_16;
            MR_Word check_hlds__resolve_unify_functor___ClassNameB_18;

            check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__Bs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__resolve_unify_functor___ClassNameA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__A_10, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__ArgTypesA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__A_10, (MR_Integer) 1)));
                check_hlds__resolve_unify_functor___ClassNameB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__B_12, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__ArgTypesB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__B_12, (MR_Integer) 1)));
                {
                  check_hlds__resolve_unify_functor__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__resolve_unify_functor__ArgTypesA_17, check_hlds__resolve_unify_functor__ArgTypesB_19, check_hlds__resolve_unify_functor__TVars_3, check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0_4, &check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_22_22);
                }
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__resolve_unify_functor__HeadVar__1__tmp_copy_1 = check_hlds__resolve_unify_functor__As_11;
                      MR_Word check_hlds__resolve_unify_functor__HeadVar__2__tmp_copy_2 = check_hlds__resolve_unify_functor__Bs_13;
                      MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_22_22;

                      check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0_4 = check_hlds__resolve_unify_functor__STATE_VARIABLE_Subst_0__tmp_copy_4;
                      check_hlds__resolve_unify_functor__HeadVar__2_2 = check_hlds__resolve_unify_functor__HeadVar__2__tmp_copy_2;
                      check_hlds__resolve_unify_functor__HeadVar__1_1 = check_hlds__resolve_unify_functor__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__resolve_unify_functor__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1)
{
  {
    MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2;
    MR_Box check_hlds__resolve_unify_functor__closure = check_hlds__resolve_unify_functor__closure_arg;
    MR_Word check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_52;

    {
      check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_52 = check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__470__1_1_f_0(((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_1));
    }
    check_hlds__resolve_unify_functor__wrapper_arg_2 = ((MR_Box) (check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_52));
    return check_hlds__resolve_unify_functor__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_9,
  MR_Word check_hlds__resolve_unify_functor__GoalId_10,
  MR_Word check_hlds__resolve_unify_functor__ConsId_11,
  MR_Word check_hlds__resolve_unify_functor__TermType_12,
  MR_Word * check_hlds__resolve_unify_functor__ActualArgTypes_13,
  MR_Word * check_hlds__resolve_unify_functor__ActualExistQVars_14,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_48,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_49)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_63_63;
    MR_Word check_hlds__resolve_unify_functor__TypeCtor_16;
    MR_Word check_hlds__resolve_unify_functor__ConsDefn_17;
    MR_Word check_hlds__resolve_unify_functor__TypeParams_20;
    MR_Word check_hlds__resolve_unify_functor__ConsExistQVars_22;
    MR_Word check_hlds__resolve_unify_functor__ConsConstraints_23;
    MR_Word check_hlds__resolve_unify_functor__ConsArgs_24;
    MR_Word check_hlds__resolve_unify_functor__ConsArgTypes_26;
    MR_Word check_hlds__resolve_unify_functor__ActualArgTypes0_28;
    MR_Word check_hlds__resolve_unify_functor__TypeArgs_46;
    MR_Word check_hlds__resolve_unify_functor__UnivTSubst_47;
    MR_Word check_hlds__resolve_unify_functor__V_18_18;
    MR_Word check_hlds__resolve_unify_functor__V_19_19;
    MR_Word check_hlds__resolve_unify_functor__V_21_21;
    MR_Word check_hlds__resolve_unify_functor__V_25_25;
    MR_Word check_hlds__resolve_unify_functor__V_45_45;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__resolve_unify_functor__TermType_12, &check_hlds__resolve_unify_functor__TypeCtor_16);
    }
    {
      check_hlds__type_util__get_cons_defn_det_4_p_0(check_hlds__resolve_unify_functor__ModuleInfo_9, check_hlds__resolve_unify_functor__TypeCtor_16, check_hlds__resolve_unify_functor__ConsId_11, &check_hlds__resolve_unify_functor__ConsDefn_17);
    }
    check_hlds__resolve_unify_functor__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 0)));
    check_hlds__resolve_unify_functor__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 1)));
    check_hlds__resolve_unify_functor__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 2)));
    check_hlds__resolve_unify_functor__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 3)));
    check_hlds__resolve_unify_functor__ConsExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 4)));
    check_hlds__resolve_unify_functor__ConsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 5)));
    check_hlds__resolve_unify_functor__ConsArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 6)));
    check_hlds__resolve_unify_functor__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_17, (MR_Integer) 7)));
    check_hlds__resolve_unify_functor__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      check_hlds__resolve_unify_functor__ConsArgTypes_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__resolve_unify_functor__TypeCtorInfo_63_63, (MR_Word) &check_hlds__resolve_unify_functor_scalar_common_5[1], check_hlds__resolve_unify_functor__ConsArgs_24);
    }
    if ((check_hlds__resolve_unify_functor__ConsExistQVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__resolve_unify_functor__ActualArgTypes0_28 = check_hlds__resolve_unify_functor__ConsArgTypes_26;
        *check_hlds__resolve_unify_functor__ActualExistQVars_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_49 = check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_48;
      }
    else
      {
        MR_Word check_hlds__resolve_unify_functor__TypeInfo_64_64 = (MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[1];
        MR_Integer check_hlds__resolve_unify_functor__NumExistQVars_31;
        MR_Word check_hlds__resolve_unify_functor__TVarSet0_32;
        MR_Word check_hlds__resolve_unify_functor__ParentExistQVars_33;
        MR_Word check_hlds__resolve_unify_functor__TVarSet_34;
        MR_Word check_hlds__resolve_unify_functor__ConsToParentRenaming_35;
        MR_Word check_hlds__resolve_unify_functor__ParentArgTypes_36;
        MR_Word check_hlds__resolve_unify_functor__ParentConstraints_37;
        MR_Word check_hlds__resolve_unify_functor__ConstraintMap_38;
        MR_Integer check_hlds__resolve_unify_functor__NumConstraints_39;
        MR_Word check_hlds__resolve_unify_functor__ActualConstraints_40;
        MR_Word check_hlds__resolve_unify_functor__ExistTSubst_41;
        MR_Word check_hlds__resolve_unify_functor__KindMap_42;
        MR_Word check_hlds__resolve_unify_functor__ActualExistQVarTypes_43;
        MR_Word check_hlds__resolve_unify_functor__TVarsB_72;
        MR_Word check_hlds__resolve_unify_functor__Subst0_73;
        MR_Word check_hlds__resolve_unify_functor__Subst1_74;
        MR_Word check_hlds__resolve_unify_functor__ActualExistQVars0_44;

        {
          mercury__list__length_2_p_0(check_hlds__resolve_unify_functor__TypeInfo_64_64, check_hlds__resolve_unify_functor__ConsExistQVars_22, &check_hlds__resolve_unify_functor__NumExistQVars_31);
        }
        {
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_48, &check_hlds__resolve_unify_functor__TVarSet0_32);
        }
        {
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__resolve_unify_functor__NumExistQVars_31, &check_hlds__resolve_unify_functor__ParentExistQVars_33, check_hlds__resolve_unify_functor__TVarSet0_32, &check_hlds__resolve_unify_functor__TVarSet_34);
        }
        {
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__resolve_unify_functor__TVarSet_34, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_48, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_49);
        }
        {
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__resolve_unify_functor__TypeInfo_64_64, check_hlds__resolve_unify_functor__TypeInfo_64_64, check_hlds__resolve_unify_functor__ConsExistQVars_22, check_hlds__resolve_unify_functor__ParentExistQVars_33, &check_hlds__resolve_unify_functor__ConsToParentRenaming_35);
        }
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__resolve_unify_functor__ConsToParentRenaming_35, check_hlds__resolve_unify_functor__ConsArgTypes_26, &check_hlds__resolve_unify_functor__ParentArgTypes_36);
        }
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__resolve_unify_functor__ConsToParentRenaming_35, check_hlds__resolve_unify_functor__ConsConstraints_23, &check_hlds__resolve_unify_functor__ParentConstraints_37);
        }
        {
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(*check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_49, &check_hlds__resolve_unify_functor__ConstraintMap_38);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__resolve_unify_functor__ConsConstraints_23, &check_hlds__resolve_unify_functor__NumConstraints_39);
        }
        {
          hlds__hlds_data__lookup_hlds_constraint_list_5_p_0(check_hlds__resolve_unify_functor__ConstraintMap_38, (MR_Integer) 1, check_hlds__resolve_unify_functor__GoalId_10, check_hlds__resolve_unify_functor__NumConstraints_39, &check_hlds__resolve_unify_functor__ActualConstraints_40);
        }
        {
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__resolve_unify_functor__ActualConstraints_40, &check_hlds__resolve_unify_functor__TVarsB_72);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__resolve_unify_functor__Subst0_73);
        }
        {
          check_hlds__resolve_unify_functor__succeeded = check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(check_hlds__resolve_unify_functor__ParentConstraints_37, check_hlds__resolve_unify_functor__ActualConstraints_40, check_hlds__resolve_unify_functor__TVarsB_72, check_hlds__resolve_unify_functor__Subst0_73, &check_hlds__resolve_unify_functor__Subst1_74);
        }
        if (check_hlds__resolve_unify_functor__succeeded)
          check_hlds__resolve_unify_functor__ExistTSubst_41 = check_hlds__resolve_unify_functor__Subst1_74;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.constraint_list_subsumes_det\'/3", (MR_String) "failed");
              return;
            }
          }
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__resolve_unify_functor__ExistTSubst_41, check_hlds__resolve_unify_functor__ParentArgTypes_36, &check_hlds__resolve_unify_functor__ActualArgTypes0_28);
        }
        {
          mercury__map__init_1_p_0(check_hlds__resolve_unify_functor__TypeInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &check_hlds__resolve_unify_functor__KindMap_42);
        }
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(check_hlds__resolve_unify_functor__KindMap_42, check_hlds__resolve_unify_functor__ExistTSubst_41, check_hlds__resolve_unify_functor__ParentExistQVars_33, &check_hlds__resolve_unify_functor__ActualExistQVarTypes_43);
        }
        {
          check_hlds__resolve_unify_functor__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(check_hlds__resolve_unify_functor__ActualExistQVarTypes_43, &check_hlds__resolve_unify_functor__ActualExistQVars0_44);
        }
        if (check_hlds__resolve_unify_functor__succeeded)
          *check_hlds__resolve_unify_functor__ActualExistQVars_14 = check_hlds__resolve_unify_functor__ActualExistQVars0_44;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
              return;
            }
          }
      }
    {
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__resolve_unify_functor__TermType_12, &check_hlds__resolve_unify_functor__V_45_45, &check_hlds__resolve_unify_functor__TypeArgs_46);
    }
    {
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[1], check_hlds__resolve_unify_functor__TypeCtorInfo_63_63, check_hlds__resolve_unify_functor__TypeParams_20, check_hlds__resolve_unify_functor__TypeArgs_46, &check_hlds__resolve_unify_functor__UnivTSubst_47);
    }
    {
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__resolve_unify_functor__UnivTSubst_47, check_hlds__resolve_unify_functor__ActualArgTypes0_28, check_hlds__resolve_unify_functor__ActualArgTypes_13);
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_14_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_15,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_55,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_56,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_57,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_58,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_59,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_60,
  MR_Word check_hlds__resolve_unify_functor__FieldName_19,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_20,
  MR_Word check_hlds__resolve_unify_functor__FieldVar_21,
  MR_Word check_hlds__resolve_unify_functor__TermInputVar_22,
  MR_Word check_hlds__resolve_unify_functor__TermOutputVar_23,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_24,
  MR_Word * check_hlds__resolve_unify_functor__Goal_25)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TypeInfo_86_86;
    MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_87_87;
    MR_Word check_hlds__resolve_unify_functor__TermType_26;
    MR_Word check_hlds__resolve_unify_functor__ConsId0_27;
    MR_Integer check_hlds__resolve_unify_functor__FieldNumber_28;
    MR_Word check_hlds__resolve_unify_functor__GoalId_29;
    MR_Word check_hlds__resolve_unify_functor__ArgTypes_30;
    MR_Word check_hlds__resolve_unify_functor__ExistQVars_31;
    MR_Word check_hlds__resolve_unify_functor__TypesBeforeField_32;
    MR_Word check_hlds__resolve_unify_functor__TermFieldType_33;
    MR_Word check_hlds__resolve_unify_functor__TypesAfterField_34;
    MR_Word check_hlds__resolve_unify_functor__VarsBeforeField_35;
    MR_Word check_hlds__resolve_unify_functor__SingletonFieldVar_36;
    MR_Word check_hlds__resolve_unify_functor__VarsAfterField_37;
    MR_Word check_hlds__resolve_unify_functor__DeconstructArgs_38;
    MR_Word check_hlds__resolve_unify_functor__OldNonLocals_39;
    MR_Word check_hlds__resolve_unify_functor__NonLocalArgs_40;
    MR_Word check_hlds__resolve_unify_functor__DeconstructRestrictNonLocals_41;
    MR_Word check_hlds__resolve_unify_functor__DeconstructGoal_42;
    MR_Word check_hlds__resolve_unify_functor__ConstructArgs_43;
    MR_Word check_hlds__resolve_unify_functor__ConstructRestrictNonLocals_44;
    MR_Word check_hlds__resolve_unify_functor__ConsId_45;
    MR_Word check_hlds__resolve_unify_functor__ConstructGoal_52;
    MR_Word check_hlds__resolve_unify_functor__ConjExpr_53;
    MR_Word check_hlds__resolve_unify_functor__Conj_54;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_62_62;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_63_63;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_64_64;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_65_65;
    MR_Word check_hlds__resolve_unify_functor__V_68_68;
    MR_Word check_hlds__resolve_unify_functor__V_69_69;
    MR_Word check_hlds__resolve_unify_functor__V_70_70;
    MR_Word check_hlds__resolve_unify_functor__V_72_72;
    MR_Word check_hlds__resolve_unify_functor__V_76_76;
    MR_Word check_hlds__resolve_unify_functor__V_77_77;
    MR_Word check_hlds__resolve_unify_functor__V_80_80;
    MR_Word check_hlds__resolve_unify_functor__V_81_81;
    MR_Box check_hlds__resolve_unify_functor__conv0_TermFieldType_33;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_57, check_hlds__resolve_unify_functor__TermInputVar_22, &check_hlds__resolve_unify_functor__TermType_26);
    }
    {
      check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(check_hlds__resolve_unify_functor__ModuleInfo_15, check_hlds__resolve_unify_functor__TermType_26, check_hlds__resolve_unify_functor__FieldName_19, &check_hlds__resolve_unify_functor__ConsId0_27, &check_hlds__resolve_unify_functor__FieldNumber_28);
    }
    {
      check_hlds__resolve_unify_functor__GoalId_29 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_24);
    }
    {
      check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__resolve_unify_functor__ModuleInfo_15, check_hlds__resolve_unify_functor__GoalId_29, check_hlds__resolve_unify_functor__ConsId0_27, check_hlds__resolve_unify_functor__TermType_26, &check_hlds__resolve_unify_functor__ArgTypes_30, &check_hlds__resolve_unify_functor__ExistQVars_31, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_55, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_56);
    }
    {
      check_hlds__resolve_unify_functor__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__resolve_unify_functor__FieldNumber_28, check_hlds__resolve_unify_functor__ArgTypes_30, &check_hlds__resolve_unify_functor__TypesBeforeField_32, &check_hlds__resolve_unify_functor__conv0_TermFieldType_33, &check_hlds__resolve_unify_functor__TypesAfterField_34);
    }
    check_hlds__resolve_unify_functor__TermFieldType_33 = ((MR_Word) check_hlds__resolve_unify_functor__conv0_TermFieldType_33);
    {
      check_hlds__resolve_unify_functor__make_new_vars_6_p_0(check_hlds__resolve_unify_functor__TypesBeforeField_32, &check_hlds__resolve_unify_functor__VarsBeforeField_35, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_57, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_62_62, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_59, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_63_63);
    }
    {
      check_hlds__resolve_unify_functor__make_new_var_6_p_0(check_hlds__resolve_unify_functor__TermFieldType_33, &check_hlds__resolve_unify_functor__SingletonFieldVar_36, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_62_62, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_64_64, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_63_63, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_65_65);
    }
    {
      check_hlds__resolve_unify_functor__make_new_vars_6_p_0(check_hlds__resolve_unify_functor__TypesAfterField_34, &check_hlds__resolve_unify_functor__VarsAfterField_37, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_64_64, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_58, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_65_65, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_60);
    }
    check_hlds__resolve_unify_functor__TypeInfo_86_86 = (MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[0];
    {
      check_hlds__resolve_unify_functor__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_68_68, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__SingletonFieldVar_36));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_68_68, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__VarsAfterField_37));
    }
    {
      check_hlds__resolve_unify_functor__DeconstructArgs_38 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeInfo_86_86, check_hlds__resolve_unify_functor__VarsBeforeField_35, check_hlds__resolve_unify_functor__V_68_68);
    }
    {
      check_hlds__resolve_unify_functor__OldNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_24);
    }
    {
      check_hlds__resolve_unify_functor__NonLocalArgs_40 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeInfo_86_86, check_hlds__resolve_unify_functor__VarsBeforeField_35, check_hlds__resolve_unify_functor__VarsAfterField_37);
    }
    check_hlds__resolve_unify_functor__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__resolve_unify_functor__TypeCtorInfo_87_87, check_hlds__resolve_unify_functor__NonLocalArgs_40, check_hlds__resolve_unify_functor__OldNonLocals_39, &check_hlds__resolve_unify_functor__DeconstructRestrictNonLocals_41);
    }
    {
      check_hlds__resolve_unify_functor__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_69_69, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId0_27));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_69_69, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_69_69, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__DeconstructArgs_38));
    }
    {
      check_hlds__resolve_unify_functor__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_70_70, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__TermInputVar_22));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_70_70, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__DeconstructArgs_38));
    }
    {
      check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__resolve_unify_functor__TermInputVar_22, check_hlds__resolve_unify_functor__V_69_69, check_hlds__resolve_unify_functor__OldGoalInfo_24, check_hlds__resolve_unify_functor__DeconstructRestrictNonLocals_41, check_hlds__resolve_unify_functor__V_70_70, check_hlds__resolve_unify_functor__UnifyContext_20, &check_hlds__resolve_unify_functor__DeconstructGoal_42);
    }
    {
      check_hlds__resolve_unify_functor__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_72_72, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FieldVar_21));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_72_72, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__VarsAfterField_37));
    }
    {
      check_hlds__resolve_unify_functor__ConstructArgs_43 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeInfo_86_86, check_hlds__resolve_unify_functor__VarsBeforeField_35, check_hlds__resolve_unify_functor__V_72_72);
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__resolve_unify_functor__TypeCtorInfo_87_87, check_hlds__resolve_unify_functor__NonLocalArgs_40, check_hlds__resolve_unify_functor__OldNonLocals_39, &check_hlds__resolve_unify_functor__ConstructRestrictNonLocals_44);
    }
    if ((check_hlds__resolve_unify_functor__ExistQVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__resolve_unify_functor__ConsId_45 = check_hlds__resolve_unify_functor__ConsId0_27;
    else
      {
        MR_Word check_hlds__resolve_unify_functor__ConsName0_48;
        MR_Integer check_hlds__resolve_unify_functor__ConsArity_49;
        MR_Word check_hlds__resolve_unify_functor__TypeCtor_50;

        check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__ConsName0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_27, (MR_Integer) 1)));
            check_hlds__resolve_unify_functor__ConsArity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_27, (MR_Integer) 2)));
            check_hlds__resolve_unify_functor__TypeCtor_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_27, (MR_Integer) 3)));
            {
              MR_Word check_hlds__resolve_unify_functor__ConsName_51;

              {
                parse_tree__prog_type__add_new_prefix_2_p_0(check_hlds__resolve_unify_functor__ConsName0_48, &check_hlds__resolve_unify_functor__ConsName_51);
              }
              {
                check_hlds__resolve_unify_functor__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_45, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsName_51));
                MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_45, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsArity_49));
                MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_45, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__TypeCtor_50));
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.translate_set_function\'/14", (MR_String) "invalid cons_id");
              return;
            }
          }
      }
    {
      check_hlds__resolve_unify_functor__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_76_76, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId_45));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_76_76, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ConstructArgs_43));
    }
    {
      check_hlds__resolve_unify_functor__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_77_77, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__TermOutputVar_23));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_77_77, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__ConstructArgs_43));
    }
    {
      check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__resolve_unify_functor__TermOutputVar_23, check_hlds__resolve_unify_functor__V_76_76, check_hlds__resolve_unify_functor__OldGoalInfo_24, check_hlds__resolve_unify_functor__ConstructRestrictNonLocals_44, check_hlds__resolve_unify_functor__V_77_77, check_hlds__resolve_unify_functor__UnifyContext_20, &check_hlds__resolve_unify_functor__ConstructGoal_52);
    }
    {
      check_hlds__resolve_unify_functor__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_81_81, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConstructGoal_52));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__resolve_unify_functor__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_80_80, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__DeconstructGoal_42));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_80_80, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_81_81));
    }
    {
      check_hlds__resolve_unify_functor__ConjExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConjExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConjExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConjExpr_53, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__V_80_80));
    }
    {
      check_hlds__resolve_unify_functor__Conj_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Conj_54, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConjExpr_53));
      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Conj_54, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__OldGoalInfo_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__resolve_unify_functor__Goal_25 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[7])));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__Conj_54));
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_13_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_14,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_45,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_46,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_47,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_48,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_49,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_50,
  MR_Word check_hlds__resolve_unify_functor__FieldName_18,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_19,
  MR_Word check_hlds__resolve_unify_functor__FieldVar_20,
  MR_Word check_hlds__resolve_unify_functor__TermInputVar_21,
  MR_Word check_hlds__resolve_unify_functor__OldGoalInfo_22,
  MR_Word * check_hlds__resolve_unify_functor__GoalExpr_23)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TermType_24;
    MR_Word check_hlds__resolve_unify_functor__ConsId_25;
    MR_Integer check_hlds__resolve_unify_functor__FieldNumber_26;
    MR_Word check_hlds__resolve_unify_functor__GoalId_27;
    MR_Word check_hlds__resolve_unify_functor__ArgTypes0_28;
    MR_Word check_hlds__resolve_unify_functor__ExistQVars_29;
    MR_Word check_hlds__resolve_unify_functor__ArgTypes_35;
    MR_Word check_hlds__resolve_unify_functor__TypesBeforeField_36;
    MR_Word check_hlds__resolve_unify_functor__TypesAfterField_38;
    MR_Word check_hlds__resolve_unify_functor__VarsBeforeField_39;
    MR_Word check_hlds__resolve_unify_functor__VarsAfterField_40;
    MR_Word check_hlds__resolve_unify_functor__ArgVars_41;
    MR_Word check_hlds__resolve_unify_functor__RestrictNonLocals_42;
    MR_Word check_hlds__resolve_unify_functor__FunctorGoal_43;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_52_52;
    MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_53_53;
    MR_Word check_hlds__resolve_unify_functor__V_56_56;
    MR_Word check_hlds__resolve_unify_functor__V_57_57;
    MR_Word check_hlds__resolve_unify_functor__V_58_58;
    MR_Word check_hlds__resolve_unify_functor__V_60_60;
    MR_Word check_hlds__resolve_unify_functor__TermTypeCtor_70;
    MR_Word check_hlds__resolve_unify_functor__TypeTable_71;
    MR_Word check_hlds__resolve_unify_functor__TermTypeDefn_72;
    MR_Word check_hlds__resolve_unify_functor__TermTypeBody_73;
    MR_Word check_hlds__resolve_unify_functor__V_37_37;
    MR_Box check_hlds__resolve_unify_functor__conv1_V_37_37;
    MR_Word check_hlds__resolve_unify_functor__V_44_44;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_47, check_hlds__resolve_unify_functor__TermInputVar_21, &check_hlds__resolve_unify_functor__TermType_24);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__resolve_unify_functor__TermType_24, &check_hlds__resolve_unify_functor__TermTypeCtor_70);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_14, &check_hlds__resolve_unify_functor__TypeTable_71);
    }
    {
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__resolve_unify_functor__TypeTable_71, check_hlds__resolve_unify_functor__TermTypeCtor_70, &check_hlds__resolve_unify_functor__TermTypeDefn_72);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__resolve_unify_functor__TermTypeDefn_72, &check_hlds__resolve_unify_functor__TermTypeBody_73);
    }
    switch (MR_tag((MR_Word) check_hlds__resolve_unify_functor__TermTypeBody_73)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__resolve_unify_functor__Ctors_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 0)));
          MR_String check_hlds__resolve_unify_functor__FieldName_83;
          MR_Word check_hlds__resolve_unify_functor__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 1)));
          MR_Word check_hlds__resolve_unify_functor__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 2)));
          MR_Word check_hlds__resolve_unify_functor__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 3)));
          MR_Word check_hlds__resolve_unify_functor__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 4)));
          MR_Word check_hlds__resolve_unify_functor__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 5)));
          MR_Word check_hlds__resolve_unify_functor__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__resolve_unify_functor__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__resolve_unify_functor__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TermTypeBody_73, (MR_Integer) 7)));

          {
            check_hlds__resolve_unify_functor__FieldName_83 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__resolve_unify_functor__FieldName_18);
          }
          {
            check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(check_hlds__resolve_unify_functor__TermTypeCtor_70, check_hlds__resolve_unify_functor__Ctors_74, check_hlds__resolve_unify_functor__FieldName_83, &check_hlds__resolve_unify_functor__ConsId_25, &check_hlds__resolve_unify_functor__FieldNumber_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
    }
    {
      check_hlds__resolve_unify_functor__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_22);
    }
    {
      check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__resolve_unify_functor__ModuleInfo_14, check_hlds__resolve_unify_functor__GoalId_27, check_hlds__resolve_unify_functor__ConsId_25, check_hlds__resolve_unify_functor__TermType_24, &check_hlds__resolve_unify_functor__ArgTypes0_28, &check_hlds__resolve_unify_functor__ExistQVars_29, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_45, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_46);
    }
    if ((check_hlds__resolve_unify_functor__ExistQVars_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__resolve_unify_functor__ArgTypes_35 = check_hlds__resolve_unify_functor__ArgTypes0_28;
    else
      {
        MR_Word check_hlds__resolve_unify_functor__FieldType_32;
        MR_Word check_hlds__resolve_unify_functor__FieldArgType_33;
        MR_Word check_hlds__resolve_unify_functor__FieldSubst_34;
        MR_Box check_hlds__resolve_unify_functor__conv0_FieldArgType_33;

        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_47, check_hlds__resolve_unify_functor__FieldVar_20, &check_hlds__resolve_unify_functor__FieldType_32);
        }
        {
          mercury__list__det_index1_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__resolve_unify_functor__ArgTypes0_28, check_hlds__resolve_unify_functor__FieldNumber_26, &check_hlds__resolve_unify_functor__conv0_FieldArgType_33);
        }
        check_hlds__resolve_unify_functor__FieldArgType_33 = ((MR_Word) check_hlds__resolve_unify_functor__conv0_FieldArgType_33);
        {
          parse_tree__prog_type__type_subsumes_det_3_p_0(check_hlds__resolve_unify_functor__FieldArgType_33, check_hlds__resolve_unify_functor__FieldType_32, &check_hlds__resolve_unify_functor__FieldSubst_34);
        }
        {
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__resolve_unify_functor__FieldSubst_34, check_hlds__resolve_unify_functor__ArgTypes0_28, &check_hlds__resolve_unify_functor__ArgTypes_35);
        }
      }
    {
      check_hlds__resolve_unify_functor__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__resolve_unify_functor__FieldNumber_26, check_hlds__resolve_unify_functor__ArgTypes_35, &check_hlds__resolve_unify_functor__TypesBeforeField_36, &check_hlds__resolve_unify_functor__conv1_V_37_37, &check_hlds__resolve_unify_functor__TypesAfterField_38);
    }
    check_hlds__resolve_unify_functor__V_37_37 = ((MR_Word) check_hlds__resolve_unify_functor__conv1_V_37_37);
    {
      check_hlds__resolve_unify_functor__make_new_vars_6_p_0(check_hlds__resolve_unify_functor__TypesBeforeField_36, &check_hlds__resolve_unify_functor__VarsBeforeField_39, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_47, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_52_52, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_49, &check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_53_53);
    }
    {
      check_hlds__resolve_unify_functor__make_new_vars_6_p_0(check_hlds__resolve_unify_functor__TypesAfterField_38, &check_hlds__resolve_unify_functor__VarsAfterField_40, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_52_52, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_48, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_53_53, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_50);
    }
    {
      check_hlds__resolve_unify_functor__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_56_56, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FieldVar_20));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_56_56, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__VarsAfterField_40));
    }
    {
      check_hlds__resolve_unify_functor__ArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[0], check_hlds__resolve_unify_functor__VarsBeforeField_39, check_hlds__resolve_unify_functor__V_56_56);
    }
    {
      check_hlds__resolve_unify_functor__RestrictNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__resolve_unify_functor__OldGoalInfo_22);
    }
    {
      check_hlds__resolve_unify_functor__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_57_57, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId_25));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_57_57, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars_41));
    }
    {
      check_hlds__resolve_unify_functor__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_60_60, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__TermInputVar_21));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__resolve_unify_functor__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_58_58, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FieldVar_20));
      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_58_58, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_60_60));
    }
    {
      check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__resolve_unify_functor__TermInputVar_21, check_hlds__resolve_unify_functor__V_57_57, check_hlds__resolve_unify_functor__OldGoalInfo_22, check_hlds__resolve_unify_functor__RestrictNonLocals_42, check_hlds__resolve_unify_functor__V_58_58, check_hlds__resolve_unify_functor__UnifyContext_19, &check_hlds__resolve_unify_functor__FunctorGoal_43);
    }
    *check_hlds__resolve_unify_functor__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__FunctorGoal_43, (MR_Integer) 0)));
    check_hlds__resolve_unify_functor__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__FunctorGoal_43, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_15,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_29,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_30,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_31,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_32,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_33,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_34,
  MR_Word check_hlds__resolve_unify_functor__AccessType_19,
  MR_Word check_hlds__resolve_unify_functor__FieldName_20,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_21,
  MR_Word check_hlds__resolve_unify_functor__Var_22,
  MR_Word check_hlds__resolve_unify_functor__Args_23,
  MR_Word check_hlds__resolve_unify_functor__GoalInfo_24,
  MR_Word * check_hlds__resolve_unify_functor__HeadVar__14_14)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__GoalExpr_25;

    switch (check_hlds__resolve_unify_functor__AccessType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__resolve_unify_functor__TermVar_26;

          {
            hlds__hlds_pred__field_extraction_function_args_2_p_0(check_hlds__resolve_unify_functor__Args_23, &check_hlds__resolve_unify_functor__TermVar_26);
          }
          {
            check_hlds__resolve_unify_functor__translate_get_function_13_p_0(check_hlds__resolve_unify_functor__ModuleInfo_15, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_29, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_30, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_31, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_32, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_33, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_34, check_hlds__resolve_unify_functor__FieldName_20, check_hlds__resolve_unify_functor__UnifyContext_21, check_hlds__resolve_unify_functor__Var_22, check_hlds__resolve_unify_functor__TermVar_26, check_hlds__resolve_unify_functor__GoalInfo_24, &check_hlds__resolve_unify_functor__GoalExpr_25);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__resolve_unify_functor__TermInputVar_27;
          MR_Word check_hlds__resolve_unify_functor__FieldVar_28;

          {
            hlds__hlds_pred__field_update_function_args_3_p_0(check_hlds__resolve_unify_functor__Args_23, &check_hlds__resolve_unify_functor__TermInputVar_27, &check_hlds__resolve_unify_functor__FieldVar_28);
          }
          {
            check_hlds__resolve_unify_functor__translate_set_function_14_p_0(check_hlds__resolve_unify_functor__ModuleInfo_15, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_29, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_30, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_31, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_32, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_33, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_34, check_hlds__resolve_unify_functor__FieldName_20, check_hlds__resolve_unify_functor__UnifyContext_21, check_hlds__resolve_unify_functor__FieldVar_28, check_hlds__resolve_unify_functor__TermInputVar_27, check_hlds__resolve_unify_functor__Var_22, check_hlds__resolve_unify_functor__GoalInfo_24, &check_hlds__resolve_unify_functor__GoalExpr_25);
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__resolve_unify_functor__HeadVar__14_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalExpr_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo_24));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1)
{
  {
    MR_Box check_hlds__resolve_unify_functor__wrapper_arg_2;
    MR_Box check_hlds__resolve_unify_functor__closure = check_hlds__resolve_unify_functor__closure_arg;
    MR_Word check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_32;

    {
      check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_32 = check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__307__1_1_f_0(((MR_Word) check_hlds__resolve_unify_functor__wrapper_arg_1));
    }
    check_hlds__resolve_unify_functor__wrapper_arg_2 = ((MR_Box) (check_hlds__resolve_unify_functor__conv0_LambdaHeadVar__2_32));
    return check_hlds__resolve_unify_functor__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_6,
  MR_Word check_hlds__resolve_unify_functor__TVarSet_7,
  MR_Word check_hlds__resolve_unify_functor__ConsId_8,
  MR_Word check_hlds__resolve_unify_functor__Type_9,
  MR_Word check_hlds__resolve_unify_functor__ArgTypes_10)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_37_37;
    MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_38_38;
    MR_Word check_hlds__resolve_unify_functor__TypeCtor_11;
    MR_Word check_hlds__resolve_unify_functor__ConsTable_12;
    MR_Word check_hlds__resolve_unify_functor__ConsDefn_13;
    MR_Word check_hlds__resolve_unify_functor__ConsExistQVars_18;
    MR_Word check_hlds__resolve_unify_functor__ConsArgs_20;
    MR_Word check_hlds__resolve_unify_functor__TypeTable_22;
    MR_Word check_hlds__resolve_unify_functor__TypeDefn_23;
    MR_Word check_hlds__resolve_unify_functor__TypeTVarSet_24;
    MR_Word check_hlds__resolve_unify_functor__TypeKindMap_25;
    MR_Word check_hlds__resolve_unify_functor__ConsArgTypes_26;
    MR_Word check_hlds__resolve_unify_functor__ExistQVars_28;
    MR_Word check_hlds__resolve_unify_functor__ExternalTypeParams_29;
    MR_Word check_hlds__resolve_unify_functor__V_30_30;
    MR_Word check_hlds__resolve_unify_functor__V_14_14;
    MR_Word check_hlds__resolve_unify_functor__V_15_15;
    MR_Word check_hlds__resolve_unify_functor__V_16_16;
    MR_Word check_hlds__resolve_unify_functor__V_17_17;
    MR_Word check_hlds__resolve_unify_functor__V_19_19;
    MR_Word check_hlds__resolve_unify_functor__V_21_21;

    {
      check_hlds__resolve_unify_functor__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__resolve_unify_functor__Type_9, &check_hlds__resolve_unify_functor__TypeCtor_11);
    }
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        {
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_6, &check_hlds__resolve_unify_functor__ConsTable_12);
        }
        {
          check_hlds__resolve_unify_functor__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__resolve_unify_functor__ConsTable_12, check_hlds__resolve_unify_functor__TypeCtor_11, check_hlds__resolve_unify_functor__ConsId_8, &check_hlds__resolve_unify_functor__ConsDefn_13);
        }
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 0)));
            check_hlds__resolve_unify_functor__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 1)));
            check_hlds__resolve_unify_functor__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 2)));
            check_hlds__resolve_unify_functor__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 3)));
            check_hlds__resolve_unify_functor__ConsExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 4)));
            check_hlds__resolve_unify_functor__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 5)));
            check_hlds__resolve_unify_functor__ConsArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 6)));
            check_hlds__resolve_unify_functor__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConsDefn_13, (MR_Integer) 7)));
            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_6, &check_hlds__resolve_unify_functor__TypeTable_22);
            }
            {
              check_hlds__resolve_unify_functor__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__resolve_unify_functor__TypeTable_22, check_hlds__resolve_unify_functor__TypeCtor_11, &check_hlds__resolve_unify_functor__TypeDefn_23);
            }
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                {
                  hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__resolve_unify_functor__TypeDefn_23, &check_hlds__resolve_unify_functor__TypeTVarSet_24);
                }
                {
                  hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__resolve_unify_functor__TypeDefn_23, &check_hlds__resolve_unify_functor__TypeKindMap_25);
                }
                check_hlds__resolve_unify_functor__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                check_hlds__resolve_unify_functor__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                check_hlds__resolve_unify_functor__V_30_30 = (MR_Word) &check_hlds__resolve_unify_functor_scalar_common_5[0];
                {
                  check_hlds__resolve_unify_functor__ConsArgTypes_26 = mercury__list__map_2_f_0(check_hlds__resolve_unify_functor__TypeCtorInfo_37_37, check_hlds__resolve_unify_functor__TypeCtorInfo_38_38, check_hlds__resolve_unify_functor__V_30_30, check_hlds__resolve_unify_functor__ConsArgs_20);
                }
                check_hlds__resolve_unify_functor__ExistQVars_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__resolve_unify_functor__ExternalTypeParams_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__resolve_unify_functor__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(check_hlds__resolve_unify_functor__TVarSet_7, check_hlds__resolve_unify_functor__ExistQVars_28, check_hlds__resolve_unify_functor__ArgTypes_10, check_hlds__resolve_unify_functor__ExternalTypeParams_29, check_hlds__resolve_unify_functor__TypeTVarSet_24, check_hlds__resolve_unify_functor__TypeKindMap_25, check_hlds__resolve_unify_functor__ConsExistQVars_18, check_hlds__resolve_unify_functor__ConsArgTypes_26);
                }
              }
          }
      }
    return check_hlds__resolve_unify_functor__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1(
  MR_Box check_hlds__resolve_unify_functor__closure_arg,
  MR_Box check_hlds__resolve_unify_functor__wrapper_arg_1,
  MR_Box * check_hlds__resolve_unify_functor__wrapper_arg_2)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Box check_hlds__resolve_unify_functor__closure = check_hlds__resolve_unify_functor__closure_arg;
    MR_Word check_hlds__resolve_unify_functor__conv0_HeadVar__5_5;

    {
      check_hlds__resolve_unify_functor__succeeded = hlds__hlds_data__search_hlds_constraint_list_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__resolve_unify_functor__wrapper_arg_1), &check_hlds__resolve_unify_functor__conv0_HeadVar__5_5);
    }
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        *check_hlds__resolve_unify_functor__wrapper_arg_2 = ((MR_Box) (check_hlds__resolve_unify_functor__conv0_HeadVar__5_5));
        check_hlds__resolve_unify_functor__succeeded = MR_TRUE;
      }
    return check_hlds__resolve_unify_functor__succeeded;
  }
}

void MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(
  MR_Word check_hlds__resolve_unify_functor__ModuleInfo_17,
  MR_Word check_hlds__resolve_unify_functor__X0_18,
  MR_Word check_hlds__resolve_unify_functor__ConsId0_19,
  MR_Word check_hlds__resolve_unify_functor__ArgVars0_20,
  MR_Word check_hlds__resolve_unify_functor__Mode0_21,
  MR_Word check_hlds__resolve_unify_functor__Unification0_22,
  MR_Word check_hlds__resolve_unify_functor__UnifyContext_23,
  MR_Word check_hlds__resolve_unify_functor__GoalInfo0_24,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108,
  MR_Word check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109,
  MR_Word * check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110,
  MR_Word * check_hlds__resolve_unify_functor__Goal_28,
  MR_Word * check_hlds__resolve_unify_functor__IsPlainUnify_29)
{
  {
    MR_bool check_hlds__resolve_unify_functor__succeeded;
    MR_Word check_hlds__resolve_unify_functor__TypeInfo_203_203;
    MR_Word check_hlds__resolve_unify_functor__TypeOfX_30;
    MR_Integer check_hlds__resolve_unify_functor__Arity_31;
    MR_Word check_hlds__resolve_unify_functor__Purity_35;
    MR_Word check_hlds__resolve_unify_functor__FuncVar_36;
    MR_Word check_hlds__resolve_unify_functor__FuncArgVars_37;
    MR_String check_hlds__resolve_unify_functor__ApplyName_32;
    MR_Word check_hlds__resolve_unify_functor__V_111_111;
    MR_Integer check_hlds__resolve_unify_functor__V_112_112;
    MR_Integer check_hlds__resolve_unify_functor__V_33_33;
    MR_Word check_hlds__resolve_unify_functor__V_34_34;
    MR_Integer check_hlds__resolve_unify_functor__lo_0;
    MR_Integer check_hlds__resolve_unify_functor__hi_1;
    MR_Integer check_hlds__resolve_unify_functor__mid_2;
    MR_Integer check_hlds__resolve_unify_functor__result_3;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109, check_hlds__resolve_unify_functor__X0_18, &check_hlds__resolve_unify_functor__TypeOfX_30);
    }
    check_hlds__resolve_unify_functor__TypeInfo_203_203 = (MR_Word) &check_hlds__resolve_unify_functor_scalar_common_1[0];
    {
      mercury__list__length_2_p_0(check_hlds__resolve_unify_functor__TypeInfo_203_203, check_hlds__resolve_unify_functor__ArgVars0_20, &check_hlds__resolve_unify_functor__Arity_31);
    }
    check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        check_hlds__resolve_unify_functor__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 1)));
        check_hlds__resolve_unify_functor__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 2)));
        check_hlds__resolve_unify_functor__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 3)));
        check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__V_111_111)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__ApplyName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_111_111, (MR_Integer) 0)));
            /* binary string simple lookup switch */
            check_hlds__resolve_unify_functor__lo_0 = (MR_Integer) 0;
            check_hlds__resolve_unify_functor__hi_1 = (MR_Integer) 3;
            do
              {
                check_hlds__resolve_unify_functor__mid_2 = (((check_hlds__resolve_unify_functor__lo_0 + check_hlds__resolve_unify_functor__hi_1)) / (MR_Integer) 2);
                check_hlds__resolve_unify_functor__result_3 = MR_strcmp(check_hlds__resolve_unify_functor__ApplyName_32, ((&check_hlds__resolve_unify_functor_vector_common_2[0 + check_hlds__resolve_unify_functor__mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_2_0__vct_2_f_0);
                if ((check_hlds__resolve_unify_functor__result_3 == (MR_Integer) 0))
                  {
                    check_hlds__resolve_unify_functor__Purity_35 = ((&check_hlds__resolve_unify_functor_vector_common_2[0 + check_hlds__resolve_unify_functor__mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_2_0__vct_2_f_1;
                    check_hlds__resolve_unify_functor__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((check_hlds__resolve_unify_functor__result_3 < (MR_Integer) 0))
                  check_hlds__resolve_unify_functor__hi_1 = (check_hlds__resolve_unify_functor__mid_2 - (MR_Integer) 1);
                else
                  check_hlds__resolve_unify_functor__lo_0 = (check_hlds__resolve_unify_functor__mid_2 + (MR_Integer) 1);
              }
            while ((check_hlds__resolve_unify_functor__lo_0 <= check_hlds__resolve_unify_functor__hi_1));
            check_hlds__resolve_unify_functor__succeeded = MR_FALSE;
          label_0:;
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__V_112_112 = (MR_Integer) 1;
                check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__Arity_31 >= check_hlds__resolve_unify_functor__V_112_112);
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ArgVars0_20)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        check_hlds__resolve_unify_functor__FuncVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__ArgVars0_20, (MR_Integer) 0)));
                        check_hlds__resolve_unify_functor__FuncArgVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__ArgVars0_20, (MR_Integer) 1)));
                      }
                  }
              }
          }
      }
    if (check_hlds__resolve_unify_functor__succeeded)
      {
        MR_Word check_hlds__resolve_unify_functor__ArgVars_38;
        MR_Integer check_hlds__resolve_unify_functor__FullArity_41;
        MR_Word check_hlds__resolve_unify_functor__HOCall_42;
        MR_Word check_hlds__resolve_unify_functor__V_113_113;
        MR_Word check_hlds__resolve_unify_functor__V_116_116;

        {
          check_hlds__resolve_unify_functor__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_113_113, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__X0_18));
          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__resolve_unify_functor__ArgVars_38 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeInfo_203_203, check_hlds__resolve_unify_functor__FuncArgVars_37, check_hlds__resolve_unify_functor__V_113_113);
        }
        {
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, check_hlds__resolve_unify_functor__Arity_31, &check_hlds__resolve_unify_functor__FullArity_41);
        }
        {
          check_hlds__resolve_unify_functor__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_116_116, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FuncVar_36));
          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_116_116, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__Purity_35));
          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_116_116, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_116_116, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__FullArity_41));
        }
        {
          check_hlds__resolve_unify_functor__HOCall_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_116_116));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars_38));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__HOCall_42, 5) = ((MR_Box) ((MR_Integer) 6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__resolve_unify_functor__Goal_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__HOCall_42));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo0_24));
        }
        *check_hlds__resolve_unify_functor__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109;
        *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107;
        *check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106 = check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105;
      }
    else
      {
        MR_Word check_hlds__resolve_unify_functor__PredId_60;
        MR_Word check_hlds__resolve_unify_functor__QualifiedFuncName_61;
        MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_204_204;
        MR_Word check_hlds__resolve_unify_functor__PredName_43;
        MR_Word check_hlds__resolve_unify_functor__Markers_46;
        MR_Word check_hlds__resolve_unify_functor__PredTable_47;
        MR_Word check_hlds__resolve_unify_functor__PredIds_48;
        MR_Word check_hlds__resolve_unify_functor__TVarSet_51;
        MR_Word check_hlds__resolve_unify_functor__ExistQTVars_52;
        MR_Word check_hlds__resolve_unify_functor__ExternalTypeParams_53;
        MR_Word check_hlds__resolve_unify_functor__ArgTypes0_54;
        MR_Word check_hlds__resolve_unify_functor__ArgTypes_55;
        MR_Word check_hlds__resolve_unify_functor__ConstraintMap_56;
        MR_Word check_hlds__resolve_unify_functor__GoalId_57;
        MR_Word check_hlds__resolve_unify_functor__ConstraintSearch_58;
        MR_Word check_hlds__resolve_unify_functor__Context_59;
        MR_Word check_hlds__resolve_unify_functor__V_119_119;
        MR_Word check_hlds__resolve_unify_functor__V_120_120;
        MR_Word check_hlds__resolve_unify_functor__V_121_121;
        MR_Word check_hlds__resolve_unify_functor__V_122_122;
        MR_Word check_hlds__resolve_unify_functor__V_123_123;
        MR_Integer check_hlds__resolve_unify_functor__V_44_44;
        MR_Word check_hlds__resolve_unify_functor__V_45_45;
        MR_Word check_hlds__resolve_unify_functor__V_49_49;
        MR_Word check_hlds__resolve_unify_functor__V_50_50;

        check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            check_hlds__resolve_unify_functor__PredName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 1)));
            check_hlds__resolve_unify_functor__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 2)));
            check_hlds__resolve_unify_functor__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 3)));
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__Markers_46);
            }
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, &check_hlds__resolve_unify_functor__PredTable_47);
            }
            {
              check_hlds__resolve_unify_functor__V_119_119 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__resolve_unify_functor__Markers_46);
            }
            {
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__resolve_unify_functor__PredTable_47, check_hlds__resolve_unify_functor__V_119_119, check_hlds__resolve_unify_functor__PredName_43, check_hlds__resolve_unify_functor__Arity_31, &check_hlds__resolve_unify_functor__PredIds_48);
            }
            check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__PredIds_48)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__PredIds_48, (MR_Integer) 0)));
                check_hlds__resolve_unify_functor__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__PredIds_48, (MR_Integer) 1)));
                {
                  check_hlds__resolve_unify_functor__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105);
                }
                check_hlds__resolve_unify_functor__succeeded = !(check_hlds__resolve_unify_functor__succeeded);
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    {
                      check_hlds__resolve_unify_functor__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105);
                    }
                    check_hlds__resolve_unify_functor__succeeded = !(check_hlds__resolve_unify_functor__succeeded);
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        {
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__TVarSet_51);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__ExistQTVars_52);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__ExternalTypeParams_53);
                        }
                        {
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109, check_hlds__resolve_unify_functor__ArgVars0_20, &check_hlds__resolve_unify_functor__ArgTypes0_54);
                        }
                        check_hlds__resolve_unify_functor__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                        check_hlds__resolve_unify_functor__V_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          check_hlds__resolve_unify_functor__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_120_120, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__TypeOfX_30));
                          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_120_120, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_121_121));
                        }
                        {
                          check_hlds__resolve_unify_functor__ArgTypes_55 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeCtorInfo_204_204, check_hlds__resolve_unify_functor__ArgTypes0_54, check_hlds__resolve_unify_functor__V_120_120);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__ConstraintMap_56);
                        }
                        {
                          check_hlds__resolve_unify_functor__GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__resolve_unify_functor__GoalInfo0_24);
                        }
                        check_hlds__resolve_unify_functor__V_122_122 = (MR_Integer) 0;
                        {
                          check_hlds__resolve_unify_functor__ConstraintSearch_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_3[0]));
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1));
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__ConstraintMap_56));
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 4) = ((MR_Box) (check_hlds__resolve_unify_functor__V_122_122));
                          MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__ConstraintSearch_58, 5) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalId_57));
                        }
                        {
                          check_hlds__resolve_unify_functor__Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__resolve_unify_functor__GoalInfo0_24);
                        }
                        {
                          check_hlds__resolve_unify_functor__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_123_123, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConstraintSearch_58));
                        }
                        {
                          check_hlds__resolve_unify_functor__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__PredIds_48, check_hlds__resolve_unify_functor__TVarSet_51, check_hlds__resolve_unify_functor__ExistQTVars_52, check_hlds__resolve_unify_functor__ArgTypes_55, check_hlds__resolve_unify_functor__ExternalTypeParams_53, check_hlds__resolve_unify_functor__V_123_123, check_hlds__resolve_unify_functor__Context_59, &check_hlds__resolve_unify_functor__PredId_60, &check_hlds__resolve_unify_functor__QualifiedFuncName_61);
                        }
                      }
                  }
              }
          }
        if (check_hlds__resolve_unify_functor__succeeded)
          {
            MR_Integer check_hlds__resolve_unify_functor__ProcId_62;
            MR_Word check_hlds__resolve_unify_functor__FuncCallUnifyContext_63;
            MR_Word check_hlds__resolve_unify_functor__FuncCall_64;
            MR_Word check_hlds__resolve_unify_functor__V_124_124;
            MR_Word check_hlds__resolve_unify_functor__V_126_126;
            MR_Word check_hlds__resolve_unify_functor__V_129_129;
            MR_Word check_hlds__resolve_unify_functor__ArgVars_172;

            {
              check_hlds__resolve_unify_functor__ProcId_62 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            {
              check_hlds__resolve_unify_functor__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_124_124, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__X0_18));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__resolve_unify_functor__ArgVars_172 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeInfo_203_203, check_hlds__resolve_unify_functor__ArgVars0_20, check_hlds__resolve_unify_functor__V_124_124);
            }
            {
              check_hlds__resolve_unify_functor__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_126_126, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId0_19));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_126_126, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_126_126, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars0_20));
            }
            {
              check_hlds__resolve_unify_functor__FuncCallUnifyContext_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__FuncCallUnifyContext_63, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__X0_18));
              MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__FuncCallUnifyContext_63, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_126_126));
              MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__FuncCallUnifyContext_63, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__UnifyContext_23));
            }
            {
              check_hlds__resolve_unify_functor__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_129_129, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FuncCallUnifyContext_63));
            }
            {
              check_hlds__resolve_unify_functor__FuncCall_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__PredId_60));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__ProcId_62));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars_172));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 3) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 4) = ((MR_Box) (check_hlds__resolve_unify_functor__V_129_129));
              MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__FuncCall_64, 5) = ((MR_Box) (check_hlds__resolve_unify_functor__QualifiedFuncName_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__resolve_unify_functor__Goal_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__FuncCall_64));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo0_24));
            }
            *check_hlds__resolve_unify_functor__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109;
            *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107;
            *check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106 = check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105;
          }
        else
          {
            MR_Word check_hlds__resolve_unify_functor__Name_65;
            MR_Word check_hlds__resolve_unify_functor__Context_199;
            MR_Word check_hlds__resolve_unify_functor__PredId_200;
            MR_Word check_hlds__resolve_unify_functor__TypeCtorInfo_207_207;
            MR_Word check_hlds__resolve_unify_functor__PredOrFunc_69;
            MR_Word check_hlds__resolve_unify_functor__HOArgTypes_71;
            MR_Word check_hlds__resolve_unify_functor__AllArgTypes_72;
            MR_Word check_hlds__resolve_unify_functor__ExistQVars_73;
            MR_Word check_hlds__resolve_unify_functor__V_130_130;
            MR_Word check_hlds__resolve_unify_functor__Markers_173;
            MR_Word check_hlds__resolve_unify_functor__TVarSet_174;
            MR_Word check_hlds__resolve_unify_functor__ExternalTypeParams_175;
            MR_Word check_hlds__resolve_unify_functor__ArgTypes0_176;
            MR_Integer check_hlds__resolve_unify_functor__V_66_66;
            MR_Word check_hlds__resolve_unify_functor__V_67_67;
            MR_Word check_hlds__resolve_unify_functor___Purity_68;

            check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                check_hlds__resolve_unify_functor__Name_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 1)));
                check_hlds__resolve_unify_functor__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 2)));
                check_hlds__resolve_unify_functor__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 3)));
                {
                  check_hlds__resolve_unify_functor__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__resolve_unify_functor__TypeOfX_30, &check_hlds__resolve_unify_functor___Purity_68, &check_hlds__resolve_unify_functor__PredOrFunc_69, &check_hlds__resolve_unify_functor__HOArgTypes_71);
                }
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    {
                      check_hlds__resolve_unify_functor__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105);
                    }
                    check_hlds__resolve_unify_functor__succeeded = !(check_hlds__resolve_unify_functor__succeeded);
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        {
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109, check_hlds__resolve_unify_functor__ArgVars0_20, &check_hlds__resolve_unify_functor__ArgTypes0_176);
                        }
                        check_hlds__resolve_unify_functor__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                        {
                          check_hlds__resolve_unify_functor__AllArgTypes_72 = mercury__list__f_43_43_2_f_0(check_hlds__resolve_unify_functor__TypeCtorInfo_207_207, check_hlds__resolve_unify_functor__ArgTypes0_176, check_hlds__resolve_unify_functor__HOArgTypes_71);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__TVarSet_174);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__ExistQVars_73);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__ExternalTypeParams_175);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__Markers_173);
                        }
                        {
                          check_hlds__resolve_unify_functor__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__resolve_unify_functor__GoalInfo0_24);
                        }
                        {
                          check_hlds__resolve_unify_functor__V_130_130 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__resolve_unify_functor__Markers_173);
                        }
                        {
                          check_hlds__resolve_unify_functor__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__resolve_unify_functor__V_130_130, check_hlds__resolve_unify_functor__Name_65, check_hlds__resolve_unify_functor__PredOrFunc_69, check_hlds__resolve_unify_functor__TVarSet_174, check_hlds__resolve_unify_functor__ExistQVars_73, check_hlds__resolve_unify_functor__AllArgTypes_72, check_hlds__resolve_unify_functor__ExternalTypeParams_175, check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__Context_199, &check_hlds__resolve_unify_functor__PredId_200);
                        }
                      }
                  }
              }
            if (check_hlds__resolve_unify_functor__succeeded)
              {
                MR_Word check_hlds__resolve_unify_functor__PredInfo_25;
                MR_Word check_hlds__resolve_unify_functor__ProcIds_74;
                MR_Word check_hlds__resolve_unify_functor__MaybeProcId_76;

                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__PredId_200, &check_hlds__resolve_unify_functor__PredInfo_25);
                }
                {
                  check_hlds__resolve_unify_functor__ProcIds_74 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__resolve_unify_functor__PredInfo_25);
                }
                if ((check_hlds__resolve_unify_functor__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  check_hlds__resolve_unify_functor__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word check_hlds__resolve_unify_functor__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__ProcIds_74, (MR_Integer) 1)));
                    MR_Integer check_hlds__resolve_unify_functor__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__ProcIds_74, (MR_Integer) 0)));

                    if ((check_hlds__resolve_unify_functor__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        check_hlds__resolve_unify_functor__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__V_212_212));
                      }
                    else
                      {
                        MR_Integer check_hlds__resolve_unify_functor__V_132_132;

                        {
                          check_hlds__resolve_unify_functor__V_132_132 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                        }
                        {
                          check_hlds__resolve_unify_functor__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__V_132_132));
                        }
                      }
                  }
                if ((check_hlds__resolve_unify_functor__MaybeProcId_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__resolve_unify_functor__Pieces_83;
                    MR_Word check_hlds__resolve_unify_functor__Msg_84;
                    MR_Word check_hlds__resolve_unify_functor__Spec_85;
                    MR_Word check_hlds__resolve_unify_functor__V_136_136;
                    MR_Word check_hlds__resolve_unify_functor__V_139_139;
                    MR_Word check_hlds__resolve_unify_functor__V_140_140;
                    MR_Word check_hlds__resolve_unify_functor__V_141_141;
                    MR_Word check_hlds__resolve_unify_functor__V_148_148;
                    MR_Word check_hlds__resolve_unify_functor__V_149_149;
                    MR_Word check_hlds__resolve_unify_functor__V_153_153;

                    {
                      *check_hlds__resolve_unify_functor__Goal_28 = hlds__make_goal__true_goal_0_f_0();
                    }
                    {
                      check_hlds__resolve_unify_functor__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_141_141, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__Name_65));
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_141_141, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__Arity_31));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__V_140_140, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_141_141));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_139_139, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__V_140_140));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__resolve_unify_functor_scalar_common_1[4])));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_136_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[6])));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_136_136, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_139_139));
                    }
                    {
                      check_hlds__resolve_unify_functor__Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[5])));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__Pieces_83, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_136_136));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_149_149, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__Pieces_83));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_148_148, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__V_149_149));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__resolve_unify_functor__Msg_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Msg_84, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__Context_199));
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Msg_84, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_148_148));
                    }
                    {
                      check_hlds__resolve_unify_functor__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_153_153, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__Msg_84));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__resolve_unify_functor__Spec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Spec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Spec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__Spec_85, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__V_153_153));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__resolve_unify_functor__IsPlainUnify_29 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__Spec_85));
                    }
                  }
                else
                  {
                    MR_Word check_hlds__resolve_unify_functor__ShroudedPredProcId_80;
                    MR_Word check_hlds__resolve_unify_functor__ConsId_81;
                    MR_Word check_hlds__resolve_unify_functor__GoalExpr_82;
                    MR_Word check_hlds__resolve_unify_functor__V_155_155;
                    MR_Word check_hlds__resolve_unify_functor__V_156_156;
                    MR_Integer check_hlds__resolve_unify_functor__ProcId_177 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__MaybeProcId_76, (MR_Integer) 0)));

                    {
                      check_hlds__resolve_unify_functor__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_155_155, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__PredId_200));
                      MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__V_155_155, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__ProcId_177));
                    }
                    {
                      check_hlds__resolve_unify_functor__ShroudedPredProcId_80 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(check_hlds__resolve_unify_functor__V_155_155);
                    }
                    {
                      check_hlds__resolve_unify_functor__ConsId_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_81, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__ShroudedPredProcId_80));
                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_81, 2) = NULL;
                    }
                    {
                      check_hlds__resolve_unify_functor__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_156_156, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId_81));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_156_156, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__V_156_156, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars0_20));
                    }
                    {
                      check_hlds__resolve_unify_functor__GoalExpr_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_82, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__X0_18));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_82, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__V_156_156));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_82, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__Mode0_21));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_82, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__Unification0_22));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_82, 4) = ((MR_Box) (check_hlds__resolve_unify_functor__UnifyContext_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__resolve_unify_functor__Goal_28 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalExpr_82));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo0_24));
                    }
                    *check_hlds__resolve_unify_functor__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109;
                *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107;
                *check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106 = check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105;
              }
            else
              {
                MR_Word check_hlds__resolve_unify_functor__AccessType_87;
                MR_Word check_hlds__resolve_unify_functor__FieldName_88;
                MR_Word check_hlds__resolve_unify_functor__TVarSet_180;
                MR_Word check_hlds__resolve_unify_functor__ArgTypes0_181;
                MR_Word check_hlds__resolve_unify_functor__Name_182;
                MR_Integer check_hlds__resolve_unify_functor__V_208_208;
                MR_Integer check_hlds__resolve_unify_functor__V_209_209;
                MR_Word check_hlds__resolve_unify_functor__V_86_86;

                check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    check_hlds__resolve_unify_functor__Name_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 1)));
                    check_hlds__resolve_unify_functor__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 2)));
                    check_hlds__resolve_unify_functor__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 3)));
                    check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__Arity_31 == check_hlds__resolve_unify_functor__V_208_208);
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        {
                          check_hlds__resolve_unify_functor__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__Name_182, &check_hlds__resolve_unify_functor__V_209_209, &check_hlds__resolve_unify_functor__AccessType_87, &check_hlds__resolve_unify_functor__FieldName_88);
                        }
                        if (check_hlds__resolve_unify_functor__succeeded)
                          {
                            check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__Arity_31 == check_hlds__resolve_unify_functor__V_209_209);
                            if (check_hlds__resolve_unify_functor__succeeded)
                              {
                                {
                                  check_hlds__resolve_unify_functor__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105);
                                }
                                check_hlds__resolve_unify_functor__succeeded = !(check_hlds__resolve_unify_functor__succeeded);
                                if (check_hlds__resolve_unify_functor__succeeded)
                                  {
                                    {
                                      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, &check_hlds__resolve_unify_functor__TVarSet_180);
                                    }
                                    {
                                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109, check_hlds__resolve_unify_functor__ArgVars0_20, &check_hlds__resolve_unify_functor__ArgTypes0_181);
                                    }
                                    {
                                      check_hlds__resolve_unify_functor__succeeded = check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__TVarSet_180, check_hlds__resolve_unify_functor__ConsId0_19, check_hlds__resolve_unify_functor__TypeOfX_30, check_hlds__resolve_unify_functor__ArgTypes0_181);
                                    }
                                    check_hlds__resolve_unify_functor__succeeded = !(check_hlds__resolve_unify_functor__succeeded);
                                  }
                              }
                          }
                      }
                  }
                if (check_hlds__resolve_unify_functor__succeeded)
                  {
                    {
                      check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(check_hlds__resolve_unify_functor__ModuleInfo_17, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105, check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107, check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108, check_hlds__resolve_unify_functor__AccessType_87, check_hlds__resolve_unify_functor__FieldName_88, check_hlds__resolve_unify_functor__UnifyContext_23, check_hlds__resolve_unify_functor__X0_18, check_hlds__resolve_unify_functor__ArgVars0_20, check_hlds__resolve_unify_functor__GoalInfo0_24, check_hlds__resolve_unify_functor__Goal_28);
                    }
                    *check_hlds__resolve_unify_functor__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                else
                  {
                    MR_Word check_hlds__resolve_unify_functor__TypeCtorOfX_89;
                    MR_Word check_hlds__resolve_unify_functor__RHS_104;
                    MR_Word check_hlds__resolve_unify_functor__ConsId_188;
                    MR_Word check_hlds__resolve_unify_functor__GoalExpr_189;
                    MR_Word check_hlds__resolve_unify_functor__SymName0_90;
                    MR_Integer check_hlds__resolve_unify_functor__V_210_210;
                    MR_Word check_hlds__resolve_unify_functor___OldTypeCtor_91;

                    {
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__resolve_unify_functor__TypeOfX_30, &check_hlds__resolve_unify_functor__TypeCtorOfX_89);
                    }
                    check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__ConsId0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        check_hlds__resolve_unify_functor__SymName0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 1)));
                        check_hlds__resolve_unify_functor__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 2)));
                        check_hlds__resolve_unify_functor___OldTypeCtor_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId0_19, (MR_Integer) 3)));
                        check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__Arity_31 == check_hlds__resolve_unify_functor__V_210_210);
                      }
                    if (check_hlds__resolve_unify_functor__succeeded)
                      {
                        MR_Word check_hlds__resolve_unify_functor__V_92_92;
                        MR_Word check_hlds__resolve_unify_functor__V_93_93;

                        check_hlds__resolve_unify_functor__succeeded = ((((MR_tag((MR_Word) check_hlds__resolve_unify_functor__TypeOfX_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__TypeOfX_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (check_hlds__resolve_unify_functor__succeeded)
                          {
                            check_hlds__resolve_unify_functor__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__TypeOfX_30, (MR_Integer) 1)));
                            check_hlds__resolve_unify_functor__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__TypeOfX_30, (MR_Integer) 2)));
                            {
                              check_hlds__resolve_unify_functor__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__Arity_31));
                            }
                          }
                        else
                          {
                            MR_Word check_hlds__resolve_unify_functor__V_161_161;

                            check_hlds__resolve_unify_functor__succeeded = ((MR_tag((MR_Word) check_hlds__resolve_unify_functor__TypeOfX_30)) == (MR_mktag((MR_Integer) 2)));
                            if (check_hlds__resolve_unify_functor__succeeded)
                              {
                                check_hlds__resolve_unify_functor__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__resolve_unify_functor__TypeOfX_30, (MR_Integer) 0)));
                                check_hlds__resolve_unify_functor__succeeded = (check_hlds__resolve_unify_functor__V_161_161 == (MR_Integer) 4);
                              }
                            if (check_hlds__resolve_unify_functor__succeeded)
                              if (((MR_tag((MR_Word) check_hlds__resolve_unify_functor__SymName0_90)) == (MR_mktag((MR_Integer) 1))))
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "qualified char const");
                                    return;
                                  }
                                }
                              else
                                {
                                  MR_String check_hlds__resolve_unify_functor__Name0_94 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__SymName0_90, (MR_Integer) 0)));
                                  MR_Char check_hlds__resolve_unify_functor__Char_95;

                                  {
                                    check_hlds__resolve_unify_functor__succeeded = mercury__term_io__encode_escaped_char_2_p_1(&check_hlds__resolve_unify_functor__Char_95, check_hlds__resolve_unify_functor__Name0_94);
                                  }
                                  if (check_hlds__resolve_unify_functor__succeeded)
                                    {
                                      check_hlds__resolve_unify_functor__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 1) = ((MR_Box) (MR_Word) (check_hlds__resolve_unify_functor__Char_95));
                                    }
                                  else
                                    {
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "encode_escaped_char");
                                        return;
                                      }
                                    }
                                }
                            else
                              {
                                MR_Word check_hlds__resolve_unify_functor__TypeCtorSymName_98;
                                MR_String check_hlds__resolve_unify_functor__Name_183;
                                MR_Integer check_hlds__resolve_unify_functor__V_99_99;

                                {
                                  check_hlds__resolve_unify_functor__Name_183 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__resolve_unify_functor__SymName0_90);
                                }
                                check_hlds__resolve_unify_functor__TypeCtorSymName_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__TypeCtorOfX_89, (MR_Integer) 0)));
                                check_hlds__resolve_unify_functor__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__resolve_unify_functor__TypeCtorOfX_89, (MR_Integer) 1)));
                                if (((MR_tag((MR_Word) check_hlds__resolve_unify_functor__TypeCtorSymName_98)) == (MR_mktag((MR_Integer) 1))))
                                  {
                                    MR_Word check_hlds__resolve_unify_functor__TypeCtorModule_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TypeCtorSymName_98, (MR_Integer) 0)));
                                    MR_Word check_hlds__resolve_unify_functor__SymName_102;
                                    MR_String check_hlds__resolve_unify_functor__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__TypeCtorSymName_98, (MR_Integer) 1)));

                                    {
                                      check_hlds__resolve_unify_functor__SymName_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__SymName_102, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__TypeCtorModule_100));
                                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__SymName_102, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__Name_183));
                                    }
                                    {
                                      check_hlds__resolve_unify_functor__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__SymName_102));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__Arity_31));
                                      MR_hl_field(MR_mktag(3), check_hlds__resolve_unify_functor__ConsId_188, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__TypeCtorOfX_89));
                                    }
                                  }
                                else
                                  {
                                    {
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.resolve_unify_functor", (MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "unqualified type_ctor");
                                      return;
                                    }
                                  }
                              }
                          }
                      }
                    else
                      check_hlds__resolve_unify_functor__ConsId_188 = check_hlds__resolve_unify_functor__ConsId0_19;
                    {
                      check_hlds__resolve_unify_functor__RHS_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__RHS_104, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__ConsId_188));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__RHS_104, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__RHS_104, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__ArgVars0_20));
                    }
                    {
                      check_hlds__resolve_unify_functor__GoalExpr_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_189, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__X0_18));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_189, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__RHS_104));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_189, 2) = ((MR_Box) (check_hlds__resolve_unify_functor__Mode0_21));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_189, 3) = ((MR_Box) (check_hlds__resolve_unify_functor__Unification0_22));
                      MR_hl_field(MR_mktag(1), check_hlds__resolve_unify_functor__GoalExpr_189, 4) = ((MR_Box) (check_hlds__resolve_unify_functor__UnifyContext_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__resolve_unify_functor__Goal_28 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalExpr_189));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__GoalInfo0_24));
                    }
                    *check_hlds__resolve_unify_functor__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_110 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarTypes_0_109;
                    *check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_108 = check_hlds__resolve_unify_functor__STATE_VARIABLE_VarSet_0_107;
                    *check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_106 = check_hlds__resolve_unify_functor__STATE_VARIABLE_PredInfo_0_105;
                  }
              }
          }
      }
  }
}

void mercury__check_hlds__resolve_unify_functor__init(void)
{
}

void mercury__check_hlds__resolve_unify_functor__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__type_ctor_info_is_plain_unify_0);
}

void mercury__check_hlds__resolve_unify_functor__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__resolve_unify_functor__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.resolve_unify_functor. */
