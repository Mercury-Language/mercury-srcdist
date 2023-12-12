/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2023-12-12
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


// :- module check_hlds.typecheck_errors.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_errors__init
ENDINIT
*/

#include "check_hlds.typecheck_errors.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
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
#include "hlds.hlds_out.mih"
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
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s {
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14;
  MR_bool check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded;
  jmp_buf check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_71;
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157;
  MR_Box check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_157;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_errors__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0[1];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_maybe_print_expectation_source_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_print_expectation_source_0[2];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_print_expectation_source_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[4];

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[4];

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0[1];

static const MR_NotagFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0;

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1738__1_2_p_0(
  MR_Integer ActualNumArgTypes_34,
  MR_Integer ExpectedNumArgTypes_35);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1510__1_1_p_0(
  MR_Word LambdaHeadVar__1_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1435__1_1_f_0(
  MR_Word LambdaHeadVar__1_89);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1417__1_1_f_0(
  MR_Word LambdaHeadVar__1_57);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1206__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_n_module_2_p_0(
  MR_Word ModuleSymName_3,
  MR_Word * IntType_4);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_arg_vector_type_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_15,
  MR_Word * STATE_VARIABLE_BuiltinTypes_16);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(
  MR_Word Type_2);

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_8_p_0(
  MR_Word AddQuotes_9,
  MR_Word InstVarSet_10,
  MR_Word StrippedExpType_11,
  MR_Word TypeStuff_12,
  MR_Word STATE_VARIABLE_TypeMismatches_0_37,
  MR_Word * STATE_VARIABLE_TypeMismatches_38,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_39,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_40);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0(
  MR_Word TypeAssign_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10);

static void MR_CALL 
check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Var_8,
  MR_Word ActualExpectedList_9,
  MR_Word * MaybeActualExpected_10,
  MR_Word * ActualExpectedPieces_11,
  MR_Word * DiffPieces_12);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word TypeCtorPieces_8,
  MR_Word ExistQTVars_9,
  MR_Word ActualArgTypes_10,
  MR_Word ExpectedArgTypes_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_list_diff_pieces_loop_6_f_0(
  MR_Word ContextPieces_1,
  MR_Word TypeCtorPieces_2,
  MR_Word ExistQTVars_3,
  MR_Integer CurArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0(
  MR_Word ContextPieces_12,
  MR_Word ExistQTVars_13,
  MR_Word ActualPorF_14,
  MR_Word ExpectedPorF_15,
  MR_Word ActualArgTypes_16,
  MR_Word ExpectedArgTypes_17,
  MR_Word ActualInstInfo_18,
  MR_Word ExpectedInstInfo_19,
  MR_Word ActualPurity_20,
  MR_Word ExpectedPurity_21);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_diff_pieces_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word ExistQTVars_7,
  MR_Word ActualType0_8,
  MR_Word ExpectedType0_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(
  MR_Word ContextPieces_4,
  MR_Word MismatchPieces_5);

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_source_pieces_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__typecheck_errors__is_actual_or_expected_single_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeSingleActual_0_2,
  MR_Word * STATE_VARIABLE_MaybeSingleActual_3,
  MR_Word STATE_VARIABLE_MaybeSingleExpected_0_4,
  MR_Word * STATE_VARIABLE_MaybeSingleExpected_5);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_6(
  void * env_ptr_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(
  MR_Word VarSet_8,
  MR_Word InstVarSet_9,
  MR_Word TypeAssignSet_10,
  MR_Word FinalPieces_11,
  MR_Word HeadVar_12,
  MR_Word TailVars_13);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_func_op_1_p_0(
  MR_Word ConsId_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(
  MR_Word VarSet_1,
  MR_Word Functor_2,
  MR_Word First_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3);

static void MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_types_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_9_p_0(
  MR_Word AddQuotes_1,
  MR_Word InstVarSet_2,
  MR_Word TypeAssignSet_3,
  MR_Integer CurArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_6,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_7,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_8,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_9);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(
  MR_Word InstVarSet_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word ConsDefnList_10,
  MR_Word SuffixPieces_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word Functor_4,
  MR_Integer Arity_5);

static void MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word BuiltinTypes_5);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_2,
  MR_Word * STATE_VARIABLE_BuiltinTypes_3);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_24,
  MR_Word * STATE_VARIABLE_BuiltinTypes_25);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0(
  MR_Word TypeAssignSet_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_10,
  MR_Word * STATE_VARIABLE_BuiltinTypes_11);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(
  MR_Word InstVarSet_6,
  MR_Word TypeAssignSet_7,
  MR_Word SuffixPieces_8,
  MR_Word Var_9);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[219][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[10][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[4][7];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[2][6];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[2][4];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_9[1][11];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_10[1][8];


struct check_hlds__typecheck_errors__vector_common_type_8_0_s {
  const MR_String check_hlds__typecheck_errors__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_8_0_s check_hlds__typecheck_errors_vector_common_8[46];



static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[219][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraint:"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraints:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The foreign language code for"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Another possible reason for the error is that"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the signatures of the option processing predicates"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "option_error_to_string"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which can be converted to a string by calling the"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Errors are now returned in a structured form,"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have changed recently."))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual type is the same as the expected type of"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[36])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are unsigned."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u64"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u32"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u16"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u8"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are signed, and"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i64"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i32"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i16"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i8"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constants of sized integer types should have"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the suffix"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Unsigned integer constants of the default size"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is always of type"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A integer constant that consists only of digits"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that operations on values of type"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are available"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "only if the"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module is imported."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that operations on values of types"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "modules respectively are imported."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[163]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following inferred types:"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was one of"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[49])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type expected by"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "apply_n type constructor"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[172]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the tuple type constructor"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[175]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not allowed for existentially typed arguments."))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[177]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The context requires a specific type, but this is"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch for"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[181]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Predicate vs function mismatch:"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected a"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got a"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity mismatch:"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual type"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode says"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is a"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the expected type"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch:"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type has"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode information says it has"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[201]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 203 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Mode mismatch:"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual and expected modes of the"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "differ."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[206]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Determinism mismatch:"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the expected determinism is"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[213]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[217])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[3])),
    ((MR_Box) (check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[5])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[6])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[9])),
    ((MR_Box) (check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "=")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "Functor")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "Argument")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "}")) },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[10][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
};


