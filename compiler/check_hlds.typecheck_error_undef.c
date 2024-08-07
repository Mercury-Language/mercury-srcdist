/*
** Automatically generated from `typecheck_error_undef.m'
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_1[2];

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_undef_class_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_undef_class_0[2];

static const MR_Integer check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_undef_class_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__arity_error_to_pieces__1282__1_1_f_0(
  MR_Integer LambdaHeadVar__1_27);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_unimported_ancestors__1238__1_1_f_0(
  MR_Word LambdaHeadVar__1_10);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__1203__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_44);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__1139__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_cons_error__936__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_168);

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____undef_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____undef_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_undef__acc_known_pred_info_names_4_p_0(
  MR_Word RequiredPredOrFunc_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_KnownNames_0_10,
  MR_Word * STATE_VARIABLE_KnownNames_11);

static void MR_CALL 
check_hlds__typecheck_error_undef__accumulate_matching_pf_module_names_5_p_0(
  MR_Word PredicateTable_6,
  MR_Word SymName_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleNames_0_16,
  MR_Word * STATE_VARIABLE_ModuleNames_17);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_cons_error_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word InitComp_9,
  MR_Word ConsErrors_10,
  MR_Word ConsId_11,
  MR_Word * Spec_12);

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

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(
  MR_String FunctorName_4,
  MR_Integer Arity_5,
  MR_Word * Components_6);

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
check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word PredicateTable_10,
  MR_Word SymNamePredFormArity_11,
  MR_Word MissingImportModules_12,
  MR_Word AddeddumPieces_13);

static void MR_CALL 
check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0(
  MR_Word PredicateTable_4,
  MR_Word RequiredPredOrFunc_5,
  MR_Word * KnownNames_6);

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

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__is_undef_pred_a_syntax_error_3_p_0(
  MR_String PredName_4,
  MR_Integer PredFormArityInt_5,
  MR_Word * Components_6);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_apply_instead_of_pred_0_f_0(void);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word SymNameArity_8,
  MR_Word AllPredFormArities_9);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____cons_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____cons_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____undef_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____undef_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_1[358][2];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_2[4][1];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_3[5][5];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_4[7][3];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_6[2][7];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_7[1][8];

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_8[3][6];


struct check_hlds__typecheck_error_undef__vector_common_type_5_0_s {
  const MR_String check_hlds__typecheck_error_undef__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct check_hlds__typecheck_error_undef__vector_common_type_5_0_s check_hlds__typecheck_error_undef_vector_common_5[128];



static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_1[358][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_1[3]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: there is"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no event named"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "event"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no clauses."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no clauses"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the predicate in the"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module that used to be named"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has been renamed to"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: this"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no matching"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Every if-then must have an"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part is not optional."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note: the"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "marker"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not before a predicate call."))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in existential quantification:"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "first argument of"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be a list of variables."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the language construct"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not as a goal."))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be used as an expression,"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply(Func, X, Y) :- apply(Func, X, Y)."))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with the appropriate arity, e.g."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is defined"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "my_apply"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = my_apply(OldFunc, X)"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "use"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "NewFunc = apply(OldFunc, X)"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "e.g. instead of "))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "use a forwarding function:"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to curry a higher-order function,"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order predicate,"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "\?)"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) " = ..."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Perhaps you forgot to add"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the predicate"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the Mercury standard library has been"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[134]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "renamed to"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: call to"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "undefined"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[139]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[141]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(There is a *function* with that name, however."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not as an expression."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be used as a goal,"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as a boolean function, you should write"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[152]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to use a goal"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "if <goal> then yes else no"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "you should use"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you are trying to invoke a higher-order function,"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "check that the module is correctly imported.)"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(If it is defined in a separate module,"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[169])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is actually defined."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and that the functor"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "make sure that you have the arity correct,"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and not as an application of the language builtin call/N,"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as an expression"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If you really are trying to use"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the Mercury Language Reference Manual."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[186])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "see the \"Creating higher-order terms\" section"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "state variable operator."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[193]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "invalid use of the"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[196])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[200])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[201])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You probably meant to use"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "-->"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[207])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[209])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in DCG lambda expression"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_String) "[|]")),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the list constructor is"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[215]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_1[214]))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[164])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "./2"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[207])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "syntax error in lambda expression"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[206]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[226])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[228])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "field update operator"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[229])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[231])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "some kind of syntax error."))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[233]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is probably"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[234])))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "^"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[226])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[238])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "field selection operator"))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[240]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[239])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[241])))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not a variable or other term."))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[243]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The field name must be an atom,"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[244])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[233]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[246])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[247])))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "symbol"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[249]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The builtin"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "coerce"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator expects"))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[255]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "one"))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[257]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument, not"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[259]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[261]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in use of constructor"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[263]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field"))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[265]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be updated"))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[267]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because the existentially quantified type"))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not just in the type of this field,"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but also in the types of some of the other fields of"))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid use of the"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[272]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "prefix"))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[274]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "new "))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[276]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[275])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on a constructor of type"))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[279]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[280])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not existentially typed."))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[282]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as an abstract type in all Mercury code, which"))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[288]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this fact requires the compiler to treat this type"))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[290]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[289])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Due to a limitation of the Mercury implementation,"))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[292]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[291])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "targeted by the current grade."))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[294]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[293])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for at least one target language other than the one"))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[296]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[295])))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function symbols of the type."))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[298]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "disallows references to the"))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[300]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[299])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "That"))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is defined in"))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[303]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[305]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[307]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[309]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[308])))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which does not have an"))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[311]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[310])))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "modules"))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[313]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "neither of which has an"))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[315]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[310])))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[317]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[309]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[318])))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "none of which have"))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[320]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[319])))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must always be fully module qualified."))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[322]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[286]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[323])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[325]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[324])))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "accessed via"))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[327]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[326])))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that symbols defined in modules"))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[328])))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The module"))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[331]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 333 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[332])))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has not been imported.)"))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[334]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The possible parent module"))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[336]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The possible parent modules"))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[338]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have not been imported.)"))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[340]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "wrong number of arguments"))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[342]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[346]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 348 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[132])))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[348]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 350 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[57])))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[350]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 352 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[330])))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[352]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 354 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 355 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[57])))
  },
  /* row 356 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_undef_scalar_common_1[355]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 357 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_2[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "list")) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[213]))) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[225]))) },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_3[5][5] = {
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_4[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[4])),
    ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box check_hlds__typecheck_error_undef_scalar_common_8[3][6] = {
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};


static /* final */ const struct check_hlds__typecheck_error_undef__vector_common_type_5_0_s check_hlds__typecheck_error_undef_vector_common_5[128] = {
  /* row   0 */   { (MR_String) "some" },
  /* row   1 */   { NULL },
  /* row   2 */   { (MR_String) "semipure" },
  /* row   3 */   { (MR_String) "apply" },
  /* row   4 */   { NULL },
  /* row   5 */   { (MR_String) "else" },
  /* row   6 */   { NULL },
  /* row   7 */   { NULL },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { (MR_String) "impure" },
  /* row  17 */   { (MR_String) "if" },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "then" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { (MR_String) "->" },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) ":=" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { (MR_String) "if" },
  /* row  46 */   { NULL },
  /* row  47 */   { (MR_String) "." },
  /* row  48 */   { NULL },
  /* row  49 */   { (MR_String) "->" },
  /* row  50 */   { NULL },
  /* row  51 */   { (MR_String) "then" },
  /* row  52 */   { NULL },
  /* row  53 */   { (MR_String) ":-" },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { (MR_String) "else" },
  /* row  60 */   { NULL },
  /* row  61 */   { (MR_String) "-->" },
  /* row  62 */   { NULL },
  /* row  63 */   { (MR_String) "^" },
  /* row  64 */   { NULL },
  /* row  65 */   { NULL },
  /* row  66 */   { NULL },
  /* row  67 */   { (MR_String) "<=" },
  /* row  68 */   { NULL },
  /* row  69 */   { NULL },
  /* row  70 */   { NULL },
  /* row  71 */   { NULL },
  /* row  72 */   { (MR_String) "semipure" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { NULL },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { (MR_String) "some" },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { NULL },
  /* row  85 */   { NULL },
  /* row  86 */   { (MR_String) "not" },
  /* row  87 */   { NULL },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { NULL },
  /* row  91 */   { NULL },
  /* row  92 */   { (MR_String) "<=>" },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
  /* row  96 */   { NULL },
  /* row  97 */   { (MR_String) "=>" },
  /* row  98 */   { (MR_String) "all" },
  /* row  99 */   { (MR_String) "\\=" },
  /* row 100 */   { NULL },
  /* row 101 */   { NULL },
  /* row 102 */   { (MR_String) "call" },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { NULL },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { (MR_String) "," },
  /* row 110 */   { NULL },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "impure" },
  /* row 113 */   { NULL },
  /* row 114 */   { NULL },
  /* row 115 */   { NULL },
  /* row 116 */   { NULL },
  /* row 117 */   { (MR_String) "\\+" },
  /* row 118 */   { NULL },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { (MR_String) ";" },
  /* row 123 */   { NULL },
  /* row 124 */   { (MR_String) "=" },
  /* row 125 */   { NULL },
  /* row 126 */   { NULL },
  /* row 127 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_undef__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_cons_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0 = {
  (MR_String) "other_lang_foreign_type_constructor",
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
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_2,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_3,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_cons_error_0_0
};

static const MR_Integer check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_cons_error_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
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

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_0 = {
  (MR_String) "undef_special",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_1 = {
  (MR_String) "undef_ordinary",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__field_types_undef_class_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_0[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_1[1] = { &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_undef_class_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_stag_ordered_undef_class_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_undef_class_0[2] = {
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_1,
  &check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_functor_desc_undef_class_0_0
};

static const MR_Integer check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_undef_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_undef_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_undef____Unify____undef_class_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_undef____Compare____undef_class_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_undef",
  (MR_String) "undef_class",
  { check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_name_ordered_undef_class_0 },
  { check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__du_ptag_ordered_undef_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__functor_number_map_undef_class_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__arity_error_to_pieces__1282__1_1_f_0(
  MR_Integer LambdaHeadVar__1_27)
{
  MR_Word LambdaHeadVar__2_28;

  {
    LambdaHeadVar__2_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LambdaHeadVar__2_28, 1) = ((MR_Box) (LambdaHeadVar__1_27));
  }
  return LambdaHeadVar__2_28;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_unimported_ancestors__1238__1_1_f_0(
  MR_Word LambdaHeadVar__1_10)
{
  MR_Word LambdaHeadVar__2_11;

  {
    LambdaHeadVar__2_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, LambdaHeadVar__2_11, 1) = ((MR_Box) (LambdaHeadVar__1_10));
  }
  return LambdaHeadVar__2_11;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__1203__1_2_f_0(
  MR_Word ModuleQualifierList_16,
  MR_Word LambdaHeadVar__1_44)
{
  MR_Word LambdaHeadVar__2_45;
  MR_Word AncestorMNList_20;
  MR_Word FullList_21;

  AncestorMNList_20 = mdbcomp__sym_name__sym_name_to_list_1_f_0(LambdaHeadVar__1_44);
  FullList_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AncestorMNList_20, ModuleQualifierList_16);
  mdbcomp__sym_name__det_list_to_sym_name_2_p_0(FullList_21, &LambdaHeadVar__2_45);
  return LambdaHeadVar__2_45;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__1139__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;

  {
    LambdaHeadVar__2_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, LambdaHeadVar__2_64, 1) = ((MR_Box) (LambdaHeadVar__1_63));
  }
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__IntroducedFrom__func__report_cons_error__936__1_2_f_0(
  MR_Word TVarSet_12,
  MR_Word HeadVar__2_168)
{
  MR_Word HeadVar__3_169;

  HeadVar__3_169 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, HeadVar__2_168);
  return HeadVar__3_169;
}

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____undef_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____undef_class_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_error_undef____Compare____cons_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_11;

              mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Word SubResult2_14;

                hlds__hlds_cons____Compare____hlds_ctor_field_defn_0_0(&SubResult2_14, ArgX2_12, ArgY2_13);
                succeeded = (SubResult2_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_14;
                else
                {
                  MR_Word SubResult3_17;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[6]), &SubResult3_17, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
                  succeeded = (SubResult3_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_17;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX4_18)), ((MR_Box) (ArgY4_19)));
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX1_20, ArgY1_21);
            }
            break;
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
          MR_Word TypeInfo_23_23;
          MR_Word TypeInfo_24_24;
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
                TypeInfo_23_23 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
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

static void MR_CALL 
check_hlds__typecheck_error_undef__acc_known_pred_info_names_4_p_0(
  MR_Word RequiredPredOrFunc_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_KnownNames_0_10,
  MR_Word * STATE_VARIABLE_KnownNames_11)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_8;

  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_6, &PredOrFunc_8);
  succeeded = (PredOrFunc_8 == RequiredPredOrFunc_5);
  if (succeeded)
  {
    MR_String Name_9;

    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &Name_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_KnownNames_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Name_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_KnownNames_0_10));
    }
  }
  else
    *STATE_VARIABLE_KnownNames_11 = STATE_VARIABLE_KnownNames_0_10;
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

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_cons_error_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_169;

  conv0_HeadVar__3_169 = check_hlds__typecheck_error_undef__IntroducedFrom__func__report_cons_error__936__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_169));
  return wrapper_arg_2;
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
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_71;

        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (TypeCtor_7));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[297])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[287])));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[286])));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[285])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[284])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[301])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_59);
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_71, 0) = ((MR_Box) (Context_4));
          MR_hl_field(0, Var_71, 1) = ((MR_Box) (Pieces_9));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_71));
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
        MR_Word DuCtor_17 = ((MR_Word) ((MR_hl_field(0, FieldDefn_11, (MR_Integer) 3))));
        MR_String VarVars_20;
        MR_Word TVarsPieces_22;
        MR_String OccurOccurs_23;
        MR_Word ConsId_28;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_111;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_122;
        MR_Word Pieces_161;

        if ((TVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_undef.report_cons_error\'/2", (MR_String) "no type variables");
        else
        {
          MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, TVars_13, (MR_Integer) 1))));
          MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, TVars_13, (MR_Integer) 0))));

          if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TVarPiece_21;
            MR_Word Var_76;

            VarVars_20 = (MR_String) "variable";
            TVarPiece_21 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, Var_174);
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (TVarPiece_21));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            TVarsPieces_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
            OccurOccurs_23 = (MR_String) "occurs";
          }
          else
          {
            MR_Word TVarPieces_27;
            MR_Word Var_79;

            VarVars_20 = (MR_String) "variables";
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_79, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_8[2]));
              MR_hl_field(0, Var_79, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_cons_error_2_f_0_1));
              MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_79, 3) = ((MR_Box) (TVarSet_12));
            }
            TVarPieces_27 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, TVars_13);
            TVarsPieces_22 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), TVarPieces_27);
            OccurOccurs_23 = (MR_String) "occur";
          }
        }
        ConsId_28 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_17)));
        {
          Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_90, 1) = ((MR_Box) (FieldName_10));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_88 = parse_tree__error_spec__color_as_subject_1_f_0(Var_89);
        Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[268])));
        {
          Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_103, 1) = ((MR_Box) (VarVars_20));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[269])));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_107, 1) = ((MR_Box) (OccurOccurs_23));
        }
        {
          Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 25U));
          MR_hl_field(3, Var_115, 1) = ((MR_Box) (ConsId_28));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[47])));
        }
        {
          Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[271])));
          MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[270])));
          MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
        }
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarsPieces_22, Var_106);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_105);
        Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_98);
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_92);
        Pieces_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[266])), Var_87);
        {
          Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_122, 0) = ((MR_Box) (DefnContext_14));
          MR_hl_field(0, Var_122, 1) = ((MR_Box) (Pieces_161));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_122));
          MR_hl_field(1, Msgs_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_159;
        MR_Word TypeCtor_162 = ((MR_Word) ((MR_hl_field(3, ConsError_5, (MR_Integer) 0))));
        MR_Word Pieces_163;

        Var_129 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[277])));
        {
          Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_142, 1) = ((MR_Box) (TypeCtor_162));
        }
        {
          Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
          MR_hl_field(1, Var_141, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[281])));
        }
        {
          Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[278])));
          MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
        }
        Var_151 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[283])));
        Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_150);
        Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, Var_137);
        Pieces_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[273])), Var_128);
        {
          Var_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_159, 0) = ((MR_Box) (Context_4));
          MR_hl_field(0, Var_159, 1) = ((MR_Box) (Pieces_163));
        }
        {
          Msgs_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_6, 0) = ((MR_Box) (Var_159));
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

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_no_clauses_stub_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  MR_bool succeeded;
  MR_Word Specs_8;
  MR_Word IntBadClauses_48;
  MR_Word ModuleName_49;
  MR_Word PredModuleName_50;
  MR_String PredName_51;
  MR_Word UserArity_52;
  MR_Word PredOrFunc_53;
  MR_Word SymName_54;
  MR_Word Id_55;
  MR_Word PredMarkers_56;

  hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_48);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_49);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_50);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_51);
  UserArity_52 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_7);
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_53);
  {
    SymName_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_54, 0) = ((MR_Box) (ModuleName_49));
    MR_hl_field(1, SymName_54, 1) = ((MR_Box) (PredName_51));
  }
  {
    Id_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_55, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
    MR_hl_field(0, Id_55, 1) = ((MR_Box) (SymName_54));
    MR_hl_field(0, Id_55, 2) = ((MR_Box) (UserArity_52));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_56);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), IntBadClauses_48, ((MR_Box) (Id_55)));
  if (!(succeeded))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_56, (MR_Integer) 29);
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_56, (MR_Integer) 4);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_49, PredModuleName_50);
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
          MR_Word PredDotPieces_12;
          MR_Word Pieces_13;
          MR_Word Context_14;
          MR_Word Spec_15;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_34;
          MR_Word Var_39;

          PredDotPieces_12 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])), PredId_6);
          Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[26])));
          Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDotPieces_12, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[28])), Var_39);
          Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_34);
          Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[24])), Var_28);
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_14);
          {
            Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.maybe_report_no_clauses_stub\'/3"));
            MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_14));
            MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_13));
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
  MR_Word IntBadClauses_37;
  MR_Word ModuleName_38;
  MR_Word PredModuleName_39;
  MR_String PredName_40;
  MR_Word UserArity_41;
  MR_Word PredOrFunc_42;
  MR_Word SymName_43;
  MR_Word Id_44;
  MR_Word PredMarkers_45;

  hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(ModuleInfo_5, &IntBadClauses_37);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_38);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_7, &PredModuleName_39);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_40);
  UserArity_41 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_7);
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_7, &PredOrFunc_42);
  {
    SymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_43, 0) = ((MR_Box) (ModuleName_38));
    MR_hl_field(1, SymName_43, 1) = ((MR_Box) (PredName_40));
  }
  {
    Id_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_42));
    MR_hl_field(0, Id_44, 1) = ((MR_Box) (SymName_43));
    MR_hl_field(0, Id_44, 2) = ((MR_Box) (UserArity_41));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_45);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), IntBadClauses_37, ((MR_Box) (Id_44)));
  if (!(succeeded))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_45, (MR_Integer) 29);
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_45, (MR_Integer) 4);
      if (!(succeeded))
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_38, PredModuleName_39);
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
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_6);
    Var_24 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[22])));
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_10, Var_23);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[17])), Var_22);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_12);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.maybe_report_no_clauses\'/3"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_12));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Specs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_8, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Specs_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Specs_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_28;

  conv0_LambdaHeadVar__2_28 = check_hlds__typecheck_error_undef__IntroducedFrom__func__arity_error_to_pieces__1282__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
  return wrapper_arg_2;
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
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Integer Arity_50;
  MR_Word Arities_51;
  MR_Word ActualArityPieces_53;
  MR_Word ExpectedArityPieces_54;
  MR_Word ExpectedAritiesPieces_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_String Var_59;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;

  Var_14 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[0]), Args_9);
  Arity_50 = (MR_Integer) (Var_14);
  Var_15 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_8);
  ExpectedArity_12 = (MR_Integer) (Var_15);
  {
    Arities_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Arities_51, 0) = ((MR_Box) (ExpectedArity_12));
    MR_hl_field(1, Arities_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_59 = mercury__string__int_to_string_1_f_0(Arity_50);
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ActualArityPieces_53 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_57);
  ExpectedArityPieces_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[6]), Arities_51);
  ExpectedAritiesPieces_55 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "or", (MR_Word) ((MR_Unsigned) 0U), ExpectedArityPieces_54);
  Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[343])));
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210])));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (ActualArityPieces_53));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[345])));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (ExpectedAritiesPieces_55));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[344])));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[347])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_70);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_67);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (EventName_7));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[20])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[19])), Var_30);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_25);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[17])), Var_20);
  {
    Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_event_arity\'/4"));
    MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Pieces_13));
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
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (EventName_5));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[12])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  Var_13 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_14);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[11])), Var_12);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_event\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_4));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word GoalContext_8,
  MR_Word Context_9,
  MR_Word ConsErrors_10,
  MR_Word ConsId_11)
{
  MR_bool succeeded;
  MR_Word Spec_12;
  MR_Word InClauseForPieces_13;
  MR_Word GoalContextPieces_14;
  MR_Word InitComp_15;
  MR_Word Var_22;
  MR_Word FunctorComps_20;
  MR_Word DuCtor_16;
  MR_String Name_17;
  MR_Integer Arity_18;
  MR_Word Var_23;
  MR_Integer slot_0;
  MR_String str_1;

  InClauseForPieces_13 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_7);
  GoalContextPieces_14 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_7, GoalContext_8);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, GoalContextPieces_14);
  {
    InitComp_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitComp_15, 0) = ((MR_Box) (Var_22));
  }
  succeeded = ((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_16 = (MR_Word) (MR_body((MR_Word) (ConsId_11), (MR_Integer) 1));
    Var_23 = ((MR_Word) ((MR_hl_field(0, DuCtor_16, (MR_Integer) 0))));
    Arity_18 = ((MR_Integer) ((MR_hl_field(0, DuCtor_16, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_17 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
      // hashed string jump switch
      ;
      // compute the hash value of the input string
      ;
      slot_0 = ((MR_hash_string4(Name_17)) & (MR_Integer) 63);
      // no collisions; no hash chain loop
      ;
      // lookup the string for this hash slot
      ;
      str_1 = ((&check_hlds__typecheck_error_undef_vector_common_5[64 + slot_0]))->check_hlds__typecheck_error_undef__vector_common_type_5_0__vct_5_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, Name_17) == 0))))
      {
        // we found a match; dispatch to the corresponding code
        ;
        switch (slot_0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              // case "<="
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 8:
            {
              // case "semipure"
              ;
              succeeded = (Arity_18 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 16:
            {
              // case "some"
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 22:
            {
              // case "not"
              ;
              succeeded = (Arity_18 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 28:
            {
              // case "<=>"
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 33:
            {
              // case "=>"
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 34:
            {
              // case "all"
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 35:
            {
              // case "\="
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
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
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 48:
            {
              // case "impure"
              ;
              succeeded = (Arity_18 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 53:
            {
              // case "\+"
              ;
              succeeded = (Arity_18 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 58:
            {
              // case ";"
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 60:
            {
              // case "="
              ;
              succeeded = (Arity_18 == (MR_Integer) 2);
            }
            break;
        }
        // jump out of search loop
        ;
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
      if (succeeded)
      {
        MR_Word NameArity_33;
        MR_Word MainPieces_34;
        MR_Word VerbosePieces_35;
        MR_Word VerboseCallPieces_36;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_76;
        MR_Word Var_77;

        {
          NameArity_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NameArity_33, 0) = ((MR_Box) (Name_17));
          MR_hl_field(0, NameArity_33, 1) = ((MR_Box) (Arity_18));
        }
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (NameArity_33));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
        Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[151])));
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_46);
        MainPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[84])), Var_41);
        Var_54 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[159])));
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        VerbosePieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[155])), Var_53);
        succeeded = (strcmp(Name_17, (MR_String) "call") == 0);
        if (succeeded)
        {
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_63;
          MR_Word Var_68;
          MR_Word Var_69;

          Var_61 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[165])));
          Var_69 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[167])));
          Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[192])));
          Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[166])), Var_68);
          Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_63);
          VerboseCallPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[163])), Var_60);
        }
        else
          VerboseCallPieces_36 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (MainPieces_34));
        }
        {
          Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_74, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, Var_74, 1) = ((MR_Box) (VerbosePieces_35));
        }
        {
          Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_77, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Var_77, 1) = ((MR_Box) (VerboseCallPieces_36));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          FunctorComps_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FunctorComps_20, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, FunctorComps_20, 1) = ((MR_Box) (Var_73));
        }
        succeeded = MR_TRUE;
      }
      else
        succeeded = check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(Name_17, Arity_18, &FunctorComps_20);
    }
  }
  if (succeeded)
  {
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (InitComp_15));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (FunctorComps_20));
    }
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (Context_9));
      MR_hl_field(2, Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_undef_cons\'/5"));
      MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_27));
    }
  }
  else
    check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0(ClauseContext_7, Context_9, InitComp_15, ConsErrors_10, ConsId_11, &Spec_12);
  return Spec_12;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleNames_16;

  check_hlds__typecheck_error_undef__accumulate_matching_cons_module_names_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleNames_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleNames_16));
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msgs_6;

  conv0_Msgs_6 = check_hlds__typecheck_error_undef__report_cons_error_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msgs_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word InitComp_9,
  MR_Word ConsErrors_10,
  MR_Word ConsId_11,
  MR_Word * Spec_12)
{
  MR_bool succeeded;
  MR_Word ConsMsgs_13;
  MR_Word ModuleInfo_17;
  MR_Word ConsTable_18;
  MR_Word PredicateTable_19;
  MR_Word DuCtor_20;

  if ((ConsErrors_10 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsMsgs_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConsMsgLists_16;
    MR_Word Var_59;

    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_8[1]));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_1));
      MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_59, 3) = ((MR_Box) (Context_8));
    }
    ConsMsgLists_16 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[1]), Var_59, ConsErrors_10);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), ConsMsgLists_16, &ConsMsgs_13);
  }
  ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_17, &ConsTable_18);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_19);
  succeeded = ((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_20 = (MR_Word) (MR_body((MR_Word) (ConsId_11), (MR_Integer) 1));
    {
      MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(0, DuCtor_20, (MR_Integer) 0))));
      MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, DuCtor_20, (MR_Integer) 1))));
      MR_Word FunctorComps_32;
      MR_Word QualSuggestionMsgs_33;
      MR_Word FirstMsg_57;
      MR_Word Var_143;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word OtherArities_28;
      MR_Word ConsArities_24;
      MR_Word PredIds_25;
      MR_Word FuncArities_26;
      MR_Word AllArities_27;
      MR_Word Var_62;

      hlds__hlds_cons__return_cons_arities_3_p_0(ConsTable_18, SymName_21, &ConsArities_24);
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_19, (MR_Integer) 1, SymName_21, &PredIds_25);
      check_hlds__typecheck_error_undef__return_function_arities_4_p_0(ModuleInfo_17, PredIds_25, (MR_Word) ((MR_Unsigned) 0U), &FuncArities_26);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsArities_24, FuncArities_26);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_62, &AllArities_27);
      mercury__list__delete_all_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AllArities_27, ((MR_Box) (Arity_22)), &OtherArities_28);
      succeeded = (OtherArities_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word FunctorPieces_31;
        MR_Word Var_63;

        FunctorPieces_31 = check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0(SymName_21, Arity_22, OtherArities_28);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (FunctorPieces_31));
        }
        {
          FunctorComps_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FunctorComps_32, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, FunctorComps_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        QualSuggestionMsgs_33 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word UndefSymbolPieces_34;
        MR_Word AddeddumPieces_37;
        MR_Word MissingImportModules_38;
        MR_String BaseName_39;
        MR_Word ConsDefns_40;
        MR_Word ConsModuleNames_41;
        MR_Word PredModuleNames_42;
        MR_Word FuncModuleNames_43;
        MR_Word ModuleNames_44;
        MR_Word ModuleNamesSet0_45;
        MR_Word ModuleNamesSet_46;
        MR_Word QualMsgs_47;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_75;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_135;
        MR_Word Var_139;
        MR_Word ModQual_35;
        MR_Box conv2_ConsModuleNames_41;

        Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[140])));
        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 25U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (ConsId_11));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
        }
        Var_81 = parse_tree__error_spec__color_as_subject_1_f_0(Var_82);
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[250])), Var_80);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_75);
        UndefSymbolPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_69);
        succeeded = ((MR_tag((MR_Word) SymName_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModQual_35 = ((MR_Word) ((MR_hl_field(1, SymName_21, (MR_Integer) 0))));
          check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_7, ModQual_35, &AddeddumPieces_37, &MissingImportModules_38);
        }
        else
        {
          MR_String Var_91;

          succeeded = (Arity_22 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) SymName_21)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_91 = ((MR_String) ((MR_hl_field(0, SymName_21, (MR_Integer) 0))));
              succeeded = (strcmp(Var_91, (MR_String) "[|]") == 0);
            }
          }
          if (succeeded)
            check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_7, (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_2[1]), &AddeddumPieces_37, &MissingImportModules_38);
          else
          {
            MR_String Var_94;

            succeeded = ((MR_tag((MR_Word) SymName_21)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_94 = ((MR_String) ((MR_hl_field(0, SymName_21, (MR_Integer) 0))));
              succeeded = (strcmp(Var_94, (MR_String) "coerce") == 0);
            }
            if (succeeded)
            {
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_105;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_116;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;

              Var_100 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[254])));
              Var_111 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[258])));
              {
                Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_124, 1) = ((MR_Box) (Arity_22));
              }
              {
                Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
                MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[262])));
              }
              Var_122 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_123);
              Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
              Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[260])), Var_121);
              Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
              Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[256])), Var_110);
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_105);
              AddeddumPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[252])), Var_99);
              MissingImportModules_38 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              AddeddumPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
              MissingImportModules_38 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
        }
        Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UndefSymbolPieces_34, AddeddumPieces_37);
        {
          Var_132 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_132, 0) = ((MR_Box) (Var_133));
        }
        {
          FunctorComps_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FunctorComps_32, 0) = ((MR_Box) (Var_132));
          MR_hl_field(1, FunctorComps_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        BaseName_39 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_21);
        hlds__hlds_cons__return_cons_defns_with_given_name_3_p_0(ConsTable_18, BaseName_39, &ConsDefns_40);
        {
          Var_135 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_135, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_6[1]));
          MR_hl_field(0, Var_135, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_undef_cons_std_6_p_0_2));
          MR_hl_field(0, Var_135, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_135, 3) = ((MR_Box) (SymName_21));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]), Var_135, ConsDefns_40, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_ConsModuleNames_41);
        ConsModuleNames_41 = ((MR_Word) (conv2_ConsModuleNames_41));
        PredModuleNames_42 = check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_19, (MR_Integer) 0, SymName_21);
        FuncModuleNames_43 = check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0(PredicateTable_19, (MR_Integer) 1, SymName_21);
        Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PredModuleNames_42, FuncModuleNames_43);
        ModuleNames_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ConsModuleNames_41, Var_139);
        mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_44, &ModuleNamesSet0_45);
        mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_38, ModuleNamesSet0_45, &ModuleNamesSet_46);
        QualMsgs_47 = check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(ClauseContext_7, Context_8, (MR_String) "symbol", ModuleNamesSet_46);
        succeeded = (ConsMsgs_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (QualMsgs_47 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word ConsTableNameSet_48;
          MR_Word KnownFuncNames0_49;
          MR_Word KnownFuncNamesSet0_50;
          MR_Word KnownFuncNamesSet_51;
          MR_Word KnownFuncNames_52;
          MR_Word DidYouMeanPieces_53;

          hlds__hlds_cons__cons_table_names_2_p_0(ConsTable_18, &ConsTableNameSet_48);
          check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0(PredicateTable_19, (MR_Integer) 1, &KnownFuncNames0_49);
          mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), KnownFuncNames0_49, &KnownFuncNamesSet0_50);
          mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConsTableNameSet_48, KnownFuncNamesSet0_50, &KnownFuncNamesSet_51);
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), KnownFuncNamesSet_51, &KnownFuncNames_52);
          parse_tree__error_spec__maybe_construct_did_you_mean_pieces_3_p_0(BaseName_39, KnownFuncNames_52, &DidYouMeanPieces_53);
          if ((DidYouMeanPieces_53 == (MR_Word) ((MR_Unsigned) 0U)))
            QualSuggestionMsgs_33 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word DidyouMeanMsg_56;

            {
              DidyouMeanMsg_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DidyouMeanMsg_56, 0) = ((MR_Box) (Context_8));
              MR_hl_field(0, DidyouMeanMsg_56, 1) = ((MR_Box) (DidYouMeanPieces_53));
            }
            {
              QualSuggestionMsgs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, QualSuggestionMsgs_33, 0) = ((MR_Box) (DidyouMeanMsg_56));
              MR_hl_field(1, QualSuggestionMsgs_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        else
          QualSuggestionMsgs_33 = QualMsgs_47;
      }
      {
        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_143, 0) = ((MR_Box) (InitComp_9));
        MR_hl_field(1, Var_143, 1) = ((MR_Box) (FunctorComps_32));
      }
      {
        FirstMsg_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, FirstMsg_57, 0) = ((MR_Box) (Context_8));
        MR_hl_field(2, FirstMsg_57, 1) = ((MR_Box) (Var_143));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (FirstMsg_57));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (ConsMsgs_13));
      }
      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_148, QualSuggestionMsgs_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Spec_12 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.typecheck_error_undef.report_error_undef_cons_std\'/6"));
        MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(2, base, 3) = ((MR_Box) (Var_147));
      }
    }
  }
  else
  {
    MR_Word Pieces_58;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_159;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;

    Var_154 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[140])));
    {
      Var_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_167, 0) = ((MR_Box) ((MR_Unsigned) 25U));
      MR_hl_field(3, Var_167, 1) = ((MR_Box) (ConsId_11));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (Var_167));
      MR_hl_field(1, Var_166, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
    }
    Var_165 = parse_tree__error_spec__color_as_subject_1_f_0(Var_166);
    Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_165, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[250])), Var_164);
    Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, Var_159);
    Pieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_153);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Spec_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.typecheck_error_undef.report_error_undef_cons_std\'/6"));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, base, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_58));
    }
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
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_7[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__find_possible_pf_missing_module_qualifiers_3_f_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (PredicateTable_5));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (SymName_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]), Var_11, PredIds_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ModuleNames_8);
  ModuleNames_8 = ((MR_Word) (conv1_ModuleNames_8));
  return ModuleNames_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__wrong_arity_constructor_to_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_28;

  conv0_LambdaHeadVar__2_28 = check_hlds__typecheck_error_undef__IntroducedFrom__func__arity_error_to_pieces__1282__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
  return wrapper_arg_2;
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
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word ActualArityPieces_36;
  MR_Word ExpectedArityPieces_37;
  MR_Word ExpectedAritiesPieces_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;

  Var_42 = mercury__string__int_to_string_1_f_0(Arity_6);
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ActualArityPieces_36 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_40);
  ExpectedArityPieces_37 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[5]), ActualArities_7);
  ExpectedAritiesPieces_38 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "or", (MR_Word) ((MR_Unsigned) 0U), ExpectedArityPieces_37);
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[343])));
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (ActualArityPieces_36));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[345])));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (ExpectedAritiesPieces_38));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[344])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[347])));
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_53);
  NumArgsPieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_50);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Name_5));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
  }
  Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[264])), Var_21);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NumArgsPieces_9, Var_16);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_15);
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
            MR_Word PredFormArity_15;
            MR_Integer FuncUserArityInt_16;
            MR_Word Var_19;

            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &PredFormArity_15);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_14, &Var_19, PredFormArity_15);
            FuncUserArityInt_16 = (MR_Integer) (Var_19);
            {
              STATE_VARIABLE_FuncArities_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_FuncArities_20_20, 0) = ((MR_Box) (FuncUserArityInt_16));
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

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__syntax_functor_components_3_p_0(
  MR_String FunctorName_4,
  MR_Integer Arity_5,
  MR_Word * Components_6)
{
  MR_bool succeeded;

  switch (Arity_5) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_387_387;
        MR_Word Pieces1_7;
        MR_Word Pieces2_8;
        MR_Word Var_13;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        succeeded = (strcmp(FunctorName_4, (MR_String) "!") == 0);
        if (succeeded)
        {
          TypeCtorInfo_387_387 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
          Var_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30]));
          Var_19 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[198]));
          Var_18 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_19);
          Var_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
          Var_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_387_387, Var_18, Var_29);
          Pieces1_7 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_387_387, Var_13, Var_17);
          Var_33 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[205]));
          Var_32 = parse_tree__error_spec__color_as_hint_1_f_0(Var_33);
          Var_49 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
          Pieces2_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_387_387, Var_32, Var_49);
          Var_55 = (MR_Integer) 0;
          Var_56 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_52, 0) = ((MR_Box) (Pieces1_7));
          }
          {
            Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_54, 0) = (MR_Box) ((MR_Unsigned) (Var_55));
            MR_hl_field(2, Var_54, 1) = ((MR_Box) (Pieces2_8));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Components_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_52));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_53));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer slot_0 = ((MR_hash_string4(FunctorName_4)) & (MR_Integer) 31);
        MR_String str_1 = ((&check_hlds__typecheck_error_undef_vector_common_5[32 + slot_0]))->check_hlds__typecheck_error_undef__vector_common_type_5_0__vct_5_f_0;

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
        if ((((str_1 != NULL)) && ((strcmp(str_1, FunctorName_4) == 0))))
        {
          // we found a match; dispatch to the corresponding code
          ;
          switch (slot_0) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 5:
              {
                // case ":="
                ;
                {
                  MR_Word Var_350;
                  MR_Word Var_351;
                  MR_Word Var_371;
                  MR_Word MainPieces_401;
                  MR_Word VerbosePieces_402;
                  MR_Word Var_403;
                  MR_Word Var_404;
                  MR_Word Var_405;

                  Var_351 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[232])));
                  Var_350 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_351, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  MainPieces_401 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_350);
                  Var_371 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[236])));
                  VerbosePieces_402 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_371, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  {
                    Var_403 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_403, 0) = ((MR_Box) (MainPieces_401));
                  }
                  {
                    Var_405 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_405, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(2, Var_405, 1) = ((MR_Box) (VerbosePieces_402));
                  }
                  {
                    Var_404 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_404, 0) = ((MR_Box) (Var_405));
                    MR_hl_field(1, Var_404, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_403));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_404));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 13:
              {
                // case "if"
                ;
                {
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_67;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Var_78;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Pieces_418;
                  MR_Word Var_419;

                  Var_62 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60])));
                  Var_73 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[65])));
                  Var_84 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[66])));
                  Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62])), Var_83);
                  Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_78);
                  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44])), Var_72);
                  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_67);
                  Pieces_418 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40])), Var_61);
                  {
                    Var_419 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_419, 0) = ((MR_Box) (Pieces_418));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_419));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 15:
              {
                // case "."
                ;
                {
                  MR_Word Var_168;
                  MR_Word Var_169;
                  MR_Word Var_176;
                  MR_Word Var_181;
                  MR_Word Var_182;
                  MR_Word Pieces_395;
                  MR_Word Var_396;

                  Var_169 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[218])));
                  Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[220])));
                  Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[166])), Var_181);
                  Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_176);
                  Pieces_395 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[216])), Var_168);
                  {
                    Var_396 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_396, 0) = ((MR_Box) (Pieces_395));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_396));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 17:
              {
                // case "->"
                ;
                {
                  MR_Word MainPieces_11;
                  MR_Word Var_259;
                  MR_Word Var_260;
                  MR_Word Var_265;
                  MR_Word Var_270;
                  MR_Word Var_271;
                  MR_Word Var_382;

                  Var_260 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[42])));
                  Var_271 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[46])));
                  Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_271, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  Var_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44])), Var_270);
                  Var_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_260, Var_265);
                  MainPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40])), Var_259);
                  {
                    Var_382 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_382, 0) = ((MR_Box) (MainPieces_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_382));
                    MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[356])));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 19:
              {
                // case "then"
                ;
                {
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Var_205;
                  MR_Word Var_210;
                  MR_Word Var_211;
                  MR_Word Var_216;
                  MR_Word Var_221;
                  MR_Word Var_222;
                  MR_Word MainPieces_421;
                  MR_Word Var_423;

                  Var_200 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[65])));
                  Var_211 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60])));
                  Var_222 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[66])));
                  Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_222, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  Var_216 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62])), Var_221);
                  Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_211, Var_216);
                  Var_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44])), Var_210);
                  Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_200, Var_205);
                  MainPieces_421 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40])), Var_199);
                  {
                    Var_423 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_423, 0) = ((MR_Box) (MainPieces_421));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_423));
                    MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[356])));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 21:
              {
                // case ":-"
                ;
                *Components_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[357]));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 27:
              {
                // case "else"
                ;
                {
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_105;
                  MR_Word Var_106;
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word Var_117;
                  MR_Word Var_122;
                  MR_Word Var_123;
                  MR_Word Pieces_415;
                  MR_Word Var_416;

                  Var_100 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[58])));
                  Var_106 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44])));
                  Var_112 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60])));
                  Var_123 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[64])));
                  Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62])), Var_122);
                  Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_117);
                  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_111);
                  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_105);
                  Pieces_415 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40])), Var_99);
                  {
                    Var_416 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_416, 0) = ((MR_Box) (Pieces_415));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_416));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 29:
              {
                // case "-->"
                ;
                *Components_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[354]));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 31:
              {
                // case "^"
                ;
                {
                  MR_Word Var_308;
                  MR_Word Var_309;
                  MR_Word Var_329;
                  MR_Word MainPieces_408;
                  MR_Word VerbosePieces_409;
                  MR_Word Var_410;
                  MR_Word Var_411;
                  MR_Word Var_412;

                  Var_309 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[242])));
                  Var_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_309, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  MainPieces_408 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_308);
                  Var_329 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[248])));
                  VerbosePieces_409 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_329, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
                  {
                    Var_410 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_410, 0) = ((MR_Box) (MainPieces_408));
                  }
                  {
                    Var_412 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_412, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(2, Var_412, 1) = ((MR_Box) (VerbosePieces_409));
                  }
                  {
                    Var_411 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_411, 0) = ((MR_Box) (Var_412));
                    MR_hl_field(1, Var_411, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Components_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_410));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_411));
                  }
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
      }
      break;
  }
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_error_call_to_undef_pred_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word SymNameArity_7)
{
  MR_bool succeeded;
  MR_Word Spec_8;
  MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, SymNameArity_7, (MR_Integer) 0))));
  MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 0))));
  MR_Word PredicateTable_12;
  MR_Word PredMarkers_13;
  MR_Word IsFullyQualified_14;
  MR_Word OtherIds_15;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_12);
  PredMarkers_13 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 2))));
  IsFullyQualified_14 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(PredMarkers_13);
  hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_12, IsFullyQualified_14, (MR_Integer) 0, SymName_9, &OtherIds_15);
  if ((OtherIds_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UndefClass_20;
    MR_Word PredSymName_44 = ((MR_Word) ((MR_hl_field(0, SymNameArity_7, (MR_Integer) 0))));
    MR_Word PredFormArity_45 = ((MR_Word) ((MR_hl_field(0, SymNameArity_7, (MR_Integer) 1))));
    MR_Integer PredFormArityInt_46 = (MR_Integer) (PredFormArity_45);
    MR_Word UndefSyntaxComponents_48;
    MR_String PredName_47;

    succeeded = ((MR_tag((MR_Word) PredSymName_44)) == (MR_Integer) 0);
    if (succeeded)
    {
      PredName_47 = ((MR_String) ((MR_hl_field(0, PredSymName_44, (MR_Integer) 0))));
      succeeded = check_hlds__typecheck_error_undef__is_undef_pred_a_syntax_error_3_p_0(PredName_47, PredFormArityInt_46, &UndefSyntaxComponents_48);
    }
    if (succeeded)
      {
        UndefClass_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UndefClass_20, 0) = ((MR_Box) (UndefSyntaxComponents_48));
      }
    else
    {
      MR_Word MissingImportAddeddumPieces_51;
      MR_Word MissingImportModules_52;
      MR_Word GetoptPieces_54;
      MR_Word AddeddumPieces_55;
      MR_String PredName_57;
      MR_String NewPredName_60;

      if (((MR_tag((MR_Word) PredSymName_44)) == (MR_Integer) 1))
      {
        MR_Word ModuleQualifier_49 = ((MR_Word) ((MR_hl_field(1, PredSymName_44, (MR_Integer) 0))));

        check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0(ClauseContext_5, ModuleQualifier_49, &MissingImportAddeddumPieces_51, &MissingImportModules_52);
      }
      else
      {
        MissingImportAddeddumPieces_51 = (MR_Word) ((MR_Unsigned) 0U);
        MissingImportModules_52 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) PredSymName_44)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_58 = ((MR_Word) ((MR_hl_field(1, PredSymName_44, (MR_Integer) 0))));
        MR_String StdLibModuleName_59;

        PredName_57 = ((MR_String) ((MR_hl_field(1, PredSymName_44, (MR_Integer) 1))));
        succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_58, &StdLibModuleName_59);
        if (succeeded)
        {
          if ((strcmp(StdLibModuleName_59, (MR_String) "getopt") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(StdLibModuleName_59, (MR_String) "getopt_io") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
      }
      else
      {
        PredName_57 = ((MR_String) ((MR_hl_field(0, PredSymName_44, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (PredFormArityInt_46) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            {
              succeeded = (strcmp(PredName_57, (MR_String) "process_options_se") == 0);
              if (succeeded)
              {
                NewPredName_60 = (MR_String) "process_options";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              succeeded = (strcmp(PredName_57, (MR_String) "process_options_se") == 0);
              if (succeeded)
              {
                NewPredName_60 = (MR_String) "process_options";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              succeeded = (strcmp(PredName_57, (MR_String) "process_options_se") == 0);
              if (succeeded)
              {
                NewPredName_60 = (MR_String) "process_options";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 7:
            if ((strcmp(PredName_57, (MR_String) "process_options_se") == 0))
            {
              NewPredName_60 = (MR_String) "process_options";
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(PredName_57, (MR_String) "process_options_track_se") == 0))
            {
              NewPredName_60 = (MR_String) "process_options_track";
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 9:
            {
              succeeded = (strcmp(PredName_57, (MR_String) "process_options_track_se") == 0);
              if (succeeded)
              {
                NewPredName_60 = (MR_String) "process_options_track";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_79;

        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (PredName_57));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[135])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[133])));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[35])));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_79, 1) = ((MR_Box) (NewPredName_60));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[136])));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
        }
        Var_74 = parse_tree__error_spec__color_as_hint_1_f_0(Var_75);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        GetoptPieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_73);
      }
      else
        GetoptPieces_54 = (MR_Word) ((MR_Unsigned) 0U);
      AddeddumPieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MissingImportAddeddumPieces_51, GetoptPieces_54);
      {
        UndefClass_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, UndefClass_20, 0) = ((MR_Box) (MissingImportModules_52));
        MR_hl_field(1, UndefClass_20, 1) = ((MR_Box) (AddeddumPieces_55));
      }
    }
    if (((MR_tag((MR_Word) UndefClass_20)) == (MR_Integer) 1))
    {
      MR_Word MissingImportModules_25 = ((MR_Word) ((MR_hl_field(1, UndefClass_20, (MR_Integer) 0))));
      MR_Word AddeddumPieces_26 = ((MR_Word) ((MR_hl_field(1, UndefClass_20, (MR_Integer) 1))));

      Spec_8 = check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0(ClauseContext_5, Context_6, PredicateTable_12, SymNameArity_7, MissingImportModules_25, AddeddumPieces_26);
    }
    else
    {
      MR_Word SpecialComponents_21 = ((MR_Word) ((MR_hl_field(0, UndefClass_20, (MR_Integer) 0))));
      MR_Word InClauseForPieces_22;
      MR_Word InClauseForComponent_23;
      MR_Word Msg_24;
      MR_Word Var_28;
      MR_Word Var_32;

      InClauseForPieces_22 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
      {
        InClauseForComponent_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InClauseForComponent_23, 0) = ((MR_Box) (InClauseForPieces_22));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (InClauseForComponent_23));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (SpecialComponents_21));
      }
      {
        Msg_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Msg_24, 0) = ((MR_Box) (Context_6));
        MR_hl_field(2, Msg_24, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_call_to_undef_pred\'/3"));
        MR_hl_field(2, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(2, Spec_8, 3) = ((MR_Box) (Var_32));
      }
    }
  }
  else
  {
    MR_Word PredIdTable_18;
    MR_Word PredFormArities_19;

    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_12, &PredIdTable_18);
    hlds__hlds_error_util__find_pred_arities_3_p_0(PredIdTable_18, OtherIds_15, &PredFormArities_19);
    Spec_8 = check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0(ClauseContext_5, Context_6, SymNameArity_7, PredFormArities_19);
  }
  return Spec_8;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_45;

  conv2_LambdaHeadVar__2_45 = check_hlds__typecheck_error_undef__IntroducedFrom__func__maybe_report_missing_import_addendum__1203__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_45));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_11;

  conv1_LambdaHeadVar__2_11 = check_hlds__typecheck_error_undef__IntroducedFrom__func__report_unimported_ancestors__1238__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_11));
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
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_3[3]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleQualifier_6));
  }
  mercury__set__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_22, VisibleModules_10, &MatchingVisibleModules_11);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingVisibleModules_11);
  if (succeeded)
  {
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (ModuleQualifier_6));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
    Var_35 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[335])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
    *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[333])), Var_29);
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
    MR_Word MatchingModuleNamesAncestorSets_56;
    MR_Word MatchingModuleNamesAncestors_57;

    MatchingModuleNamesAncestorSets_56 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[3]), MatchingVisibleModules_11);
    mercury__set__power_union_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestorSets_56, &MatchingModuleNamesAncestors_57);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingModuleNamesAncestors_57, VisibleModules_10, &UnimportedAncestorsSet_12);
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
      MR_Word Var_46;
      MR_Word UnimportedAncestorPieces_61;
      MR_Word UnimportedAncestorListPieces_62;
      MR_Word Var_68;

      UnimportedAncestorPieces_61 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[4]), UnimportedAncestors_13);
      UnimportedAncestorListPieces_62 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnimportedAncestorPieces_61);
      succeeded = (UnimportedAncestors_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_68 = ((MR_Word) ((MR_hl_field(1, UnimportedAncestors_13, (MR_Integer) 1))));
        succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;

        Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[335])));
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnimportedAncestorListPieces_62, Var_71);
        *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[337])), Var_70);
      }
      else
      {
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[341])));
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
        Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnimportedAncestorListPieces_62, Var_77);
        *Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[339])), Var_76);
      }
      ModuleQualifierList_16 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleQualifier_6);
      {
        AddAncestor_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AddAncestor_17, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_8[0]));
        MR_hl_field(0, AddAncestor_17, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__maybe_report_missing_import_addendum_4_p_0_4));
        MR_hl_field(0, AddAncestor_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, AddAncestor_17, 3) = ((MR_Box) (ModuleQualifierList_16));
      }
      Var_46 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AddAncestor_17, UnimportedAncestors_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MissingImportModules_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleQualifier_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_46));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0_1(
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
check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0(
  MR_Word ClauseContext_8,
  MR_Word Context_9,
  MR_Word PredicateTable_10,
  MR_Word SymNamePredFormArity_11,
  MR_Word MissingImportModules_12,
  MR_Word AddeddumPieces_13)
{
  MR_bool succeeded;
  MR_Word Spec_14;
  MR_Word InClauseForPieces_15;
  MR_Word InClauseForComponent_16;
  MR_Word SymName_17;
  MR_Word PredFormArity_18;
  MR_Integer Arity_19;
  MR_Word SNA_20;
  MR_Word MainPieces_21;
  MR_Word UndefMsg_22;
  MR_Word FuncOtherIds_23;
  MR_Word KindMsgs_27;
  MR_Word PossibleModuleQuals_28;
  MR_Word PossibleModuleQualsSet0_29;
  MR_Word PossibleModuleQualsSet_30;
  MR_Word QualMsgs_31;
  MR_Word KindQualMsgs_32;
  MR_Word Msgs_36;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_50;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word PredIds_97;
  MR_String Var_98;
  MR_Word Var_99;
  MR_Box conv1_PossibleModuleQuals_28;

  InClauseForPieces_15 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_8);
  {
    InClauseForComponent_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InClauseForComponent_16, 0) = ((MR_Box) (InClauseForPieces_15));
  }
  SymName_17 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_11, (MR_Integer) 0))));
  PredFormArity_18 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_11, (MR_Integer) 1))));
  Arity_19 = (MR_Integer) (PredFormArity_18);
  {
    SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_20, 0) = ((MR_Box) (SymName_17));
    MR_hl_field(0, SNA_20, 1) = ((MR_Box) (Arity_19));
  }
  Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[140])));
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (SNA_20));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
  }
  Var_56 = parse_tree__error_spec__color_as_subject_1_f_0(Var_57);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[142])), Var_55);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_50);
  MainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[138])), Var_44);
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_21, AddeddumPieces_13);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (InClauseForComponent_16));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    UndefMsg_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, UndefMsg_22, 0) = ((MR_Box) (Context_9));
    MR_hl_field(2, UndefMsg_22, 1) = ((MR_Box) (Var_66));
  }
  hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_10, (MR_Integer) 1, (MR_Integer) 1, SymName_17, &FuncOtherIds_23);
  if ((FuncOtherIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    KindMsgs_27 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word KindMsg_26;
    MR_Word Pieces_88;
    MR_Word Var_90;
    MR_Word Var_91;

    Var_91 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[147])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[144])), Var_90);
    {
      KindMsg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, KindMsg_26, 0) = ((MR_Box) (Context_9));
      MR_hl_field(0, KindMsg_26, 1) = ((MR_Box) (Pieces_88));
    }
    {
      KindMsgs_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, KindMsgs_27, 0) = ((MR_Box) (KindMsg_26));
      MR_hl_field(1, KindMsgs_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_98 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_17);
  hlds__pred_table__predicate_table_lookup_pf_raw_name_4_p_0(PredicateTable_10, (MR_Integer) 0, Var_98, &PredIds_97);
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_7[0]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__report_error_pred_wrong_full_name_6_f_0_1));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (PredicateTable_10));
    MR_hl_field(0, Var_99, 4) = ((MR_Box) (SymName_17));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[2]), Var_99, PredIds_97, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_PossibleModuleQuals_28);
  PossibleModuleQuals_28 = ((MR_Word) (conv1_PossibleModuleQuals_28));
  mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PossibleModuleQuals_28, &PossibleModuleQualsSet0_29);
  mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MissingImportModules_12, PossibleModuleQualsSet0_29, &PossibleModuleQualsSet_30);
  QualMsgs_31 = check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0(ClauseContext_8, Context_9, (MR_String) "predicate", PossibleModuleQualsSet_30);
  KindQualMsgs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), KindMsgs_27, QualMsgs_31);
  succeeded = (AddeddumPieces_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (KindQualMsgs_32 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word KnownPredNames_33;
    MR_String BaseName_34;
    MR_Word DidYouMeanPieces_35;

    check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0(PredicateTable_10, (MR_Integer) 0, &KnownPredNames_33);
    BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_17);
    parse_tree__error_spec__maybe_construct_did_you_mean_pieces_3_p_0(BaseName_34, KnownPredNames_33, &DidYouMeanPieces_35);
    if ((DidYouMeanPieces_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Msgs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_36, 0) = ((MR_Box) (UndefMsg_22));
        MR_hl_field(1, Msgs_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word DidyouMeanMsg_39;
      MR_Word Var_78;

      {
        DidyouMeanMsg_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DidyouMeanMsg_39, 0) = ((MR_Box) (Context_9));
        MR_hl_field(0, DidyouMeanMsg_39, 1) = ((MR_Box) (DidYouMeanPieces_35));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (DidyouMeanMsg_39));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msgs_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Msgs_36, 0) = ((MR_Box) (UndefMsg_22));
        MR_hl_field(1, Msgs_36, 1) = ((MR_Box) (Var_78));
      }
    }
  }
  else
  {
    MR_Word Var_80;

    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (UndefMsg_22));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Msgs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_80, KindQualMsgs_32);
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_pred_wrong_full_name\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Msgs_36));
  }
  return Spec_14;
}

static void MR_CALL 
check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_KnownNames_11;

  check_hlds__typecheck_error_undef__acc_known_pred_info_names_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_KnownNames_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_KnownNames_11));
}

static void MR_CALL 
check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0(
  MR_Word PredicateTable_4,
  MR_Word RequiredPredOrFunc_5,
  MR_Word * KnownNames_6)
{
  MR_Word PredIdTable_7;
  MR_Word PredInfos_8;
  MR_Word KnownNames0_9;
  MR_Word Var_10;
  MR_Box conv1_KnownNames0_9;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_4, &PredIdTable_7);
  mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, &PredInfos_8);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&check_hlds__typecheck_error_undef_scalar_common_6[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (check_hlds__typecheck_error_undef__get_known_pred_info_names_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (RequiredPredOrFunc_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_1[5]), Var_10, PredInfos_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_KnownNames0_9);
  KnownNames0_9 = ((MR_Word) (conv1_KnownNames0_9));
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), KnownNames0_9, KnownNames_6);
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_any_missing_module_qualifiers_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = check_hlds__typecheck_error_undef__IntroducedFrom__func__report_any_missing_module_qualifiers__1139__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
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
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_11, &ModuleName_12);
  Var_33 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_12);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
  }
  mercury__set__delete_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_32, ModuleNamesSet0_9, &ModuleNamesSet1_13);
  Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_34)), ModuleNamesSet1_13, &ModuleNamesSet_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNamesSet_14, &ModuleNames_15);
  if ((ModuleNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    Msgs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadModuleName_16 = ((MR_Word) ((MR_hl_field(1, ModuleNames_15, (MR_Integer) 0))));
    MR_Word TailModuleNames_17 = ((MR_Word) ((MR_hl_field(1, ModuleNames_15, (MR_Integer) 1))));
    MR_Word IsDefinedInPieces_18;
    MR_Word ModulesPieces_20;
    MR_Word NoImportsPieces_21;
    MR_Word MainPieces_28;
    MR_Word MainMsg_29;
    MR_Word VerboseMsg_31;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_122;

    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (ItemName_8));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[304])));
    }
    {
      IsDefinedInPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IsDefinedInPieces_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[302])));
      MR_hl_field(1, IsDefinedInPieces_18, 1) = ((MR_Box) (Var_37));
    }
    if ((TailModuleNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModuleNamesPieces_19;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_44, 1) = ((MR_Box) (HeadModuleName_16));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[164])));
      }
      ModuleNamesPieces_19 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
      ModulesPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[306])), ModuleNamesPieces_19);
      NoImportsPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[312]));
    }
    else
    {
      MR_Word TailTailModuleNames_23 = ((MR_Word) ((MR_hl_field(1, TailModuleNames_17, (MR_Integer) 1))));
      MR_Word ModuleNamePieces_24;
      MR_Word ModuleNamesPieces_125;

      ModuleNamePieces_24 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[2]), ModuleNames_15);
      ModuleNamesPieces_125 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[164])), ModuleNamePieces_24);
      ModulesPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[314])), ModuleNamesPieces_125);
      if ((TailTailModuleNames_23 == (MR_Word) ((MR_Unsigned) 0U)))
        NoImportsPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[316]));
      else
        NoImportsPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[321]));
    }
    Var_97 = parse_tree__error_spec__color_as_hint_1_f_0(NoImportsPieces_21);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ModulesPieces_20, Var_96);
    MainPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), IsDefinedInPieces_18, Var_95);
    {
      MainMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_29, 0) = ((MR_Box) (Context_7));
      MR_hl_field(0, MainMsg_29, 1) = ((MR_Box) (MainPieces_28));
    }
    {
      VerboseMsg_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, VerboseMsg_31, 0) = ((MR_Box) (Context_7));
      MR_hl_field(2, VerboseMsg_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[353])));
    }
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) (VerboseMsg_31));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Msgs_10, 0) = ((MR_Box) (MainMsg_29));
      MR_hl_field(1, Msgs_10, 1) = ((MR_Box) (Var_122));
    }
  }
  return Msgs_10;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef__is_undef_pred_a_syntax_error_3_p_0(
  MR_String PredName_4,
  MR_Integer PredFormArityInt_5,
  MR_Word * Components_6)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(PredName_4)) & (MR_Integer) 31);
  MR_String str_1 = ((&check_hlds__typecheck_error_undef_vector_common_5[0 + slot_0]))->check_hlds__typecheck_error_undef__vector_common_type_5_0__vct_5_f_0;

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
  if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_4) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          // case "some"
          ;
          {
            MR_Word TypeCtorInfo_278_278;
            MR_Word Var_237;
            MR_Word Var_241;
            MR_Word Var_242;
            MR_Word Var_246;
            MR_Word Var_247;
            MR_Word Var_248;
            MR_Word Var_255;
            MR_Word Var_256;
            MR_Word Var_257;
            MR_Word Var_261;
            MR_Word Var_264;
            MR_Word Var_265;
            MR_Word Pieces_272;

            succeeded = (PredFormArityInt_5 == (MR_Integer) 2);
            if (succeeded)
            {
              TypeCtorInfo_278_278 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_237 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[74]));
              Var_242 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[76]));
              Var_248 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[80]));
              Var_247 = parse_tree__error_spec__color_as_subject_1_f_0(Var_248);
              Var_257 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[82]));
              Var_256 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_257);
              Var_261 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_255 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_278_278, Var_256, Var_261);
              Var_246 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_278_278, Var_247, Var_255);
              Var_241 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_278_278, Var_242, Var_246);
              Pieces_272 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_278_278, Var_237, Var_241);
              Var_265 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_264 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_264, 0) = ((MR_Box) (Pieces_272));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_264));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_265));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 16:
        {
          // case "impure", "semipure"
          ;
          {
            MR_Word TypeCtorInfo_277_277;
            MR_Word Var_209;
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Var_216;
            MR_Word Var_217;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word Var_228;
            MR_Word Var_232;
            MR_Word Var_235;
            MR_Word Var_236;
            MR_Word Pieces_271;

            succeeded = (PredFormArityInt_5 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_277_277 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_209 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40]));
              Var_217 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[68]));
              {
                Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_216, 1) = ((MR_Box) (PredName_4));
              }
              {
                Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
                MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_217));
              }
              Var_214 = parse_tree__error_spec__color_as_subject_1_f_0(Var_215);
              Var_222 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[70]));
              Var_228 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[72]));
              Var_227 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_228);
              Var_232 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_226 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_277_277, Var_227, Var_232);
              Var_221 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_277_277, Var_222, Var_226);
              Var_213 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_277_277, Var_214, Var_221);
              Pieces_271 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_277_277, Var_209, Var_213);
              Var_236 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_235 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_235, 0) = ((MR_Box) (Pieces_271));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_235));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_236));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "apply"
          ;
          succeeded = (PredFormArityInt_5 >= (MR_Integer) 1);
          if (succeeded)
          {
            *Components_6 = check_hlds__typecheck_error_undef__report_apply_instead_of_pred_0_f_0();
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "else"
          ;
          {
            MR_Word TypeCtorInfo_274_274;
            MR_Word Pieces_11;
            MR_Word Var_64;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_100;
            MR_Word Var_103;
            MR_Word Var_104;

            switch (PredFormArityInt_5) {
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
              TypeCtorInfo_274_274 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_64 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40]));
              Var_70 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[58]));
              Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
              Var_76 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44]));
              Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_76);
              Var_82 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60]));
              Var_81 = parse_tree__error_spec__color_as_hint_1_f_0(Var_82);
              Var_87 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62]));
              Var_93 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[64]));
              Var_92 = parse_tree__error_spec__color_as_hint_1_f_0(Var_93);
              Var_100 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_91 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_92, Var_100);
              Var_86 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_87, Var_91);
              Var_80 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_81, Var_86);
              Var_74 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_75, Var_80);
              Var_68 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_69, Var_74);
              Pieces_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_64, Var_68);
              Var_104 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_103, 0) = ((MR_Box) (Pieces_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_103));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_104));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case "if"
          ;
          {
            MR_Word TypeCtorInfo_275_275;
            MR_Word Var_105;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_133;
            MR_Word Var_140;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Pieces_266;

            switch (PredFormArityInt_5) {
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
              TypeCtorInfo_275_275 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_105 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40]));
              Var_111 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60]));
              Var_110 = parse_tree__error_spec__color_as_subject_1_f_0(Var_111);
              Var_116 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44]));
              Var_122 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[65]));
              Var_121 = parse_tree__error_spec__color_as_hint_1_f_0(Var_122);
              Var_127 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62]));
              Var_133 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[66]));
              Var_132 = parse_tree__error_spec__color_as_hint_1_f_0(Var_133);
              Var_140 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_131 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_132, Var_140);
              Var_126 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_127, Var_131);
              Var_120 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_121, Var_126);
              Var_115 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_116, Var_120);
              Var_109 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_110, Var_115);
              Pieces_266 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_275_275, Var_105, Var_109);
              Var_144 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_143, 0) = ((MR_Box) (Pieces_266));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_143));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_144));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 23:
        {
          // case "then"
          ;
          {
            MR_Word TypeCtorInfo_276_276;
            MR_Word Var_145;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_166;
            MR_Word Var_167;
            MR_Word Var_171;
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Var_180;
            MR_Word Var_206;
            MR_Word MainPieces_267;
            MR_Word MainComponent_268;

            switch (PredFormArityInt_5) {
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
              TypeCtorInfo_276_276 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_145 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40]));
              Var_151 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[65]));
              Var_150 = parse_tree__error_spec__color_as_subject_1_f_0(Var_151);
              Var_156 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44]));
              Var_162 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[60]));
              Var_161 = parse_tree__error_spec__color_as_hint_1_f_0(Var_162);
              Var_167 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[62]));
              Var_173 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[66]));
              Var_172 = parse_tree__error_spec__color_as_hint_1_f_0(Var_173);
              Var_180 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_171 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_172, Var_180);
              Var_166 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_167, Var_171);
              Var_160 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_161, Var_166);
              Var_155 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_156, Var_160);
              Var_149 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_150, Var_155);
              MainPieces_267 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_276_276, Var_145, Var_149);
              {
                MainComponent_268 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainComponent_268, 0) = ((MR_Box) (MainPieces_267));
              }
              Var_206 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[351]));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MainComponent_268));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_206));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 29:
        {
          // case "->"
          ;
          {
            MR_Word TypeCtorInfo_273_273;
            MR_Word MainPieces_7;
            MR_Word MainComponent_8;
            MR_Word Var_12;
            MR_Word Var_16;
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;
            MR_Word Var_36;
            MR_Word Var_62;

            switch (PredFormArityInt_5) {
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
              TypeCtorInfo_273_273 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
              Var_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[40]));
              Var_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[42]));
              Var_17 = parse_tree__error_spec__color_as_subject_1_f_0(Var_18);
              Var_23 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[44]));
              Var_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[46]));
              Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_29);
              Var_36 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15]));
              Var_27 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_273_273, Var_28, Var_36);
              Var_22 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_273_273, Var_23, Var_27);
              Var_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_273_273, Var_17, Var_22);
              MainPieces_7 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_273_273, Var_12, Var_16);
              {
                MainComponent_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainComponent_8, 0) = ((MR_Box) (MainPieces_7));
              }
              Var_62 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[351]));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Components_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MainComponent_8));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_62));
              }
              succeeded = MR_TRUE;
            }
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

static MR_Word MR_CALL 
check_hlds__typecheck_error_undef__report_apply_instead_of_pred_0_f_0(void)
{
  MR_Word Components_2;
  MR_Word MainPieces_3;
  MR_Word MainComponent_4;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_17;
  MR_Word Var_18;

  Var_12 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[86])));
  Var_18 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[90])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_17);
  MainPieces_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[84])), Var_11);
  {
    MainComponent_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MainComponent_4, 0) = ((MR_Box) (MainPieces_3));
  }
  {
    Components_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Components_2, 0) = ((MR_Box) (MainComponent_4));
    MR_hl_field(1, Components_2, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[349])));
  }
  return Components_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_28;

  conv1_LambdaHeadVar__2_28 = check_hlds__typecheck_error_undef__IntroducedFrom__func__arity_error_to_pieces__1282__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_28));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0_1(
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
check_hlds__typecheck_error_undef__report_error_pred_wrong_arity_4_f_0(
  MR_Word ClauseContext_6,
  MR_Word Context_7,
  MR_Word SymNameArity_8,
  MR_Word AllPredFormArities_9)
{
  MR_bool succeeded;
  MR_Word Spec_10;
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, SymNameArity_8, (MR_Integer) 0))));
  MR_Word PredFormArity_12 = ((MR_Word) ((MR_hl_field(0, SymNameArity_8, (MR_Integer) 1))));
  MR_Word MainPieces_15;
  MR_Word SpecialPieces_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_86;
  MR_Integer Arity_92 = (MR_Integer) (PredFormArity_12);
  MR_Word Arities_93;
  MR_Word ActualArityPieces_95;
  MR_Word ExpectedArityPieces_96;
  MR_Word ExpectedAritiesPieces_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_String Var_101;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_String PredName_16;
  MR_String StdLibModuleName_17;

  Arities_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[0]), AllPredFormArities_9);
  Var_21 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_6);
  Var_101 = mercury__string__int_to_string_1_f_0(Arity_92);
  {
    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ActualArityPieces_95 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_99);
  ExpectedArityPieces_96 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_error_undef_scalar_common_4[1]), Arities_93);
  ExpectedAritiesPieces_97 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "or", (MR_Word) ((MR_Unsigned) 0U), ExpectedArityPieces_96);
  Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[343])));
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[210])));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (ActualArityPieces_95));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[345])));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (ExpectedAritiesPieces_97));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[344])));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
  }
  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_113, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[347])));
  Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, Var_112);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_109);
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (SymName_11));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
  }
  Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[34])), Var_42);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])), Var_34);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_30);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[30])), Var_27);
  MainPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_22);
  if (((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(1, SymName_11, (MR_Integer) 0))));

    PredName_16 = ((MR_String) ((MR_hl_field(1, SymName_11, (MR_Integer) 1))));
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleName_18, &StdLibModuleName_17);
    if (succeeded)
      succeeded = (strcmp(StdLibModuleName_17, (MR_String) "getopt_io") == 0);
  }
  else
  {
    PredName_16 = ((MR_String) ((MR_hl_field(0, SymName_11, (MR_Integer) 0))));
    StdLibModuleName_17 = (MR_String) "getopt_io";
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (Arity_92) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 6:
        succeeded = (strcmp(PredName_16, (MR_String) "process_options") == 0);
        break;
      case (MR_Integer) 7:
        succeeded = (strcmp(PredName_16, (MR_String) "process_options") == 0);
        break;
      case (MR_Integer) 9:
        succeeded = (strcmp(PredName_16, (MR_String) "process_options_track") == 0);
        break;
    }
  if (succeeded)
  {
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_String Var_74;

    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (StdLibModuleName_17));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (PredName_16));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[37])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[36])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[35])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    Var_74 = mercury__string__f_43_43_2_f_0(PredName_16, (MR_String) "_io");
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[14])));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_undef_scalar_common_1[38])));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
    }
    Var_68 = parse_tree__error_spec__color_as_hint_1_f_0(Var_69);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_undef_scalar_common_1[15])));
    SpecialPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_67);
  }
  else
    SpecialPieces_19 = (MR_Word) ((MR_Unsigned) 0U);
  Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_15, SpecialPieces_19);
  {
    Spec_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_undef.report_error_pred_wrong_arity\'/4"));
    MR_hl_field(0, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_10, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_10, 4) = ((MR_Box) (Var_86));
  }
  return Spec_10;
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

static MR_bool MR_CALL 
check_hlds__typecheck_error_undef____Unify____undef_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_undef____Unify____undef_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_undef____Compare____undef_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_undef____Compare____undef_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_undef_class_0);
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
