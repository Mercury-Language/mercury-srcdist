/*
** Automatically generated from `resolve_unify_functor.m'
** by the Mercury compiler,
** version rotd-2024-08-07
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
#include "integer.mih"
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
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__514__1_1_f_0(
  MR_Word LambdaHeadVar__1_53);

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__352__1_1_f_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word AccessType_14,
  MR_Word FieldName_15,
  MR_Word UnifyContext_16,
  MR_Word Var_17,
  MR_Word Args_18,
  MR_Word GoalInfo_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_VarTable_0_27,
  MR_Word * STATE_VARIABLE_VarTable_28,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word FieldName_14,
  MR_Word UnifyContext_15,
  MR_Word FieldVar_16,
  MR_Word TermInputVar_17,
  MR_Word TermOutputVar_18,
  MR_Word OldGoalInfo_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_VarTable_0_54,
  MR_Word * STATE_VARIABLE_VarTable_55,
  MR_Word STATE_VARIABLE_PredInfo_0_56,
  MR_Word * STATE_VARIABLE_PredInfo_57);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_VarTable_0_12,
  MR_Word * STATE_VARIABLE_VarTable_13);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11);

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
check_hlds__resolve_unify_functor__translate_get_function_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word FieldName_13,
  MR_Word UnifyContext_14,
  MR_Word FieldVar_15,
  MR_Word TermInputVar_16,
  MR_Word OldGoalInfo_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_VarTable_0_43,
  MR_Word * STATE_VARIABLE_VarTable_44,
  MR_Word STATE_VARIABLE_PredInfo_0_45,
  MR_Word * STATE_VARIABLE_PredInfo_46);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_String UnqualFieldName_3,
  MR_Word * DuCtor_4,
  MR_Integer * FieldNumber_5);

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String UnqualFieldName_7,
  MR_Integer CurFieldNumber_8,
  MR_Integer * NamedFieldNumber_9);

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word GoalId_10,
  MR_Word DuCtor_11,
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
  MR_Word DuCtor_8,
  MR_Word Type_9,
  MR_Word ArgTypes_10);

static void MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_std_10_p_0(
  MR_Word X0_11,
  MR_Word ConsId_12,
  MR_Word ArgVars0_13,
  MR_Word Mode0_14,
  MR_Word Unification0_15,
  MR_Word UnifyContext_16,
  MR_Word GoalInfo0_17,
  MR_Word * Goal_18,
  MR_Word * IsPlainUnify_19,
  MR_Word * Specs_20);

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

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_4[2][8];


struct check_hlds__resolve_unify_functor__vector_common_type_5_0_s {
  const MR_String check_hlds__resolve_unify_functor__vector_common_type_5_0__vct_5_f_0;
  const MR_Word check_hlds__resolve_unify_functor__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_5_0_s check_hlds__resolve_unify_functor_vector_common_5[4];



static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the predicate or function"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__resolve_unify_functor_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__resolve_unify_functor_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_2[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_2[0])),
    ((MR_Box) (check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__resolve_unify_functor_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};


static /* final */ const struct check_hlds__resolve_unify_functor__vector_common_type_5_0_s check_hlds__resolve_unify_functor_vector_common_5[4] = {
  /* row   0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "apply",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 1
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__resolve_unify_functor__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__resolve_unify_functor__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_0 = {
  (MR_String) "is_not_plain_unify",
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

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_1 = {
  (MR_String) "is_plain_unify",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__field_types_is_plain_unify_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2 = {
  (MR_String) "is_unknown_ref",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
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

static const MR_DuFunctorDescPtr check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1[1] = { &check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_functor_desc_is_plain_unify_0_2 };

static const MR_DuPtagLayout check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_ptag_ordered_is_plain_unify_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_stag_ordered_is_plain_unify_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001)),
  ((MR_Box) (check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001)),
  (MR_String) "check_hlds.resolve_unify_functor",
  (MR_String) "is_plain_unify",
  { check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_name_ordered_is_plain_unify_0 },
  { check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__du_ptag_ordered_is_plain_unify_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__resolve_unify_functor__check_hlds__resolve_unify_functor__functor_number_map_is_plain_unify_0,

};

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__514__1_1_f_0(
  MR_Word LambdaHeadVar__1_53)
{
  MR_Word LambdaHeadVar__2_54 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_53, (MR_Integer) 1))));

  return LambdaHeadVar__2_54;
}

static MR_Word MR_CALL 
check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__352__1_1_f_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_Word LambdaHeadVar__2_36 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, (MR_Integer) 1))));

  return LambdaHeadVar__2_36;
}

void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0(
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
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word X0_17,
  MR_Word ConsId0_18,
  MR_Word ArgVars0_19,
  MR_Word Mode0_20,
  MR_Word Unification0_21,
  MR_Word UnifyContext_22,
  MR_Word GoalInfo0_23,
  MR_Word * Goal_24,
  MR_Word * IsPlainUnify_25,
  MR_Word * Specs_26,
  MR_Word STATE_VARIABLE_VarTable_0_101,
  MR_Word * STATE_VARIABLE_VarTable_102,
  MR_Word STATE_VARIABLE_PredInfo_0_103,
  MR_Word * STATE_VARIABLE_PredInfo_104)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 1);
  MR_Word DuCtor0_29;

  if (succeeded)
  {
    DuCtor0_29 = (MR_Word) (MR_body((MR_Word) (ConsId0_18), (MR_Integer) 1));
    {
      MR_Word TypeOfX_30;
      MR_Integer Arity_31;
      MR_Word SymName0_32;
      MR_Integer Arity0_33;
      MR_Word Purity_36;
      MR_Word FuncVar_37;
      MR_Word FuncArgVars_38;
      MR_String ApplyName_35;
      MR_Integer Var_105;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_101, X0_17, &TypeOfX_30);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), ArgVars0_19, &Arity_31);
      SymName0_32 = ((MR_Word) ((MR_hl_field(0, DuCtor0_29, (MR_Integer) 0))));
      Arity0_33 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_29, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) SymName0_32)) == (MR_Integer) 0);
      if (succeeded)
      {
        ApplyName_35 = ((MR_String) ((MR_hl_field(0, SymName0_32, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(ApplyName_35, ((&check_hlds__resolve_unify_functor_vector_common_5[0 + mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_5_0__vct_5_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Purity_36 = ((&check_hlds__resolve_unify_functor_vector_common_5[0 + mid_2]))->check_hlds__resolve_unify_functor__vector_common_type_5_0__vct_5_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          Var_105 = (MR_Integer) 1;
          succeeded = (Arity_31 >= Var_105);
          if (succeeded)
          {
            succeeded = (ArgVars0_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FuncVar_37 = ((MR_Word) ((MR_hl_field(1, ArgVars0_19, (MR_Integer) 0))));
              FuncArgVars_38 = ((MR_Word) ((MR_hl_field(1, ArgVars0_19, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ArgVars_39;
        MR_Word PredFormArity_42;
        MR_Word Generic_43;
        MR_Word HOCall_44;
        MR_Word Var_106;
        MR_Word Var_109;

        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (X0_17));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ArgVars_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), FuncArgVars_38, Var_106);
        Var_109 = (MR_Word) (Arity_31);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, Var_109, &PredFormArity_42);
        {
          Generic_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Generic_43, 0) = ((MR_Box) (FuncVar_37));
          MR_hl_field(0, Generic_43, 1) = (MR_Box) (((((MR_Unsigned) (Purity_36) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(0, Generic_43, 2) = ((MR_Box) (PredFormArity_42));
        }
        {
          HOCall_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HOCall_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HOCall_44, 1) = ((MR_Box) (Generic_43));
          MR_hl_field(3, HOCall_44, 2) = ((MR_Box) (ArgVars_39));
          MR_hl_field(3, HOCall_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HOCall_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HOCall_44, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_24 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HOCall_44));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_23));
        }
        *IsPlainUnify_25 = (MR_Word) ((MR_Unsigned) 0U);
        *Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_PredInfo_104 = STATE_VARIABLE_PredInfo_0_103;
        *STATE_VARIABLE_VarTable_102 = STATE_VARIABLE_VarTable_0_101;
      }
      else
      {
        MR_Word PredId_61;
        MR_Word QualifiedFuncName_62;
        MR_Word SpecsPrime_63;
        MR_Word TypeCtorInfo_182_182;
        MR_Word Markers_45;
        MR_Word IsFullyQualified_46;
        MR_Word PredTable_47;
        MR_Word UserArity_48;
        MR_Word PredIds_49;
        MR_Word TVarSet_52;
        MR_Word ExistQTVars_53;
        MR_Word ExternalTypeParams_54;
        MR_Word ArgTypes0_55;
        MR_Word ArgTypes_56;
        MR_Word ConstraintMap_57;
        MR_Word GoalId_58;
        MR_Word ConstraintSearch_59;
        MR_Word Context_60;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_103, &Markers_45);
        IsFullyQualified_46 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(Markers_45);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_16, &PredTable_47);
        UserArity_48 = (MR_Word) (Arity_31);
        hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable_47, IsFullyQualified_46, SymName0_32, UserArity_48, &PredIds_49);
        succeeded = (PredIds_49 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_103);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_16, STATE_VARIABLE_PredInfo_0_103);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_103, &TVarSet_52);
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_0_103, &ExistQTVars_53);
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_103, &ExternalTypeParams_54);
              parse_tree__var_table__lookup_var_types_3_p_0(STATE_VARIABLE_VarTable_0_101, ArgVars0_19, &ArgTypes0_55);
              TypeCtorInfo_182_182 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              Var_113 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (TypeOfX_30));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_113));
              }
              ArgTypes_56 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_182_182, ArgTypes0_55, Var_112);
              hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_0_103, &ConstraintMap_57);
              GoalId_58 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_23);
              Var_114 = (MR_Integer) 0;
              {
                ConstraintSearch_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ConstraintSearch_59, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[1]));
                MR_hl_field(0, ConstraintSearch_59, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__resolve_unify_functor_15_p_0_1));
                MR_hl_field(0, ConstraintSearch_59, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, ConstraintSearch_59, 3) = ((MR_Box) (ConstraintMap_57));
                MR_hl_field(0, ConstraintSearch_59, 4) = ((MR_Box) (Var_114));
                MR_hl_field(0, ConstraintSearch_59, 5) = ((MR_Box) (GoalId_58));
              }
              Context_60 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_23);
              Var_115 = (MR_Integer) 1;
              {
                Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_116, 0) = ((MR_Box) (ConstraintSearch_59));
              }
              succeeded = hlds__pred_table__find_matching_pred_id_13_p_0(ModuleInfo_16, Var_115, SymName0_32, PredIds_49, TVarSet_52, ExistQTVars_53, ArgTypes_56, ExternalTypeParams_54, Var_116, Context_60, &PredId_61, &QualifiedFuncName_62, &SpecsPrime_63);
            }
          }
        }
        if (succeeded)
        {
          MR_Integer ProcId_64;
          MR_Word FuncCallUnifyContext_65;
          MR_Word FuncCall_66;
          MR_Word Var_117;
          MR_Word Var_119;
          MR_Word Var_122;
          MR_Word ArgVars_160;

          ProcId_64 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_117, 0) = ((MR_Box) (X0_17));
            MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgVars_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), ArgVars0_19, Var_117);
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (ConsId0_18));
            MR_hl_field(1, Var_119, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, Var_119, 2) = ((MR_Box) (ArgVars0_19));
          }
          {
            FuncCallUnifyContext_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FuncCallUnifyContext_65, 0) = ((MR_Box) (X0_17));
            MR_hl_field(0, FuncCallUnifyContext_65, 1) = ((MR_Box) (Var_119));
            MR_hl_field(0, FuncCallUnifyContext_65, 2) = ((MR_Box) (UnifyContext_22));
          }
          {
            Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_122, 0) = ((MR_Box) (FuncCallUnifyContext_65));
          }
          {
            FuncCall_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, FuncCall_66, 0) = ((MR_Box) (PredId_61));
            MR_hl_field(2, FuncCall_66, 1) = ((MR_Box) (ProcId_64));
            MR_hl_field(2, FuncCall_66, 2) = ((MR_Box) (ArgVars_160));
            MR_hl_field(2, FuncCall_66, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, FuncCall_66, 4) = ((MR_Box) (Var_122));
            MR_hl_field(2, FuncCall_66, 5) = ((MR_Box) (QualifiedFuncName_62));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_24 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (FuncCall_66));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_23));
          }
          *IsPlainUnify_25 = (MR_Word) ((MR_Unsigned) 0U);
          *Specs_26 = SpecsPrime_63;
          *STATE_VARIABLE_PredInfo_104 = STATE_VARIABLE_PredInfo_0_103;
          *STATE_VARIABLE_VarTable_102 = STATE_VARIABLE_VarTable_0_101;
        }
        else
        {
          MR_Word Context_178;
          MR_Word PredId_179;
          MR_Word SpecsPrime_180;
          MR_Word TypeCtorInfo_185_185;
          MR_Word PredOrFunc_68;
          MR_Word HOArgTypes_69;
          MR_Word AllArgTypes_70;
          MR_Word ExistQVars_71;
          MR_Word Var_123;
          MR_Word Markers_161;
          MR_Word TVarSet_162;
          MR_Word ExternalTypeParams_163;
          MR_Word ArgTypes0_164;
          MR_Word _Purity_67;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(TypeOfX_30, &_Purity_67, &PredOrFunc_68, &HOArgTypes_69);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_16, STATE_VARIABLE_PredInfo_0_103);
            succeeded = !(succeeded);
            if (succeeded)
            {
              parse_tree__var_table__lookup_var_types_3_p_0(STATE_VARIABLE_VarTable_0_101, ArgVars0_19, &ArgTypes0_164);
              TypeCtorInfo_185_185 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              AllArgTypes_70 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_185_185, ArgTypes0_164, HOArgTypes_69);
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_103, &TVarSet_162);
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_0_103, &ExistQVars_71);
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_103, &ExternalTypeParams_163);
              hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_103, &Markers_161);
              Context_178 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_23);
              Var_123 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(Markers_161);
              succeeded = hlds__pred_table__get_pred_id_by_types_11_p_0(Var_123, SymName0_32, PredOrFunc_68, TVarSet_162, ExistQVars_71, AllArgTypes_70, ExternalTypeParams_163, ModuleInfo_16, Context_178, &PredId_179, &SpecsPrime_180);
            }
          }
          if (succeeded)
          {
            MR_Word PredInfo_28;
            MR_Word ProcIds_72;
            MR_Word MaybeProcId_74;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_179, &PredInfo_28);
            ProcIds_72 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_28);
            if ((ProcIds_72 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeProcId_74 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, ProcIds_72, (MR_Integer) 1))));
              MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(1, ProcIds_72, (MR_Integer) 0))));

              if ((Var_188 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MaybeProcId_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeProcId_74, 0) = ((MR_Box) (Var_189));
                }
              else
              {
                MR_Integer Var_126;

                Var_126 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                {
                  MaybeProcId_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeProcId_74, 0) = ((MR_Box) (Var_126));
                }
              }
            }
            if ((MaybeProcId_74 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word SNA_81;
              MR_Word Pieces_82;
              MR_Word Spec_83;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_139;
              MR_Word Var_140;

              *Goal_24 = hlds__make_goal__true_goal_0_f_0();
              {
                SNA_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_81, 0) = ((MR_Box) (SymName0_32));
                MR_hl_field(0, SNA_81, 1) = ((MR_Box) (Arity_31));
              }
              {
                Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Var_137, 1) = ((MR_Box) (SNA_81));
              }
              {
                Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
                MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_135 = parse_tree__error_spec__color_as_subject_1_f_0(Var_136);
              Var_140 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__resolve_unify_functor_scalar_common_1[5])));
              Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_140, (MR_Word) (MR_mkword(1, &check_hlds__resolve_unify_functor_scalar_common_1[6])));
              Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, Var_139);
              Pieces_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__resolve_unify_functor_scalar_common_1[3])), Var_134);
              {
                Spec_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/15"));
                MR_hl_field(0, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 52U));
                MR_hl_field(0, Spec_83, 3) = ((MR_Box) (Context_178));
                MR_hl_field(0, Spec_83, 4) = ((MR_Box) (Pieces_82));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *IsPlainUnify_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_83));
              }
            }
            else
            {
              MR_Word ShroudedPredProcId_78;
              MR_Word ConsId_79;
              MR_Word GoalExpr_80;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Integer ProcId_165 = ((MR_Integer) ((MR_hl_field(1, MaybeProcId_74, (MR_Integer) 0))));

              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_127, 0) = ((MR_Box) (PredId_179));
                MR_hl_field(0, Var_127, 1) = ((MR_Box) (ProcId_165));
              }
              ShroudedPredProcId_78 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_127);
              ConsId_79 = (MR_Word) (MR_mkword(2, (MR_Word) (ShroudedPredProcId_78)));
              {
                Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_128, 0) = ((MR_Box) (ConsId_79));
                MR_hl_field(1, Var_128, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, Var_128, 2) = ((MR_Box) (ArgVars0_19));
              }
              {
                GoalExpr_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_80, 0) = ((MR_Box) (X0_17));
                MR_hl_field(1, GoalExpr_80, 1) = ((MR_Box) (Var_128));
                MR_hl_field(1, GoalExpr_80, 2) = ((MR_Box) (Mode0_20));
                MR_hl_field(1, GoalExpr_80, 3) = ((MR_Box) (Unification0_21));
                MR_hl_field(1, GoalExpr_80, 4) = ((MR_Box) (UnifyContext_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_80));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_23));
              }
              *IsPlainUnify_25 = (MR_Word) ((MR_Unsigned) 0U);
            }
            *Specs_26 = SpecsPrime_180;
            *STATE_VARIABLE_PredInfo_104 = STATE_VARIABLE_PredInfo_0_103;
            *STATE_VARIABLE_VarTable_102 = STATE_VARIABLE_VarTable_0_101;
          }
          else
          {
            MR_Word AccessType_84;
            MR_Word FieldName_85;
            MR_Word TVarSet_168;
            MR_Word ArgTypes0_169;
            MR_Integer Var_187;

            succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_16, SymName0_32, &Var_187, &AccessType_84, &FieldName_85);
            if (succeeded)
            {
              succeeded = (Arity_31 == Var_187);
              if (succeeded)
              {
                succeeded = (Arity_31 == Arity0_33);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_103);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_103, &TVarSet_168);
                    parse_tree__var_table__lookup_var_types_3_p_0(STATE_VARIABLE_VarTable_0_101, ArgVars0_19, &ArgTypes0_169);
                    succeeded = check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(ModuleInfo_16, TVarSet_168, DuCtor0_29, TypeOfX_30, ArgTypes0_169);
                    succeeded = !(succeeded);
                  }
                }
              }
            }
            if (succeeded)
            {
              check_hlds__resolve_unify_functor__finish_field_access_function_12_p_0(ModuleInfo_16, AccessType_84, FieldName_85, UnifyContext_22, X0_17, ArgVars0_19, GoalInfo0_23, Goal_24, STATE_VARIABLE_VarTable_0_101, STATE_VARIABLE_VarTable_102, STATE_VARIABLE_PredInfo_0_103, STATE_VARIABLE_PredInfo_104);
              *IsPlainUnify_25 = (MR_Word) ((MR_Unsigned) 0U);
              *Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word ConsId_170;

              succeeded = (Arity_31 == Arity0_33);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) TypeOfX_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeOfX_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  {
                    ConsId_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, ConsId_170, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, ConsId_170, 1) = ((MR_Box) (Arity_31));
                  }
                else
                {
                  MR_Word Var_153;

                  succeeded = ((MR_tag((MR_Word) TypeOfX_30)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_153 = ((MR_Word) ((MR_hl_field(2, TypeOfX_30, (MR_Integer) 0))));
                    succeeded = (Var_153 == (MR_Word) ((MR_Unsigned) 8U));
                  }
                  if (succeeded)
                    if (((MR_tag((MR_Word) SymName0_32)) == (MR_Integer) 1))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/15", (MR_String) "qualified char const");
                        return;
                      }
                    else
                    {
                      MR_String Name0_88 = ((MR_String) ((MR_hl_field(0, SymName0_32, (MR_Integer) 0))));
                      MR_Char Char_89;

                      succeeded = mercury__term_io__encode_escaped_char_2_p_1(&Char_89, Name0_88);
                      if (succeeded)
                        {
                          ConsId_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, ConsId_170, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(3, ConsId_170, 1) = ((MR_Box) (MR_Word) (Char_89));
                        }
                      else
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/15", (MR_String) "encode_escaped_char");
                          return;
                        }
                    }
                  else
                  {
                    MR_String Name_92;
                    MR_Word TypeCtorOfX_93;
                    MR_Word TypeCtorSymName_94;

                    Name_92 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_32);
                    parse_tree__prog_type__type_to_ctor_det_2_p_0(TypeOfX_30, &TypeCtorOfX_93);
                    TypeCtorSymName_94 = ((MR_Word) ((MR_hl_field(0, TypeCtorOfX_93, (MR_Integer) 0))));
                    if (((MR_tag((MR_Word) TypeCtorSymName_94)) == (MR_Integer) 1))
                    {
                      MR_Word TypeCtorModule_96 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_94, (MR_Integer) 0))));
                      MR_Word SymName_98;
                      MR_Word DuCtor_99;

                      {
                        SymName_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SymName_98, 0) = ((MR_Box) (TypeCtorModule_96));
                        MR_hl_field(1, SymName_98, 1) = ((MR_Box) (Name_92));
                      }
                      {
                        DuCtor_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, DuCtor_99, 0) = ((MR_Box) (SymName_98));
                        MR_hl_field(0, DuCtor_99, 1) = ((MR_Box) (Arity_31));
                        MR_hl_field(0, DuCtor_99, 2) = ((MR_Box) (TypeCtorOfX_93));
                      }
                      ConsId_170 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_99)));
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.resolve_unify_functor\'/15", (MR_String) "unqualified type_ctor");
                        return;
                      }
                  }
                }
              }
              else
                ConsId_170 = ConsId0_18;
              check_hlds__resolve_unify_functor__resolve_unify_functor_std_10_p_0(X0_17, ConsId_170, ArgVars0_19, Mode0_20, Unification0_21, UnifyContext_22, GoalInfo0_23, Goal_24, IsPlainUnify_25, Specs_26);
              *STATE_VARIABLE_PredInfo_104 = STATE_VARIABLE_PredInfo_0_103;
              *STATE_VARIABLE_VarTable_102 = STATE_VARIABLE_VarTable_0_101;
            }
          }
        }
      }
    }
  }
  else
  {
    check_hlds__resolve_unify_functor__resolve_unify_functor_std_10_p_0(X0_17, ConsId0_18, ArgVars0_19, Mode0_20, Unification0_21, UnifyContext_22, GoalInfo0_23, Goal_24, IsPlainUnify_25, Specs_26);
    *STATE_VARIABLE_PredInfo_104 = STATE_VARIABLE_PredInfo_0_103;
    *STATE_VARIABLE_VarTable_102 = STATE_VARIABLE_VarTable_0_101;
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__finish_field_access_function_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word AccessType_14,
  MR_Word FieldName_15,
  MR_Word UnifyContext_16,
  MR_Word Var_17,
  MR_Word Args_18,
  MR_Word GoalInfo_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_VarTable_0_27,
  MR_Word * STATE_VARIABLE_VarTable_28,
  MR_Word STATE_VARIABLE_PredInfo_0_29,
  MR_Word * STATE_VARIABLE_PredInfo_30)
{
  MR_bool succeeded;
  MR_Word GoalExpr_24;

  switch (AccessType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TermVar_23;
        MR_Word TermInputArg0_31;
        MR_Word Var_32;

        succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermInputArg0_31 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
          Var_32 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
          succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          TermVar_23 = TermInputArg0_31;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.field_extraction_function_args\'/2", (MR_String) "num_args != 1");
            return;
          }
        check_hlds__resolve_unify_functor__translate_get_function_11_p_0(ModuleInfo_13, FieldName_15, UnifyContext_16, Var_17, TermVar_23, GoalInfo_19, &GoalExpr_24, STATE_VARIABLE_VarTable_0_27, STATE_VARIABLE_VarTable_28, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermInputVar_25;
        MR_Word FieldVar_26;
        MR_Word TermInputArg0_35;
        MR_Word FieldArg0_36;
        MR_Word Var_37;
        MR_Word Var_38;

        succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermInputArg0_35 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
          Var_37 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
          succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FieldArg0_36 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
            Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
            succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          FieldVar_26 = FieldArg0_36;
          TermInputVar_25 = TermInputArg0_35;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.field_update_function_args\'/3", (MR_String) "num_args != 2");
            return;
          }
        check_hlds__resolve_unify_functor__translate_set_function_12_p_0(ModuleInfo_13, FieldName_15, UnifyContext_16, FieldVar_26, TermInputVar_25, Var_17, GoalInfo_19, &GoalExpr_24, STATE_VARIABLE_VarTable_0_27, STATE_VARIABLE_VarTable_28, STATE_VARIABLE_PredInfo_0_29, STATE_VARIABLE_PredInfo_30);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_19));
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Var_8;
  MR_Word conv0_STATE_VARIABLE_VarTable_13;

  check_hlds__resolve_unify_functor__make_new_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Var_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarTable_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_Var_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_13));
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_set_function_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word FieldName_14,
  MR_Word UnifyContext_15,
  MR_Word FieldVar_16,
  MR_Word TermInputVar_17,
  MR_Word TermOutputVar_18,
  MR_Word OldGoalInfo_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_VarTable_0_54,
  MR_Word * STATE_VARIABLE_VarTable_55,
  MR_Word STATE_VARIABLE_PredInfo_0_56,
  MR_Word * STATE_VARIABLE_PredInfo_57)
{
  MR_bool succeeded;
  MR_Word TermType_23;
  MR_Word DuCtor0_24;
  MR_Integer FieldNumber_25;
  MR_Word GoalId_26;
  MR_Word ArgTypes_27;
  MR_Word ExistQVars_28;
  MR_Word TypesBeforeField_29;
  MR_Word TermFieldType_30;
  MR_Word TypesAfterField_31;
  MR_Word VarsBeforeField_32;
  MR_Word SingletonFieldVar_33;
  MR_Word VarsAfterField_34;
  MR_Word DeconstructArgs_35;
  MR_Word OldNonLocals_36;
  MR_Word NonLocalArgs_37;
  MR_Word DeconstructRestrictNonLocals_38;
  MR_Word ConsId0_39;
  MR_Word DeconstructGoal_40;
  MR_Word ConstructArgs_41;
  MR_Word ConstructRestrictNonLocals_42;
  MR_Word ConsId_43;
  MR_Word ConstructGoal_51;
  MR_Word ConjExpr_52;
  MR_Word Conj_53;
  MR_Word STATE_VARIABLE_VarTable_59_59;
  MR_Word STATE_VARIABLE_VarTable_60_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word TermTypeCtor_79;
  MR_Word TypeTable_80;
  MR_Word TermTypeDefn_81;
  MR_Word TermTypeBody_82;
  MR_Word Var_106;
  MR_Word BeforePrime_98;
  MR_Word AtPrime_100;
  MR_Word AfterPrime_101;
  MR_Word AtAndAfter_99;
  MR_Integer Var_102;
  MR_Box conv2_STATE_VARIABLE_VarTable_59_59;

  parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_54, TermInputVar_17, &TermType_23);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(TermType_23, &TermTypeCtor_79);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_13, &TypeTable_80);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_80, TermTypeCtor_79, &TermTypeDefn_81);
  hlds__hlds_data__get_type_defn_body_2_p_0(TermTypeDefn_81, &TermTypeBody_82);
  switch (MR_tag((MR_Word) TermTypeBody_82)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Ctors_83;
        MR_String FieldName_88;
        MR_Word Var_93 = (MR_Word) ((MR_Word) (TermTypeBody_82));
        MR_Word Var_94;

        Ctors_83 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 0))));
        FieldName_88 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_14);
        Var_94 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_83);
        check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(TermTypeCtor_79, Var_94, FieldName_88, &DuCtor0_24, &FieldNumber_25);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
        return;
      }
      break;
  }
  GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_19);
  check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(ModuleInfo_13, GoalId_26, DuCtor0_24, TermType_23, &ArgTypes_27, &ExistQVars_28, STATE_VARIABLE_PredInfo_0_56, STATE_VARIABLE_PredInfo_57);
  Var_102 = (MR_Integer) ((MR_Unsigned) FieldNumber_25 - (MR_Unsigned) 1);
  succeeded = mercury__list__split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_102, ArgTypes_27, &BeforePrime_98, &AtAndAfter_99);
  if (succeeded)
  {
    succeeded = (AtAndAfter_99 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      AtPrime_100 = ((MR_Word) ((MR_hl_field(1, AtAndAfter_99, (MR_Integer) 0))));
      AfterPrime_101 = ((MR_Word) ((MR_hl_field(1, AtAndAfter_99, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    TypesBeforeField_29 = BeforePrime_98;
    TermFieldType_30 = AtPrime_100;
    TypesAfterField_31 = AfterPrime_101;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.split_list_at_index\'/5", (MR_String) "split_list_at_index");
      return;
    }
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[0]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__translate_set_function_12_p_0_1));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (ModuleInfo_13));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_106, TypesBeforeField_29, &VarsBeforeField_32, ((MR_Box) (STATE_VARIABLE_VarTable_0_54)), &conv2_STATE_VARIABLE_VarTable_59_59);
  STATE_VARIABLE_VarTable_59_59 = ((MR_Word) (conv2_STATE_VARIABLE_VarTable_59_59));
  check_hlds__resolve_unify_functor__make_new_var_5_p_0(ModuleInfo_13, TermFieldType_30, &SingletonFieldVar_33, STATE_VARIABLE_VarTable_59_59, &STATE_VARIABLE_VarTable_60_60);
  check_hlds__resolve_unify_functor__make_new_vars_5_p_0(ModuleInfo_13, TypesAfterField_31, &VarsAfterField_34, STATE_VARIABLE_VarTable_60_60, STATE_VARIABLE_VarTable_55);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (SingletonFieldVar_33));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (VarsAfterField_34));
  }
  DeconstructArgs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_32, Var_62);
  OldNonLocals_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OldGoalInfo_19);
  NonLocalArgs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_32, VarsAfterField_34);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalArgs_37, OldNonLocals_36, &DeconstructRestrictNonLocals_38);
  ConsId0_39 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor0_24)));
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (ConsId0_39));
    MR_hl_field(1, Var_63, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_63, 2) = ((MR_Box) (DeconstructArgs_35));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (TermInputVar_17));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (DeconstructArgs_35));
  }
  check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(TermInputVar_17, Var_63, OldGoalInfo_19, DeconstructRestrictNonLocals_38, Var_64, UnifyContext_15, &DeconstructGoal_40);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (FieldVar_16));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (VarsAfterField_34));
  }
  ConstructArgs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_32, Var_66);
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalArgs_37, OldNonLocals_36, &ConstructRestrictNonLocals_42);
  if ((ExistQVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsId_43 = ConsId0_39;
  else
  {
    MR_Word ConsSymName0_46 = ((MR_Word) ((MR_hl_field(0, DuCtor0_24, (MR_Integer) 0))));
    MR_Integer ConsArity_47 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_24, (MR_Integer) 1))));
    MR_Word TypeCtor_48 = ((MR_Word) ((MR_hl_field(0, DuCtor0_24, (MR_Integer) 2))));
    MR_Word ConsSymName_49;
    MR_Word DuCtor_50;

    parse_tree__prog_type__add_new_prefix_2_p_0(ConsSymName0_46, &ConsSymName_49);
    {
      DuCtor_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuCtor_50, 0) = ((MR_Box) (ConsSymName_49));
      MR_hl_field(0, DuCtor_50, 1) = ((MR_Box) (ConsArity_47));
      MR_hl_field(0, DuCtor_50, 2) = ((MR_Box) (TypeCtor_48));
    }
    ConsId_43 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_50)));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (ConsId_43));
    MR_hl_field(1, Var_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_67, 2) = ((MR_Box) (ConstructArgs_41));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (TermOutputVar_18));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (ConstructArgs_41));
  }
  check_hlds__resolve_unify_functor__create_pure_atomic_unification_with_nonlocals_7_p_0(TermOutputVar_18, Var_67, OldGoalInfo_19, ConstructRestrictNonLocals_42, Var_68, UnifyContext_15, &ConstructGoal_51);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (ConstructGoal_51));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (DeconstructGoal_40));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    ConjExpr_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConjExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConjExpr_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, ConjExpr_52, 2) = ((MR_Box) (Var_71));
  }
  {
    Conj_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Conj_53, 0) = ((MR_Box) (ConjExpr_52));
    MR_hl_field(0, Conj_53, 1) = ((MR_Box) (OldGoalInfo_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Goal_20 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__resolve_unify_functor_scalar_common_1[7])));
    MR_hl_field(3, base, 2) = ((MR_Box) (Conj_53));
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_var_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_VarTable_0_12,
  MR_Word * STATE_VARIABLE_VarTable_13)
{
  MR_Word IsDummy_10;
  MR_Word Entry_11;

  IsDummy_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_6, Type_7);
  {
    Entry_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_11, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_11, 1) = ((MR_Box) (Type_7));
    MR_hl_field(0, Entry_11, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_10));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_11, Var_8, STATE_VARIABLE_VarTable_0_12, STATE_VARIABLE_VarTable_13);
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Var_8;
  MR_Word conv0_STATE_VARIABLE_VarTable_13;

  check_hlds__resolve_unify_functor__make_new_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Var_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarTable_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_Var_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_13));
}

static void MR_CALL 
check_hlds__resolve_unify_functor__make_new_vars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11)
{
  MR_Word Var_12;
  MR_Box conv2_STATE_VARIABLE_VarTable_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__make_new_vars_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_12, Types_7, Vars_8, ((MR_Box) (STATE_VARIABLE_VarTable_0_10)), &conv2_STATE_VARIABLE_VarTable_11);
  *STATE_VARIABLE_VarTable_11 = ((MR_Word) (conv2_STATE_VARIABLE_VarTable_11));
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
  UnifyMainContext_17 = ((MR_Word) ((MR_hl_field(0, UnifyContext_13, (MR_Integer) 0))));
  UnifySubContext_18 = ((MR_Word) ((MR_hl_field(0, UnifyContext_13, (MR_Integer) 1))));
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var_8, RHS_9, Context_15, UnifyMainContext_17, UnifySubContext_18, &Goal0_19);
  GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_19, (MR_Integer) 0))));
  GoalInfo0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_19, (MR_Integer) 1))));
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsList_12, &NonLocals1_22);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RestrictNonLocals_11, NonLocals1_22, &NonLocals_23);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_23, GoalInfo0_21, &GoalInfo1_24);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_16, GoalInfo1_24, &GoalInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_25));
  }
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Var_8;
  MR_Word conv1_STATE_VARIABLE_VarTable_13;

  check_hlds__resolve_unify_functor__make_new_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Var_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_VarTable_13);
  *wrapper_arg_2 = ((MR_Box) (conv2_Var_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_VarTable_13));
}

static void MR_CALL 
check_hlds__resolve_unify_functor__translate_get_function_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word FieldName_13,
  MR_Word UnifyContext_14,
  MR_Word FieldVar_15,
  MR_Word TermInputVar_16,
  MR_Word OldGoalInfo_17,
  MR_Word * GoalExpr_18,
  MR_Word STATE_VARIABLE_VarTable_0_43,
  MR_Word * STATE_VARIABLE_VarTable_44,
  MR_Word STATE_VARIABLE_PredInfo_0_45,
  MR_Word * STATE_VARIABLE_PredInfo_46)
{
  MR_bool succeeded;
  MR_Word TermType_21;
  MR_Word DuCtor_22;
  MR_Integer FieldNumber_23;
  MR_Word GoalId_24;
  MR_Word ArgTypes0_25;
  MR_Word ExistQVars_26;
  MR_Word ArgTypes_32;
  MR_Word TypesBeforeField_33;
  MR_Word TypesAfterField_35;
  MR_Word VarsBeforeField_36;
  MR_Word VarsAfterField_37;
  MR_Word ArgVars_38;
  MR_Word RestrictNonLocals_39;
  MR_Word ConsId_40;
  MR_Word STATE_VARIABLE_VarTable_48_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word TermTypeCtor_59;
  MR_Word TypeTable_60;
  MR_Word TermTypeDefn_61;
  MR_Word TermTypeBody_62;
  MR_Word Var_86;
  MR_Word Context_94;
  MR_Word GoalId_95;
  MR_Word UnifyMainContext_96;
  MR_Word UnifySubContext_97;
  MR_Word Goal0_98;
  MR_Word GoalInfo0_100;
  MR_Word NonLocals1_101;
  MR_Word NonLocals_102;
  MR_Word GoalInfo1_103;
  MR_Word BeforePrime_78;
  MR_Word AfterPrime_81;
  MR_Word AtAndAfter_79;
  MR_Integer Var_82;
  MR_Box conv3_STATE_VARIABLE_VarTable_48_48;
  MR_Box conv4_STATE_VARIABLE_VarTable_44;
  MR_Word GoalInfo_104;

  parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_43, TermInputVar_16, &TermType_21);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(TermType_21, &TermTypeCtor_59);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_12, &TypeTable_60);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_60, TermTypeCtor_59, &TermTypeDefn_61);
  hlds__hlds_data__get_type_defn_body_2_p_0(TermTypeDefn_61, &TermTypeBody_62);
  switch (MR_tag((MR_Word) TermTypeBody_62)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Ctors_63;
        MR_String FieldName_68;
        MR_Word Var_73 = (MR_Word) ((MR_Word) (TermTypeBody_62));
        MR_Word Var_74;

        Ctors_63 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 0))));
        FieldName_68 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_13);
        Var_74 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_63);
        check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(TermTypeCtor_59, Var_74, FieldName_68, &DuCtor_22, &FieldNumber_23);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field\'/5", (MR_String) "not du type");
        return;
      }
      break;
  }
  GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_17);
  check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(ModuleInfo_12, GoalId_24, DuCtor_22, TermType_21, &ArgTypes0_25, &ExistQVars_26, STATE_VARIABLE_PredInfo_0_45, STATE_VARIABLE_PredInfo_46);
  if ((ExistQVars_26 == (MR_Word) ((MR_Unsigned) 0U)))
    ArgTypes_32 = ArgTypes0_25;
  else
  {
    MR_Word FieldType_29;
    MR_Word FieldArgType_30;
    MR_Word FieldSubst_31;
    MR_Box conv0_FieldArgType_30;

    parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_43, FieldVar_15, &FieldType_29);
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_25, FieldNumber_23, &conv0_FieldArgType_30);
    FieldArgType_30 = ((MR_Word) (conv0_FieldArgType_30));
    parse_tree__prog_type_unify__type_subsumes_det_3_p_0(FieldArgType_30, FieldType_29, &FieldSubst_31);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(FieldSubst_31, ArgTypes0_25, &ArgTypes_32);
  }
  Var_82 = (MR_Integer) ((MR_Unsigned) FieldNumber_23 - (MR_Unsigned) 1);
  succeeded = mercury__list__split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_82, ArgTypes_32, &BeforePrime_78, &AtAndAfter_79);
  if (succeeded)
  {
    succeeded = (AtAndAfter_79 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      AfterPrime_81 = ((MR_Word) ((MR_hl_field(1, AtAndAfter_79, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    TypesBeforeField_33 = BeforePrime_78;
    TypesAfterField_35 = AfterPrime_81;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.split_list_at_index\'/5", (MR_String) "split_list_at_index");
      return;
    }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&check_hlds__resolve_unify_functor_scalar_common_4[0]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (check_hlds__resolve_unify_functor__translate_get_function_11_p_0_1));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (ModuleInfo_12));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_86, TypesBeforeField_33, &VarsBeforeField_36, ((MR_Box) (STATE_VARIABLE_VarTable_0_43)), &conv3_STATE_VARIABLE_VarTable_48_48);
  STATE_VARIABLE_VarTable_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_48_48));
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_86, TypesAfterField_35, &VarsAfterField_37, ((MR_Box) (STATE_VARIABLE_VarTable_48_48)), &conv4_STATE_VARIABLE_VarTable_44);
  *STATE_VARIABLE_VarTable_44 = ((MR_Word) (conv4_STATE_VARIABLE_VarTable_44));
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (FieldVar_15));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (VarsAfterField_37));
  }
  ArgVars_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[0]), VarsBeforeField_36, Var_50);
  RestrictNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OldGoalInfo_17);
  ConsId_40 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_22)));
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (ConsId_40));
    MR_hl_field(1, Var_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_51, 2) = ((MR_Box) (ArgVars_38));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (TermInputVar_16));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (FieldVar_15));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(OldGoalInfo_17);
  GoalId_95 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(OldGoalInfo_17);
  UnifyMainContext_96 = ((MR_Word) ((MR_hl_field(0, UnifyContext_14, (MR_Integer) 0))));
  UnifySubContext_97 = ((MR_Word) ((MR_hl_field(0, UnifyContext_14, (MR_Integer) 1))));
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(TermInputVar_16, Var_51, Context_94, UnifyMainContext_96, UnifySubContext_97, &Goal0_98);
  *GoalExpr_18 = ((MR_Word) ((MR_hl_field(0, Goal0_98, (MR_Integer) 0))));
  GoalInfo0_100 = ((MR_Word) ((MR_hl_field(0, Goal0_98, (MR_Integer) 1))));
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52, &NonLocals1_101);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RestrictNonLocals_39, NonLocals1_101, &NonLocals_102);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_102, GoalInfo0_100, &GoalInfo1_103);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_95, GoalInfo1_103, &GoalInfo_104);
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_constructor_containing_field_loop_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_String UnqualFieldName_3,
  MR_Word * DuCtor_4,
  MR_Integer * FieldNumber_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_constructor_containing_field_loop\'/5", (MR_String) "can\'t find field");
        return;
      }
    else
    {
      MR_Word Ctor_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ctors_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(0, Ctor_13, (MR_Integer) 2))));
      MR_Word CtorArgs_21 = ((MR_Word) ((MR_hl_field(0, Ctor_13, (MR_Integer) 3))));
      MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, Ctor_13, (MR_Integer) 4))));
      MR_Integer FieldNumberPrime_24;

      succeeded = check_hlds__resolve_unify_functor__search_for_named_field_4_p_0(CtorArgs_21, UnqualFieldName_3, (MR_Integer) 1, &FieldNumberPrime_24);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *DuCtor_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(0, base, 1) = ((MR_Box) (Arity_22));
          MR_hl_field(0, base, 2) = ((MR_Box) (TypeCtor_1));
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
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
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
      CtorArg_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      CtorArgs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Var_12 = ((MR_Word) ((MR_hl_field(0, CtorArg_5, (MR_Integer) 0))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
        ArgFieldName_10 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
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
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) CurFieldNumber_8 + (MR_Unsigned) 1);
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

static MR_Box MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_54;

  conv0_LambdaHeadVar__2_54 = check_hlds__resolve_unify_functor__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__514__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_54));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__resolve_unify_functor__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word GoalId_10,
  MR_Word DuCtor_11,
  MR_Word TermType_12,
  MR_Word * ActualArgTypes_13,
  MR_Word * ActualExistQVars_14,
  MR_Word STATE_VARIABLE_PredInfo_0_50,
  MR_Word * STATE_VARIABLE_PredInfo_51)
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
  check_hlds__type_util__get_cons_defn_det_4_p_0(ModuleInfo_9, TypeCtor_16, DuCtor_11, &ConsDefn_17);
  TypeParams_20 = ((MR_Word) ((MR_hl_field(0, ConsDefn_17, (MR_Integer) 2))));
  MaybeExistConstraints_22 = ((MR_Word) ((MR_hl_field(0, ConsDefn_17, (MR_Integer) 4))));
  ConsArgs_23 = ((MR_Word) ((MR_hl_field(0, ConsDefn_17, (MR_Integer) 5))));
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
    MR_Word ConsExistQVars_29 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_28, (MR_Integer) 0))));
    MR_Word ConsConstraints_30 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_28, (MR_Integer) 1))));
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
    MR_Word TVarsB_69;
    MR_Word Subst0_70;
    MR_Word Subst1_71;
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
    parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ActualConstraints_42, &TVarsB_69);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst0_70);
    succeeded = check_hlds__resolve_unify_functor__unify_constraint_list_5_p_0(ParentConstraints_39, ActualConstraints_42, TVarsB_69, Subst0_70, &Subst1_71);
    if (succeeded)
      ExistTSubst_43 = Subst1_71;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.constraint_list_subsumes_det\'/3", (MR_String) "failed");
        return;
      }
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ExistTSubst_43, ParentArgTypes_38, &ActualArgTypes0_27);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_44);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_44, ExistTSubst_43, ParentExistQVars_35, &ActualExistQVarTypes_45);
    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ActualExistQVarTypes_45, &ActualExistQVars0_46);
    if (succeeded)
      *ActualExistQVars_14 = ActualExistQVars0_46;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.resolve_unify_functor.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
        return;
      }
  }
  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(TermType_12, &Var_47, &TypeArgs_48);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_20, TypeArgs_48, &UnivTSubst_49);
  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(UnivTSubst_49, ActualArgTypes0_27, ActualArgTypes_13);
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
      MR_Word A_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word As_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word B_12;
      MR_Word Bs_13;
      MR_Word ArgTypesA_17;
      MR_Word ArgTypesB_19;
      MR_Word STATE_VARIABLE_Subst_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        Bs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        ArgTypesA_17 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 1))));
        ArgTypesB_19 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesA_17, ArgTypesB_19, TVars_3, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_22_22);
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_36;

  conv0_LambdaHeadVar__2_36 = check_hlds__resolve_unify_functor__IntroducedFrom__func__find_matching_constructor__352__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor__find_matching_constructor_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TVarSet_7,
  MR_Word DuCtor_8,
  MR_Word Type_9,
  MR_Word ArgTypes_10)
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
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(ConsTable_12, TypeCtor_11, DuCtor_8, &ConsDefn_13);
    if (succeeded)
    {
      MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_13, (MR_Integer) 4))));
      ConsArgs_19 = ((MR_Word) ((MR_hl_field(0, ConsDefn_13, (MR_Integer) 5))));
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

          ConsExistQVars_25 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
        }
        TypeCtorInfo_40_40 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
        TypeCtorInfo_41_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_34 = (MR_Word) (&check_hlds__resolve_unify_functor_scalar_common_3[0]);
        ConsArgTypes_29 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeCtorInfo_41_41, Var_34, ConsArgs_19);
        ExistQVars_31 = (MR_Word) ((MR_Unsigned) 0U);
        ExternalTypeParams_32 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0(TVarSet_7, ExistQVars_31, ArgTypes_10, ExternalTypeParams_32, TypeTVarSet_23, TypeKindMap_24, ConsExistQVars_25, ConsArgTypes_29);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__resolve_unify_functor__resolve_unify_functor_std_10_p_0(
  MR_Word X0_11,
  MR_Word ConsId_12,
  MR_Word ArgVars0_13,
  MR_Word Mode0_14,
  MR_Word Unification0_15,
  MR_Word UnifyContext_16,
  MR_Word GoalInfo0_17,
  MR_Word * Goal_18,
  MR_Word * IsPlainUnify_19,
  MR_Word * Specs_20)
{
  MR_Word RHS_21;
  MR_Word GoalExpr_22;

  {
    RHS_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_21, 0) = ((MR_Box) (ConsId_12));
    MR_hl_field(1, RHS_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_21, 2) = ((MR_Box) (ArgVars0_13));
  }
  {
    GoalExpr_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_22, 0) = ((MR_Box) (X0_11));
    MR_hl_field(1, GoalExpr_22, 1) = ((MR_Box) (RHS_21));
    MR_hl_field(1, GoalExpr_22, 2) = ((MR_Box) (Mode0_14));
    MR_hl_field(1, GoalExpr_22, 3) = ((MR_Box) (Unification0_15));
    MR_hl_field(1, GoalExpr_22, 4) = ((MR_Box) (UnifyContext_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_17));
  }
  *IsPlainUnify_19 = (MR_Word) ((MR_Unsigned) 4U);
  *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__resolve_unify_functor____Unify____is_plain_unify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__resolve_unify_functor____Compare____is_plain_unify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
