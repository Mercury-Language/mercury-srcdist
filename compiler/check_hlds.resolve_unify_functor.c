/*
** Automatically generated from `resolve_unify_functor.m'
** by the Mercury compiler,
** version rotd-2018-07-16
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


// :- module check_hlds.resolve_unify_functor.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

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

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__478__1_1_f_0(
  MR_Word LambdaHeadVar__1_53);

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__315__1_1_f_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word AccessType_19,
  MR_Word FieldName_20,
  MR_Word UnifyContext_21,
  MR_Word Var_22,
  MR_Word Args_23,
  MR_Word GoalInfo_24,
  MR_Word * HeadVar__14_14);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word STATE_VARIABLE_PredInfo_0_55,
  MR_Word * STATE_VARIABLE_PredInfo_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word FieldName_19,
  MR_Word UnifyContext_20,
  MR_Word FieldVar_21,
  MR_Word TermInputVar_22,
  MR_Word TermOutputVar_23,
  MR_Word OldGoalInfo_24,
  MR_Word * Goal_25);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_6_p_0(
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TermType_7,
  MR_Word FieldSymName_8,
  MR_Word * ConsId_9,
  MR_Integer * FieldNumber_10);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word STATE_VARIABLE_PredInfo_0_45,
  MR_Word * STATE_VARIABLE_PredInfo_46,
  MR_Word STATE_VARIABLE_VarTypes_0_47,
  MR_Word * STATE_VARIABLE_VarTypes_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word FieldName_18,
  MR_Word UnifyContext_19,
  MR_Word FieldVar_20,
  MR_Word TermInputVar_21,
  MR_Word OldGoalInfo_22,
  MR_Word * GoalExpr_23);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_6_p_0(
  MR_Word Types_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_VarTypes_0_12,
  MR_Word * STATE_VARIABLE_VarTypes_13,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15);

static void MR_CALL 
check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(
  MR_Word Var_8,
  MR_Word RHS_9,
  MR_Word OldGoalInfo_10,
  MR_Word RestrictNonLocals_11,
  MR_Word VarsList_12,
  MR_Word UnifyContext_13,
  MR_Word * Goal_14);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_String UnqualFieldName_3,
  MR_Word * ConsId_4,
  MR_Integer * FieldNumber_5);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualFieldName_7,
  MR_Integer CurFieldNumber_8,
  MR_Integer * NamedFieldNumber_9);

static void MR_CALL 
check_hlds__resolve_unify_functor__split_list_at_index_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Integer Index_6,
  MR_Word List_7,
  MR_Word * Before_8,
  MR_Box * At_9,
  MR_Word * After_10);

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word GoalId_10,
  MR_Word ConsId_11,
  MR_Word TermType_12,
  MR_Word * ActualArgTypes_13,
  MR_Word * ActualExistQVars_14,
  MR_Word STATE_VARIABLE_PredInfo_0_50,
  MR_Word * STATE_VARIABLE_PredInfo_51);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TVars_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5);

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TVarSet_7,
  MR_Word ConsId_8,
  MR_Word Type_9,
  MR_Word ArgTypes_10);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_3[2][3];

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_5[1][8];


/* sealed */ struct check_hlds__resolve_unify_functor__vector_common_type_4_0_s {
  const MR_String check_hlds__resolve_unify_functor__vector_common_type_4_0__vct_4_f_0;
  const MR_Word check_hlds__resolve_unify_functor__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_4_0_s check_hlds__resolve_unify_functor_vector_common_4[4];



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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: reference to"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undeclared function or predicate"))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_2[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_2[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};


static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_4_0_s check_hlds__resolve_unify_functor_vector_common_4[4] = {
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



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0 = {
  (MR_String) "is_not_plain_unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1 = {
  (MR_String) "is_plain_unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2 = {
  (MR_String) "is_unknown_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1,
    INT8_C(-1)
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
  MR_TYPECTOR_REP_DU,
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

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__478__1_1_f_0(
  MR_Word LambdaHeadVar__1_53)
{
  {
    MR_Word LambdaHeadVar__2_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_53, (MR_Integer) 1))));

    return LambdaHeadVar__2_54;
  }
}

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__315__1_1_f_0(
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_Word LambdaHeadVar__2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 1))));

    return LambdaHeadVar__2_36;
  }
}