static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_8_0_s check_hlds__typecheck_errors_vector_common_8[46] = {
  /* row   0 */   { (MR_String) "+" },
  /* row   1 */   { (MR_String) "-" },
  /* row   2 */   { (MR_String) "\\" },
  /* row   3 */   { (MR_String) "abs" },
  /* row   4 */   { (MR_String) "log2" },
  /* row   5 */   { (MR_String) "nabs" },
  /* row   6 */   { (MR_String) "unchecked_abs" },
  /* row   7 */   { (MR_String) "+" },
  /* row   8 */   { (MR_String) "-" },
  /* row   9 */   { (MR_String) "\\" },
  /* row  10 */   { (MR_String) "abs" },
  /* row  11 */   { (MR_String) "log2" },
  /* row  12 */   { (MR_String) "nabs" },
  /* row  13 */   { (MR_String) "unchecked_abs" },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) ">=" },
  /* row  16 */   { NULL },
  /* row  17 */   { (MR_String) "=<" },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "min" },
  /* row  24 */   { NULL },
  /* row  25 */   { (MR_String) "pow" },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { (MR_String) "log2" },
  /* row  33 */   { (MR_String) "abs" },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "max" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { (MR_String) "<" },
  /* row  44 */   { NULL },
  /* row  45 */   { (MR_String) ">" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_errors__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0 = {
  (MR_String) "arg_vector_type_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_arg_vector_type_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0 };

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "arg_vector_type_error",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_arg_vector_type_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0 = {
  (MR_String) "actual_does_not_subsume_expected",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1 = {
  (MR_String) "actual_subsumes_expected",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_actual_subsume_expected",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_actual_subsume_expected_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_actual_subsume_expected_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_actual_subsume_expected_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0 = {
  (MR_String) "no_type_stuff_matches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1 = {
  (MR_String) "some_type_stuff_matches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "does_some_type_stuff_match",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_does_some_type_stuff_match_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_does_some_type_stuff_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_does_some_type_stuff_match_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_0 = {
  (MR_String) "do_not_print_expectation_source",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_1 = {
  (MR_String) "print_expectation_source",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_maybe_print_expectation_source_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_print_expectation_source_0[2] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_0,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_1
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_print_expectation_source_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_maybe_print_expectation_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "maybe_print_expectation_source",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_name_ordered_maybe_print_expectation_source_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_ordinal_ordered_maybe_print_expectation_source_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_print_expectation_source_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0 = {
  (MR_String) "mismatch_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_mismatch_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0 };

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "mismatch_info",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0 = {
  (MR_String) "spec_and_maybe_actual_expected",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_spec_and_maybe_actual_expected_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0 };

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_spec_and_maybe_actual_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "spec_and_maybe_actual_expected",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_spec_and_maybe_actual_expected_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__maybe__ti_maybe_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0)
};

static const MR_ConstString check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0[4] = {
  (MR_String) "expected_type_desc",
  (MR_String) "actual_type_desc",
  (MR_String) "mismatch_subsumes",
  (MR_String) "maybe_special"
};

static const MR_DuArgLocn check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 = {
  (MR_String) "type_mismatch_exp_act",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_types_type_mismatch_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_names_type_mismatch_0_0,
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__field_locns_type_mismatch_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1] = { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 };

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_mismatch",
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0 },
  { check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0,

};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 = {
  (MR_String) "type_mismatch_special_getopt_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001)),
  (MR_String) "check_hlds.typecheck_errors",
  (MR_String) "type_mismatch_special",
  { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 },
  { &check_hlds__typecheck_errors__check_hlds__typecheck_errors__notag_functor_desc_type_mismatch_special_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0,

};

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1738__1_2_p_0(
  MR_Integer ActualNumArgTypes_34,
  MR_Integer ExpectedNumArgTypes_35)
{
  MR_bool succeeded = (ActualNumArgTypes_34 == ExpectedNumArgTypes_35);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1510__1_1_p_0(
  MR_Word LambdaHeadVar__1_9)
{
  MR_bool succeeded;
  MR_Word MaybeSource_7 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_9, (MR_Integer) 5))));
  MR_Word Source_8;

  succeeded = (MaybeSource_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Source_8 = ((MR_Word) ((MR_hl_field(1, MaybeSource_7, (MR_Integer) 0))));
    succeeded = (Source_8 != (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1435__1_1_f_0(
  MR_Word LambdaHeadVar__1_89)
{
  MR_Word LambdaHeadVar__2_90 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_89, (MR_Integer) 2))));

  return LambdaHeadVar__2_90;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1417__1_1_f_0(
  MR_Word LambdaHeadVar__1_57)
{
  MR_Word LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, (MR_Integer) 0))));

  return LambdaHeadVar__2_58;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1206__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_25)) == (MR_Integer) 1);

  if (succeeded)
    *LambdaHeadVar__2_26 = ((MR_Unsigned) ((MR_hl_field(1, LambdaHeadVar__1_25, (MR_Integer) 0))) & (MR_Integer) 15);
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(
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
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0(
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

    parse_tree__error_spec____Compare____error_spec_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0(
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

    succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        check_hlds__typecheck_errors____Compare____type_mismatch_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0(
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
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0(
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
    MR_Word TypeInfo_14_14;
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
      TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0(
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0(
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
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        check_hlds__typecheck_error_type_assign____Compare____actual_expected_types_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0(
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
  {
    MR_Word TypeInfo_11_11;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = check_hlds__typecheck_error_type_assign____Unify____actual_expected_types_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_n_module_2_p_0(
  MR_Word ModuleSymName_3,
  MR_Word * IntType_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ModuleSymName_3)) == (MR_Integer) 0);
  MR_String ModuleName_5;

  if (succeeded)
  {
    ModuleName_5 = ((MR_String) ((MR_hl_field(0, ModuleSymName_3, (MR_Integer) 0))));
    succeeded = parse_tree__prog_data__int_type_module_name_2_p_1(IntType_4, ModuleName_5);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_arg_vector_type_error_3_p_0(
  MR_Word Error_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_15,
  MR_Word * STATE_VARIABLE_BuiltinTypes_16)
{
  MR_Word ActualExpected_8 = ((MR_Word) ((MR_hl_field(0, Error_4, (MR_Integer) 2))));
  MR_Word ActualType_10 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, (MR_Integer) 1))));
  MR_Word ExpectedType_12 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_BuiltinTypes_17_17;

  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(ActualType_10, STATE_VARIABLE_BuiltinTypes_0_15, &STATE_VARIABLE_BuiltinTypes_17_17);
  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(ExpectedType_12, STATE_VARIABLE_BuiltinTypes_17_17, STATE_VARIABLE_BuiltinTypes_16);
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Type_2)) == (MR_Integer) 2);
  MR_Word BuiltinType_3;
  MR_Word BuiltinTypeInt_4;

  if (succeeded)
  {
    BuiltinType_3 = ((MR_Word) ((MR_hl_field(2, Type_2, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) BuiltinType_3)) == (MR_Integer) 1);
    if (succeeded)
    {
      BuiltinTypeInt_4 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_3, (MR_Integer) 0))) & (MR_Integer) 15);
      succeeded = (BuiltinTypeInt_4 != (MR_Integer) 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors__substitute_types_check_match_8_p_0(
  MR_Word AddQuotes_9,
  MR_Word InstVarSet_10,
  MR_Word StrippedExpType_11,
  MR_Word TypeStuff_12,
  MR_Word STATE_VARIABLE_TypeMismatches_0_37,
  MR_Word * STATE_VARIABLE_TypeMismatches_38,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_39,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_40)
{
  MR_bool succeeded;
  MR_Word ArgType_15 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, (MR_Integer) 0))));
  MR_Word TVarSet_16 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, (MR_Integer) 1))));
  MR_Word TypeBindings_17 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, (MR_Integer) 2))));
  MR_Word ExistQTVars_18 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, (MR_Integer) 3))));
  MR_Word StrippedArgType_19;
  MR_Word FullArgType_20;
  MR_Word FullExpType_21;

  parse_tree__prog_type__strip_module_names_from_type_3_p_0((MR_Integer) 0, ArgType_15, &StrippedArgType_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedArgType_19, &FullArgType_20);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedExpType_11, &FullExpType_21);
  succeeded = check_hlds__typecheck_error_util__identical_types_2_p_0(FullArgType_20, FullExpType_21);
  if (!(succeeded))
  {
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;

    succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
      Var_44 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
      succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
          succeeded = (strcmp(Var_43, (MR_String) "<any>") == 0);
        }
      }
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_DoesSomeTypeStuffMatch_40 = (MR_Integer) 1;
    *STATE_VARIABLE_TypeMismatches_38 = STATE_VARIABLE_TypeMismatches_0_37;
  }
  else
  {
    MR_Word ActualSubsumesExpected_24;
    MR_Word ExpectedPieces0_25;
    MR_Word ActualPieces0_26;
    MR_Word ExpectedPieces_27;
    MR_Word ActualPieces_28;
    MR_Word MaybeSpecial_35;
    MR_Word TypeMismatch_36;
    MR_Word _Subst_23;
    MR_String StdLibModuleName_33;
    MR_Word ArgTypeCtorSymName_29;
    MR_Word ArgTypeModuleName_31;
    MR_String ArgTypeName_32;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

    succeeded = parse_tree__prog_type_unify__type_subsumes_3_p_0(FullArgType_20, FullExpType_21, &_Subst_23);
    if (succeeded)
      ActualSubsumesExpected_24 = (MR_Integer) 1;
    else
      ActualSubsumesExpected_24 = (MR_Integer) 0;
    ExpectedPieces0_25 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 0, AddQuotes_9, ExistQTVars_18, FullExpType_21);
    ActualPieces0_26 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 0, AddQuotes_9, ExistQTVars_18, FullArgType_20);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ((MR_Box) (ExpectedPieces0_25)), ((MR_Box) (ActualPieces0_26)));
    if (succeeded)
    {
      ExpectedPieces_27 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 1, AddQuotes_9, ExistQTVars_18, FullExpType_21);
      ActualPieces_28 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 1, AddQuotes_9, ExistQTVars_18, FullArgType_20);
    }
    else
    {
      ExpectedPieces_27 = ExpectedPieces0_25;
      ActualPieces_28 = ActualPieces0_26;
    }
    succeeded = ((MR_tag((MR_Word) FullExpType_21)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_50 = ((MR_Word) ((MR_hl_field(2, FullExpType_21, (MR_Integer) 0))));
      succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgTypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
          Var_51 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
          Var_53 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 2))));
          succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
              succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ArgTypeCtorSymName_29)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgTypeModuleName_31 = ((MR_Word) ((MR_hl_field(1, ArgTypeCtorSymName_29, (MR_Integer) 0))));
                  ArgTypeName_32 = ((MR_String) ((MR_hl_field(1, ArgTypeCtorSymName_29, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgTypeName_32, (MR_String) "option_error") == 0);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ArgTypeModuleName_31, &StdLibModuleName_33);
                    if (succeeded)
                    {
                      if ((strcmp(StdLibModuleName_33, (MR_String) "getopt") == 0))
                        succeeded = MR_TRUE;
                      else
                      if ((strcmp(StdLibModuleName_33, (MR_String) "getopt_io") == 0))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Special_34 = (MR_Word) (StdLibModuleName_33);

      {
        MaybeSpecial_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeSpecial_35, 0) = ((MR_Box) (Special_34));
      }
    }
    else
      MaybeSpecial_35 = (MR_Word) ((MR_Unsigned) 0U);
    {
      TypeMismatch_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeMismatch_36, 0) = ((MR_Box) (ExpectedPieces_27));
      MR_hl_field(0, TypeMismatch_36, 1) = ((MR_Box) (ActualPieces_28));
      MR_hl_field(0, TypeMismatch_36, 2) = (MR_Box) ((MR_Unsigned) (ActualSubsumesExpected_24));
      MR_hl_field(0, TypeMismatch_36, 3) = ((MR_Box) (MaybeSpecial_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeMismatches_38 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeMismatch_36));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeMismatches_0_37));
    }
    *STATE_VARIABLE_DoesSomeTypeStuffMatch_40 = STATE_VARIABLE_DoesSomeTypeStuffMatch_0_39;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_quote_1_f_0(
  MR_String Str_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Str_3));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = check_hlds__typecheck_errors__wrap_quote_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0(
  MR_Word TypeAssign_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_24_24;
  MR_Word TypeCtorInfo_25_25;
  MR_Word TypeCtorInfo_28_28;
  MR_Integer NumUnproven_4;
  MR_Word Pieces_5;
  MR_Word Constraints_6;
  MR_Word UnprovenConstraints_7;
  MR_Word UnprovenProgConstraints0_10;
  MR_Word TVarSet_11;
  MR_Word Bindings_12;
  MR_Word UnprovenProgConstraints1_13;
  MR_Word UnprovenProgConstraints_14;
  MR_Word UnprovenProgConstraintStrings_15;
  MR_Word UnprovenProgConstraintsPieces_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_String Var_20;

  check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_3, &Constraints_6);
  UnprovenConstraints_7 = ((MR_Word) ((MR_hl_field(0, Constraints_6, (MR_Integer) 0))));
  succeeded = (UnprovenConstraints_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    hlds__hlds_class__retrieve_prog_constraint_list_2_p_0(UnprovenConstraints_7, &UnprovenProgConstraints0_10);
    check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_3, &TVarSet_11);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_3, &Bindings_12);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Bindings_12, UnprovenProgConstraints0_10, &UnprovenProgConstraints1_13);
    TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_24_24, UnprovenProgConstraints1_13, &UnprovenProgConstraints_14);
    mercury__list__length_2_p_0(TypeCtorInfo_24_24, UnprovenProgConstraints_14, &NumUnproven_4);
    TypeCtorInfo_25_25 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    Var_18 = (MR_Integer) 0;
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (TVarSet_11));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (Var_18));
    }
    UnprovenProgConstraintStrings_15 = mercury__list__map_2_f_0(TypeCtorInfo_24_24, TypeCtorInfo_25_25, Var_17, UnprovenProgConstraints_14);
    TypeCtorInfo_28_28 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
    Var_19 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[17]);
    UnprovenProgConstraintsPieces_16 = mercury__list__map_2_f_0(TypeCtorInfo_25_25, TypeCtorInfo_28_28, Var_19, UnprovenProgConstraintStrings_15);
    Var_20 = (MR_String) "and";
    Pieces_5 = parse_tree__error_spec__component_list_to_pieces_2_f_0(Var_20, UnprovenProgConstraintsPieces_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NumUnproven_4));
      MR_hl_field(0, base, 1) = ((MR_Box) (Pieces_5));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BuiltinTypes_16;

  check_hlds__typecheck_errors__acc_builtin_types_of_arg_vector_type_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BuiltinTypes_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BuiltinTypes_16));
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(
  MR_Word Info_7,
  MR_Word Context_8,
  MR_Word ArgVectorKind_9,
  MR_Word TypeAssignSet_10,
  MR_Word ArgVectorTypeErrors0_11)
{
  MR_bool succeeded;
  MR_Word Spec_12;
  MR_Word TypeCtorInfo_65_65;
  MR_Word ClauseContext_13;
  MR_Word InClauseForPieces_14;
  MR_Word ArgVectorTypeErrors_15;
  MR_Word ArgVectorKindPieces_16;
  MR_Word VarSet_17;
  MR_Word HeadArgVectorTypeErrors_18;
  MR_Word TailArgVectorTypeErrors_19;
  MR_Word ArgErrorPieces_20;
  MR_Word InvisIntPieces_28;
  MR_Word VerboseComponent_29;
  MR_Word Msg_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word SymName_22;
  MR_Word PredFormArity_23;
  MR_String Name_66;
  MR_Integer Arity_67;
  MR_Integer slot_0;
  MR_String str_1;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_7, &ClauseContext_13);
  InClauseForPieces_14 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_13);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0), ArgVectorTypeErrors0_11, &ArgVectorTypeErrors_15);
  ArgVectorKindPieces_16 = check_hlds__typecheck_error_util__arg_vector_kind_to_pieces_2_f_0(ClauseContext_13, ArgVectorKind_9);
  VarSet_17 = ((MR_Word) ((MR_hl_field(0, ClauseContext_13, (MR_Integer) 5))));
  if ((ArgVectorTypeErrors_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_error_wrong_types_in_arg_vector\'/5", (MR_String) "ArgVectorTypeErrors = []");
  else
  {
    HeadArgVectorTypeErrors_18 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, (MR_Integer) 0))));
    TailArgVectorTypeErrors_19 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, (MR_Integer) 1))));
  }
  check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_17, ArgVectorTypeErrors_15, HeadArgVectorTypeErrors_18, TailArgVectorTypeErrors_19, &ArgErrorPieces_20);
  if (((MR_tag((MR_Word) ArgVectorKind_9)) == (MR_Integer) 1))
  {
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(1, ArgVectorKind_9, (MR_Integer) 0))));
    MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, ClauseContext_13, (MR_Integer) 0))));
    MR_Word PredInfo_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_25, PredId_24, &PredInfo_26);
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_26, &SymName_22);
    PredFormArity_23 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_26);
    succeeded = MR_TRUE;
  }
  else
  if (((MR_tag((MR_Word) ArgVectorKind_9)) == (MR_Integer) 2))
  {
    MR_Word SymNamePredFormArity_21 = ((MR_Word) ((MR_hl_field(2, ArgVectorKind_9, (MR_Integer) 0))));

    SymName_22 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_21, (MR_Integer) 0))));
    PredFormArity_23 = ((MR_Word) ((MR_hl_field(0, SymNamePredFormArity_21, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    Name_66 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_22);
    Arity_67 = (MR_Integer) (PredFormArity_23);
    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    slot_0 = ((MR_hash_string4(Name_66)) & (MR_Integer) 31);
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    str_1 = ((&check_hlds__typecheck_errors_vector_common_8[14 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_8_0__vct_8_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, Name_66) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            // case ">="
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 3:
          {
            // case "=<"
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 9:
          {
            // case "min"
            ;
            succeeded = (Arity_67 == (MR_Integer) 3);
          }
          break;
        case (MR_Integer) 11:
          {
            // case "pow"
            ;
            succeeded = (Arity_67 == (MR_Integer) 3);
          }
          break;
        case (MR_Integer) 18:
          {
            // case "log2"
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 19:
          {
            // case "abs"
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 23:
          {
            // case "max"
            ;
            succeeded = (Arity_67 == (MR_Integer) 3);
          }
          break;
        case (MR_Integer) 29:
          {
            // case "<"
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 31:
          {
            // case ">"
            ;
            succeeded = (Arity_67 == (MR_Integer) 2);
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
  if (succeeded)
  {
    MR_Word BuiltinTypes_27;
    MR_Word Var_34;
    MR_Box conv1_BuiltinTypes_27;

    Var_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[16]), ArgVectorTypeErrors_15, ((MR_Box) (Var_34)), &conv1_BuiltinTypes_27);
    BuiltinTypes_27 = ((MR_Word) (conv1_BuiltinTypes_27));
    InvisIntPieces_28 = check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(ClauseContext_13, BuiltinTypes_27);
  }
  else
    InvisIntPieces_28 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_7, VarSet_17, TypeAssignSet_10, &VerboseComponent_29);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (InClauseForPieces_14));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (ArgVectorKindPieces_16));
  }
  TypeCtorInfo_65_65 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
  Var_41 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_65_65, ArgErrorPieces_20, InvisIntPieces_28);
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (Var_41));
  }
  Var_43 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (VerboseComponent_29));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Msg_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_30, 0) = ((MR_Box) (Context_8));
    MR_hl_field(2, Msg_30, 1) = ((MR_Box) (Var_35));
  }
  Var_44 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_wrong_types_in_arg_vector\'/5";
  Var_45 = (MR_Word) ((MR_Unsigned) 0U);
  Var_46 = (MR_Word) ((MR_Unsigned) 52U);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Msg_30));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_43));
  }
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Var_47));
  }
  return Spec_12;
}

static void MR_CALL 
check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(
  MR_Word VarSet_6,
  MR_Word AllErrors_7,
  MR_Word HeadError_8,
  MR_Word TailErrors_9,
  MR_Word * Pieces_10)
{
  MR_Word SuffixPiece_11;
  MR_Word TailPieces_12;
  MR_Integer ArgNum_15;
  MR_Word Var_16;
  MR_Word ActualExpected_17;
  MR_Word ActualPieces_18;
  MR_Word ExpectedPieces_20;
  MR_Word NlSwitchedPosSuffixPieces_25;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word SwitchedPosPieces_83;

  if ((TailErrors_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]));
    TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 0))));
    MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 1))));

    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[86]));
    check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_6, AllErrors_7, HeadTailError_13, TailTailErrors_14, &TailPieces_12);
  }
  ArgNum_15 = ((MR_Integer) ((MR_hl_field(0, HeadError_8, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, HeadError_8, (MR_Integer) 1))));
  ActualExpected_17 = ((MR_Word) ((MR_hl_field(0, HeadError_8, (MR_Integer) 2))));
  ActualPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, (MR_Integer) 0))));
  ExpectedPieces_20 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, (MR_Integer) 2))));
  check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(VarSet_6, ActualPieces_18, AllErrors_7, &SwitchedPosPieces_83);
  if ((SwitchedPosPieces_83 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NlSwitchedPosSuffixPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 0) = ((MR_Box) (SuffixPiece_11));
      MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
    }
  else
  {
    MR_Word Var_87;
    MR_Word SwitchedPosPieces_95;

    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_83, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[47])));
    SwitchedPosPieces_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])), Var_87);
    if ((SwitchedPosPieces_95 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NlSwitchedPosSuffixPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
      }
    else
    {
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_95, Var_39);
      NlSwitchedPosSuffixPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])), Var_38);
    }
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (ArgNum_15));
  }
  Var_52 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_6, Var_16);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[48])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[41])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[87])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[52])));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (TailPieces_12));
  }
  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NlSwitchedPosSuffixPieces_25, Var_78);
  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_20, Var_77);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[89])), Var_76);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_18, Var_62);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_61);
  *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_53);
}

