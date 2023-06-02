/*
** Automatically generated from `typecheck_error_undef.m'
** by the Mercury compiler,
** version rotd-2023-06-02
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


// :- module check_hlds.typecheck_error_undef.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_undef__init
ENDINIT
*/

#include "check_hlds.typecheck_error_undef.mih"


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
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_1;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_2[4];

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_2;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_3[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_3;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_3[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_cons_error_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_cons_error_0[4];

static const MR_Integer check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_cons_error_0[4];

static void MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__arity_error_to_pieces__979__1_2_p_0(
  MR_Integer LambdaHeadVar__1_16,
  MR_Integer * LambdaHeadVar__2_17);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__914__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_36);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__864__1_1_f_0(
  MR_Word LambdaHeadVar__1_58);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons_std__555__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_18);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__419__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_47);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__410__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_19);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_cons_error_2_f_0(
  MR_Word Context_4,
  MR_Word ConsError_5);

static void MR_CALL 
check_hlds__typecheck_error_undef__accumulate_matching_cons_module_names_4_p_0(
  MR_Word FunctorSymName_5,
  MR_Word ConsDefn_6,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16);

static void MR_CALL 
check_hlds__typecheck_error_undef__accumulate_matching_pf_module_names_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word SymName_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleNames_0_16,
  MR_Word * STATE_VARIABLE_ModuleNames_17);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word InitComp_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13,
  MR_Word * Spec_14);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0(
  MR_Word Name_5,
  MR_Integer Arity_6,
  MR_Word ActualArities_7);

static void MR_CALL 
check_hlds__typecheck_error_undef__return_function_arities_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncArities_0_3,
  MR_Word * STATE_VARIABLE_FuncArities_4);

static void MR_CALL 
check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(
  MR_Word PredicateTable_5,
  MR_Word PredOrFunc_6,
  MR_Word SymName_7);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * Components_3);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_pred_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_String ItemName_8,
  MR_Word ModuleNamesSet0_9);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_pred_5_p_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word * Msg_9,
  MR_Word * MissingImportModules_10);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(
  MR_Word ClauseContext_5,
  MR_Word ModuleQualifier_6,
  MR_Word * Pieces_7,
  MR_Word * MissingImportModules_8);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word AllPredFormArities_9);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____cons_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____cons_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_1[341][2];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_2[14][1];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_3[6][5];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_8[1][7];


struct check_hlds__typecheck_error_undef__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck_error_undef__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__typecheck_error_undef__vector_common_type_7_0_s check_hlds__typecheck_error_undef_vector_common_7[96];