void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__error_util____Compare____error_spec_0_0(HeadVar__1_1, Var_13, ArgY1_9);
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
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__error_util____Unify____error_spec_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word X0_18,
  MR_Word ConsId0_19,
  MR_Word ArgVars0_20,
  MR_Word Mode0_21,
  MR_Word Unification0_22,
  MR_Word UnifyContext_23,
  MR_Word GoalInfo0_24,
  MR_Word STATE_VARIABLE_PredInfo_0_105,
  MR_Word * STATE_VARIABLE_PredInfo_106,
  MR_Word STATE_VARIABLE_VarSet_0_107,
  MR_Word * STATE_VARIABLE_VarSet_108,
  MR_Word STATE_VARIABLE_VarTypes_0_109,
  MR_Word * STATE_VARIABLE_VarTypes_110,
  MR_Word * Goal_28,
  MR_Word * IsPlainUnify_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeOfX_30;
    MR_Integer Arity_31;
    MR_Word Purity_35;
    MR_Word FuncVar_36;
    MR_Word FuncArgVars_37;
    MR_String ApplyName_32;
    MR_Word Var_111;
    MR_Integer Var_112;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_109, X0_18, &TypeOfX_30);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), ArgVars0_20, &Arity_31);
    succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 0))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_Integer) 0);
      if (succeeded)
      {
        ApplyName_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(ApplyName_32, ((&check_hlds__resolve_unify_functor_vector_common_4[0 + mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_4_0__vct_4_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Purity_35 = ((&check_hlds__resolve_unify_functor_vector_common_4[0 + mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_4_0__vct_4_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          Var_112 = (MR_Integer) 1;
          succeeded = (Arity_31 >= Var_112);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ArgVars0_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              FuncVar_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars0_20, (MR_Integer) 0))));
              FuncArgVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars0_20, (MR_Integer) 1))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ArgVars_38;
      MR_Integer FullArity_41;
      MR_Word HOCall_42;
      MR_Word Var_113;
      MR_Word Var_116;

      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (X0_18));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ArgVars_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), FuncArgVars_37, Var_113);
      parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, Arity_31, &FullArity_41);
      {
        Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (FuncVar_36));
        MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Purity_35));
        MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (FullArity_41));
      }
      {
        HOCall_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HOCall_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), HOCall_42, 1) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(3), HOCall_42, 2) = ((MR_Box) (ArgVars_38));
        MR_hl_field(MR_mktag(3), HOCall_42, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), HOCall_42, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), HOCall_42, 5) = ((MR_Box) ((MR_Integer) 6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HOCall_42));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_24));
      }
      *IsPlainUnify_29 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_110 = STATE_VARIABLE_VarTypes_0_109;
      *STATE_VARIABLE_VarSet_108 = STATE_VARIABLE_VarSet_0_107;
      *STATE_VARIABLE_PredInfo_106 = STATE_VARIABLE_PredInfo_0_105;
    }
    else
    {
      MR_Word PredId_60;
      MR_Word QualifiedFuncName_61;
      MR_Word TypeCtorInfo_201_201;
      MR_Word PredName_43;
      MR_Word Markers_46;
      MR_Word PredTable_47;
      MR_Word PredIds_48;
      MR_Word TVarSet_51;
      MR_Word ExistQTVars_52;
      MR_Word ExternalTypeParams_53;
      MR_Word ArgTypes0_54;
      MR_Word ArgTypes_55;
      MR_Word ConstraintMap_56;
      MR_Word GoalId_57;
      MR_Word ConstraintSearch_58;
      MR_Word Context_59;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;

      succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        PredName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 1))));
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_105, &Markers_46);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredTable_47);
        Var_119 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(Markers_46);
        hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable_47, Var_119, PredName_43, Arity_31, &PredIds_48);
        succeeded = ((MR_tag((MR_Word) PredIds_48)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_105);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_17, STATE_VARIABLE_PredInfo_0_105);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_105, &TVarSet_51);
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_0_105, &ExistQTVars_52);
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_105, &ExternalTypeParams_53);
              hlds__vartypes__lookup_var_types_3_p_0(STATE_VARIABLE_VarTypes_0_109, ArgVars0_20, &ArgTypes0_54);
              TypeCtorInfo_201_201 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              Var_121 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (TypeOfX_30));
                MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
              }
              ArgTypes_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_201_201, ArgTypes0_54, Var_120);
              hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_0_105, &ConstraintMap_56);
              GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_24);
              Var_122 = (MR_Integer) 0;
              {
                ConstraintSearch_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0_1));
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 3) = ((MR_Box) (ConstraintMap_56));
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 4) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(0), ConstraintSearch_58, 5) = ((MR_Box) (GoalId_57));
              }
              Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_24);
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (ConstraintSearch_58));
              }
              succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_17, PredIds_48, TVarSet_51, ExistQTVars_52, ArgTypes_55, ExternalTypeParams_53, Var_123, Context_59, &PredId_60, &QualifiedFuncName_61);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer ProcId_62;
        MR_Word FuncCallUnifyContext_63;
        MR_Word FuncCall_64;
        MR_Word Var_124;
        MR_Word Var_126;
        MR_Word Var_129;
        MR_Word ArgVars_169;

        ProcId_62 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (X0_18));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ArgVars_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), ArgVars0_20, Var_124);
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (ConsId0_19));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Var_126, 2) = ((MR_Box) (ArgVars0_20));
        }
        {
          FuncCallUnifyContext_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncCallUnifyContext_63, 0) = ((MR_Box) (X0_18));
          MR_hl_field(MR_mktag(0), FuncCallUnifyContext_63, 1) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), FuncCallUnifyContext_63, 2) = ((MR_Box) (UnifyContext_23));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (FuncCallUnifyContext_63));
        }
        {
          FuncCall_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), FuncCall_64, 0) = ((MR_Box) (PredId_60));
          MR_hl_field(MR_mktag(2), FuncCall_64, 1) = ((MR_Box) (ProcId_62));
          MR_hl_field(MR_mktag(2), FuncCall_64, 2) = ((MR_Box) (ArgVars_169));
          MR_hl_field(MR_mktag(2), FuncCall_64, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(2), FuncCall_64, 4) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(2), FuncCall_64, 5) = ((MR_Box) (QualifiedFuncName_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncCall_64));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_24));
        }
        *IsPlainUnify_29 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTypes_110 = STATE_VARIABLE_VarTypes_0_109;
        *STATE_VARIABLE_VarSet_108 = STATE_VARIABLE_VarSet_0_107;
        *STATE_VARIABLE_PredInfo_106 = STATE_VARIABLE_PredInfo_0_105;
      }
      else
      {
        MR_Word Name_65;
        MR_Word Context_196;
        MR_Word PredId_197;
        MR_Word TypeCtorInfo_204_204;
        MR_Word PredOrFunc_69;
        MR_Word HOArgTypes_71;
        MR_Word AllArgTypes_72;
        MR_Word ExistQVars_73;
        MR_Word Var_130;
        MR_Word Markers_170;
        MR_Word TVarSet_171;
        MR_Word ExternalTypeParams_172;
        MR_Word ArgTypes0_173;
        MR_Word _Purity_68;

        succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 0))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Name_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 1))));
          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_30, &_Purity_68, &PredOrFunc_69, &HOArgTypes_71);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_17, STATE_VARIABLE_PredInfo_0_105);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__vartypes__lookup_var_types_3_p_0(STATE_VARIABLE_VarTypes_0_109, ArgVars0_20, &ArgTypes0_173);
              TypeCtorInfo_204_204 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              AllArgTypes_72 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_204_204, ArgTypes0_173, HOArgTypes_71);
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_105, &TVarSet_171);
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_0_105, &ExistQVars_73);
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_105, &ExternalTypeParams_172);
              hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_105, &Markers_170);
              Context_196 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_24);
              Var_130 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(Markers_170);
              succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(Var_130, Name_65, PredOrFunc_69, TVarSet_171, ExistQVars_73, AllArgTypes_72, ExternalTypeParams_172, ModuleInfo_17, Context_196, &PredId_197);
            }
          }
        }
        if (succeeded)
        {
          MR_Word PredInfo_25;
          MR_Word ProcIds_74;
          MR_Word MaybeProcId_76;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_197, &PredInfo_25);
          ProcIds_74 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_25);
          if ((ProcIds_74 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeProcId_76 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcIds_74, (MR_Integer) 1))));
            MR_Integer Var_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_74, (MR_Integer) 0))));

            if ((Var_208 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeProcId_76, 0) = ((MR_Box) (Var_209));
              }
            else
            {
              MR_Integer Var_132;

              Var_132 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              {
                MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeProcId_76, 0) = ((MR_Box) (Var_132));
              }
            }
          }
          if ((MaybeProcId_76 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_83;
            MR_Word Msg_84;
            MR_Word Spec_85;
            MR_Word Var_136;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_153;

            *Goal_28 = hlds__make_goal__true_goal_0_f_0();
            {
              Var_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (Name_65));
              MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (Arity_31));
            }
            {
              Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (Var_141));
            }
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
              MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__resolve_unify_functor_scalar_common_1[4])));
            }
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[7])));
              MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[6])));
              MR_hl_field(MR_mktag(1), Pieces_83, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (Pieces_83));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Msg_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_84, 0) = ((MR_Box) (Context_196));
              MR_hl_field(MR_mktag(0), Msg_84, 1) = ((MR_Box) (Var_148));
            }
            {
              Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Msg_84));
              MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(0), Spec_85, 2) = ((MR_Box) (Var_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *IsPlainUnify_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_85));
            }
          }
          else
          {
            MR_Word ShroudedPredProcId_80;
            MR_Word ConsId_81;
            MR_Word GoalExpr_82;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Integer ProcId_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeProcId_76, (MR_Integer) 0))));

            {
              Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (PredId_197));
              MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (ProcId_174));
            }
            ShroudedPredProcId_80 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_155);
            {
              ConsId_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ConsId_81, 1) = ((MR_Box) (ShroudedPredProcId_80));
              MR_hl_field(MR_mktag(3), ConsId_81, 2) = NULL;
            }
            {
              Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (ConsId_81));
              MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), Var_156, 2) = ((MR_Box) (ArgVars0_20));
            }
            {
              GoalExpr_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalExpr_82, 0) = ((MR_Box) (X0_18));
              MR_hl_field(MR_mktag(1), GoalExpr_82, 1) = ((MR_Box) (Var_156));
              MR_hl_field(MR_mktag(1), GoalExpr_82, 2) = ((MR_Box) (Mode0_21));
              MR_hl_field(MR_mktag(1), GoalExpr_82, 3) = ((MR_Box) (Unification0_22));
              MR_hl_field(MR_mktag(1), GoalExpr_82, 4) = ((MR_Box) (UnifyContext_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_82));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_24));
            }
            *IsPlainUnify_29 = (MR_Word) ((MR_Unsigned) 0U);
          }
          *STATE_VARIABLE_VarTypes_110 = STATE_VARIABLE_VarTypes_0_109;
          *STATE_VARIABLE_VarSet_108 = STATE_VARIABLE_VarSet_0_107;
          *STATE_VARIABLE_PredInfo_106 = STATE_VARIABLE_PredInfo_0_105;
        }
        else
        {
          MR_Word AccessType_87;
          MR_Word FieldName_88;
          MR_Word TVarSet_177;
          MR_Word ArgTypes0_178;
          MR_Word Name_179;
          MR_Integer Var_205;
          MR_Integer Var_206;

          succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Name_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 1))));
            Var_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 2))));
            succeeded = (Arity_31 == Var_205);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_17, Name_179, &Var_206, &AccessType_87, &FieldName_88);
              if (succeeded)
              {
                succeeded = (Arity_31 == Var_206);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_105);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_105, &TVarSet_177);
                    hlds__vartypes__lookup_var_types_3_p_0(STATE_VARIABLE_VarTypes_0_109, ArgVars0_20, &ArgTypes0_178);
                    succeeded = check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(ModuleInfo_17, TVarSet_177, ConsId0_19, TypeOfX_30, ArgTypes0_178);
                    succeeded = !(succeeded);
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(ModuleInfo_17, STATE_VARIABLE_PredInfo_0_105, STATE_VARIABLE_PredInfo_106, STATE_VARIABLE_VarTypes_0_109, STATE_VARIABLE_VarTypes_110, STATE_VARIABLE_VarSet_0_107, STATE_VARIABLE_VarSet_108, AccessType_87, FieldName_88, UnifyContext_23, X0_18, ArgVars0_20, GoalInfo0_24, Goal_28);
            *IsPlainUnify_29 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word TypeCtorOfX_89;
            MR_Word RHS_104;
            MR_Word ConsId_185;
            MR_Word GoalExpr_186;
            MR_Word SymName0_90;
            MR_Integer Var_207;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeOfX_30, &TypeCtorOfX_89);
            succeeded = ((((MR_tag((MR_Word) ConsId0_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 0))) == (MR_Integer) 2)));
            if (succeeded)
            {
              SymName0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 1))));
              Var_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_19, (MR_Integer) 2))));
              succeeded = (Arity_31 == Var_207);
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) TypeOfX_30)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeOfX_30, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                {
                  ConsId_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConsId_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ConsId_185, 1) = ((MR_Box) (Arity_31));
                }
              }
              else
              {
                MR_Word Var_161;

                succeeded = ((MR_tag((MR_Word) TypeOfX_30)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeOfX_30, (MR_Integer) 0))));
                  succeeded = (Var_161 == (MR_Word) ((MR_Unsigned) 8U));
                }
                if (succeeded)
                  if (((MR_tag((MR_Word) SymName0_90)) == (MR_Integer) 1))
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "qualified char const");
                      return;
                    }
                  }
                  else
                  {
                    MR_String Name0_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName0_90, (MR_Integer) 0))));
                    MR_Char Char_95;

                    succeeded = mercury__term_io__encode_escaped_char_2_p_1(&Char_95, Name0_94);
                    if (succeeded)
                      {
                        ConsId_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ConsId_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                        MR_hl_field(MR_mktag(3), ConsId_185, 1) = ((MR_Box) (MR_Word) (Char_95));
                      }
                    else
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "encode_escaped_char");
                        return;
                      }
                    }
                  }
                else
                {
                  MR_Word TypeCtorSymName_98;
                  MR_String Name_180;

                  Name_180 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_90);
                  TypeCtorSymName_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorOfX_89, (MR_Integer) 0))));
                  if (((MR_tag((MR_Word) TypeCtorSymName_98)) == (MR_Integer) 1))
                  {
                    MR_Word TypeCtorModule_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_98, (MR_Integer) 0))));
                    MR_Word SymName_102;

                    {
                      SymName_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SymName_102, 0) = ((MR_Box) (TypeCtorModule_100));
                      MR_hl_field(MR_mktag(1), SymName_102, 1) = ((MR_Box) (Name_180));
                    }
                    {
                      ConsId_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConsId_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), ConsId_185, 1) = ((MR_Box) (SymName_102));
                      MR_hl_field(MR_mktag(3), ConsId_185, 2) = ((MR_Box) (Arity_31));
                      MR_hl_field(MR_mktag(3), ConsId_185, 3) = ((MR_Box) (TypeCtorOfX_89));
                    }
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/16", (MR_String) "unqualified type_ctor");
                      return;
                    }
                  }
                }
              }
            }
            else
              ConsId_185 = ConsId0_19;
            {
              RHS_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RHS_104, 0) = ((MR_Box) (ConsId_185));
              MR_hl_field(MR_mktag(1), RHS_104, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), RHS_104, 2) = ((MR_Box) (ArgVars0_20));
            }
            {
              GoalExpr_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalExpr_186, 0) = ((MR_Box) (X0_18));
              MR_hl_field(MR_mktag(1), GoalExpr_186, 1) = ((MR_Box) (RHS_104));
              MR_hl_field(MR_mktag(1), GoalExpr_186, 2) = ((MR_Box) (Mode0_21));
              MR_hl_field(MR_mktag(1), GoalExpr_186, 3) = ((MR_Box) (Unification0_22));
              MR_hl_field(MR_mktag(1), GoalExpr_186, 4) = ((MR_Box) (UnifyContext_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_186));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_24));
            }
            *IsPlainUnify_29 = (MR_Word) ((MR_Unsigned) 4U);
            *STATE_VARIABLE_VarTypes_110 = STATE_VARIABLE_VarTypes_0_109;
            *STATE_VARIABLE_VarSet_108 = STATE_VARIABLE_VarSet_0_107;
            *STATE_VARIABLE_PredInfo_106 = STATE_VARIABLE_PredInfo_0_105;
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word AccessType_19,
  MR_Word FieldName_20,
  MR_Word UnifyContext_21,
  MR_Word Var_22,
  MR_Word Args_23,
  MR_Word GoalInfo_24,
  MR_Word * HeadVar__14_14)
{
  {
    MR_Word GoalExpr_25;

    switch (AccessType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermVar_26;

          hlds__hlds_pred__field_extraction_function_args_2_p_0(Args_23, &TermVar_26);
          check_hlds__resolve_unify_functor__translate_get_function_13_p_0(ModuleInfo_15, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30, STATE_VARIABLE_VarTypes_0_31, STATE_VARIABLE_VarTypes_32, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34, FieldName_20, UnifyContext_21, Var_22, TermVar_26, GoalInfo_24, &GoalExpr_25);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TermInputVar_27;
          MR_Word FieldVar_28;

          hlds__hlds_pred__field_update_function_args_3_p_0(Args_23, &TermInputVar_27, &FieldVar_28);
          check_hlds__resolve_unify_functor__translate_set_function_14_p_0(ModuleInfo_15, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30, STATE_VARIABLE_VarTypes_0_31, STATE_VARIABLE_VarTypes_32, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34, FieldName_20, UnifyContext_21, FieldVar_28, TermInputVar_27, Var_22, GoalInfo_24, &GoalExpr_25);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__14_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word STATE_VARIABLE_PredInfo_0_55,
  MR_Word * STATE_VARIABLE_PredInfo_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word FieldName_19,
  MR_Word UnifyContext_20,
  MR_Word FieldVar_21,
  MR_Word TermInputVar_22,
  MR_Word TermOutputVar_23,
  MR_Word OldGoalInfo_24,
  MR_Word * Goal_25)
{
  {
    MR_bool succeeded;
    MR_Word TermType_26;
    MR_Word ConsId0_27;
    MR_Integer FieldNumber_28;
    MR_Word GoalId_29;
    MR_Word ArgTypes_30;
    MR_Word ExistQVars_31;
    MR_Word TypesBeforeField_32;
    MR_Word TermFieldType_33;
    MR_Word TypesAfterField_34;
    MR_Word VarsBeforeField_35;
    MR_Word SingletonFieldVar_36;
    MR_Word VarsAfterField_37;
    MR_Word DeconstructArgs_38;
    MR_Word OldNonLocals_39;
    MR_Word NonLocalArgs_40;
    MR_Word DeconstructRestrictNonLocals_41;
    MR_Word DeconstructGoal_42;
    MR_Word ConstructArgs_43;
    MR_Word ConstructRestrictNonLocals_44;
    MR_Word ConsId_45;
    MR_Word ConstructGoal_52;
    MR_Word ConjExpr_53;
    MR_Word Conj_54;
    MR_Word STATE_VARIABLE_VarTypes_62_62;
    MR_Word STATE_VARIABLE_VarSet_63_63;
    MR_Word STATE_VARIABLE_VarTypes_64_64;
    MR_Word STATE_VARIABLE_VarSet_65_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Box conv0_TermFieldType_33;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_57, TermInputVar_22, &TermType_26);
    check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(ModuleInfo_15, TermType_26, FieldName_19, &ConsId0_27, &FieldNumber_28);
    GoalId_29 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_24);
    check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(ModuleInfo_15, GoalId_29, ConsId0_27, TermType_26, &ArgTypes_30, &ExistQVars_31, STATE_VARIABLE_PredInfo_0_55, STATE_VARIABLE_PredInfo_56);
    check_hlds__resolve_unify_functor__split_list_at_index_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FieldNumber_28, ArgTypes_30, &TypesBeforeField_32, &conv0_TermFieldType_33, &TypesAfterField_34);
    TermFieldType_33 = ((MR_Word) (conv0_TermFieldType_33));
    check_hlds__resolve_unify_functor__make_new_vars_6_p_0(TypesBeforeField_32, &VarsBeforeField_35, STATE_VARIABLE_VarTypes_0_57, &STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_VarSet_0_59, &STATE_VARIABLE_VarSet_63_63);
    check_hlds__resolve_unify_functor__make_new_var_6_p_0(TermFieldType_33, &SingletonFieldVar_36, STATE_VARIABLE_VarTypes_62_62, &STATE_VARIABLE_VarTypes_64_64, STATE_VARIABLE_VarSet_63_63, &STATE_VARIABLE_VarSet_65_65);
    check_hlds__resolve_unify_functor__make_new_vars_6_p_0(TypesAfterField_34, &VarsAfterField_37, STATE_VARIABLE_VarTypes_64_64, STATE_VARIABLE_VarTypes_58, STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarSet_60);
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (SingletonFieldVar_36));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (VarsAfterField_37));
    }
    DeconstructArgs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_35, Var_68);
    OldNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OldGoalInfo_24);
    NonLocalArgs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_35, VarsAfterField_37);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalArgs_40, OldNonLocals_39, &DeconstructRestrictNonLocals_41);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (ConsId0_27));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_69, 2) = ((MR_Box) (DeconstructArgs_38));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (TermInputVar_22));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (DeconstructArgs_38));
    }
    check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(TermInputVar_22, Var_69, OldGoalInfo_24, DeconstructRestrictNonLocals_41, Var_70, UnifyContext_20, &DeconstructGoal_42);
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FieldVar_21));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (VarsAfterField_37));
    }
    ConstructArgs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_35, Var_72);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalArgs_40, OldNonLocals_39, &ConstructRestrictNonLocals_44);
    if ((ExistQVars_31 == (MR_Word) ((MR_Unsigned) 0U)))
      ConsId_45 = ConsId0_27;
    else
    {
      MR_Word ConsName0_48;
      MR_Integer ConsArity_49;
      MR_Word TypeCtor_50;

      succeeded = ((((MR_tag((MR_Word) ConsId0_27)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId0_27, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ConsName0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_27, (MR_Integer) 1))));
        ConsArity_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_27, (MR_Integer) 2))));
        TypeCtor_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_27, (MR_Integer) 3))));
        {
          MR_Word ConsName_51;

          parse_tree__prog_type__add_new_prefix_2_p_0(ConsName0_48, &ConsName_51);
          {
            ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsId_45, 1) = ((MR_Box) (ConsName_51));
            MR_hl_field(MR_mktag(3), ConsId_45, 2) = ((MR_Box) (ConsArity_49));
            MR_hl_field(MR_mktag(3), ConsId_45, 3) = ((MR_Box) (TypeCtor_50));
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.translate_set_function\'/14", (MR_String) "invalid cons_id");
          return;
        }
      }
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ConsId_45));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_75, 2) = ((MR_Box) (ConstructArgs_43));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (TermOutputVar_23));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (ConstructArgs_43));
    }
    check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(TermOutputVar_23, Var_75, OldGoalInfo_24, ConstructRestrictNonLocals_44, Var_76, UnifyContext_20, &ConstructGoal_52);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (ConstructGoal_52));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (DeconstructGoal_42));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
    }
    {
      ConjExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConjExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConjExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConjExpr_53, 2) = ((MR_Box) (Var_79));
    }
    {
      Conj_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Conj_54, 0) = ((MR_Box) (ConjExpr_53));
      MR_hl_field(MR_mktag(0), Conj_54, 1) = ((MR_Box) (OldGoalInfo_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *Goal_25 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__resolve_unify_functor_scalar_common_1[5])));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Conj_54));
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_6_p_0(
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14)
{
  {
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_VarSet_0_13, STATE_VARIABLE_VarSet_14);
    hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_7, STATE_VARIABLE_VarTypes_0_11, STATE_VARIABLE_VarTypes_12);
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TermType_7,
  MR_Word FieldSymName_8,
  MR_Word * ConsId_9,
  MR_Integer * FieldNumber_10)
{
  {
    MR_Word TermTypeCtor_11;
    MR_Word TypeTable_12;
    MR_Word TermTypeDefn_13;
    MR_Word TermTypeBody_14;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(TermType_7, &TermTypeCtor_11);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_12);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_12, TermTypeCtor_11, &TermTypeDefn_13);
    hlds__hlds_data__get_type_defn_body_2_p_0(TermTypeDefn_13, &TermTypeBody_14);
    switch (MR_tag((MR_Word) TermTypeBody_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermTypeBody_14, (MR_Integer) 0))));
          MR_String FieldName_19;

          FieldName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_8);
          check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(TermTypeCtor_11, Ctors_15, FieldName_19, ConsId_9, FieldNumber_10);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word STATE_VARIABLE_PredInfo_0_45,
  MR_Word * STATE_VARIABLE_PredInfo_46,
  MR_Word STATE_VARIABLE_VarTypes_0_47,
  MR_Word * STATE_VARIABLE_VarTypes_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word FieldName_18,
  MR_Word UnifyContext_19,
  MR_Word FieldVar_20,
  MR_Word TermInputVar_21,
  MR_Word OldGoalInfo_22,
  MR_Word * GoalExpr_23)
{
  {
    MR_Word TermType_24;
    MR_Word ConsId_25;
    MR_Integer FieldNumber_26;
    MR_Word GoalId_27;
    MR_Word ArgTypes0_28;
    MR_Word ExistQVars_29;
    MR_Word ArgTypes_35;
    MR_Word TypesBeforeField_36;
    MR_Word TypesAfterField_38;
    MR_Word VarsBeforeField_39;
    MR_Word VarsAfterField_40;
    MR_Word ArgVars_41;
    MR_Word RestrictNonLocals_42;
    MR_Word FunctorGoal_43;
    MR_Word STATE_VARIABLE_VarTypes_52_52;
    MR_Word STATE_VARIABLE_VarSet_53_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word TermTypeCtor_70;
    MR_Word TypeTable_71;
    MR_Word TermTypeDefn_72;
    MR_Word TermTypeBody_73;
    MR_Box conv1_Var_37;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_47, TermInputVar_21, &TermType_24);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(TermType_24, &TermTypeCtor_70);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_14, &TypeTable_71);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_71, TermTypeCtor_70, &TermTypeDefn_72);
    hlds__hlds_data__get_type_defn_body_2_p_0(TermTypeDefn_72, &TermTypeBody_73);
    switch (MR_tag((MR_Word) TermTypeBody_73)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermTypeBody_73, (MR_Integer) 0))));
          MR_String FieldName_78;

          FieldName_78 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_18);
          check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(TermTypeCtor_70, Ctors_74, FieldName_78, &ConsId_25, &FieldNumber_26);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
            return;
          }
        }
        break;
    }
    GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_22);
    check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(ModuleInfo_14, GoalId_27, ConsId_25, TermType_24, &ArgTypes0_28, &ExistQVars_29, STATE_VARIABLE_PredInfo_0_45, STATE_VARIABLE_PredInfo_46);
    if ((ExistQVars_29 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgTypes_35 = ArgTypes0_28;
    else
    {
      MR_Word FieldType_32;
      MR_Word FieldArgType_33;
      MR_Word FieldSubst_34;
      MR_Box conv0_FieldArgType_33;

      hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_47, FieldVar_20, &FieldType_32);
      mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_28, FieldNumber_26, &conv0_FieldArgType_33);
      FieldArgType_33 = ((MR_Word) (conv0_FieldArgType_33));
      parse_tree__prog_type__type_subsumes_det_3_p_0(FieldArgType_33, FieldType_32, &FieldSubst_34);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(FieldSubst_34, ArgTypes0_28, &ArgTypes_35);
    }
    check_hlds__resolve_unify_functor__split_list_at_index_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FieldNumber_26, ArgTypes_35, &TypesBeforeField_36, &conv1_Var_37, &TypesAfterField_38);
    check_hlds__resolve_unify_functor__make_new_vars_6_p_0(TypesBeforeField_36, &VarsBeforeField_39, STATE_VARIABLE_VarTypes_0_47, &STATE_VARIABLE_VarTypes_52_52, STATE_VARIABLE_VarSet_0_49, &STATE_VARIABLE_VarSet_53_53);
    check_hlds__resolve_unify_functor__make_new_vars_6_p_0(TypesAfterField_38, &VarsAfterField_40, STATE_VARIABLE_VarTypes_52_52, STATE_VARIABLE_VarTypes_48, STATE_VARIABLE_VarSet_53_53, STATE_VARIABLE_VarSet_50);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (FieldVar_20));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (VarsAfterField_40));
    }
    ArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_39, Var_56);
    RestrictNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OldGoalInfo_22);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ConsId_25));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_57, 2) = ((MR_Box) (ArgVars_41));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TermInputVar_21));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (FieldVar_20));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(TermInputVar_21, Var_57, OldGoalInfo_22, RestrictNonLocals_42, Var_58, UnifyContext_19, &FunctorGoal_43);
    *GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorGoal_43, (MR_Integer) 0))));
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_6_p_0(
  MR_Word Types_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_VarTypes_0_12,
  MR_Word * STATE_VARIABLE_VarTypes_13,
  MR_Word STATE_VARIABLE_VarSet_0_14,
  MR_Word * STATE_VARIABLE_VarSet_15)
{
  {
    MR_Integer NumVars_11;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_7, &NumVars_11);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NumVars_11, Vars_8, STATE_VARIABLE_VarSet_0_14, STATE_VARIABLE_VarSet_15);
    hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(*Vars_8, Types_7, STATE_VARIABLE_VarTypes_0_12, STATE_VARIABLE_VarTypes_13);
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(
  MR_Word Var_8,
  MR_Word RHS_9,
  MR_Word OldGoalInfo_10,
  MR_Word RestrictNonLocals_11,
  MR_Word VarsList_12,
  MR_Word UnifyContext_13,
  MR_Word * Goal_14)
{
  {
    MR_Word Context_15;
    MR_Word GoalId_16;
    MR_Word UnifyMainContext_17;
    MR_Word UnifySubContext_18;
    MR_Word Goal0_19;
    MR_Word GoalExpr0_20;
    MR_Word GoalInfo0_21;
    MR_Word NonLocals1_22;
    MR_Word NonLocals_23;
    MR_Word GoalInfo1_24;
    MR_Word GoalInfo_25;

    Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_10);
    GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_10);
    UnifyMainContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_13, (MR_Integer) 0))));
    UnifySubContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_13, (MR_Integer) 1))));
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var_8, RHS_9, Context_15, UnifyMainContext_17, UnifySubContext_18, &Goal0_19);
    GoalExpr0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_19, (MR_Integer) 0))));
    GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_19, (MR_Integer) 1))));
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsList_12, &NonLocals1_22);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RestrictNonLocals_11, NonLocals1_22, &NonLocals_23);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_23, GoalInfo0_21, &GoalInfo1_24);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_16, GoalInfo1_24, &GoalInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
    }
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_String UnqualFieldName_3,
  MR_Word * ConsId_4,
  MR_Integer * FieldNumber_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field_loop\'/5", (MR_String) "can\'t find field");
        return;
      }
    }
    else
    {
      MR_Word Ctor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ctors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
      MR_Word CtorArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
      MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
      MR_Integer FieldNumberPrime_24;

      succeeded = check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(CtorArgs_21, UnqualFieldName_3, (MR_Integer) 1, &FieldNumberPrime_24);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ConsId_4 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_22));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_1));
        }
        *FieldNumber_5 = FieldNumberPrime_24;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Ctors_14;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualFieldName_7,
  MR_Integer CurFieldNumber_8,
  MR_Integer * NamedFieldNumber_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
    MR_Word CtorArg_5;
    MR_Word CtorArgs_6;
    MR_Word ArgFieldName_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_String Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      CtorArg_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      CtorArgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0))));
        ArgFieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        Var_18 = mdbcomp__sym_name__unqualify_name_1_f_0(ArgFieldName_10);
        succeeded = (strcmp(UnqualFieldName_7, Var_18) == 0);
      }
      if (succeeded)
      {
        *NamedFieldNumber_9 = CurFieldNumber_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) CurFieldNumber_8 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = CtorArgs_6;
        MR_Integer next_value_of_CurFieldNumber_8 = Var_14;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        CurFieldNumber_8 = next_value_of_CurFieldNumber_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__split_list_at_index_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Integer Index_6,
  MR_Word List_7,
  MR_Word * Before_8,
  MR_Box * At_9,
  MR_Word * After_10)
{
  {
    MR_bool succeeded;
    MR_Word BeforePrime_11;
    MR_Box AtPrime_13;
    MR_Word AfterPrime_14;
    MR_Word AtAndAfter_12;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Index_6 - (MR_Unsigned) (MR_Integer) 1);

    succeeded = mercury__list__split_list_4_p_0(TypeInfo_for_T_19, Var_15, List_7, &BeforePrime_11, &AtAndAfter_12);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) AtAndAfter_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        AtPrime_13 = (MR_hl_field(MR_mktag(1), AtAndAfter_12, (MR_Integer) 0));
        AfterPrime_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtAndAfter_12, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      *Before_8 = BeforePrime_11;
      *At_9 = AtPrime_13;
      *After_10 = AfterPrime_14;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.split_list_at_index\'/5", (MR_String) "split_list_at_index");
        return;
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_54;

    conv0_LambdaHeadVar__2_54 = check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__478__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_54));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word GoalId_10,
  MR_Word ConsId_11,
  MR_Word TermType_12,
  MR_Word * ActualArgTypes_13,
  MR_Word * ActualExistQVars_14,
  MR_Word STATE_VARIABLE_PredInfo_0_50,
  MR_Word * STATE_VARIABLE_PredInfo_51)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_16;
    MR_Word ConsDefn_17;
    MR_Word TypeParams_20;
    MR_Word MaybeExistConstraints_22;
    MR_Word ConsArgs_23;
    MR_Word ConsArgTypes_25;
    MR_Word ActualArgTypes0_27;
    MR_Word TypeArgs_48;
    MR_Word UnivTSubst_49;
    MR_Word Var_47;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(TermType_12, &TypeCtor_16);
    check_hlds__type_util__get_cons_defn_det_4_p_0(ModuleInfo_9, TypeCtor_16, ConsId_11, &ConsDefn_17);
    TypeParams_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 2))));
    MaybeExistConstraints_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 4))));
    ConsArgs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_17, (MR_Integer) 5))));
    ConsArgTypes_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_3[1]), ConsArgs_23);
    if ((MaybeExistConstraints_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ActualArgTypes0_27 = ConsArgTypes_25;
      *ActualExistQVars_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_PredInfo_51 = STATE_VARIABLE_PredInfo_0_50;
    }
    else
    {
      MR_Word ExistConstraints_28 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_22), (MR_Integer) 1));
      MR_Word ConsExistQVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_28, (MR_Integer) 0))));
      MR_Word ConsConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_28, (MR_Integer) 1))));
      MR_Integer NumExistQVars_33;
      MR_Word TVarSet0_34;
      MR_Word ParentExistQVars_35;
      MR_Word TVarSet_36;
      MR_Word ConsToParentRenaming_37;
      MR_Word ParentArgTypes_38;
      MR_Word ParentConstraints_39;
      MR_Word ConstraintMap_40;
      MR_Integer NumConstraints_41;
      MR_Word ActualConstraints_42;
      MR_Word ExistTSubst_43;
      MR_Word KindMap_44;
      MR_Word ActualExistQVarTypes_45;
      MR_Word TVarsB_72;
      MR_Word Subst0_73;
      MR_Word Subst1_74;
      MR_Word ActualExistQVars0_46;

      mercury__list__length_2_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), ConsExistQVars_29, &NumExistQVars_33);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_50, &TVarSet0_34);
      mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumExistQVars_33, &ParentExistQVars_35, TVarSet0_34, &TVarSet_36);
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_36, STATE_VARIABLE_PredInfo_0_50, STATE_VARIABLE_PredInfo_51);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), ConsExistQVars_29, ParentExistQVars_35, &ConsToParentRenaming_37);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(ConsToParentRenaming_37, ConsArgTypes_25, &ParentArgTypes_38);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(ConsToParentRenaming_37, ConsConstraints_30, &ParentConstraints_39);
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(*STATE_VARIABLE_PredInfo_51, &ConstraintMap_40);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConsConstraints_30, &NumConstraints_41);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_40, (MR_Integer) 1, GoalId_10, NumConstraints_41, &ActualConstraints_42);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ActualConstraints_42, &TVarsB_72);
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst0_73);
      succeeded = check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(ParentConstraints_39, ActualConstraints_42, TVarsB_72, Subst0_73, &Subst1_74);
      if (succeeded)
        ExistTSubst_43 = Subst1_74;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.constraint_list_subsumes_det\'/3", (MR_String) "failed");
          return;
        }
      }
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ExistTSubst_43, ParentArgTypes_38, &ActualArgTypes0_27);
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_44);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_44, ExistTSubst_43, ParentExistQVars_35, &ActualExistQVarTypes_45);
      succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ActualExistQVarTypes_45, &ActualExistQVars0_46);
      if (succeeded)
        *ActualExistQVars_14 = ActualExistQVars0_46;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
          return;
        }
      }
    }
    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(TermType_12, &Var_47, &TypeArgs_48);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_20, TypeArgs_48, &UnivTSubst_49);
    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(UnivTSubst_49, ActualArgTypes0_27, ActualArgTypes_13);
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TVars_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_5 = STATE_VARIABLE_Subst_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word A_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word As_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word B_12;
      MR_Word Bs_13;
      MR_Word ArgTypesA_17;
      MR_Word ArgTypesB_19;
      MR_Word STATE_VARIABLE_Subst_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        B_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Bs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgTypesA_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_10, (MR_Integer) 1))));
        ArgTypesB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_12, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type__type_unify_list_5_p_0(ArgTypesA_17, ArgTypesB_19, TVars_3, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_22_22);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = As_11;
          next_value_of_HeadVar__2_2 = Bs_13;
          next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_22_22;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_36;

    conv0_LambdaHeadVar__2_36 = check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__315__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TVarSet_7,
  MR_Word ConsId_8,
  MR_Word Type_9,
  MR_Word ArgTypes_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeCtorInfo_41_41;
    MR_Word TypeCtor_11;
    MR_Word ConsTable_12;
    MR_Word ConsDefn_13;
    MR_Word MaybeExistConstraints_18;
    MR_Word ConsArgs_19;
    MR_Word TypeTable_21;
    MR_Word TypeDefn_22;
    MR_Word TypeTVarSet_23;
    MR_Word TypeKindMap_24;
    MR_Word ConsExistQVars_25;
    MR_Word ConsArgTypes_29;
    MR_Word ExistQVars_31;
    MR_Word ExternalTypeParams_32;
    MR_Word Var_34;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_9, &TypeCtor_11);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_6, &ConsTable_12);
      succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(ConsTable_12, TypeCtor_11, ConsId_8, &ConsDefn_13);
      if (succeeded)
      {
        MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_13, (MR_Integer) 4))));
        ConsArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_13, (MR_Integer) 5))));
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_21);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_21, TypeCtor_11, &TypeDefn_22);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_22, &TypeTVarSet_23);
          hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_22, &TypeKindMap_24);
          if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
            ConsExistQVars_25 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_33 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_18), (MR_Integer) 1));

            ConsExistQVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
          }
          TypeCtorInfo_40_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
          TypeCtorInfo_41_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          Var_34 = (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_3[0]);
          ConsArgTypes_29 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeCtorInfo_41_41, Var_34, ConsArgs_19);
          ExistQVars_31 = (MR_Word) ((MR_Unsigned) 0U);
          ExternalTypeParams_32 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(TVarSet_7, ExistQVars_31, ArgTypes_10, ExternalTypeParams_32, TypeTVarSet_23, TypeKindMap_24, ConsExistQVars_25, ConsArgTypes_29);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module check_hlds.resolve_unify_functor.