static void MR_CALL 
check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadError_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailErrors_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TailSwitchedPosPieces_12;
    MR_Integer ArgNum_13;
    MR_Word Var_14;
    MR_Word ActualExpected_15;
    MR_Word ExpectedPieces_18;

    check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(HeadVar__1_1, HeadVar__2_2, TailErrors_10, &TailSwitchedPosPieces_12);
    ArgNum_13 = ((MR_Integer) ((MR_hl_field(0, HeadError_9, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, HeadError_9, (MR_Integer) 1))));
    ActualExpected_15 = ((MR_Word) ((MR_hl_field(0, HeadError_9, (MR_Integer) 2))));
    ExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_15, (MR_Integer) 2))));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ExpectedPieces_18)));
    if (succeeded)
    {
      MR_Word HeadSwitchedPosPieces_23;
      MR_String Var_22;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14, &Var_22);
      if (succeeded)
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_String Var_39;

        {
          Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_30, 1) = ((MR_Box) (ArgNum_13));
        }
        Var_39 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_14);
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[94])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_29));
        }
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (ArgNum_13));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_43));
        }
      }
      if ((TailSwitchedPosPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadSwitchedPosPieces_23;
      else
      {
        MR_Word Var_52;

        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[95])), TailSwitchedPosPieces_12);
        *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadSwitchedPosPieces_23, Var_52);
      }
    }
    else
      *HeadVar__4_4 = TailSwitchedPosPieces_12;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__typecheck_error_type_assign__arg_type_stuff_to_actual_expected_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0(
  MR_Word Info_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Integer ArgNum_11,
  MR_Word Var_12,
  MR_Word ArgTypeAssignSet_13)
{
  MR_Word Spec_14;
  MR_Word ClauseContext_15;
  MR_Word InClauseForPieces_16;
  MR_Word GoalContextPieces_17;
  MR_Word InstVarSet_18;
  MR_Word ArgTypeStuffList_19;
  MR_Word ActualExpectedList0_20;
  MR_Word ActualExpectedList_21;
  MR_Word ActualExpectedPieces_23;
  MR_Word DiffPieces_24;
  MR_Word VarSet_25;
  MR_Word VerboseComponent_26;
  MR_Word Msg_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word _MaybeActualExpected_22;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  GoalContextPieces_17 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
  check_hlds__typecheck_error_type_assign__get_arg_type_stuffs_4_p_0(ArgNum_11, Var_12, ArgTypeAssignSet_13, &ArgTypeStuffList_19);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (InstVarSet_18));
  }
  ActualExpectedList0_20 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_28, ArgTypeStuffList_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_20, &ActualExpectedList_21);
  check_hlds__typecheck_errors__report_actual_expected_types_6_p_0(ClauseContext_15, Var_12, ActualExpectedList_21, &_MaybeActualExpected_22, &ActualExpectedPieces_23, &DiffPieces_24);
  VarSet_25 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 5))));
  check_hlds__typecheck_error_type_assign__arg_type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_25, ArgTypeAssignSet_13, &VerboseComponent_26);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (GoalContextPieces_17));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (ActualExpectedPieces_23));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (DiffPieces_24));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (VerboseComponent_26));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Msg_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_27, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Msg_27));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type_arg\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_43));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  conv0_HeadVar__5_5 = check_hlds__typecheck_error_type_assign__type_stuff_to_actual_expected_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(
  MR_Word Info_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet_13)
{
  MR_bool succeeded;
  MR_Word SpecAndMaybeActualExpected_14;
  MR_Word ClauseContext_15;
  MR_Word InClauseForPieces_16;
  MR_Word GoalContextPieces_17;
  MR_Word InstVarSet_18;
  MR_Word ActualExpectedList0_19;
  MR_Word ActualExpectedList_20;
  MR_Word MaybeActualExpected_21;
  MR_Word ActualExpectedPieces_22;
  MR_Word DiffPieces_23;
  MR_Word SetOfNoSuffixIntegerVars_24;
  MR_Word NoSuffixIntegerPieces_25;
  MR_Word VarSet_26;
  MR_Word VerboseComponent_27;
  MR_Word Msg_28;
  MR_Word Spec_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word BuiltinType_58;
  MR_Word BuiltinTypeInt_59;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  GoalContextPieces_17 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_10[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (Type_12));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_30, TypeAssignSet_13, Var_11, &ActualExpectedList0_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_19, &ActualExpectedList_20);
  check_hlds__typecheck_errors__report_actual_expected_types_6_p_0(ClauseContext_15, Var_11, ActualExpectedList_20, &MaybeActualExpected_21, &ActualExpectedPieces_22, &DiffPieces_23);
  check_hlds__typecheck_info__typecheck_info_get_nosuffix_integer_vars_2_p_0(Info_8, &SetOfNoSuffixIntegerVars_24);
  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), SetOfNoSuffixIntegerVars_24, ((MR_Box) (Var_11)));
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Type_12)) == (MR_Integer) 2);
    if (succeeded)
    {
      BuiltinType_58 = ((MR_Word) ((MR_hl_field(2, Type_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) BuiltinType_58)) == (MR_Integer) 1);
      if (succeeded)
      {
        BuiltinTypeInt_59 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_58, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (BuiltinTypeInt_59 != (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_25 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[143]));
  else
    NoSuffixIntegerPieces_25 = (MR_Word) ((MR_Unsigned) 0U);
  VarSet_26 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 5))));
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_26, TypeAssignSet_13, &VerboseComponent_27);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (GoalContextPieces_17));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (ActualExpectedPieces_22));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (DiffPieces_23));
  }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (NoSuffixIntegerPieces_25));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (VerboseComponent_27));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Msg_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_28, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_28, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Msg_28));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type\'/6"));
    MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Var_47));
  }
  {
    SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_29));
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_21));
  }
  return SpecAndMaybeActualExpected_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_90;

  conv1_LambdaHeadVar__2_90 = check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1435__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_90));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1510__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_58;

  conv0_LambdaHeadVar__2_58 = check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1417__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_58));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Var_8,
  MR_Word ActualExpectedList_9,
  MR_Word * MaybeActualExpected_10,
  MR_Word * ActualExpectedPieces_11,
  MR_Word * DiffPieces_12)
{
  MR_bool succeeded;
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, (MR_Integer) 5))));
  MR_Word TypeErrorPieces_14;
  MR_Word MaybeSingleActual_15;
  MR_Word MaybeSingleExpected_16;
  MR_Word ActualPartPieces_18;
  MR_Word ExpectedPartPieces_23;
  MR_Word Var_40;
  MR_Word Var_105;
  MR_Word ActualExpected_29;
  MR_Word Var_106;

  Var_40 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_13, Var_8);
  TypeErrorPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[164])), Var_40);
  if ((ActualExpectedList_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeSingleActual_15 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeSingleExpected_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word AE_135 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 0))));
    MR_Word AEs_136 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 1))));
    MR_Word ActualPieces_139 = ((MR_Word) ((MR_hl_field(0, AE_135, (MR_Integer) 0))));
    MR_Word ExpectedPieces_141 = ((MR_Word) ((MR_hl_field(0, AE_135, (MR_Integer) 2))));
    MR_Word Var_145;
    MR_Word Var_146;

    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (ActualPieces_139));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) (ExpectedPieces_141));
    }
    check_hlds__typecheck_errors__is_actual_or_expected_single_type_loop_5_p_0(AEs_136, Var_145, &MaybeSingleActual_15, Var_146, &MaybeSingleExpected_16);
  }
  if ((MaybeSingleActual_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ActualPieceLists_19;
    MR_Word ActualPieces_21;

    ActualPieceLists_19 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[13]), ActualExpectedList_9);
    ActualPieces_21 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(ActualPieceLists_19, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[165])));
    ActualPartPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[167])), ActualPieces_21);
  }
  else
  {
    MR_Word SingleActualPieces_17 = ((MR_Word) ((MR_hl_field(1, MaybeSingleActual_15, (MR_Integer) 0))));
    MR_Word Var_48;

    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleActualPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[165])));
    ActualPartPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_48);
  }
  if ((MaybeSingleExpected_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[14]), ActualExpectedList_9);
    if (succeeded)
    {
      MR_Word ModuleInfo_27 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, (MR_Integer) 0))));
      MR_Word Var_28;

      check_hlds__typecheck_errors__acc_expected_type_source_pieces_4_p_0(ModuleInfo_27, ActualExpectedList_9, &Var_28, &ExpectedPartPieces_23);
    }
    else
    {
      MR_Word ExpectedPieceLists_25;
      MR_Word ExpectedPieces_26;

      ExpectedPieceLists_25 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[15]), ActualExpectedList_9);
      ExpectedPieces_26 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(ExpectedPieceLists_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])));
      ExpectedPartPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[169])), ExpectedPieces_26);
    }
  }
  else
  {
    MR_Word SingleExpectedPieces_22 = ((MR_Word) ((MR_hl_field(1, MaybeSingleExpected_16, (MR_Integer) 0))));
    MR_Word Var_80;

    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleExpectedPieces_22, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])));
    ExpectedPartPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), Var_80);
  }
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPartPieces_18, ExpectedPartPieces_23);
  *ActualExpectedPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeErrorPieces_14, Var_105);
  succeeded = (ActualExpectedList_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpected_29 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 0))));
    Var_106 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 1))));
    succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ActualType_31;
    MR_Word ExpectedType_33;
    MR_Word ExistQTVars_34;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeActualExpected_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ActualExpected_29));
    }
    ActualType_31 = ((MR_Word) ((MR_hl_field(0, ActualExpected_29, (MR_Integer) 1))));
    ExpectedType_33 = ((MR_Word) ((MR_hl_field(0, ActualExpected_29, (MR_Integer) 3))));
    ExistQTVars_34 = ((MR_Word) ((MR_hl_field(0, ActualExpected_29, (MR_Integer) 4))));
    *DiffPieces_12 = check_hlds__typecheck_errors__type_diff_pieces_4_f_0((MR_Word) ((MR_Unsigned) 0U), ExistQTVars_34, ActualType_31, ExpectedType_33);
  }
  else
  {
    *MaybeActualExpected_10 = (MR_Word) ((MR_Unsigned) 0U);
    *DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(
  MR_Word ContextPieces_7,
  MR_Word TypeCtorPieces_8,
  MR_Word ExistQTVars_9,
  MR_Word ActualArgTypes_10,
  MR_Word ExpectedArgTypes_11)
{
  MR_bool succeeded;
  MR_Word DiffPieces_12;
  MR_Integer ActualNumArgs_13;
  MR_Integer ExpectedNumArgs_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_10, &ActualNumArgs_13);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExpectedArgTypes_11, &ExpectedNumArgs_14);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ActualArgTypes_10)), ((MR_Box) (ExpectedArgTypes_11)));
  if (succeeded)
    DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = (ActualNumArgs_13 == ExpectedNumArgs_14);
    if (succeeded)
      DiffPieces_12 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_loop_6_f_0(ContextPieces_7, TypeCtorPieces_8, ExistQTVars_9, (MR_Integer) 1, ActualArgTypes_10, ExpectedArgTypes_11);
    else
    {
      MR_Word Var_16;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;

      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (ExpectedNumArgs_14));
      }
      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (ActualNumArgs_13));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[185])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[184])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[183])));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[41])));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
      }
      Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_8, Var_22);
      Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[182])), Var_21);
      DiffPieces_12 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_7, Var_16);
    }
  }
  return DiffPieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__arg_type_list_diff_pieces_loop_6_f_0(
  MR_Word ContextPieces_1,
  MR_Word TypeCtorPieces_2,
  MR_Word ExistQTVars_3,
  MR_Integer CurArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__7_7;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_type_list_diff_pieces_loop\'/6", (MR_String) "list length misnatch");
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_type_list_diff_pieces_loop\'/6", (MR_String) "list length misnatch");
    else
    {
      MR_Word ExpectedArgType_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word ExpectedArgTypes_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word TailDiffPieces_39;
      MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);

      TailDiffPieces_39 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_loop_6_f_0(ContextPieces_1, TypeCtorPieces_2, ExistQTVars_3, Var_42, Var_66, ExpectedArgTypes_37);
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_67, ExpectedArgType_36);
      if (succeeded)
        HeadVar__7_7 = TailDiffPieces_39;
      else
      {
        MR_Word ArgContextPieces_40;
        MR_Word HeadDiffPieces_41;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_58;

        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (ContextPieces_1));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (CurArgNum_4));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[214])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[212])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_2, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[215])));
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_58);
        ArgContextPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_46);
        HeadDiffPieces_41 = check_hlds__typecheck_errors__type_diff_pieces_4_f_0(ArgContextPieces_40, ExistQTVars_3, Var_67, ExpectedArgType_36);
        HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadDiffPieces_41, TailDiffPieces_39);
      }
    }
  }
  return HeadVar__7_7;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1738__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0(
  MR_Word ContextPieces_12,
  MR_Word ExistQTVars_13,
  MR_Word ActualPorF_14,
  MR_Word ExpectedPorF_15,
  MR_Word ActualArgTypes_16,
  MR_Word ExpectedArgTypes_17,
  MR_Word ActualInstInfo_18,
  MR_Word ExpectedInstInfo_19,
  MR_Word ActualPurity_20,
  MR_Word ExpectedPurity_21)
{
  MR_bool succeeded = (ActualPorF_14 == ExpectedPorF_15);
  MR_Word STATE_VARIABLE_DiffPieces_44;
  MR_Word STATE_VARIABLE_DiffPieces_46_46;
  MR_Word STATE_VARIABLE_DiffPieces_68_68;
  MR_Word STATE_VARIABLE_DiffPieces_101_101;

  if (succeeded)
    STATE_VARIABLE_DiffPieces_46_46 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_63;

    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_63, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[188])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[187])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    Var_47 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_48);
    STATE_VARIABLE_DiffPieces_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_47);
  }
  succeeded = (ActualPurity_20 == ExpectedPurity_21);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_68_68 = STATE_VARIABLE_DiffPieces_46_46;
  else
  {
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 30U));
      MR_hl_field(3, Var_77, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPurity_21));
    }
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_79, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 30U));
      MR_hl_field(3, Var_87, 1) = (MR_Box) ((MR_Unsigned) (ActualPurity_20));
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_89, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[185])));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[183])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[189])));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    Var_69 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_70);
    STATE_VARIABLE_DiffPieces_68_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_46_46, Var_69);
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ActualArgTypes_16)), ((MR_Box) (ExpectedArgTypes_17)));
  if (succeeded)
    STATE_VARIABLE_DiffPieces_101_101 = STATE_VARIABLE_DiffPieces_68_68;
  else
  {
    MR_Word TypeCtorPieces_23;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_102;

    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_99, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[190])));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
    }
    {
      TypeCtorPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeCtorPieces_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, TypeCtorPieces_23, 1) = ((MR_Box) (Var_95));
    }
    Var_102 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_12, TypeCtorPieces_23, ExistQTVars_13, ActualArgTypes_16, ExpectedArgTypes_17);
    STATE_VARIABLE_DiffPieces_101_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_68_68, Var_102);
  }
  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(ActualInstInfo_18, ExpectedInstInfo_19);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_44 = STATE_VARIABLE_DiffPieces_101_101;
  else
  {
    MR_Word ActualPredInstInfo_24;
    MR_Word ExpectedPredInstInfo_25;

    succeeded = (ActualInstInfo_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualPredInstInfo_24 = (MR_Word) (MR_body((MR_Word) (ActualInstInfo_18), (MR_Integer) 1));
      succeeded = (ExpectedInstInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ExpectedPredInstInfo_25 = (MR_Word) (MR_body((MR_Word) (ExpectedInstInfo_19), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word ActualHOPorF_26 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_24, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ActualArgModes_27 = ((MR_Word) ((MR_hl_field(0, ActualPredInstInfo_24, (MR_Integer) 1))));
      MR_Word ActualDetism_29 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_24, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Word ExpectedHOPorF_30 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_25, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ExpectedArgModes_31 = ((MR_Word) ((MR_hl_field(0, ExpectedPredInstInfo_25, (MR_Integer) 1))));
      MR_Word ExpectedDetism_33 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_25, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Integer ActualNumArgTypes_34;
      MR_Integer ExpectedNumArgTypes_35;
      MR_Integer ActualNumArgModes_36;
      MR_Integer ExpectedNumArgModes_37;
      MR_Word Var_103;
      MR_Word STATE_VARIABLE_DiffPieces_106_106;
      MR_Word STATE_VARIABLE_DiffPieces_134_134;
      MR_Word STATE_VARIABLE_DiffPieces_162_162;
      MR_Word STATE_VARIABLE_DiffPieces_192_192;
      MR_Word STATE_VARIABLE_DiffPieces_222_222;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_16, &ActualNumArgTypes_34);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExpectedArgTypes_17, &ExpectedNumArgTypes_35);
      {
        Var_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_103, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[7]));
        MR_hl_field(0, Var_103, 1) = ((MR_Box) (check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0_1));
        MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_103, 3) = ((MR_Box) (ActualNumArgTypes_34));
        MR_hl_field(0, Var_103, 4) = ((MR_Box) (ExpectedNumArgTypes_35));
      }
      mercury__require__expect_3_p_0(Var_103, (MR_String) "function \140check_hlds.typecheck_errors.higher_order_diff_pieces\'/10", (MR_String) "ActualNumArgTypes != ExpectedNumArgTypes");
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ActualArgModes_27, &ActualNumArgModes_36);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExpectedArgModes_31, &ExpectedNumArgModes_37);
      succeeded = (ActualHOPorF_26 == ActualPorF_14);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_106_106 = STATE_VARIABLE_DiffPieces_101_101;
      else
      {
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_111;
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_125;
        MR_Word Var_128;
        MR_Word Var_129;

        {
          Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_118, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_129, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_26));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[194])));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[193])));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[192])));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[191])));
          MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186])));
          MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
        }
        Var_107 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_108);
        STATE_VARIABLE_DiffPieces_106_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_101_101, Var_107);
      }
      succeeded = (ExpectedHOPorF_30 == ExpectedPorF_15);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_134_134 = STATE_VARIABLE_DiffPieces_106_106;
      else
      {
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_139;
        MR_Word Var_142;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_150;
        MR_Word Var_153;
        MR_Word Var_156;
        MR_Word Var_157;

        {
          Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_146, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_157, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_26));
        }
        {
          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
          MR_hl_field(1, Var_156, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
        }
        {
          Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_153, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[194])));
          MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_156));
        }
        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[193])));
          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[192])));
          MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[195])));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186])));
          MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
        }
        Var_135 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_136);
        STATE_VARIABLE_DiffPieces_134_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_106_106, Var_135);
      }
      succeeded = (ActualNumArgTypes_34 == ActualNumArgModes_36);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_162_162 = STATE_VARIABLE_DiffPieces_134_134;
      else
      {
        MR_Integer ActualTypeArity_38;
        MR_Integer ActualModeArity_39;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_167;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_180;
        MR_Word Var_183;
        MR_Word Var_186;
        MR_Word Var_187;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualTypeArity_38, ActualNumArgTypes_34);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualModeArity_39, ActualNumArgModes_36);
        {
          Var_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_171, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_171, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_176, 1) = ((MR_Box) (ActualTypeArity_38));
        }
        {
          Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_187, 1) = ((MR_Box) (ActualModeArity_39));
        }
        {
          Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
          MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[202])));
        }
        {
          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_183, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
          MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_180, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_183));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[199])));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_180));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_177));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[198])));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_167));
        }
        Var_163 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_164);
        STATE_VARIABLE_DiffPieces_162_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_134_134, Var_163);
      }
      succeeded = (ExpectedNumArgTypes_35 == ExpectedNumArgModes_37);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_192_192 = STATE_VARIABLE_DiffPieces_162_162;
      else
      {
        MR_Integer ExpectedTypeArity_40;
        MR_Integer ExpectedModeArity_41;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_197;
        MR_Word Var_200;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_210;
        MR_Word Var_213;
        MR_Word Var_216;
        MR_Word Var_217;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedTypeArity_40, ExpectedNumArgTypes_35);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedModeArity_41, ExpectedNumArgModes_37);
        {
          Var_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_201, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_201, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
        }
        {
          Var_206 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_206, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_206, 1) = ((MR_Box) (ExpectedTypeArity_40));
        }
        {
          Var_217 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_217, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_217, 1) = ((MR_Box) (ExpectedModeArity_41));
        }
        {
          Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_216, 0) = ((MR_Box) (Var_217));
          MR_hl_field(1, Var_216, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[202])));
        }
        {
          Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_213, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
          MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_216));
        }
        {
          Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_210, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_213));
        }
        {
          Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_207, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[199])));
          MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_207));
        }
        {
          Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_202, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[198])));
          MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_205));
        }
        {
          Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
          MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_197, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
          MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_194, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
          MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_197));
        }
        Var_193 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_194);
        STATE_VARIABLE_DiffPieces_192_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_162_162, Var_193);
      }
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[203]), ((MR_Box) (ActualArgModes_27)), ((MR_Box) (ExpectedArgModes_31)));
      if (succeeded)
        STATE_VARIABLE_DiffPieces_222_222 = STATE_VARIABLE_DiffPieces_192_192;
      else
      {
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_227;
        MR_Word Var_230;
        MR_Word Var_231;

        {
          Var_231 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_231, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_231, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_230, 0) = ((MR_Box) (Var_231));
          MR_hl_field(1, Var_230, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[207])));
        }
        {
          Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_227, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[205])));
          MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_230));
        }
        {
          Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_224, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[204])));
          MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_227));
        }
        Var_223 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_224);
        STATE_VARIABLE_DiffPieces_222_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_192_192, Var_223);
      }
      succeeded = (ActualDetism_29 == ExpectedDetism_33);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_44 = STATE_VARIABLE_DiffPieces_222_222;
      else
      {
        MR_String ActualDetismStr_42;
        MR_String ExpectedDetismStr_43;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_241;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Word Var_246;
        MR_Word Var_249;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_257;
        MR_Word Var_260;
        MR_Word Var_261;

        ActualDetismStr_42 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_29);
        ExpectedDetismStr_43 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ExpectedDetism_33);
        {
          Var_245 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_245, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_245, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_253 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_253, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_253, 1) = ((MR_Box) (ActualDetismStr_42));
        }
        {
          Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_261, 1) = ((MR_Box) (ExpectedDetismStr_43));
        }
        {
          Var_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_260, 0) = ((MR_Box) (Var_261));
          MR_hl_field(1, Var_260, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
        }
        {
          Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_257, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[211])));
          MR_hl_field(1, Var_257, 1) = ((MR_Box) (Var_260));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (Var_257));
        }
        {
          Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_252, 0) = ((MR_Box) (Var_253));
          MR_hl_field(1, Var_252, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_249, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[210])));
          MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_252));
        }
        {
          Var_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_246, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[209])));
          MR_hl_field(1, Var_246, 1) = ((MR_Box) (Var_249));
        }
        {
          Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_244, 0) = ((MR_Box) (Var_245));
          MR_hl_field(1, Var_244, 1) = ((MR_Box) (Var_246));
        }
        {
          Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_241, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
          MR_hl_field(1, Var_241, 1) = ((MR_Box) (Var_244));
        }
        {
          Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_238, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[208])));
          MR_hl_field(1, Var_238, 1) = ((MR_Box) (Var_241));
        }
        Var_237 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_238);
        STATE_VARIABLE_DiffPieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_222_222, Var_237);
      }
    }
    else
      STATE_VARIABLE_DiffPieces_44 = STATE_VARIABLE_DiffPieces_101_101;
  }
  return STATE_VARIABLE_DiffPieces_44;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_diff_pieces_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word ExistQTVars_7,
  MR_Word ActualType0_8,
  MR_Word ExpectedType0_9)
{
  MR_bool succeeded;
  MR_Word DiffPieces_10;
  MR_Word ActualType_11;
  MR_Word ExpectedType_12;

  ActualType_11 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ActualType0_8);
  ExpectedType_12 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(ExpectedType0_9);
  succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(ActualType_11, ExpectedType_12);
  if (succeeded)
    DiffPieces_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DiffPiecesPrime_21;

    switch (MR_tag((MR_Word) ActualType_11)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeSymName_16 = ((MR_Word) ((MR_hl_field(1, ActualType_11, (MR_Integer) 0))));
          MR_Word ActualArgTypes_17 = ((MR_Word) ((MR_hl_field(1, ActualType_11, (MR_Integer) 1))));
          MR_Word ExpectedArgTypes_19;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_71;
          MR_Word TypeInfo_77_77;

          succeeded = ((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_71 = ((MR_Word) ((MR_hl_field(1, ExpectedType_12, (MR_Integer) 0))));
            ExpectedArgTypes_19 = ((MR_Word) ((MR_hl_field(1, ExpectedType_12, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeSymName_16, Var_71);
            if (succeeded)
            {
              TypeInfo_77_77 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ActualArgTypes_17)), ((MR_Box) (ExpectedArgTypes_19)));
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_44 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[174]));
                Var_48 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_47, 1) = ((MR_Box) (TypeSymName_16));
                }
                {
                  Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
                  MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
                }
                DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_43, ExistQTVars_7, ActualArgTypes_17, ExpectedArgTypes_19);
                succeeded = (DiffPiecesPrime_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ActualType_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_49;
              MR_Word ActualArgTypes_64 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 1))));
              MR_Word ExpectedArgTypes_65;
              MR_Word TypeInfo_78_78;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ExpectedArgTypes_65 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))));
                TypeInfo_78_78 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ActualArgTypes_64)), ((MR_Box) (ExpectedArgTypes_65)));
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_49 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[176]));
                  DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_49, ExistQTVars_7, ActualArgTypes_64, ExpectedArgTypes_65);
                  succeeded = (DiffPiecesPrime_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ActualPorF_27 = ((MR_Unsigned) ((MR_hl_field(3, ActualType_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ActualInstInfo_28 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 3))));
              MR_Word ActualPurity_29 = ((MR_Unsigned) ((MR_hl_field(3, ActualType_11, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word ExpectedPorF_31;
              MR_Word ExpectedInstInfo_32;
              MR_Word ExpectedPurity_33;
              MR_Word ActualArgTypes_68 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 2))));
              MR_Word ExpectedArgTypes_69;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ExpectedPorF_31 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))) & (MR_Integer) 1);
                ExpectedArgTypes_69 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 2))));
                ExpectedInstInfo_32 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 3))));
                ExpectedPurity_33 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 4))) & (MR_Integer) 3);
                DiffPiecesPrime_21 = check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0(ContextPieces_6, ExistQTVars_7, ActualPorF_27, ExpectedPorF_31, ActualArgTypes_68, ExpectedArgTypes_69, ActualInstInfo_28, ExpectedInstInfo_32, ActualPurity_29, ExpectedPurity_33);
                succeeded = (DiffPiecesPrime_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_74_74;
              MR_Word TVar_24 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 1))));
              MR_Word Var_53;
              MR_Word ActualArgTypes_66 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 2))));
              MR_Word ExpectedArgTypes_67;
              MR_Word Var_72;
              MR_Word TypeInfo_75_75;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_72 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))));
                ExpectedArgTypes_67 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 2))));
                TypeInfo_74_74 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (TVar_24)), ((MR_Box) (Var_72)));
                if (succeeded)
                {
                  TypeInfo_75_75 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ActualArgTypes_66)), ((MR_Box) (ExpectedArgTypes_67)));
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_53 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[173]));
                    DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_53, ExistQTVars_7, ActualArgTypes_66, ExpectedArgTypes_67);
                    succeeded = (DiffPiecesPrime_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                  }
                }
              }
            }
            break;
        }
        break;
    }
    if (succeeded)
      DiffPieces_10 = DiffPiecesPrime_21;
    else
    {
      MR_Word TypeInfo_70_70;
      MR_Word ExpectedTVar_37;

      succeeded = ((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        ExpectedTVar_37 = ((MR_Word) ((MR_hl_field(0, ExpectedType_12, (MR_Integer) 0))));
        TypeInfo_70_70 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_70_70, ((MR_Box) (ExpectedTVar_37)), ExistQTVars_7);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ActualType_11)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
        DiffPieces_10 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_6, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[180])));
      else
      if ((ContextPieces_6 == (MR_Word) ((MR_Unsigned) 0U)))
        DiffPieces_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
        DiffPieces_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  return DiffPieces_10;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(
  MR_Word ContextPieces_4,
  MR_Word MismatchPieces_5)
{
  MR_Word DiffPieces_6;

  if ((ContextPieces_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_12;

    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[216])), Var_12);
  }
  else
  {
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_25;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (ContextPieces_4));
    }
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[218])), Var_25);
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_18);
  }
  return DiffPieces_6;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_source_pieces_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]));
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ActualExpected_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ActualExpecteds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailSourceExpectedPairs_11;
    MR_Word TailTaggedPieces_12;
    MR_Word ExpectedPieces_15;
    MR_Word MaybeSource_18;
    MR_String CommaOrPeriod_19;
    MR_Word SourcePieces_23;
    MR_Word HeadTaggedPieces_24;
    MR_Word SourceExpectedPair_25;

    check_hlds__typecheck_errors__acc_expected_type_source_pieces_4_p_0(ModuleInfo_1, ActualExpecteds_8, &TailSourceExpectedPairs_11, &TailTaggedPieces_12);
    ExpectedPieces_15 = ((MR_Word) ((MR_hl_field(0, ActualExpected_7, (MR_Integer) 2))));
    MaybeSource_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_7, (MR_Integer) 5))));
    if ((TailTaggedPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
      CommaOrPeriod_19 = (MR_String) ".";
    else
      CommaOrPeriod_19 = (MR_String) ",";
    if ((MaybeSource_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_errors.acc_expected_type_source_pieces\'/4", (MR_String) "MaybeSource = no");
        return;
      }
    else
    {
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(1, MaybeSource_18, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;

      SourcePieces_23 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_1, Source_22);
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[170])));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (SourcePieces_23));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[48])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (ExpectedPieces_15));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[171])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (CommaOrPeriod_19));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
      }
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_36);
      HeadTaggedPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_29);
    }
    {
      SourceExpectedPair_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SourceExpectedPair_25, 0) = ((MR_Box) (SourcePieces_23));
      MR_hl_field(0, SourceExpectedPair_25, 1) = ((MR_Box) (ExpectedPieces_15));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), ((MR_Box) (SourceExpectedPair_25)), TailSourceExpectedPairs_11);
    if (succeeded)
    {
      *HeadVar__3_3 = TailSourceExpectedPairs_11;
      *HeadVar__4_4 = TailTaggedPieces_12;
    }
    else
    {
      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), ((MR_Box) (SourceExpectedPair_25)), TailSourceExpectedPairs_11, HeadVar__3_3);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadTaggedPieces_24, TailTaggedPieces_12);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__is_actual_or_expected_single_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeSingleActual_0_2,
  MR_Word * STATE_VARIABLE_MaybeSingleActual_3,
  MR_Word STATE_VARIABLE_MaybeSingleExpected_0_4,
  MR_Word * STATE_VARIABLE_MaybeSingleExpected_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeSingleExpected_5 = STATE_VARIABLE_MaybeSingleExpected_0_4;
      *STATE_VARIABLE_MaybeSingleActual_3 = STATE_VARIABLE_MaybeSingleActual_0_2;
    }
    else
    {
      MR_Word AE_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word AEs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ActualPieces_16 = ((MR_Word) ((MR_hl_field(0, AE_12, (MR_Integer) 0))));
      MR_Word ExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, AE_12, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_MaybeSingleActual_26_26;
      MR_Word STATE_VARIABLE_MaybeSingleExpected_27_27;
      MR_Word TypeInfo_30_30;
      MR_Word Var_28;
      MR_Word TypeInfo_31_31;
      MR_Word Var_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4;

      succeeded = (STATE_VARIABLE_MaybeSingleActual_0_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSingleActual_0_2, (MR_Integer) 0))));
        TypeInfo_30_30 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ActualPieces_16)), ((MR_Box) (Var_28)));
      }
      if (succeeded)
        STATE_VARIABLE_MaybeSingleActual_26_26 = STATE_VARIABLE_MaybeSingleActual_0_2;
      else
        STATE_VARIABLE_MaybeSingleActual_26_26 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = (STATE_VARIABLE_MaybeSingleExpected_0_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSingleExpected_0_4, (MR_Integer) 0))));
        TypeInfo_31_31 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ExpectedPieces_18)), ((MR_Box) (Var_29)));
      }
      if (succeeded)
        STATE_VARIABLE_MaybeSingleExpected_27_27 = STATE_VARIABLE_MaybeSingleExpected_0_4;
      else
        STATE_VARIABLE_MaybeSingleExpected_27_27 = (MR_Word) ((MR_Unsigned) 0U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AEs_13;
      next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2 = STATE_VARIABLE_MaybeSingleActual_26_26;
      next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4 = STATE_VARIABLE_MaybeSingleExpected_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeSingleActual_0_2 = next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2;
      STATE_VARIABLE_MaybeSingleExpected_0_4 = next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_BuiltinTypes_11;

  check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_BuiltinTypes_11);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_BuiltinTypes_11));
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = check_hlds__type_assign__get_caller_arg_assign_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__type_assign__get_expected_arg_types_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_157));
  check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_168 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 0))));
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 2))));
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_44;
    MR_Word Var_45;

    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 3))));
    Var_171 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 4))));
    Var_172 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_157, (MR_Integer) 5))));
    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_71 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_71, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_71, (MR_Integer) 1))));
      check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_157, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_5, env_ptr);
      (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = MR_TRUE;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Word ArgVars_16,
  MR_Word ArgsTypeAssignSet_17)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s env;

  (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14 = ConsDefnList_14;
  {
    MR_Word Spec_18;
    MR_Word ClauseContext_19;
    MR_Word InClauseForPieces_20;
    MR_Word ContextPieces_21;
    MR_Word ModuleInfo_22;
    MR_Word VarSet_23;
    MR_Word InstVarSet_24;
    MR_Word StrippedFunctor_25;
    MR_String StrippedFunctorStr_26;
    MR_Integer Arity_27;
    MR_Word TypeAssignSet_28;
    MR_Word ConsArgTypesSet_29;
    MR_Word MaybeNumMismatches_39;
    MR_Word ErrorPieces_40;
    MR_Word VerboseComponents_42;
    MR_String Arguments_51;
    MR_Word VarAndTermPieces_53;
    MR_Word InvisIntPieces_56;
    MR_Word ErrorInvisIntPieces_57;
    MR_Word Msg_58;
    MR_Word Var_59;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_155;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Integer Var_160;
    MR_Word Var_161;
    MR_Word ConsArgTypes_30;
    MR_Word Var_31;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
    InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
    ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 0))));
    Var_158 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 1))));
    Var_159 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 2))));
    Var_160 = ((MR_Integer) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 3))));
    Var_161 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 4))));
    VarSet_23 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
    check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_24);
    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_15, &StrippedFunctor_25);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (VarSet_23));
    }
    StrippedFunctorStr_26 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_22, Var_59, (MR_Integer) 0, StrippedFunctor_25, ArgVars_16);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_16, &Arity_27);
    TypeAssignSet_28 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_17);
    ConsArgTypesSet_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[11]), ArgsTypeAssignSet_17);
    (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ConsArgTypesSet_29);
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = (ConsArgTypesSet_29 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
      {
        ConsArgTypes_30 = ((MR_Word) ((MR_hl_field(1, ConsArgTypesSet_29, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(1, ConsArgTypesSet_29, (MR_Integer) 1))));
      }
    }
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      MR_Word ArgExpTypes_32;
      MR_Word TypeAssigns_33;
      MR_Word RevSubsumesMismatches_34;
      MR_Word RevNoSubsumeMismatches_35;

      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgVars_16, ConsArgTypes_30, &ArgExpTypes_32);
      TypeAssigns_33 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[12]), ArgsTypeAssignSet_17);
      check_hlds__typecheck_errors__find_mismatched_args_9_p_0((MR_Integer) 0, InstVarSet_24, TypeAssigns_33, (MR_Integer) 1, ArgExpTypes_32, (MR_Word) ((MR_Unsigned) 0U), &RevSubsumesMismatches_34, (MR_Word) ((MR_Unsigned) 0U), &RevNoSubsumeMismatches_35);
      if ((RevNoSubsumeMismatches_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SubsumesMismatches_41;
        MR_Integer Var_69;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_34, &SubsumesMismatches_41);
        Var_69 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), SubsumesMismatches_41);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_69));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_23, Functor_15, (MR_Integer) 0, SubsumesMismatches_41);
      }
      else
      {
        MR_Word NoSubsumeMismatches_38;
        MR_Integer Var_67;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_35, &NoSubsumeMismatches_38);
        Var_67 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), NoSubsumeMismatches_38);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_67));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_23, Functor_15, (MR_Integer) 0, NoSubsumeMismatches_38);
      }
      VerboseComponents_42 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ResultTypePieces_46;
      MR_Word AllTypesPieces_47;
      MR_Word VerboseComponent_50;

      MaybeNumMismatches_39 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_6(&env);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
      {
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;

        Var_72 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_13);
        Var_74 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_24, TypeAssignSet_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_13);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
        ResultTypePieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_73);
      }
      else
        ResultTypePieces_46 = (MR_Word) ((MR_Unsigned) 0U);
      if ((ArgVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;

        Var_82 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_27);
        Var_84 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_24, Functor_15, Arity_27, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
        AllTypesPieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, Var_83);
      }
      else
      {
        MR_Word HeadArgVar_48 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, (MR_Integer) 0))));
        MR_Word TailArgVars_49 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, (MR_Integer) 1))));
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_99;

        Var_92 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_27);
        Var_94 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_24, Functor_15, Arity_27, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])));
        Var_99 = check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(VarSet_23, InstVarSet_24, TypeAssignSet_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), HeadArgVar_48, TailArgVars_49);
        Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_99);
        AllTypesPieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_93);
      }
      ErrorPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_46, AllTypesPieces_47);
      check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_23, TypeAssignSet_28, &VerboseComponent_50);
      {
        VerboseComponents_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VerboseComponents_42, 0) = ((MR_Box) (VerboseComponent_50));
        MR_hl_field(1, VerboseComponents_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeNumMismatches_39 == (MR_Word) ((MR_Unsigned) 0U)))
      Arguments_51 = (MR_String) "argument(s)";
    else
    {
      MR_Integer NumMismatches_52 = ((MR_Integer) ((MR_hl_field(1, MaybeNumMismatches_39, (MR_Integer) 0))));

      (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = (NumMismatches_52 == (MR_Integer) 1);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
        Arguments_51 = (MR_String) "argument";
      else
        Arguments_51 = (MR_String) "arguments";
    }
    Var_112 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_13);
    {
      Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_120, 1) = ((MR_Box) (StrippedFunctorStr_26));
    }
    {
      Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_130, 1) = ((MR_Box) (Arguments_51));
    }
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[44])));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[42])));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[41])));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[40])));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
    }
    Var_136 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(StrippedFunctor_25, Arity_27);
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_135);
    Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_113);
    VarAndTermPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])), Var_111);
    (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = check_hlds__typecheck_errors__is_int_func_op_1_p_0(Functor_15);
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      MR_Word BuiltinTypes0_54;
      MR_Word BuiltinTypes_55;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Box conv4_BuiltinTypes0_54;

      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_143, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
        MR_hl_field(0, Var_143, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_7));
        MR_hl_field(0, Var_143, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_143, 3) = ((MR_Box) (TypeAssignSet_28));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Var_144, 1) = ((MR_Box) (ArgVars_16));
      }
      Var_145 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_143, Var_144, ((MR_Box) (Var_145)), &conv4_BuiltinTypes0_54);
      BuiltinTypes0_54 = ((MR_Word) (conv4_BuiltinTypes0_54));
      check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, BuiltinTypes0_54, &BuiltinTypes_55);
      InvisIntPieces_56 = check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_55);
    }
    else
      InvisIntPieces_56 = (MR_Word) ((MR_Unsigned) 0U);
    ErrorInvisIntPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorPieces_40, InvisIntPieces_56);
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_147, 0) = ((MR_Box) (ContextPieces_21));
    }
    {
      Var_149 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_149, 0) = ((MR_Box) (VarAndTermPieces_53));
    }
    {
      Var_151 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_151, 0) = ((MR_Box) (ErrorInvisIntPieces_57));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (VerboseComponents_42));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_148));
    }
    {
      Msg_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_58, 0) = ((MR_Box) (Context_12));
      MR_hl_field(2, Msg_58, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = ((MR_Box) (Msg_58));
      MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_args\'/8"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_155));
    }
    return Spec_18;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(
  MR_Word VarSet_8,
  MR_Word InstVarSet_9,
  MR_Word TypeAssignSet_10,
  MR_Word FinalPieces_11,
  MR_Word HeadVar_12,
  MR_Word TailVars_13)
{
  MR_Word Pieces_14;

  if ((TailVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_17;
    MR_Word Var_18;

    Var_17 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_8, HeadVar_12);
    Var_18 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_9, TypeAssignSet_10, FinalPieces_11, HeadVar_12);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  }
  else
  {
    MR_Word HeadTailVar_15 = ((MR_Word) ((MR_hl_field(1, TailVars_13, (MR_Integer) 0))));
    MR_Word TailTailVars_16 = ((MR_Word) ((MR_hl_field(1, TailVars_13, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_28;

    Var_19 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_8, HeadVar_12);
    Var_21 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_9, TypeAssignSet_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[152])), HeadVar_12);
    Var_28 = check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(VarSet_8, InstVarSet_9, TypeAssignSet_10, FinalPieces_11, HeadTailVar_15, TailTailVars_16);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_28);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  }
  return Pieces_14;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_func_op_1_p_0(
  MR_Word ConsId_2)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word SymName_3;
  MR_Integer Arity_4;
  MR_String Name_6;

  if (succeeded)
  {
    SymName_3 = ((MR_Word) ((MR_hl_field(3, ConsId_2, (MR_Integer) 1))));
    Arity_4 = ((MR_Integer) ((MR_hl_field(3, ConsId_2, (MR_Integer) 2))));
    Name_6 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_3);
    switch (Arity_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer lo_0 = (MR_Integer) 0;
          MR_Integer hi_1 = (MR_Integer) 6;
          MR_Integer mid_2;
          MR_Integer result_3;

          // binary string simple lookup switch
          ;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_6, ((&check_hlds__typecheck_errors_vector_common_8[7 + mid_2]))->check_hlds__typecheck_errors__vector_common_type_8_0__vct_8_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
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
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer case_num_4 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Name_6, 0)) {
            case (MR_Integer) 42:
              if (MR_offset_streq(1, Name_6, (MR_String) "*"))
                case_num_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 43:
              if (MR_offset_streq(1, Name_6, (MR_String) "+"))
                case_num_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 45:
              if (MR_offset_streq(1, Name_6, (MR_String) "-"))
                case_num_4 = (MR_Integer) 2;
              break;
            case (MR_Integer) 47:
              switch (MR_nth_code_unit(Name_6, 1)) {
                case (MR_Integer) 0:
                  case_num_4 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 47:
                  if (MR_offset_streq(2, Name_6, (MR_String) "//"))
                    case_num_4 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 92:
                  if (MR_offset_streq(2, Name_6, (MR_String) "/\\"))
                    case_num_4 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(1, Name_6, (MR_String) "<<"))
                case_num_4 = (MR_Integer) 6;
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(1, Name_6, (MR_String) ">>"))
                case_num_4 = (MR_Integer) 7;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(1, Name_6, (MR_String) "\\/"))
                case_num_4 = (MR_Integer) 8;
              break;
            case (MR_Integer) 100:
              if (MR_offset_streq(1, Name_6, (MR_String) "div"))
                case_num_4 = (MR_Integer) 9;
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(Name_6, 1)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(2, Name_6, (MR_String) "max"))
                    case_num_4 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 105:
                  if (((MR_nth_code_unit(Name_6, 2)) == (MR_Integer) 110))
                    switch (MR_nth_code_unit(Name_6, 3)) {
                      case (MR_Integer) 0:
                        case_num_4 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Name_6, (MR_String) "minus"))
                          case_num_4 = (MR_Integer) 12;
                        break;
                    }
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_6, (MR_String) "mod"))
                    case_num_4 = (MR_Integer) 13;
                  break;
              }
              break;
            case (MR_Integer) 112:
              switch (MR_nth_code_unit(Name_6, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, Name_6, (MR_String) "plus"))
                    case_num_4 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_6, (MR_String) "pow"))
                    case_num_4 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(1, Name_6, (MR_String) "rem"))
                case_num_4 = (MR_Integer) 16;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(1, Name_6, (MR_String) "times"))
                case_num_4 = (MR_Integer) 17;
              break;
            case (MR_Integer) 117:
              if (((((((((((((((((((MR_nth_code_unit(Name_6, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Name_6, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_6, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Name_6, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_6, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_6, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(Name_6, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_6, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(Name_6, 9)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(Name_6, 10)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(11, Name_6, (MR_String) "unchecked_left_shift"))
                      case_num_4 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 113:
                    if (MR_offset_streq(11, Name_6, (MR_String) "unchecked_quotient"))
                      case_num_4 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 114:
                    switch (MR_nth_code_unit(Name_6, 11)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(12, Name_6, (MR_String) "unchecked_rem"))
                          case_num_4 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(12, Name_6, (MR_String) "unchecked_right_shift"))
                          case_num_4 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(1, Name_6, (MR_String) "xor"))
                case_num_4 = (MR_Integer) 22;
              break;
          }
          if ((case_num_4 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(
  MR_Word VarSet_1,
  MR_Word Functor_2,
  MR_Word First_3,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mismatch_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Mismatches_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Integer ArgNum_15 = ((MR_Integer) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 1))));
    MR_Word ArgNumPieces_21;
    MR_Word VarNamePieces_24;
    MR_Word HeadExpectedTypePieces_25;
    MR_Word HeadActualTypePieces_26;
    MR_Word ErrorDescPieces_30;
    MR_Word SpecialMismatches_34;
    MR_Word SpecialReasonPieces_35;
    MR_Word ThisMismatchPieces_36;
    MR_Word FollowingMismatchPieces_37;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Mismatch_156 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 2))));
    MR_Word Mismatches_157 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 3))));
    MR_Word MaybeSpecial_161;
    MR_Word STATE_VARIABLE_Specials_12_164;
    MR_Integer Arity_19;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Integer Var_42;
    MR_String Var_22;
    MR_Word TailActualTypePieces_29;

    succeeded = ((((MR_tag((MR_Word) Functor_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_40 = ((MR_Word) ((MR_hl_field(3, Functor_2, (MR_Integer) 1))));
      Arity_19 = ((MR_Integer) ((MR_hl_field(3, Functor_2, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        succeeded = (strcmp(Var_41, (MR_String) "") == 0);
        if (succeeded)
        {
          Var_42 = (MR_Integer) 0;
          succeeded = (Arity_19 > Var_42);
        }
      }
    }
    if (succeeded)
      switch (First_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ArgNumPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[45]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Integer Var_50 = (MR_Integer) ((MR_Unsigned) ArgNum_15 - (MR_Unsigned) 1);

            {
              Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[2])));
              MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_48));
            }
          }
          break;
      }
    else
    {
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (ArgNum_15));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[2])));
        MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_55));
      }
    }
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16, &Var_22);
    if (succeeded)
    {
      MR_String VarName_23;
      MR_Word Var_60;
      MR_Word Var_61;

      VarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16);
      {
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (VarName_23));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[47])));
      }
      {
        VarNamePieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarNamePieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[46])));
        MR_hl_field(1, VarNamePieces_24, 1) = ((MR_Box) (Var_60));
      }
    }
    else
      VarNamePieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    HeadExpectedTypePieces_25 = ((MR_Word) ((MR_hl_field(0, Mismatch_156, (MR_Integer) 0))));
    HeadActualTypePieces_26 = ((MR_Word) ((MR_hl_field(0, Mismatch_156, (MR_Integer) 1))));
    succeeded = check_hlds__typecheck_errors__expected_types_match_3_p_0(HeadExpectedTypePieces_25, Mismatches_157, &TailActualTypePieces_29);
    if (succeeded)
      if ((TailActualTypePieces_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_82;
        MR_Word Var_90;

        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadExpectedTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])));
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), Var_90);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])), Var_82);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadActualTypePieces_26, Var_74);
        ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_73);
      }
      else
      {
        MR_Word SecondActualTypePieces_31 = ((MR_Word) ((MR_hl_field(1, TailActualTypePieces_29, (MR_Integer) 0))));
        MR_Word ThirdPlusActualTypePieces_32 = ((MR_Word) ((MR_hl_field(1, TailActualTypePieces_29, (MR_Integer) 1))));
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_115;
        MR_Word Var_123;

        Var_106 = check_hlds__typecheck_errors__report_actual_types_3_f_0(HeadActualTypePieces_26, SecondActualTypePieces_31, ThirdPlusActualTypePieces_32);
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadExpectedTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[57])));
        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), Var_123);
        Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])), Var_115);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_107);
        ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_105);
      }
    else
    {
      MR_Word AllMismatches_33;
      MR_Word Var_137;
      MR_Word Var_138;

      {
        AllMismatches_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllMismatches_33, 0) = ((MR_Box) (Mismatch_156));
        MR_hl_field(1, AllMismatches_33, 1) = ((MR_Box) (Mismatches_157));
      }
      Var_138 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0((MR_Integer) 1, AllMismatches_33);
      Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
      ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[59])), Var_137);
    }
    check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(Mismatches_157, &STATE_VARIABLE_Specials_12_164);
    MaybeSpecial_161 = ((MR_Word) ((MR_hl_field(0, Mismatch_156, (MR_Integer) 3))));
    if ((MaybeSpecial_161 == (MR_Word) ((MR_Unsigned) 0U)))
      SpecialMismatches_34 = STATE_VARIABLE_Specials_12_164;
    else
    {
      MR_Word Special_162 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_161, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_162)), STATE_VARIABLE_Specials_12_164, &SpecialMismatches_34);
    }
    SpecialReasonPieces_35 = check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(SpecialMismatches_34);
    Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorDescPieces_30, SpecialReasonPieces_35);
    Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarNamePieces_24, Var_148);
    ThisMismatchPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumPieces_21, Var_147);
    if ((Mismatches_13 == (MR_Word) ((MR_Unsigned) 0U)))
      FollowingMismatchPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
    else
      FollowingMismatchPieces_37 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_1, Functor_2, (MR_Integer) 1, Mismatches_13);
    HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisMismatchPieces_36, FollowingMismatchPieces_37);
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3)
{
  MR_Word Pieces_4;
  MR_Word Var_6;

  Var_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), Specials_3);
  check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0((MR_Integer) 0, Var_6, &Pieces_4);
  return Pieces_4;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadSpecial_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailSpecials_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailPieces_9;
    MR_Word HeadPieces_10;
    MR_Word ReasonIsPieces_13;
    MR_String GetoptModule_14;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;

    check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0((MR_Integer) 1, TailSpecials_7, &TailPieces_9);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69]));
        break;
      case (MR_Integer) 1:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[71]));
        break;
    }
    GetoptModule_14 = (MR_String) (HeadSpecial_6);
    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (GetoptModule_14));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[85])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[73])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[72])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
    }
    HeadPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonIsPieces_13, Var_21);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_10, TailPieces_9);
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0));
  else
  {
    MR_Word Mismatch_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mismatches_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MaybeSpecial_9;
    MR_Word STATE_VARIABLE_Specials_12_12;

    check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(Mismatches_4, &STATE_VARIABLE_Specials_12_12);
    MaybeSpecial_9 = ((MR_Word) ((MR_hl_field(0, Mismatch_3, (MR_Integer) 3))));
    if ((MaybeSpecial_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = STATE_VARIABLE_Specials_12_12;
    else
    {
      MR_Word Special_10 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_9, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_10)), STATE_VARIABLE_Specials_12_12, HeadVar__2_2);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mismatch_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mismatches_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ExpectedTypePieces_9 = ((MR_Word) ((MR_hl_field(0, Mismatch_6, (MR_Integer) 0))));
    MR_Word ActualTypePieces_10 = ((MR_Word) ((MR_hl_field(0, Mismatch_6, (MR_Integer) 1))));
    MR_Word HeadPieces_13;
    MR_Word TailPieces_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Integer Var_47;

    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[62])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedTypePieces_9, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[67])), Var_40);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_35);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualTypePieces_10, Var_30);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[65])), Var_29);
    HeadPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_24);
    Var_47 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    TailPieces_14 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(Var_47, Mismatches_7);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_13, TailPieces_14);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7)
{
  MR_Word Pieces_8;

  if ((ThirdPlusActualTypePieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_11;

    Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[61])), SecondActualTypePieces_6);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_11);
  }
  else
  {
    MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 0))));
    MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Var_21;

    Var_21 = check_hlds__typecheck_errors__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_21);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_16);
  }
  return Pieces_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_types_match_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word HeadMismatch_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailMismatches_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadActualTypePieces_8 = ((MR_Word) ((MR_hl_field(0, HeadMismatch_6, (MR_Integer) 1))));
    MR_Word TailActualTypePieces_9;
    MR_Word HeadExpTypePieces_10 = ((MR_Word) ((MR_hl_field(0, HeadMismatch_6, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadExpTypePieces_10)));
    if (succeeded)
    {
      succeeded = check_hlds__typecheck_errors__expected_types_match_3_p_0(HeadVar__1_1, TailMismatches_7, &TailActualTypePieces_9);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadActualTypePieces_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailActualTypePieces_9));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeMismatches_38;
  MR_Word conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_40;

  check_hlds__typecheck_errors__substitute_types_check_match_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMismatches_38, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_40);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMismatches_38));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_40));
}