static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_1[341][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: there is no event named"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in event"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: no clauses for"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: no clauses for "))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the predicate in the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module that used to be named"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has been renamed to"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Every if-then must have an else."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note: the else part is not optional."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: unmatched"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[36])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[41])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Every if-then must have an"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[36])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part is not optional."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note: the"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "marker in an inappropriate place."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Such markers only belong before predicate calls."))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be a list of variables."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in existential quantification:"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: undefined"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the predicate"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the Mercury standard library has been renamed to"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be used as an expression, not as a goal."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the language construct"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply(Func, X, Y) :- apply(Func, X, Y)."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with the appropriate arity, e.g."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is defined"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = my_apply(OldFunc, X)"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "use"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = apply(OldFunc, X)"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "e.g. instead of "))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "use a forwarding function:"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to curry a higher-order function,"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order predicate,"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "\?)"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) " = ..."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Perhaps you forgot to add"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(There is a *function* with that name, however."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be used as a goal, not as an expression."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "if <goal> then yes else no"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as a boolean function, you should write"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to use a goal"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "check that the module is correctly imported.)"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(If it is defined in a separate module,"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is actually defined."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and that the functor"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "make sure that you have the arity correct,"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and not as an application of the language builtin call/N,"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as an expression"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you really are trying to use"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the Mercury Language Reference Manual."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "see the \"Creating higher-order terms\" section"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "you should use"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[168])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order function,"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[170])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "state variable operator."))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: invalid use of"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[180])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You probably meant to use"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-->"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[187])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in DCG lambda expression"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[191])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[31])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "./2"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[197])))
  },
  /* row 199 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[1])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_1[199]))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[198])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the list constructor is now"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[201])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[187])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[205])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in lambda expression"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[206])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[187])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[210])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: invalid use of field update operator"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is probably some kind of syntax error."))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[187])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[217])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: invalid use of field selection operator"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[218])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not a variable or other term."))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The field name must be an atom,"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[223]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[222])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[224])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[53])))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[226])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[227])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: undefined symbol"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[230]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in use of constructor"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for those foreign types."))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[238]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which are not implemented"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[240]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[239])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in all predicates and functions"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[242]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[241])))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so it is treated as an abstract type"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[243])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[245])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field"))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[248]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be updated because"))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[250]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[249])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[256]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the types of field"))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and some other field"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in definition of constructor"))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid use of"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "new"))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on a constructor of type"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is not existentially typed."))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[264]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "That"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in module"))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which does not have an"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[271])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[273])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[275]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[276])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[278]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[279])))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "none of which have"))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[281]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[280])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[282])))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must always be fully module qualified."))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[284]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[285])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[286])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "accessed via"))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[289]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[288])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that symbols defined in modules"))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[291]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[290])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The module"))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has not been imported.)"))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[294]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The possible parent module"))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[296]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The possible parent modules"))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[298]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have not been imported.)"))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[300]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "wrong number of arguments ("))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[305]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 307 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[34])))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[307]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 309 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[308])))
  },
  /* row 310 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 311 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[59])))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[311]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 313 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[312])))
  },
  /* row 314 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[122])))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[314]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 316 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[315])))
  },
  /* row 317 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[63])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[317]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 319 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 320 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[292])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[320]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 322 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[185])))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[322]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 324 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[323])))
  },
  /* row 325 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 326 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[194])))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[326]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 328 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[327])))
  },
  /* row 329 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 330 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 331 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[215])))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[331]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 333 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[332])))
  },
  /* row 334 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[225])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[334]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 336 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[335])))
  },
  /* row 337 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[228])))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[337]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 339 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[338])))
  },
  /* row 340 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[138])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_2[14][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[38]))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "[|]")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "list")) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[29]))) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[47]))) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[51]))) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[80]))) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[71]))) },
  /* row   8 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[178]))) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[193]))) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[203]))) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[208]))) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[213]))) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[220]))) },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_3[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_4[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[3])),
    ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[4])),
    ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[5])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct check_hlds__typecheck_error_undef__vector_common_type_7_0_s check_hlds__typecheck_error_undef_vector_common_7[96] = {
  /* row   0 */   { (MR_String) "!" },
  /* row   1 */   { NULL },
  /* row   2 */   { NULL },
  /* row   3 */   { NULL },
  /* row   4 */   { NULL },
  /* row   5 */   { (MR_String) ":=" },
  /* row   6 */   { NULL },
  /* row   7 */   { NULL },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "if" },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) "." },
  /* row  16 */   { NULL },
  /* row  17 */   { (MR_String) "->" },
  /* row  18 */   { NULL },
  /* row  19 */   { (MR_String) "then" },
  /* row  20 */   { NULL },
  /* row  21 */   { (MR_String) ":-" },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { (MR_String) "else" },
  /* row  28 */   { NULL },
  /* row  29 */   { (MR_String) "-->" },
  /* row  30 */   { NULL },
  /* row  31 */   { (MR_String) "^" },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "<=" },
  /* row  36 */   { NULL },
  /* row  37 */   { NULL },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { (MR_String) "semipure" },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "some" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { (MR_String) "not" },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { (MR_String) "<=>" },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { (MR_String) "=>" },
  /* row  66 */   { (MR_String) "all" },
  /* row  67 */   { (MR_String) "\\=" },
  /* row  68 */   { NULL },
  /* row  69 */   { NULL },
  /* row  70 */   { (MR_String) "call" },
  /* row  71 */   { NULL },
  /* row  72 */   { NULL },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { (MR_String) "," },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { (MR_String) "impure" },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { NULL },
  /* row  85 */   { (MR_String) "\\+" },
  /* row  86 */   { NULL },
  /* row  87 */   { NULL },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { (MR_String) ";" },
  /* row  91 */   { NULL },
  /* row  92 */   { (MR_String) "=" },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0 = {
  (MR_String) "foreign_type_constructor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_1 = {
  (MR_String) "abstract_imported_type",
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_undef__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_2[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_2 = {
  (MR_String) "invalid_field_update",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_3 = {
  (MR_String) "new_on_non_existential_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_0[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_1 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_1[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_2[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_2 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_3[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_3 };

static const MR_DuPtagLayout check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_cons_error_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_cons_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_cons_error_0[4] = {
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_1,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_2,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_3
};

static const MR_Integer check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_cons_error_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_undef____Unify____cons_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_undef____Compare____cons_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_undef",
  (MR_String) "cons_error",
  { check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_cons_error_0 },
  { check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_cons_error_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_cons_error_0,

};

static void MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__arity_error_to_pieces__979__1_2_p_0(
  MR_Integer LambdaHeadVar__1_16,
  MR_Integer * LambdaHeadVar__2_17)
{
  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, LambdaHeadVar__2_17, LambdaHeadVar__1_16);
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__914__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_36)
{
  MR_Word LambdaHeadVar__2_37;
  MR_Word AncestorMNList_20;
  MR_Word FullList_21;

  AncestorMNList_20 = mdbcomp__sym_name__sym_name_to_list_1_f_0(LambdaHeadVar__1_36);
  FullList_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AncestorMNList_20, ModuleQualifierList_16);
  mdbcomp__sym_name__det_list_to_sym_name_2_p_0(FullList_21, &LambdaHeadVar__2_37);
  return LambdaHeadVar__2_37;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__864__1_1_f_0(
  MR_Word LambdaHeadVar__1_58)
{
  MR_Word LambdaHeadVar__2_59;

  {
    LambdaHeadVar__2_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_59, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, LambdaHeadVar__2_59, 1) = ((MR_Box) (LambdaHeadVar__1_58));
  }
  return LambdaHeadVar__2_59;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons_std__555__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_18)
{
  MR_bool succeeded = (Arity_13 == FunctorArity_18);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__419__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_47)
{
  MR_bool succeeded = (Arity_13 == FunctorArity_47);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__410__1_2_p_0(
  MR_Integer Arity_13,
  MR_Integer FunctorArity_19)
{
  MR_bool succeeded = (Arity_13 == FunctorArity_19);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_undef____Compare____cons_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, Var_74, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, Var_73, ArgY2_8);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_38 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_41 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_44 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_47 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_39;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_39, Var_78, ArgY1_38);
                succeeded = (SubResult1_39 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_39;
                else
                {
                  MR_Word SubResult2_42;

                  hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0(&SubResult2_42, Var_77, ArgY2_41);
                  succeeded = (SubResult2_42 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_42;
                  else
                  {
                    MR_Word SubResult3_45;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[4]), &SubResult3_45, ((MR_Box) (Var_76)), ((MR_Box) (ArgY3_44)));
                    succeeded = (SubResult3_45 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_45;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_75)), ((MR_Box) (ArgY4_47)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_79, ArgY1_63);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____cons_error_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_25_25;
          MR_Word TypeInfo_26_26;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;
          MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_cons____Unify____hlds_ctor_field_defn_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                if (succeeded)
                {
                  TypeInfo_26_26 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_17, ArgY1_18);
          }
        }
        break;
    }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_cons_error_2_f_0(
  MR_Word Context_4,
  MR_Word ConsError_5)
{
  MR_Word Msgs_6;

  switch (MR_tag((MR_Word) ConsError_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Msgs_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtor_7 = ((MR_Word) ((MR_hl_field(1, ConsError_5, (MR_Integer) 0))));
        MR_Word Pieces_9;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_58;

        {
          Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeCtor_7));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[246])));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[237])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[236])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[235])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Pieces_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_9, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[234])));
          MR_hl_field(1, Pieces_9, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (Context_4));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (Pieces_9));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_58));
          MR_hl_field(1, Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FieldName_10 = ((MR_Word) ((MR_hl_field(2, ConsError_5, (MR_Integer) 0))));
        MR_Word FieldDefn_11 = ((MR_Word) ((MR_hl_field(2, ConsError_5, (MR_Integer) 1))));
        MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(2, ConsError_5, (MR_Integer) 2))));
        MR_Word TVars_13 = ((MR_Word) ((MR_hl_field(2, ConsError_5, (MR_Integer) 3))));
        MR_Word DefnContext_14 = ((MR_Word) ((MR_hl_field(0, FieldDefn_11, (MR_Integer) 0))));
        MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(0, FieldDefn_11, (MR_Integer) 3))));
        MR_Word Pieces1_19;
        MR_Word Pieces2_22;
        MR_Word Pieces3_26;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Pieces_131;

        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (FieldName_10));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[251])));
        }
        {
          Pieces1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces1_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[247])));
          MR_hl_field(1, Pieces1_19, 1) = ((MR_Box) (Var_62));
        }
        if ((TVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_undef.report_cons_error\'/2", (MR_String) "no type variables");
        else
        {
          MR_Word Var_137 = ((MR_Word) ((MR_hl_field(1, TVars_13, (MR_Integer) 1))));
          MR_Word Var_138 = ((MR_Word) ((MR_hl_field(1, TVars_13, (MR_Integer) 0))));

          if ((Var_137 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String TVarsStr_21;
            MR_Word Var_76;
            MR_Word Var_77;

            TVarsStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, Var_138);
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (TVarsStr_21));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[254])));
            }
            {
              Pieces2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces2_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[252])));
              MR_hl_field(1, Pieces2_22, 1) = ((MR_Box) (Var_76));
            }
          }
          else
          {
            MR_Word Var_85;
            MR_Word Var_86;
            MR_String TVarsStr_130;

            TVarsStr_130 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, TVars_13);
            {
              Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_86, 1) = ((MR_Box) (TVarsStr_130));
            }
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[257])));
            }
            {
              Pieces2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces2_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[255])));
              MR_hl_field(1, Pieces2_22, 1) = ((MR_Box) (Var_85));
            }
          }
        }
        {
          Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 25U));
          MR_hl_field(3, Var_102, 1) = ((MR_Box) (ConsId_17));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[260])));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[259])));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
        }
        {
          Pieces3_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces3_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[258])));
          MR_hl_field(1, Pieces3_26, 1) = ((MR_Box) (Var_93));
        }
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_22, Pieces3_26);
        Pieces_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_19, Var_109);
        {
          Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_110, 0) = ((MR_Box) (DefnContext_14));
          MR_hl_field(0, Var_110, 1) = ((MR_Box) (Pieces_131));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_110));
          MR_hl_field(1, Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_128;
        MR_Word TypeCtor_132 = ((MR_Word) ((MR_hl_field(3, ConsError_5, (MR_Integer) 0))));
        MR_Word Pieces_133;

        {
          Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_121, 1) = ((MR_Box) (TypeCtor_132));
        }
        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
          MR_hl_field(1, Var_120, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[265])));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[263])));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[262])));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
        }
        {
          Pieces_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_133, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[261])));
          MR_hl_field(1, Pieces_133, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_128, 0) = ((MR_Box) (Context_4));
          MR_hl_field(0, Var_128, 1) = ((MR_Box) (Pieces_133));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_128));
          MR_hl_field(1, Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Msgs_6;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__accumulate_matching_cons_module_names_4_p_0(
  MR_Word FunctorSymName_5,
  MR_Word ConsDefn_6,
  MR_Word STATE_VARIABLE_ModuleNames_0_15,
  MR_Word * STATE_VARIABLE_ModuleNames_16)
{
  MR_bool succeeded;
  MR_Word TypeCtorSymName_8;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_6, (MR_Integer) 0))));

  TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
  if (((MR_tag((MR_Word) TypeCtorSymName_8)) == (MR_Integer) 1))
  {
    MR_Word TypeCtorModuleName_11 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_8, (MR_Integer) 0))));
    MR_String FunctorName_13;
    MR_Word FullSymName_14;

    FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctorSymName_5);
    {
      FullSymName_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FullSymName_14, 0) = ((MR_Box) (TypeCtorModuleName_11));
      MR_hl_field(1, FullSymName_14, 1) = ((MR_Box) (FunctorName_13));
    }
    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(FunctorSymName_5, FullSymName_14);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ModuleNames_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeCtorModuleName_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_15));
      }
    else
      *STATE_VARIABLE_ModuleNames_16 = STATE_VARIABLE_ModuleNames_0_15;
  }
  else
    *STATE_VARIABLE_ModuleNames_16 = STATE_VARIABLE_ModuleNames_0_15;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__accumulate_matching_pf_module_names_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word SymName_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleNames_0_16,
  MR_Word * STATE_VARIABLE_ModuleNames_17)
{
  MR_bool succeeded;
  MR_Word PredIdTable_10;
  MR_Word PredInfo_11;
  MR_Word ModuleName_12;
  MR_Box conv0_PredInfo_11;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_6, &PredIdTable_10);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_10, ((MR_Box) (PredId_8)), &conv0_PredInfo_11);
  PredInfo_11 = ((MR_Word) (conv0_PredInfo_11));
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_11, &ModuleName_12);
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word SymModuleName_14 = ((MR_Word) ((MR_hl_field(1, SymName_7, (MR_Integer) 0))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(SymModuleName_14, ModuleName_12);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ModuleNames_17 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_16));
      }
    else
      *STATE_VARIABLE_ModuleNames_17 = STATE_VARIABLE_ModuleNames_0_16;
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ModuleNames_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ModuleNames_0_16));
    }
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_no_clauses_stub_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  MR_bool succeeded;
  MR_Word Specs_8;
  MR_Word IntBadClauses_32;
  MR_Word ModuleName_33;
  MR_Word PredModuleName_34;
  MR_String PredName_35;
  MR_Word UserArity_36;
  MR_Word PredOrFunc_37;
  MR_Word SymName_38;
  MR_Word Id_39;
  MR_Word PredMarkers_40;

  hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_32);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_33);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_34);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_35);
  UserArity_36 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_7);
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_37);
  {
    SymName_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_38, 0) = ((MR_Box) (ModuleName_33));
    MR_hl_field(1, SymName_38, 1) = ((MR_Box) (PredName_35));
  }
  {
    Id_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_37));
    MR_hl_field(0, Id_39, 1) = ((MR_Box) (SymName_38));
    MR_hl_field(0, Id_39, 2) = ((MR_Box) (UserArity_36));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_40);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), IntBadClauses_32, ((MR_Box) (Id_39)));
  if (!(succeeded))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_40, (MR_Integer) 29);
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_40, (MR_Integer) 4);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_33, PredModuleName_34);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
    Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Globals_10;
    MR_Word WarnStubs_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 41, &WarnStubs_11);
    switch (WarnStubs_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredPieces_12;
          MR_Word Pieces_13;
          MR_Word Context_14;
          MR_Word Spec_15;
          MR_Word Var_18;

          PredPieces_12 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
          {
            Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
            MR_hl_field(1, Var_18, 1) = ((MR_Box) (PredPieces_12));
          }
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_14);
          {
            Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.maybe_report_no_clauses_stub\'/3"));
            MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Context_14));
            MR_hl_field(1, Spec_15, 4) = ((MR_Box) (Pieces_13));
          }
          {
            Specs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs_8, 0) = ((MR_Box) (Spec_15));
            MR_hl_field(1, Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
  return Specs_8;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_no_clauses_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  MR_bool succeeded;
  MR_Word Specs_8;
  MR_Word IntBadClauses_29;
  MR_Word ModuleName_30;
  MR_Word PredModuleName_31;
  MR_String PredName_32;
  MR_Word UserArity_33;
  MR_Word PredOrFunc_34;
  MR_Word SymName_35;
  MR_Word Id_36;
  MR_Word PredMarkers_37;

  hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_29);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_30);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_31);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_32);
  UserArity_33 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_7);
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_34);
  {
    SymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_35, 0) = ((MR_Box) (ModuleName_30));
    MR_hl_field(1, SymName_35, 1) = ((MR_Box) (PredName_32));
  }
  {
    Id_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_36, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_34));
    MR_hl_field(0, Id_36, 1) = ((MR_Box) (SymName_35));
    MR_hl_field(0, Id_36, 2) = ((MR_Box) (UserArity_33));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_37);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), IntBadClauses_29, ((MR_Box) (Id_36)));
  if (!(succeeded))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_37, (MR_Integer) 29);
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_37, (MR_Integer) 4);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_30, PredModuleName_31);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
    Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredPieces_10;
    MR_Word Pieces_11;
    MR_Word Context_12;
    MR_Word Spec_13;
    MR_Word Var_15;

    PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 1, PredId_6);
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (PredPieces_10));
    }
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_12);
    {
      Spec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_13, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.maybe_report_no_clauses\'/3"));
      MR_hl_field(1, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(1, Spec_13, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_13, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Specs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_8, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Specs_8;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0(
  MR_Word Context_6,
  MR_String EventName_7,
  MR_Word EventArgTypes_8,
  MR_Word Args_9)
{
  MR_Word Spec_10;
  MR_Integer ExpectedArity_12;
  MR_Word Pieces_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Integer Arity_42;
  MR_Word Arities_43;
  MR_Word RightAritiesPieces_45;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_51;
  MR_Word Var_52;
  MR_Word Var_54;

  Var_14 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[0]), Args_9);
  Arity_42 = (MR_Integer) (Var_14);
  Var_15 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_8);
  ExpectedArity_12 = (MR_Integer) (Var_15);
  {
    Arities_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Arities_43, 0) = ((MR_Box) (ExpectedArity_12));
    MR_hl_field(1, Arities_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  RightAritiesPieces_45 = check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(Arities_43);
  Var_51 = mercury__string__int_to_string_1_f_0(Arity_42);
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[304])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (RightAritiesPieces_45));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[303])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[302])));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[306])));
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (EventName_7));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[13])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_25);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[12])), Var_20);
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_event_arity\'/4"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Pieces_13));
  }
  return Spec_10;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_event_2_f_0(
  MR_Word Context_4,
  MR_String EventName_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (EventName_5));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[7])));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_event\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Context_4));
    MR_hl_field(1, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__419__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons__410__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13)
{
  MR_bool succeeded;
  MR_Word Spec_14;
  MR_Word InClauseForPieces_15;
  MR_Word GoalContextPieces_16;
  MR_Word InitComp_17;
  MR_Word Var_23;
  MR_String FunctorName_18;
  MR_Integer FunctorArity_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_String Var_26;
  MR_String Var_27;
  MR_Integer slot_0;
  MR_String str_1;

  InClauseForPieces_15 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_8);
  GoalContextPieces_16 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_8, GoalContext_9);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_15, GoalContextPieces_16);
  {
    InitComp_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitComp_17, 0) = ((MR_Box) (Var_23));
  }
  succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
    FunctorArity_19 = ((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorName_18 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      Var_26 = (MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_cons\'/6";
      Var_27 = (MR_String) "arity mismatch";
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_1));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (Arity_13));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) (FunctorArity_19));
      }
      mercury__require__expect_3_p_0(Var_25, Var_26, Var_27);
      // hashed string jump switch
      ;
      // compute the hash value of the input string
      ;
      slot_0 = ((MR_hash_string4(FunctorName_18)) & (MR_Integer) 63);
      // no collisions; no hash chain loop
      ;
      // lookup the string for this hash slot
      ;
      str_1 = ((&check_hlds__typecheck_error_undef_vector_common_7[32 + slot_0]))->check_hlds__typecheck_error_undef__vector_common_type_7_0__vct_7_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, FunctorName_18) == 0))))
      {
        // we found a match; dispatch to the corresponding code
        ;
        switch (slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              // case "<="
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 8:
            {
              // case "semipure"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 16:
            {
              // case "some"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 22:
            {
              // case "not"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 28:
            {
              // case "<=>"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 33:
            {
              // case "=>"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 34:
            {
              // case "all"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 35:
            {
              // case "\="
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 38:
            {
              // case "call"
              ;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 45:
            {
              // case ","
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 48:
            {
              // case "impure"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 53:
            {
              // case "\+"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 58:
            {
              // case ";"
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 60:
            {
              // case "="
              ;
              succeeded = (FunctorArity_19 == (MR_Integer) 2);
            }
            break;
        }
        // jump out of search loop
        ;
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
    }
  }
  if (succeeded)
  {
    MR_Word FunctorComps_21;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word MainPieces_53;
    MR_Word VerboseCallPieces_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;

    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, Var_60, 1) = ((MR_Box) (FunctorArity_19));
    }
    {
      Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[130])));
    }
    {
      MainPieces_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MainPieces_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[79])));
      MR_hl_field(1, MainPieces_53, 1) = ((MR_Box) (Var_58));
    }
    succeeded = (strcmp(FunctorName_18, (MR_String) "call") == 0);
    if (succeeded)
      VerboseCallPieces_55 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[172]));
    else
      VerboseCallPieces_55 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (MainPieces_53));
    }
    {
      Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_68, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, Var_68, 1) = ((MR_Box) (VerboseCallPieces_55));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[340])));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      FunctorComps_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FunctorComps_21, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, FunctorComps_21, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (InitComp_17));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (FunctorComps_21));
    }
    {
      Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_32, 0) = ((MR_Box) (Context_10));
      MR_hl_field(2, Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_cons\'/6"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_31));
    }
  }
  else
  {
    MR_Word FunctorComps_50;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_String Var_37;
    MR_String Var_38;
    MR_String FunctorName_46;
    MR_Integer FunctorArity_47;

    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_35 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
      FunctorArity_47 = ((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_46 = ((MR_String) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
        Var_37 = (MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_cons\'/6";
        Var_38 = (MR_String) "arity mismatch";
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0_2));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (Arity_13));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) (FunctorArity_47));
        }
        mercury__require__expect_3_p_0(Var_36, Var_37, Var_38);
        succeeded = check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(FunctorName_46, FunctorArity_47, &FunctorComps_50);
      }
    }
    if (succeeded)
    {
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (InitComp_17));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (FunctorComps_50));
      }
      {
        Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_43, 0) = ((MR_Box) (Context_10));
        MR_hl_field(2, Var_43, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_cons\'/6"));
        MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_42));
      }
    }
    else
      check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0(ClauseContext_8, Context_10, InitComp_17, ConsErrors_11, Functor_12, Arity_13, &Spec_14);
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Msgs_6;

  conv2_Msgs_6 = check_hlds__typecheck_error_undef__report_cons_error_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Msgs_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleNames_16;

  check_hlds__typecheck_error_undef__accumulate_matching_cons_module_names_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_16));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_undef__IntroducedFrom__pred__report_error_undef_cons_std__555__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word InitComp_10,
  MR_Word ConsErrors_11,
  MR_Word Functor_12,
  MR_Integer Arity_13,
  MR_Word * Spec_14)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(0, ClauseContext_8, (MR_Integer) 0))));
  MR_Word ConsTable_16;
  MR_Word FunctorComps_29;
  MR_Word QualMsgs_30;
  MR_Word ConsMsgs_50;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Constructor_17;
  MR_Word OtherArities_25;
  MR_Word TypeCtorInfo_102_102;
  MR_Integer FunctorArity_18;
  MR_Word ConsArities_20;
  MR_Word PredTable_21;
  MR_Word PredIds_22;
  MR_Word FuncArities_23;
  MR_Word AllArities_24;
  MR_Word Var_54;
  MR_String Var_55;
  MR_String Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_15, &ConsTable_16);
  succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Constructor_17 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
    FunctorArity_18 = ((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 2))));
    Var_55 = (MR_String) "predicate \140check_hlds.typecheck_error_undef.report_error_undef_cons_std\'/7";
    Var_56 = (MR_String) "arity mismatch";
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_1));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (Arity_13));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (FunctorArity_18));
    }
    mercury__require__expect_3_p_0(Var_54, Var_55, Var_56);
    hlds__hlds_cons__return_cons_arities_3_p_0(ConsTable_16, Constructor_17, &ConsArities_20);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_15, &PredTable_21);
    Var_57 = (MR_Integer) 1;
    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_21, Var_57, Constructor_17, &PredIds_22);
    Var_58 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__typecheck_error_undef__return_function_arities_4_p_0(ModuleInfo_15, PredIds_22, Var_58, &FuncArities_23);
    TypeCtorInfo_102_102 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_102_102, ConsArities_20, FuncArities_23);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_102_102, Var_59, &AllArities_24);
    mercury__list__delete_all_3_p_1(TypeCtorInfo_102_102, AllArities_24, ((MR_Box) (Arity_13)), &OtherArities_25);
    succeeded = (OtherArities_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word FunctorPieces_28;
    MR_Word Var_60;

    FunctorPieces_28 = check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0(Constructor_17, Arity_13, OtherArities_25);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_60, 0) = ((MR_Box) (FunctorPieces_28));
    }
    {
      FunctorComps_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FunctorComps_29, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, FunctorComps_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    QualMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Pieces1_31;
    MR_Word Pieces2_36;
    MR_Word MissingImportModules_37;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word ModQual_34;
    MR_Word Constructor_95;
    MR_Word FunctorName_39;

    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 25U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (Functor_12));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
    }
    {
      Pieces1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[229])));
      MR_hl_field(1, Pieces1_31, 1) = ((MR_Box) (Var_64));
    }
    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Constructor_95 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Constructor_95)) == (MR_Integer) 1);
      if (succeeded)
        ModQual_34 = ((MR_Word) ((MR_hl_field(1, Constructor_95, (MR_Integer) 0))));
    }
    if (succeeded)
      check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_8, ModQual_34, &Pieces2_36, &MissingImportModules_37);
    else
    {
      MR_Word Var_72;
      MR_String Var_73;
      MR_Integer Var_74;

      succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_72 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
        Var_74 = ((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 2))));
        succeeded = (Var_74 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_73 = ((MR_String) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));
            succeeded = (strcmp(Var_73, (MR_String) "[|]") == 0);
          }
        }
      }
      if (succeeded)
        check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_8, (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_2[2]), &Pieces2_36, &MissingImportModules_37);
      else
      {
        Pieces2_36 = (MR_Word) ((MR_Unsigned) 0U);
        MissingImportModules_37 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_31, Pieces2_36);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
    }
    {
      FunctorComps_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FunctorComps_29, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, FunctorComps_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = ((((MR_tag((MR_Word) Functor_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      FunctorName_39 = ((MR_Word) ((MR_hl_field(3, Functor_12, (MR_Integer) 1))));
      {
        MR_Word ConsDefns_42;
        MR_Word ConsModuleNames_43;
        MR_Word PredicateTable_44;
        MR_Word PredModuleNames_45;
        MR_Word FuncModuleNames_46;
        MR_Word ModuleNames_47;
        MR_Word ModuleNamesSet0_48;
        MR_Word ModuleNamesSet_49;
        MR_String Var_80;
        MR_Word Var_81;
        MR_Word Var_85;
        MR_Box conv1_ConsModuleNames_43;

        Var_80 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctorName_39);
        hlds__hlds_cons__return_cons_defns_with_given_name_3_p_0(ConsTable_16, Var_80, &ConsDefns_42);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_8[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_2));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (FunctorName_39));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[1]), Var_81, ConsDefns_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ConsModuleNames_43);
        ConsModuleNames_43 = ((MR_Word) (conv1_ConsModuleNames_43));
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_15, &PredicateTable_44);
        PredModuleNames_45 = check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_44, (MR_Integer) 0, FunctorName_39);
        FuncModuleNames_46 = check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_44, (MR_Integer) 1, FunctorName_39);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PredModuleNames_45, FuncModuleNames_46);
        ModuleNames_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ConsModuleNames_43, Var_85);
        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_47, &ModuleNamesSet0_48);
        mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_37, ModuleNamesSet0_48, &ModuleNamesSet_49);
        QualMsgs_30 = check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(ClauseContext_8, Context_9, (MR_String) "symbol", ModuleNamesSet_49);
      }
    }
    else
      QualMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((ConsErrors_11 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsMsgs_50 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConsMsgLists_53;
    MR_Word Var_87;

    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_5[1]));
      MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_std_7_p_0_3));
      MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_87, 3) = ((MR_Box) (Context_9));
    }
    ConsMsgLists_53 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]), Var_87, ConsErrors_11);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), ConsMsgLists_53, &ConsMsgs_50);
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (InitComp_10));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (FunctorComps_29));
  }
  {
    Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_93, 0) = ((MR_Box) (Context_9));
    MR_hl_field(2, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (ConsMsgs_50));
  }
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_92, QualMsgs_30);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Spec_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.typecheck_error_undef.report_error_undef_cons_std\'/7"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_91));
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0(
  MR_Word Name_5,
  MR_Integer Arity_6,
  MR_Word ActualArities_7)
{
  MR_Word Pieces_8;
  MR_Word NumArgsPieces_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word RightAritiesPieces_29;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_String Var_35;
  MR_Word Var_36;
  MR_Word Var_38;

  RightAritiesPieces_29 = check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(ActualArities_7);
  Var_35 = mercury__string__int_to_string_1_f_0(Arity_6);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[304])));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (RightAritiesPieces_29));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[303])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[302])));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  NumArgsPieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[306])));
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Name_5));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[233])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[232])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NumArgsPieces_9, Var_16);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[231])), Var_15);
  return Pieces_8;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__return_function_arities_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FuncArities_0_3,
  MR_Word * STATE_VARIABLE_FuncArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FuncArities_4 = STATE_VARIABLE_FuncArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word PredOrFunc_14;
      MR_Word STATE_VARIABLE_FuncArities_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FuncArities_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_10, &PredInfo_13);
      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_13, &PredOrFunc_14);
      switch (PredOrFunc_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer OrigArity_15;
            MR_Integer FuncArity_16;

            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &OrigArity_15);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_16, OrigArity_15);
            {
              STATE_VARIABLE_FuncArities_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_FuncArities_20_20, 0) = ((MR_Box) (FuncArity_16));
              MR_hl_field(1, STATE_VARIABLE_FuncArities_20_20, 1) = ((MR_Box) (STATE_VARIABLE_FuncArities_0_3));
            }
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_FuncArities_20_20 = STATE_VARIABLE_FuncArities_0_3;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_FuncArities_0_3 = STATE_VARIABLE_FuncArities_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FuncArities_0_3 = next_value_of_STATE_VARIABLE_FuncArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleNames_17;

  check_hlds__typecheck_error_undef__accumulate_matching_pf_module_names_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_17));
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(
  MR_Word PredicateTable_5,
  MR_Word PredOrFunc_6,
  MR_Word SymName_7)
{
  MR_Word ModuleNames_8;
  MR_Word PredIds_9;
  MR_String Var_10;
  MR_Word Var_11;
  MR_Box conv1_ModuleNames_8;

  Var_10 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
  hlds__pred_table__predicate_table_lookup_pf_raw_name_4_p_0(PredicateTable_5, PredOrFunc_6, Var_10, &PredIds_9);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_6[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (PredicateTable_5));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (SymName_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[1]), Var_11, PredIds_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ModuleNames_8);
  ModuleNames_8 = ((MR_Word) (conv1_ModuleNames_8));
  return ModuleNames_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * Components_3)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 31);
  MR_String str_1 = ((&check_hlds__typecheck_error_undef_vector_common_7[0 + slot_0]))->check_hlds__typecheck_error_undef__vector_common_type_7_0__vct_7_f_0;

  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          // case "!"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 1);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[324]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case ":="
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[333]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "if"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[310]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 15:
        {
          // case "."
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[329]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case "->"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[328]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 19:
        {
          // case "then"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[339]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 21:
        {
          // case ":-"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[330]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 27:
        {
          // case "else"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[39]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 29:
        {
          // case "-->"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[325]));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 31:
        {
          // case "^"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
          if (succeeded)
          {
            *Components_3 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[336]));
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_pred_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleNames_17;

  check_hlds__typecheck_error_undef__accumulate_matching_pf_module_names_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleNames_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleNames_17));
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_pred_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word SymNameArity_7)
{
  MR_Word Spec_8;
  MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, SymNameArity_7, (MR_Integer) 0))));
  MR_Word PredFormArity_10 = ((MR_Word) ((MR_hl_field(0, SymNameArity_7, (MR_Integer) 1))));
  MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 0))));
  MR_Word PredicateTable_12;
  MR_Word PredMarkers_13;
  MR_Word IsFullyQualified_14;
  MR_Word OtherIds_15;
  MR_Word PFSymNameArity_16;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_12);
  PredMarkers_13 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 2))));
  IsFullyQualified_14 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_13);
  hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_12, IsFullyQualified_14, (MR_Integer) 0, SymName_9, &OtherIds_15);
  {
    PFSymNameArity_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_16, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PFSymNameArity_16, 1) = ((MR_Box) (SymName_9));
    MR_hl_field(0, PFSymNameArity_16, 2) = ((MR_Box) (PredFormArity_10));
  }
  if ((OtherIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UndefMsg_21;
    MR_Word MissingImportModules_22;
    MR_Word FuncOtherIds_23;
    MR_Word KindMsgs_27;
    MR_Word PossibleModuleQuals_28;
    MR_Word PossibleModuleQualsSet0_29;
    MR_Word PossibleModuleQualsSet_30;
    MR_Word QualMsgs_31;
    MR_Word Msgs_32;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word PredIds_59;
    MR_String Var_60;
    MR_Word Var_61;
    MR_Box conv1_PossibleModuleQuals_28;

    check_hlds__typecheck_error_undef__report_error_undef_pred_5_p_0(ClauseContext_5, Context_6, PFSymNameArity_16, &UndefMsg_21, &MissingImportModules_22);
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_12, (MR_Integer) 1, (MR_Integer) 1, SymName_9, &FuncOtherIds_23);
    if ((FuncOtherIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
      KindMsgs_27 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word KindMsg_26;

      {
        KindMsg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, KindMsg_26, 0) = ((MR_Box) (Context_6));
        MR_hl_field(0, KindMsg_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[128])));
      }
      {
        KindMsgs_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, KindMsgs_27, 0) = ((MR_Box) (KindMsg_26));
        MR_hl_field(1, KindMsgs_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_60 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
    hlds__pred_table__predicate_table_lookup_pf_raw_name_4_p_0(PredicateTable_12, (MR_Integer) 0, Var_60, &PredIds_59);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_6[0]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_pred_3_f_0_1));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (PredicateTable_12));
      MR_hl_field(0, Var_61, 4) = ((MR_Box) (SymName_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[1]), Var_61, PredIds_59, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PossibleModuleQuals_28);
    PossibleModuleQuals_28 = ((MR_Word) (conv1_PossibleModuleQuals_28));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PossibleModuleQuals_28, &PossibleModuleQualsSet0_29);
    mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_22, PossibleModuleQualsSet0_29, &PossibleModuleQualsSet_30);
    QualMsgs_31 = check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(ClauseContext_5, Context_6, (MR_String) "predicate", PossibleModuleQualsSet_30);
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (UndefMsg_21));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), KindMsgs_27, QualMsgs_31);
    Msgs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_40, Var_42);
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_pred\'/3"));
      MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Msgs_32));
    }
  }
  else
  {
    MR_Word PredIdTable_19;
    MR_Word PredFormArities_20;

    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_12, &PredIdTable_19);
    hlds__hlds_error_util__find_pred_arities_3_p_0(PredIdTable_19, OtherIds_15, &PredFormArities_20);
    Spec_8 = check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0(ClauseContext_5, Context_6, PFSymNameArity_16, PredFormArities_20);
  }
  return Spec_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_59;

  conv0_LambdaHeadVar__2_59 = check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__864__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_String ItemName_8,
  MR_Word ModuleNamesSet0_9)
{
  MR_Word Msgs_10;
  MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, ClauseContext_6, (MR_Integer) 0))));
  MR_Word ModuleName_12;
  MR_Word ModuleNamesSet1_13;
  MR_Word ModuleNamesSet_14;
  MR_Word ModuleNames_15;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_11, &ModuleName_12);
  Var_28 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_12);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
  }
  mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, ModuleNamesSet0_9, &ModuleNamesSet1_13);
  Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_29)), ModuleNamesSet1_13, &ModuleNamesSet_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNamesSet_14, &ModuleNames_15);
  if ((ModuleNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    Msgs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadModuleName_16 = ((MR_Word) ((MR_hl_field(1, ModuleNames_15, (MR_Integer) 0))));
    MR_Word TailModuleNames_17 = ((MR_Word) ((MR_hl_field(1, ModuleNames_15, (MR_Integer) 1))));
    MR_Word MainPieces_18;
    MR_Word MainMsg_24;
    MR_Word VerboseMsg_26;
    MR_Word Var_110;

    if ((TailModuleNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_33, 1) = ((MR_Box) (ItemName_8));
      }
      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_41, 1) = ((MR_Box) (HeadModuleName_16));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[274])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[267])));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85])));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        MainPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MainPieces_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[266])));
        MR_hl_field(1, MainPieces_18, 1) = ((MR_Box) (Var_32));
      }
    }
    else
    {
      MR_Word ModuleNamePieces_21;
      MR_Word ModuleNamesPieces_23;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_73;

      ModuleNamePieces_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[4]), ModuleNames_15);
      ModuleNamesPieces_23 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", ModuleNamePieces_21);
      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (ItemName_8));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[277])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[266])));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
      }
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ModuleNamesPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[283])));
      MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_73);
    }
    {
      MainMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_24, 0) = ((MR_Box) (Context_7));
      MR_hl_field(0, MainMsg_24, 1) = ((MR_Box) (MainPieces_18));
    }
    {
      VerboseMsg_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, VerboseMsg_26, 0) = ((MR_Box) (Context_7));
      MR_hl_field(2, VerboseMsg_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[321])));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) (VerboseMsg_26));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_10, 0) = ((MR_Box) (MainMsg_24));
      MR_hl_field(1, Msgs_10, 1) = ((MR_Box) (Var_110));
    }
  }
  return Msgs_10;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_pred_5_p_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word * Msg_9,
  MR_Word * MissingImportModules_10)
{
  MR_bool succeeded;
  MR_Word PredSymName_12 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_8, (MR_Integer) 1))));
  MR_Word PredFormArity_13 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_8, (MR_Integer) 2))));
  MR_Word InClauseForPieces_14;
  MR_Word InClauseForComponent_15;
  MR_Integer PredFormArityInt_16;
  MR_Word Components_21;
  MR_Word Var_223;
  MR_String Var_34;

  InClauseForPieces_14 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_6);
  {
    InClauseForComponent_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InClauseForComponent_15, 0) = ((MR_Box) (InClauseForPieces_14));
  }
  PredFormArityInt_16 = (MR_Integer) (PredFormArity_13);
  switch (PredFormArityInt_16) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 4:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_34 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
      succeeded = (strcmp(Var_34, (MR_String) "->") == 0);
    }
  }
  if (succeeded)
  {
    Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[309]));
    *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_String Var_65;

    switch (PredFormArityInt_16) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_65 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
        succeeded = (strcmp(Var_65, (MR_String) "else") == 0);
      }
    }
    if (succeeded)
    {
      Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[39]));
      *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String Var_80;

      switch (PredFormArityInt_16) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_80 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_80, (MR_String) "if") == 0);
        }
      }
      if (succeeded)
      {
        Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[310]));
        *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_String Var_106;

        switch (PredFormArityInt_16) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_106 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
            succeeded = (strcmp(Var_106, (MR_String) "then") == 0);
          }
        }
        if (succeeded)
        {
          Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[313]));
          *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_String Var_155;
          MR_Integer Var_156;

          succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_155 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
            succeeded = (strcmp(Var_155, (MR_String) "apply") == 0);
            if (succeeded)
            {
              Var_156 = (MR_Integer) 1;
              succeeded = (PredFormArityInt_16 >= Var_156);
            }
          }
          if (succeeded)
          {
            Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[316]));
            *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_String PurityString_23;

            succeeded = (PredFormArityInt_16 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                PurityString_23 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
                if ((strcmp(PurityString_23, (MR_String) "impure") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(PurityString_23, (MR_String) "semipure") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
            }
            if (succeeded)
            {
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word MainPieces_228;
              MR_Word MainComponent_229;

              {
                Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_160, 1) = ((MR_Box) (PurityString_23));
              }
              {
                Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
                MR_hl_field(1, Var_159, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[61])));
              }
              {
                MainPieces_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MainPieces_228, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16])));
                MR_hl_field(1, MainPieces_228, 1) = ((MR_Box) (Var_159));
              }
              {
                MainComponent_229 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainComponent_229, 0) = ((MR_Box) (MainPieces_228));
              }
              {
                Components_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Components_21, 0) = ((MR_Box) (MainComponent_229));
                MR_hl_field(1, Components_21, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[318])));
              }
              *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_String Var_175;

              succeeded = (PredFormArityInt_16 == (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_175 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_175, (MR_String) "some") == 0);
                }
              }
              if (succeeded)
              {
                Components_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[319]));
                *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word OrdinaryPieces_27;
                MR_Word SpecialPieces_33;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word Var_220;
                MR_Word Var_221;
                MR_Word MainPieces_233;
                MR_String PredName_29;
                MR_String NewPredName_32;

                {
                  Var_195 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_195, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(3, Var_195, 1) = ((MR_Box) (PFSymNameArity_8));
                }
                {
                  Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_194, 0) = ((MR_Box) (Var_195));
                  MR_hl_field(1, Var_194, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
                }
                {
                  MainPieces_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MainPieces_233, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[72])));
                  MR_hl_field(1, MainPieces_233, 1) = ((MR_Box) (Var_194));
                }
                if (((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 1))
                {
                  MR_Word ModuleQualifier_24 = ((MR_Word) ((MR_hl_field(1, PredSymName_12, (MR_Integer) 0))));
                  MR_Word AddeddumPices_26;

                  check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_6, ModuleQualifier_24, &AddeddumPices_26, MissingImportModules_10);
                  OrdinaryPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_233, AddeddumPices_26);
                }
                else
                {
                  OrdinaryPieces_27 = MainPieces_233;
                  *MissingImportModules_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                if (((MR_tag((MR_Word) PredSymName_12)) == (MR_Integer) 1))
                {
                  MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(1, PredSymName_12, (MR_Integer) 0))));
                  MR_String StdLibModuleName_31;

                  PredName_29 = ((MR_String) ((MR_hl_field(1, PredSymName_12, (MR_Integer) 1))));
                  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_30, &StdLibModuleName_31);
                  if (succeeded)
                  {
                    if ((strcmp(StdLibModuleName_31, (MR_String) "getopt") == 0))
                      succeeded = MR_TRUE;
                    else
                    if ((strcmp(StdLibModuleName_31, (MR_String) "getopt_io") == 0))
                      succeeded = MR_TRUE;
                    else
                      succeeded = MR_FALSE;
                  }
                }
                else
                {
                  PredName_29 = ((MR_String) ((MR_hl_field(0, PredSymName_12, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                  switch (PredFormArityInt_16) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 4:
                      {
                        succeeded = (strcmp(PredName_29, (MR_String) "process_options_se") == 0);
                        if (succeeded)
                        {
                          NewPredName_32 = (MR_String) "process_options";
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        succeeded = (strcmp(PredName_29, (MR_String) "process_options_se") == 0);
                        if (succeeded)
                        {
                          NewPredName_32 = (MR_String) "process_options";
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        succeeded = (strcmp(PredName_29, (MR_String) "process_options_se") == 0);
                        if (succeeded)
                        {
                          NewPredName_32 = (MR_String) "process_options";
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      if ((strcmp(PredName_29, (MR_String) "process_options_se") == 0))
                      {
                        NewPredName_32 = (MR_String) "process_options";
                        succeeded = MR_TRUE;
                      }
                      else
                      if ((strcmp(PredName_29, (MR_String) "process_options_track_se") == 0))
                      {
                        NewPredName_32 = (MR_String) "process_options_track";
                        succeeded = MR_TRUE;
                      }
                      else
                        succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 9:
                      {
                        succeeded = (strcmp(PredName_29, (MR_String) "process_options_track_se") == 0);
                        if (succeeded)
                        {
                          NewPredName_32 = (MR_String) "process_options_track";
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                  }
                if (succeeded)
                {
                  MR_Word Var_204;
                  MR_Word Var_207;
                  MR_Word Var_208;
                  MR_Word Var_209;
                  MR_Word Var_212;
                  MR_Word Var_213;

                  {
                    Var_208 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_208, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_208, 1) = ((MR_Box) (PredName_29));
                  }
                  {
                    Var_213 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_213, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_213, 1) = ((MR_Box) (NewPredName_32));
                  }
                  {
                    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_212, 0) = ((MR_Box) (Var_213));
                    MR_hl_field(1, Var_212, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
                  }
                  {
                    Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_209, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[74])));
                    MR_hl_field(1, Var_209, 1) = ((MR_Box) (Var_212));
                  }
                  {
                    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_207, 0) = ((MR_Box) (Var_208));
                    MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_209));
                  }
                  {
                    Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_204, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[73])));
                    MR_hl_field(1, Var_204, 1) = ((MR_Box) (Var_207));
                  }
                  {
                    SpecialPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SpecialPieces_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[19])));
                    MR_hl_field(1, SpecialPieces_33, 1) = ((MR_Box) (Var_204));
                  }
                }
                else
                  SpecialPieces_33 = (MR_Word) ((MR_Unsigned) 0U);
                Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OrdinaryPieces_27, SpecialPieces_33);
                {
                  Var_220 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_220, 0) = ((MR_Box) (Var_221));
                }
                {
                  Components_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Components_21, 0) = ((MR_Box) (Var_220));
                  MR_hl_field(1, Components_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
    }
  }
  {
    Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_223, 0) = ((MR_Box) (InClauseForComponent_15));
    MR_hl_field(1, Var_223, 1) = ((MR_Box) (Components_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Msg_9 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (Context_7));
    MR_hl_field(2, base, 1) = ((MR_Box) (Var_223));
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_37;

  conv2_LambdaHeadVar__2_37 = check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__914__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_37));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__error_spec__describe_sym_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(
  MR_Word ClauseContext_5,
  MR_Word ModuleQualifier_6,
  MR_Word * Pieces_7,
  MR_Word * MissingImportModules_8)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 0))));
  MR_Word VisibleModules_10;
  MR_Word MatchingVisibleModules_11;
  MR_Word Var_22;

  hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_9, &VisibleModules_10);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[2]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleQualifier_6));
  }
  mercury__set__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_22, VisibleModules_10, &MatchingVisibleModules_11);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingVisibleModules_11);
  if (succeeded)
  {
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (ModuleQualifier_6));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[295])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[293])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MissingImportModules_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleQualifier_6));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word UnimportedAncestorsSet_12;
    MR_Word UnimportedAncestors_13;
    MR_Word MatchingModuleNamesAncestorSets_47;
    MR_Word MatchingModuleNamesAncestors_48;

    MatchingModuleNamesAncestorSets_47 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[2]), MatchingVisibleModules_11);
    mercury__set__power_union_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestorSets_47, &MatchingModuleNamesAncestors_48);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestors_48, VisibleModules_10, &UnimportedAncestorsSet_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UnimportedAncestorsSet_12, &UnimportedAncestors_13);
    if ((UnimportedAncestors_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Pieces_7 = (MR_Word) ((MR_Unsigned) 0U);
      *MissingImportModules_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ModuleQualifierList_16;
      MR_Word AddAncestor_17;
      MR_Word Var_38;
      MR_Word UnimportedAncestorDescs_52;
      MR_Word AllUnimportedAncestors_53;
      MR_Word Var_56;

      UnimportedAncestorDescs_52 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[3]), UnimportedAncestors_13);
      AllUnimportedAncestors_53 = parse_tree__error_spec__list_to_pieces_1_f_0(UnimportedAncestorDescs_52);
      succeeded = (AllUnimportedAncestors_53 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_56 = ((MR_Word) ((MR_hl_field(1, AllUnimportedAncestors_53, (MR_Integer) 1))));
        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Var_58;

        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllUnimportedAncestors_53, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[295])));
        *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[297])), Var_58);
      }
      else
      {
        MR_Word Var_61;

        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllUnimportedAncestors_53, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[301])));
        *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[299])), Var_61);
      }
      ModuleQualifierList_16 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleQualifier_6);
      {
        AddAncestor_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AddAncestor_17, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_5[0]));
        MR_hl_field(0, AddAncestor_17, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_4));
        MR_hl_field(0, AddAncestor_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, AddAncestor_17, 3) = ((MR_Box) (ModuleQualifierList_16));
      }
      Var_38 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AddAncestor_17, UnimportedAncestors_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MissingImportModules_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleQualifier_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_38));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_LambdaHeadVar__2_17;

  check_hlds__typecheck_error_undef__IntroducedFrom__pred__arity_error_to_pieces__979__1_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_17));
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_error_util__project_pred_form_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_num_args_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word PFSymNameArity_8,
  MR_Word AllPredFormArities_9)
{
  MR_bool succeeded;
  MR_Word Spec_10;
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_8, (MR_Integer) 1))));
  MR_Word PredFormArity_13 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_8, (MR_Integer) 2))));
  MR_Integer PredFormArityInt_14 = (MR_Integer) (PredFormArity_13);
  MR_Word AllPredFormArityInts_15;
  MR_Word MainPieces_16;
  MR_Word SpecialPieces_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_75;
  MR_Integer Arity_81;
  MR_Word Arities_82;
  MR_Word RightAritiesPieces_84;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_String Var_90;
  MR_Word Var_91;
  MR_Word Var_93;
  MR_String PredName_17;
  MR_String StdLibModuleName_18;

  AllPredFormArityInts_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[0]), AllPredFormArities_9);
  Var_22 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_6);
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &Arity_81, PredFormArityInt_14);
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[1]), AllPredFormArityInts_15, &Arities_82);
      }
      break;
    case (MR_Integer) 0:
      {
        Arity_81 = PredFormArityInt_14;
        Arities_82 = AllPredFormArityInts_15;
      }
      break;
  }
  RightAritiesPieces_84 = check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(Arities_82);
  Var_90 = mercury__string__int_to_string_1_f_0(Arity_81);
  {
    Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[304])));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (RightAritiesPieces_84));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[303])));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[302])));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_88));
  }
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[306])));
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(3, Var_38, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (SymName_12));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[18])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[8])), Var_34);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_30);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[17])), Var_28);
  MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_23);
  if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(1, SymName_12, (MR_Integer) 0))));

    PredName_17 = ((MR_String) ((MR_hl_field(1, SymName_12, (MR_Integer) 1))));
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_19, &StdLibModuleName_18);
    if (succeeded)
      succeeded = (strcmp(StdLibModuleName_18, (MR_String) "getopt_io") == 0);
  }
  else
  {
    PredName_17 = ((MR_String) ((MR_hl_field(0, SymName_12, (MR_Integer) 0))));
    StdLibModuleName_18 = (MR_String) "getopt_io";
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (PredFormArityInt_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 6:
        succeeded = (strcmp(PredName_17, (MR_String) "process_options") == 0);
        break;
      case (MR_Integer) 7:
        succeeded = (strcmp(PredName_17, (MR_String) "process_options") == 0);
        break;
      case (MR_Integer) 9:
        succeeded = (strcmp(PredName_17, (MR_String) "process_options_track") == 0);
        break;
    }
  if (succeeded)
  {
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;

    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (StdLibModuleName_18));
    }
    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) (PredName_17));
    }
    Var_64 = mercury__string__f_43_43_2_f_0(PredName_17, (MR_String) "_io");
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[10])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[22])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[21])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[20])));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      SpecialPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SpecialPieces_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[19])));
      MR_hl_field(1, SpecialPieces_20, 1) = ((MR_Box) (Var_49));
    }
  }
  else
    SpecialPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_16, SpecialPieces_20);
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_pred_num_args\'/4"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Var_75));
  }
  return Spec_10;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Arity_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Arities_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailPieces_6;
    MR_Word ArityPiece_7;
    MR_String Var_12;

    TailPieces_6 = check_hlds__typecheck_error_undef__arities_to_pieces_1_f_0(Arities_4);
    Var_12 = mercury__string__int_to_string_1_f_0(Arity_3);
    {
      ArityPiece_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ArityPiece_7, 0) = ((MR_Box) (Var_12));
    }
    if ((Arities_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailPieces_6));
      }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Arities_4, (MR_Integer) 1))));

      if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[40])));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (TailPieces_6));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_14));
        }
      }
      else
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[109])));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (TailPieces_6));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ArityPiece_7));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_18));
        }
      }
    }
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____cons_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_undef____Unify____cons_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____cons_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_undef____Compare____cons_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_undef__init(void)
{
}

void mercury__check_hlds__typecheck_error_undef__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0);
}

void mercury__check_hlds__typecheck_error_undef__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_undef__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_undef.