static void MR_CALL 
check_hlds__typecheck_errors__find_mismatched_args_9_p_0(
  MR_Word AddQuotes_1,
  MR_Word InstVarSet_2,
  MR_Word TypeAssignSet_3,
  MR_Integer CurArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevSubsumesMismatches_0_6,
  MR_Word * STATE_VARIABLE_RevSubsumesMismatches_7,
  MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_0_8,
  MR_Word * STATE_VARIABLE_RevNoSubsumeMismatches_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevNoSubsumeMismatches_9 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
      *STATE_VARIABLE_RevSubsumesMismatches_7 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
    }
    else
    {
      MR_Word Arg_24;
      MR_Word ExpType_25;
      MR_Word ArgExpTypes_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word TypeStuffList_29;
      MR_Word StrippedExpType_30;
      MR_Word TypeMismatches0_31;
      MR_Word DoesSomeTypeStuffMatch_32;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Var_43;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_48_48;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_49_49;
      MR_Integer Var_50;
      MR_Box conv3_TypeMismatches0_31;
      MR_Box conv2_DoesSomeTypeStuffMatch_32;
      MR_Integer next_value_of_CurArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8;

      Arg_24 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
      ExpType_25 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
      check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_3, Arg_24, &TypeStuffList_29);
      parse_tree__prog_type__strip_module_names_from_type_3_p_0((MR_Integer) 0, ExpType_25, &StrippedExpType_30);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[0]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_mismatched_args_9_p_0_1));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (AddQuotes_1));
        MR_hl_field(0, Var_43, 4) = ((MR_Box) (InstVarSet_2));
        MR_hl_field(0, Var_43, 5) = ((MR_Box) (StrippedExpType_30));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0), Var_43, TypeStuffList_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_31, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_32);
      TypeMismatches0_31 = ((MR_Word) (conv3_TypeMismatches0_31));
      DoesSomeTypeStuffMatch_32 = ((MR_Word) (conv2_DoesSomeTypeStuffMatch_32));
      switch (DoesSomeTypeStuffMatch_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeMismatches_33;

            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0), TypeMismatches0_31, &TypeMismatches_33);
            if ((TypeMismatches_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_errors.find_mismatched_args\'/9", (MR_String) "no_type_stuff_matches but TypeMismatches = []");
                return;
              }
            else
            {
              MR_Word HeadTypeMismatch_34 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 0))));
              MR_Word TailTypeMismatches_35 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 1))));
              MR_Word Mismatch_36;
              MR_Word Mismatch_63;
              MR_Word Mismatches_64;
              MR_Word Var_65;

              {
                Mismatch_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Mismatch_36, 0) = ((MR_Box) (CurArgNum_4));
                MR_hl_field(0, Mismatch_36, 1) = ((MR_Box) (Arg_24));
                MR_hl_field(0, Mismatch_36, 2) = ((MR_Box) (HeadTypeMismatch_34));
                MR_hl_field(0, Mismatch_36, 3) = ((MR_Box) (TailTypeMismatches_35));
              }
              Mismatch_63 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 0))));
              Mismatches_64 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 1))));
              Var_65 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_63, (MR_Integer) 2))) & (MR_Integer) 1);
              succeeded = (Var_65 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(Mismatches_64);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_48_48, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_48_48, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_8));
                }
                STATE_VARIABLE_RevSubsumesMismatches_49_49 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_49_49, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_49_49, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_6));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_48_48 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_49_49 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
            STATE_VARIABLE_RevNoSubsumeMismatches_48_48 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
          }
          break;
      }
      Var_50 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_4 = Var_50;
      next_value_of_HeadVar__5_5 = ArgExpTypes_26;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6 = STATE_VARIABLE_RevSubsumesMismatches_49_49;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8 = STATE_VARIABLE_RevNoSubsumeMismatches_48_48;
      CurArgNum_4 = next_value_of_CurArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevSubsumesMismatches_0_6 = next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6;
      STATE_VARIABLE_RevNoSubsumeMismatches_0_8 = next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Mismatch_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Mismatches_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (Var_4 == (MR_Integer) 0);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Mismatches_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_errors__expected_type_needs_int_constant_suffix_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__typecheck_error_type_assign__typestuff_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Integer Arity_16,
  MR_Word TypeAssignSet_17)
{
  MR_bool succeeded;
  MR_Word Spec_18;
  MR_Word ClauseContext_19;
  MR_Word InClauseForPieces_20;
  MR_Word ContextPieces_21;
  MR_Word VarSet_22;
  MR_Word InstVarSet_23;
  MR_Word MainPieces_24;
  MR_Word NoSuffixIntegerPieces_27;
  MR_Word InvisIntPieces_30;
  MR_Word VerboseComponent_31;
  MR_Word AlwaysPieces_32;
  MR_Word Msg_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_String Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word TypeCtorInfo_102_102;
  MR_Word TypesOfVar_26;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word SymName_105;
  MR_Integer Arity_106;
  MR_String Name_108;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
  InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_23);
  Var_39 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
  Var_48 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_57 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
  Var_59 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_23, TypeAssignSet_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_13);
  Var_69 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_71 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_23, Functor_15, Arity_16, ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_70);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])), Var_68);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_58);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), Var_56);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_49);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[37])), Var_47);
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_40);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_38);
  succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    Var_79 = ((MR_Word) ((MR_hl_field(3, Functor_15, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_80 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[9]);
      TypeCtorInfo_102_102 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(TypeCtorInfo_102_102, Var_80, TypeAssignSet_17, Var_13, &TypesOfVar_26);
      Var_81 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[10]);
      succeeded = mercury__list__any_true_2_p_0(TypeCtorInfo_102_102, Var_81, TypesOfVar_26);
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_27 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[143]));
  else
    NoSuffixIntegerPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    SymName_105 = ((MR_Word) ((MR_hl_field(3, Functor_15, (MR_Integer) 1))));
    Arity_106 = ((MR_Integer) ((MR_hl_field(3, Functor_15, (MR_Integer) 2))));
    Name_108 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_105);
    switch (Arity_106) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer lo_0 = (MR_Integer) 0;
          MR_Integer hi_1 = (MR_Integer) 6;
          MR_Integer mid_2;
          MR_Integer result_3;

          // binary string simple lookup switch
          ;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_108, ((&check_hlds__typecheck_errors_vector_common_8[0 + mid_2]))->check_hlds__typecheck_errors__vector_common_type_8_0__vct_8_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
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
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer case_num_4 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Name_108, 0)) {
            case (MR_Integer) 42:
              if (MR_offset_streq(1, Name_108, (MR_String) "*"))
                case_num_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 43:
              if (MR_offset_streq(1, Name_108, (MR_String) "+"))
                case_num_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 45:
              if (MR_offset_streq(1, Name_108, (MR_String) "-"))
                case_num_4 = (MR_Integer) 2;
              break;
            case (MR_Integer) 47:
              switch (MR_nth_code_unit(Name_108, 1)) {
                case (MR_Integer) 0:
                  case_num_4 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 47:
                  if (MR_offset_streq(2, Name_108, (MR_String) "//"))
                    case_num_4 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 92:
                  if (MR_offset_streq(2, Name_108, (MR_String) "/\\"))
                    case_num_4 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(1, Name_108, (MR_String) "<<"))
                case_num_4 = (MR_Integer) 6;
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(1, Name_108, (MR_String) ">>"))
                case_num_4 = (MR_Integer) 7;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(1, Name_108, (MR_String) "\\/"))
                case_num_4 = (MR_Integer) 8;
              break;
            case (MR_Integer) 100:
              if (MR_offset_streq(1, Name_108, (MR_String) "div"))
                case_num_4 = (MR_Integer) 9;
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(Name_108, 1)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(2, Name_108, (MR_String) "max"))
                    case_num_4 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 105:
                  if (((MR_nth_code_unit(Name_108, 2)) == (MR_Integer) 110))
                    switch (MR_nth_code_unit(Name_108, 3)) {
                      case (MR_Integer) 0:
                        case_num_4 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(4, Name_108, (MR_String) "minus"))
                          case_num_4 = (MR_Integer) 12;
                        break;
                    }
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_108, (MR_String) "mod"))
                    case_num_4 = (MR_Integer) 13;
                  break;
              }
              break;
            case (MR_Integer) 112:
              switch (MR_nth_code_unit(Name_108, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, Name_108, (MR_String) "plus"))
                    case_num_4 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_108, (MR_String) "pow"))
                    case_num_4 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(1, Name_108, (MR_String) "rem"))
                case_num_4 = (MR_Integer) 16;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(1, Name_108, (MR_String) "times"))
                case_num_4 = (MR_Integer) 17;
              break;
            case (MR_Integer) 117:
              if (((((((((((((((((((MR_nth_code_unit(Name_108, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Name_108, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_108, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Name_108, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_108, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_108, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(Name_108, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_108, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(Name_108, 9)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(Name_108, 10)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(11, Name_108, (MR_String) "unchecked_left_shift"))
                      case_num_4 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 113:
                    if (MR_offset_streq(11, Name_108, (MR_String) "unchecked_quotient"))
                      case_num_4 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 114:
                    switch (MR_nth_code_unit(Name_108, 11)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(12, Name_108, (MR_String) "unchecked_rem"))
                          case_num_4 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(12, Name_108, (MR_String) "unchecked_right_shift"))
                          case_num_4 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(1, Name_108, (MR_String) "xor"))
                case_num_4 = (MR_Integer) 22;
              break;
          }
          if ((case_num_4 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  if (succeeded)
  {
    MR_Word BuiltinTypes0_28;
    MR_Word BuiltinTypes_29;
    MR_Word Var_82;

    Var_82 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
    check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0(TypeAssignSet_17, Var_13, Var_82, &BuiltinTypes0_28);
    check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0(ConsDefnList_14, BuiltinTypes0_28, &BuiltinTypes_29);
    InvisIntPieces_30 = check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_29);
  }
  else
    InvisIntPieces_30 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_22, TypeAssignSet_17, &VerboseComponent_31);
  Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NoSuffixIntegerPieces_27, InvisIntPieces_30);
  Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_24, Var_84);
  AlwaysPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_83);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (AlwaysPieces_32));
  }
  Var_88 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (VerboseComponent_31));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
  }
  {
    Msg_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_33, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_33, 1) = ((MR_Box) (Var_85));
  }
  Var_89 = (MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_result\'/8";
  Var_90 = (MR_Word) ((MR_Unsigned) 0U);
  Var_91 = (MR_Word) ((MR_Unsigned) 52U);
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Msg_33));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_88));
  }
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) (Var_89));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) (Var_90));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) (Var_91));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_92));
  }
  return Spec_18;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(
  MR_Word InstVarSet_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word ConsDefnList_10,
  MR_Word SuffixPieces_11)
{
  MR_bool succeeded = (ConsDefnList_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Pieces_12;
  MR_Word SingleDefn_13;
  MR_Word Var_16;

  if (succeeded)
  {
    SingleDefn_13 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_10, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_10, (MR_Integer) 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ConsTypePieces_14;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word TVarSet_54 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 0))));
    MR_Word ExistQVars_55 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 1))));
    MR_Word ConsType_56 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 2))));
    MR_Word ArgTypes_57 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 3))));
    MR_Word ArgPieces_66;
    MR_Word Var_77;

    if ((ArgTypes_57 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_66 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_62;

      succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_62 = ((MR_Word) ((MR_hl_field(3, Functor_8, (MR_Integer) 1))));
        {
          MR_Word Type_65;
          MR_Word Var_68;

          {
            Type_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_65, 0) = ((MR_Box) (SymName_62));
            MR_hl_field(1, Type_65, 1) = ((MR_Box) (ArgTypes_57));
            MR_hl_field(1, Type_65, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_68 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_54, InstVarSet_7, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_55, Type_65);
          ArgPieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_77 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_54, InstVarSet_7, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_55, ConsType_56);
    ConsTypePieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_66, Var_77);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypePieces_14, Var_25);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_24);
  }
  else
  {
    MR_Word ConsTypeListPieces_15;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_48;

    ConsTypeListPieces_15 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_7, ConsDefnList_10, Functor_8, Arity_9);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[162])), Var_48);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])), Var_43);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypeListPieces_15, Var_38);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[159])), Var_37);
  }
  return Pieces_12;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConsDefn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ConsDefns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ThisPieces_15;
    MR_Word TVarSet_30 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, (MR_Integer) 0))));
    MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, (MR_Integer) 1))));
    MR_Word ConsType_32 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, (MR_Integer) 2))));
    MR_Word ArgTypes_33 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, (MR_Integer) 3))));
    MR_Word ArgPieces_42;
    MR_Word Var_53;

    if ((ArgTypes_33 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_42 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_38;

      succeeded = ((((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_38 = ((MR_Word) ((MR_hl_field(3, Functor_3, (MR_Integer) 1))));
        {
          MR_Word Type_41;
          MR_Word Var_44;

          {
            Type_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_41, 0) = ((MR_Box) (SymName_38));
            MR_hl_field(1, Type_41, 1) = ((MR_Box) (ArgTypes_33));
            MR_hl_field(1, Type_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_44 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_30, InstVarSet_1, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_31, Type_41);
          ArgPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[63])));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_53 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_30, InstVarSet_1, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_31, ConsType_32);
    ThisPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_42, Var_53);
    if ((ConsDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = ThisPieces_15;
    else
    {
      MR_Word ConnectPieces_18;
      MR_Word TailPieces_19;
      MR_Word Var_28;

      succeeded = (Arity_4 == (MR_Integer) 0);
      if (succeeded)
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21]));
      else
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[152]));
      TailPieces_19 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_1, ConsDefns_11, Functor_3, Arity_4);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConnectPieces_18, TailPieces_19);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisPieces_15, Var_28);
    }
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word Functor_4,
  MR_Integer Arity_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_Word StrippedFunctor_7;

  parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_4, &StrippedFunctor_7);
  succeeded = (Arity_5 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Piece2_12;
    MR_Word Var_17;
    MR_Word Name_9;

    succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Name_9 = ((MR_Word) ((MR_hl_field(3, Functor_4, (MR_Integer) 1))));
      {
        Piece2_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Piece2_12, 1) = ((MR_Box) (Name_9));
      }
    }
    else
    {
      MR_String Var_16;

      Var_16 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(StrippedFunctor_7);
      {
        Piece2_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Piece2_12, 1) = ((MR_Box) (Var_16));
      }
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Piece2_12));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Word Var_19;
    MR_String Var_20;

    succeeded = ((((MR_tag((MR_Word) Functor_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(3, Functor_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Arity_5 - (MR_Unsigned) 1);

      {
        Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[47])));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[156])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_23));
      }
    }
    else
    {
      MR_Word Var_33;
      MR_Word Var_34;

      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 25U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (Functor_4));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[157])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_33));
      }
    }
  }
  return Pieces_6;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  parse_tree__prog_data__int_type_module_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_IntType_4;

  succeeded = check_hlds__typecheck_errors__is_int_n_module_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_IntType_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_IntType_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_26;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1206__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_26);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(
  MR_Word ClauseContext_4,
  MR_Word BuiltinTypes_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_Word IntTypes_8;
  MR_Word HeadInvisIntType_14;
  MR_Word TailInvisIntTypes_15;
  MR_Word TypeCtorInfo_77_77;
  MR_Word ModuleInfo_9;
  MR_Word VisModules_10;
  MR_Word VisIntTypes_11;
  MR_Word InvisIntTypes_12;
  MR_Word InvisIntTypesList_13;
  MR_Word Var_27;

  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[6]), BuiltinTypes_5, &IntTypes_8);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), IntTypes_8);
  if (succeeded)
  {
    ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_9, &VisModules_10);
    Var_27 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[7]);
    TypeCtorInfo_77_77 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    mercury__set__filter_map_3_p_0(TypeCtorInfo_77_77, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), Var_27, VisModules_10, &VisIntTypes_11);
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), IntTypes_8, VisIntTypes_11, &InvisIntTypes_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), InvisIntTypes_12, &InvisIntTypesList_13);
    succeeded = (InvisIntTypesList_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadInvisIntType_14 = ((MR_Word) ((MR_hl_field(1, InvisIntTypesList_13, (MR_Integer) 0))));
      TailInvisIntTypes_15 = ((MR_Word) ((MR_hl_field(1, InvisIntTypesList_13, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String HeadInvisIntTypeStr_16;
    MR_Word TailInvisIntTypeStrs_19;

    parse_tree__prog_data__int_type_module_name_2_p_0(HeadInvisIntType_14, &HeadInvisIntTypeStr_16);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[8]), TailInvisIntTypes_15, &TailInvisIntTypeStrs_19);
    if ((TailInvisIntTypeStrs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_41;

      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (HeadInvisIntTypeStr_16));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[148])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[146])));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[145])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[144])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_33));
      }
    }
    else
    {
      MR_Word InvisIntTypeStrs_22;
      MR_Word InvisIntTypePieces_23;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;

      {
        InvisIntTypeStrs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InvisIntTypeStrs_22, 0) = ((MR_Box) (HeadInvisIntTypeStr_16));
        MR_hl_field(1, InvisIntTypeStrs_22, 1) = ((MR_Box) (TailInvisIntTypeStrs_19));
      }
      InvisIntTypePieces_23 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(InvisIntTypeStrs_22);
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[149])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (InvisIntTypePieces_23));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[146])));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (InvisIntTypePieces_23));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[145])));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
      }
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[151])));
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_52);
    }
  }
  else
    Pieces_6 = (MR_Word) ((MR_Unsigned) 0U);
  return Pieces_6;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_BuiltinTypes_25;

  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BuiltinTypes_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BuiltinTypes_25));
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_2,
  MR_Word * STATE_VARIABLE_BuiltinTypes_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BuiltinTypes_3 = STATE_VARIABLE_BuiltinTypes_0_2;
    else
    {
      MR_Word ConsTypeInfo_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsTypeInfos_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ResultType_12 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_7, (MR_Integer) 2))));
      MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_7, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_BuiltinTypes_18_18;
      MR_Word STATE_VARIABLE_BuiltinTypes_20_20;
      MR_Box conv1_STATE_VARIABLE_BuiltinTypes_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BuiltinTypes_0_2;

      check_hlds__typecheck_errors__acc_builtin_type_3_p_0(ResultType_12, STATE_VARIABLE_BuiltinTypes_0_2, &STATE_VARIABLE_BuiltinTypes_18_18);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[5]), ArgTypes_13, ((MR_Box) (STATE_VARIABLE_BuiltinTypes_18_18)), &conv1_STATE_VARIABLE_BuiltinTypes_20_20);
      STATE_VARIABLE_BuiltinTypes_20_20 = ((MR_Word) (conv1_STATE_VARIABLE_BuiltinTypes_20_20));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsTypeInfos_8;
      next_value_of_STATE_VARIABLE_BuiltinTypes_0_2 = STATE_VARIABLE_BuiltinTypes_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BuiltinTypes_0_2 = next_value_of_STATE_VARIABLE_BuiltinTypes_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_24,
  MR_Word * STATE_VARIABLE_BuiltinTypes_25)
{
  switch (MR_tag((MR_Word) Type_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_6 = ((MR_Word) ((MR_hl_field(2, Type_4, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), ((MR_Box) (BuiltinType_6)), STATE_VARIABLE_BuiltinTypes_0_24, STATE_VARIABLE_BuiltinTypes_25);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_BuiltinTypes_25 = STATE_VARIABLE_BuiltinTypes_0_24;
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_BuiltinTypes_25;

  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BuiltinTypes_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BuiltinTypes_25));
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__typecheck_error_type_assign__typestuff_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0(
  MR_Word TypeAssignSet_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_BuiltinTypes_0_10,
  MR_Word * STATE_VARIABLE_BuiltinTypes_11)
{
  MR_Word VarTypeStuffs_8;
  MR_Word TypesOfVar_9;
  MR_Box conv2_STATE_VARIABLE_BuiltinTypes_11;

  check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_5, Var_6, &VarTypeStuffs_8);
  TypesOfVar_9 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[3]), VarTypeStuffs_8);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[4]), TypesOfVar_9, ((MR_Box) (STATE_VARIABLE_BuiltinTypes_0_10)), &conv2_STATE_VARIABLE_BuiltinTypes_11);
  *STATE_VARIABLE_BuiltinTypes_11 = ((MR_Word) (conv2_STATE_VARIABLE_BuiltinTypes_11));
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_lambda_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word PredOrFunc_13,
  MR_Word Var_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet_17)
{
  MR_Word Spec_18;

  Spec_18 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_117_110_105_102_121_95_118_97_114_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_f_0(Info_10, UnifyContext_11, Context_12, PredOrFunc_13, Var_15, ArgVars_16, TypeAssignSet_17);
  return Spec_18;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_117_110_105_102_121_95_118_97_114_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word PredOrFunc_13,
  MR_Word Var_15,
  MR_Word ArgVars_16,
  MR_Word TypeAssignSet_17)
{
  MR_Word Spec_18;
  MR_Word ClauseContext_19;
  MR_Word InClauseForPieces_20;
  MR_Word ContextPieces_21;
  MR_Word VarSet_22;
  MR_Word InstVarSet_23;
  MR_Word Pieces1_24;
  MR_Word Pieces2_25;
  MR_Word Pieces3_28;
  MR_Word LambdaTypePieces_29;
  MR_Word Pieces4_39;
  MR_Word MainPieces_40;
  MR_Word VerboseComponent_41;
  MR_Word Msg_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_128;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_148;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
  InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_23);
  Var_48 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_15);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Pieces1_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_47);
  Var_92 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_15);
  Var_94 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_23, TypeAssignSet_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_15);
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Pieces3_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_93);
  switch (PredOrFunc_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_26;
        MR_Word RetVar_27;
        MR_Word FuncArgVars_35;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_String Var_76;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_String Var_85;
        MR_Box conv0_RetVar_27;
        MR_Box conv1_Var_36;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_16, &FuncArgs_26, &conv0_RetVar_27);
        RetVar_27 = ((MR_Word) (conv0_RetVar_27));
        Var_76 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, FuncArgs_26);
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
        }
        Var_85 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, RetVar_27);
        {
          Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[28])));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[0])));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26])));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[25])));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Pieces2_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Pieces2_25, 1) = ((MR_Box) (Var_71));
        }
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_16, &FuncArgVars_35, &conv1_Var_36);
        if ((FuncArgVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[32]));
        else
        {
          MR_Integer Var_118;
          MR_Word Var_122;
          MR_String Var_123;
          MR_String Var_125;
          MR_Integer NumArgVars_150;
          MR_Word Strings_151;
          MR_String JoinedString_152;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), FuncArgVars_35, &NumArgVars_150);
          Var_118 = (MR_Integer) ((MR_Unsigned) NumArgVars_150 - (MR_Unsigned) 1);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_118, ((MR_Box) ((MR_String) ", _")), &Strings_151);
          JoinedString_152 = mercury__string__join_list_2_f_0((MR_String) "", Strings_151);
          Var_125 = mercury__string__f_43_43_2_f_0(JoinedString_152, (MR_String) ") = _");
          Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_125);
          {
            Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_122, 1) = ((MR_Box) (Var_123));
          }
          {
            LambdaTypePieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_29, 0) = ((MR_Box) (Var_122));
            MR_hl_field(1, LambdaTypePieces_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_String Var_59;

        Var_59 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, ArgVars_16);
        {
          Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[30])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[29])));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Pieces2_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Pieces2_25, 1) = ((MR_Box) (Var_54));
        }
        if ((ArgVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[34]));
        else
        {
          MR_Integer NumArgVars_32;
          MR_Word Strings_33;
          MR_String JoinedString_34;
          MR_Integer Var_105;
          MR_Word Var_109;
          MR_String Var_110;
          MR_String Var_112;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_16, &NumArgVars_32);
          Var_105 = (MR_Integer) ((MR_Unsigned) NumArgVars_32 - (MR_Unsigned) 1);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, ((MR_Box) ((MR_String) ", _")), &Strings_33);
          JoinedString_34 = mercury__string__join_list_2_f_0((MR_String) "", Strings_33);
          Var_112 = mercury__string__f_43_43_2_f_0(JoinedString_34, (MR_String) ")");
          Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_112);
          {
            Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_110));
          }
          {
            LambdaTypePieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_29, 0) = ((MR_Box) (Var_109));
            MR_hl_field(1, LambdaTypePieces_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[35])));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (LambdaTypePieces_29));
  }
  Pieces4_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces3_28, Pieces4_39);
  Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_25, Var_138);
  MainPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_24, Var_137);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_22, TypeAssignSet_17, &VerboseComponent_41);
  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (ContextPieces_21));
  }
  {
    Var_142 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_142, 0) = ((MR_Box) (MainPieces_40));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (VerboseComponent_41));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_141));
  }
  {
    Msg_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_42, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_42, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (Msg_42));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_lambda\'/8"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_148));
  }
  return Spec_18;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_String Var_7;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5, &Var_7);
  if (succeeded)
  {
    MR_Word Var_10;
    MR_Word Var_11;
    MR_String Var_12;

    Var_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5);
    {
      Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[153])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_10));
    }
  }
  else
    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[154]));
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_var_6_f_0(
  MR_Word Info_8,
  MR_Word UnifyContext_9,
  MR_Word Context_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word TypeAssignSet_13)
{
  MR_Word Spec_14;
  MR_Word ClauseContext_15;
  MR_Word InClauseForPieces_16;
  MR_Word ContextPieces_17;
  MR_Word VarSet_18;
  MR_Word InstVarSet_19;
  MR_Word MainPieces_20;
  MR_Word VerboseComponent_21;
  MR_Word Msg_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_String Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_79;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_9, InClauseForPieces_16, &ContextPieces_17);
  VarSet_18 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_19);
  Var_28 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, X_11);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Var_28));
  }
  Var_36 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Y_12);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (Var_36));
  }
  Var_44 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, X_11);
  {
    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10])));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[19])));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[18])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  Var_47 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_19, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), X_11);
  Var_59 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Y_12);
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_62 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_19, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])), Y_12);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_61);
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])), Var_56);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
  MainPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_46);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_18, TypeAssignSet_13, &VerboseComponent_21);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (ContextPieces_17));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (MainPieces_20));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (VerboseComponent_21));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Msg_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_22, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_22, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Msg_22));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_var\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_79));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__typecheck_error_type_assign__typestuff_to_pieces_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(
  MR_Word InstVarSet_6,
  MR_Word TypeAssignSet_7,
  MR_Word SuffixPieces_8,
  MR_Word Var_9)
{
  MR_bool succeeded;
  MR_Word Pieces_10;
  MR_Word TypePiecesLists0_11;
  MR_Word TypePiecesLists_12;
  MR_Word Var_14;
  MR_Word Var_16;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (InstVarSet_6));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Var_14, TypeAssignSet_7, Var_9, &TypePiecesLists0_11);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), TypePiecesLists0_11, &TypePiecesLists_12);
  succeeded = (TypePiecesLists_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(1, TypePiecesLists_12, (MR_Integer) 1))));
    succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_24;
    MR_Word Var_27;

    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_8, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
    Var_24 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_12, Var_27);
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])), Var_24);
  }
  else
  {
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;

    Var_40 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_12, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[161])), SuffixPieces_8);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[159])), Var_39);
  }
  return Pieces_10;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_invalid_coerce_from_to_5_f_0(
  MR_Word ClauseContext_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word FromType_10,
  MR_Word ToType_11)
{
  MR_Word Spec_12;
  MR_Word InClauseForPieces_13;
  MR_String FromTypeStr_14;
  MR_String ToTypeStr_15;
  MR_Word ErrorPieces_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_37;

  InClauseForPieces_13 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_7);
  FromTypeStr_14 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, FromType_10);
  ToTypeStr_15 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, ToType_11);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (FromTypeStr_14));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (ToTypeStr_15));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[17])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    ErrorPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[16])));
    MR_hl_field(1, ErrorPieces_16, 1) = ((MR_Box) (Var_21));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, ErrorPieces_16);
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(1, Spec_12, 3) = ((MR_Box) (Context_8));
    MR_hl_field(1, Spec_12, 4) = ((MR_Box) (Var_37));
  }
  return Spec_12;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_String VarName_7)
{
  MR_Word Spec_8;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 0))));
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, ClauseContext_5, (MR_Integer) 1))));
  MR_Word Pieces_11;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;

  Var_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_9, (MR_Integer) 0, PredId_10);
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (VarName_7));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[15])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[14])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_17);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_missing_tvar_in_foreign_code\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = check_hlds__typecheck_errors__unproven_constraints_to_pieces_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0(
  MR_Word ClauseContext_5,
  MR_Word Context_6,
  MR_Word TypeAssignSet_7)
{
  MR_bool succeeded;
  MR_Word Spec_8;
  MR_Word InClauseForPieces_9;
  MR_Word UnprovenNumConstraintPieceLists0_10;
  MR_Word UnprovenNumConstraintPieceLists_11;
  MR_Word ErrorPieces_13;
  MR_Word Var_44;
  MR_Word UnprovenConstraintPieces_12;
  MR_Word Var_16;
  MR_Integer Var_17;
  MR_Word Var_18;

  InClauseForPieces_9 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[2]), TypeAssignSet_7, &UnprovenNumConstraintPieceLists0_10);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), UnprovenNumConstraintPieceLists0_10, &UnprovenNumConstraintPieceLists_11);
  succeeded = (UnprovenNumConstraintPieceLists_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(1, UnprovenNumConstraintPieceLists_11, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, UnprovenNumConstraintPieceLists_11, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_17 = ((MR_Integer) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
      UnprovenConstraintPieces_12 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
      succeeded = (Var_17 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word Var_19;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (UnprovenConstraintPieces_12));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[8])));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
    }
    ErrorPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  }
  else
  {
    MR_Word UnprovenConstraintPieceLists_14;
    MR_Word Var_32;
    MR_Word Var_34;

    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), UnprovenNumConstraintPieceLists_11, &UnprovenConstraintPieceLists_14);
    Var_34 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(UnprovenConstraintPieceLists_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      ErrorPieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ErrorPieces_13, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[12])));
      MR_hl_field(1, ErrorPieces_13, 1) = ((MR_Box) (Var_32));
    }
  }
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_9, ErrorPieces_13);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Var_44));
  }
  return Spec_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____arg_vector_type_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____arg_vector_type_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____does_actual_subsume_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____does_actual_subsume_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____does_some_type_stuff_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____does_some_type_stuff_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____maybe_print_expectation_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____maybe_print_expectation_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____mismatch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____mismatch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____spec_and_maybe_actual_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____spec_and_maybe_actual_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____type_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_errors____Unify____type_mismatch_special_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_errors____Compare____type_mismatch_special_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_errors__init(void)
{
}

void mercury__check_hlds__typecheck_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_actual_subsume_expected_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_maybe_print_expectation_source_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_spec_and_maybe_actual_expected_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0);
}

void mercury__check_hlds__typecheck_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_errors.
