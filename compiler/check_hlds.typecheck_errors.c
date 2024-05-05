/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2024-05-05
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
#include "parse_tree.parse_tree_output.mih"
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
#include "recompilation.record_uses.mih"
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
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_74;
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168;
  MR_Box check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_168;
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
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1829__1_2_p_0(
  MR_Integer ActualNumArgTypes_36,
  MR_Integer ExpectedNumArgTypes_37);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1591__1_1_p_0(
  MR_Word LambdaHeadVar__1_9);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1513__1_1_f_0(
  MR_Word LambdaHeadVar__1_96);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1489__1_1_f_0(
  MR_Word LambdaHeadVar__1_61);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1259__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27);

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

static MR_bool MR_CALL 
check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0(
  MR_Word ActualExpectedList_3,
  MR_Word * MaybePrintSource_4);

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
check_hlds__typecheck_errors__types_of_vars_to_pieces_7_f_0(
  MR_Word VarSet_9,
  MR_Word InstVarSet_10,
  MR_Word MaybeColor_11,
  MR_Word TypeAssignSet_12,
  MR_Word FinalPieces_13,
  MR_Word HeadVar_14,
  MR_Word TailVars_15);

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
check_hlds__typecheck_errors__expected_types_all_same_return_actuals_3_p_0(
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
check_hlds__typecheck_errors__type_of_functor_to_pieces_6_f_0(
  MR_Word InstVarSet_8,
  MR_Word MaybeColor_9,
  MR_Word Functor_10,
  MR_Integer Arity_11,
  MR_Word ConsDefnList_12,
  MR_Word SuffixPieces_13);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word ConsId_4,
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
  MR_Word STATE_VARIABLE_BuiltinTypes_0_23,
  MR_Word * STATE_VARIABLE_BuiltinTypes_24);

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

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_func_op_1_p_0(
  MR_Word ConsId_2);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(
  MR_Word InstVarSet_7,
  MR_Word MaybeColor_8,
  MR_Word TypeAssignSet_9,
  MR_Word SuffixPieces_10,
  MR_Word Var_11);

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


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[222][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[18][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[10][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[4][7];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[2][6];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[2][4];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_9[1][11];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_10[1][8];


struct check_hlds__typecheck_errors__vector_common_type_6_0_s {
  const MR_String check_hlds__typecheck_errors__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_6_0_s check_hlds__typecheck_errors_vector_common_6[39];



static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[222][2] = {
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
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Another possible reason for the error is that"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the signatures of the option processing predicates"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "option_error_to_string"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which can be converted to a string by calling the"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Errors are now returned in a structured form,"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have changed recently."))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(the actual type is the same as the expected type of"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[40])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are unsigned."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u64"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u32"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u16"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u8"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are signed, and"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i64"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i32"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i16"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i8"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constants of sized integer types should have"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the suffix"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Unsigned integer constants of the default size"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is always of type"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A integer constant that consists only of digits"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that operations on values of type"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are available"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "only if the"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module is imported."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Note that operations on values of types"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "modules respectively are imported."))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[162]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[165]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following inferred types:"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was one of"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type expected by"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[173]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "apply_n type constructor"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[175]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the tuple type constructor"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[178]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not allowed for existentially typed arguments."))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[180]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The context requires a specific type, but this is"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch for"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[184]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Predicate vs function mismatch:"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected a"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got a"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity mismatch:"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual type"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode says"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is a"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the expected type"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch:"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type has"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode information says it has"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[204]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 206 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Mode mismatch:"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual and expected modes of the"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "differ."))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[209]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Determinism mismatch:"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the expected determinism is"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[216]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 220 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[220])))
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
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[0])),
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
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[0])),
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
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1])),
    ((MR_Box) (check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[8])),
    ((MR_Box) (check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[1])),
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 3)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "=")) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "Functor")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "Argument")) },
  /* row   6 */
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[2][6] = {
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[2][4] = {
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


static /* final */ const struct check_hlds__typecheck_errors__vector_common_type_6_0_s check_hlds__typecheck_errors_vector_common_6[39] = {
  /* row   0 */   { (MR_String) "+" },
  /* row   1 */   { (MR_String) "-" },
  /* row   2 */   { (MR_String) "\\" },
  /* row   3 */   { (MR_String) "abs" },
  /* row   4 */   { (MR_String) "log2" },
  /* row   5 */   { (MR_String) "nabs" },
  /* row   6 */   { (MR_String) "unchecked_abs" },
  /* row   7 */   { NULL },
  /* row   8 */   { (MR_String) ">=" },
  /* row   9 */   { NULL },
  /* row  10 */   { (MR_String) "=<" },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { (MR_String) "min" },
  /* row  17 */   { NULL },
  /* row  18 */   { (MR_String) "pow" },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { (MR_String) "log2" },
  /* row  26 */   { (MR_String) "abs" },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { (MR_String) "max" },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { (MR_String) "<" },
  /* row  37 */   { NULL },
  /* row  38 */   { (MR_String) ">" },
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
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1829__1_2_p_0(
  MR_Integer ActualNumArgTypes_36,
  MR_Integer ExpectedNumArgTypes_37)
{
  MR_bool succeeded = (ActualNumArgTypes_36 == ExpectedNumArgTypes_37);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1591__1_1_p_0(
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
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1513__1_1_f_0(
  MR_Word LambdaHeadVar__1_96)
{
  MR_Word LambdaHeadVar__2_97 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_96, (MR_Integer) 2))));

  return LambdaHeadVar__2_97;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1489__1_1_f_0(
  MR_Word LambdaHeadVar__1_61)
{
  MR_Word LambdaHeadVar__2_62 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_61, (MR_Integer) 0))));

  return LambdaHeadVar__2_62;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1259__1_2_p_0(
  MR_Word LambdaHeadVar__1_26,
  MR_Word * LambdaHeadVar__2_27)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_26)) == (MR_Integer) 1);

  if (succeeded)
    *LambdaHeadVar__2_27 = ((MR_Unsigned) ((MR_hl_field(1, LambdaHeadVar__1_26, (MR_Integer) 0))) & (MR_Integer) 15);
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

  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgType_15, &StrippedArgType_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedArgType_19, &FullArgType_20);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedExpType_11, &FullExpType_21);
  succeeded = check_hlds__typecheck_error_util__identical_types_2_p_0(FullArgType_20, FullExpType_21);
  if (!(succeeded))
  {
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word Var_45;

    succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
      succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_44 = ((MR_String) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
          succeeded = (strcmp(Var_44, (MR_String) "<any>") == 0);
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
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

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
      Var_51 = ((MR_Word) ((MR_hl_field(2, FullExpType_21, (MR_Integer) 0))));
      succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgTypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
          Var_54 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 2))));
          succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
              succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
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
    str_1 = ((&check_hlds__typecheck_errors_vector_common_6[7 + slot_0]))->check_hlds__typecheck_errors__vector_common_type_6_0__vct_6_f_0;
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
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) (Var_44));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) (Var_45));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) (Var_46));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_47));
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
  MR_bool succeeded;
  MR_Word SuffixPiece_11;
  MR_Word TailPieces_12;
  MR_Integer ArgNum_15;
  MR_Word Var_16;
  MR_Word ActualExpected_17;
  MR_Word ActualPieces_18;
  MR_Word ExpectedPieces0_20;
  MR_Word ExpectedPieces_25;
  MR_Word NlSwitchedPosPieces_26;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_71;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word SwitchedPosPieces_91;
  MR_String Var_105;

  if ((TailErrors_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[10]));
    TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 0))));
    MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 1))));

    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[90]));
    check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_6, AllErrors_7, HeadTailError_13, TailTailErrors_14, &TailPieces_12);
  }
  ArgNum_15 = ((MR_Integer) ((MR_hl_field(0, HeadError_8, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, HeadError_8, (MR_Integer) 1))));
  ActualExpected_17 = ((MR_Word) ((MR_hl_field(0, HeadError_8, (MR_Integer) 2))));
  ActualPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, (MR_Integer) 0))));
  ExpectedPieces0_20 = ((MR_Word) ((MR_hl_field(0, ActualExpected_17, (MR_Integer) 2))));
  check_hlds__typecheck_errors__find_expecteds_matching_actual_4_p_0(VarSet_6, ActualPieces_18, AllErrors_7, &SwitchedPosPieces_91);
  if ((SwitchedPosPieces_91 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (SuffixPiece_11));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ExpectedPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces0_20, Var_31);
    NlSwitchedPosPieces_26 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60]));
  }
  else
  {
    MR_Word Var_94;
    MR_Word Var_99;
    MR_Word SwitchedPosPieces_123;

    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_91, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])));
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[94])), Var_99);
    SwitchedPosPieces_123 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Var_94);
    if ((SwitchedPosPieces_123 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_117;

      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ExpectedPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces0_20, Var_117);
      NlSwitchedPosPieces_26 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60]));
    }
    else
    {
      MR_Word Var_40;
      MR_Word Var_41;

      ExpectedPieces_25 = ExpectedPieces0_20;
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_123, Var_41);
      NlSwitchedPosPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_40);
    }
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (ArgNum_15));
  }
  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_16, &Var_105);
  if (succeeded)
  {
    MR_Word Var_108;
    MR_Word Var_109;
    MR_String Var_110;

    Var_110 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_16);
    {
      Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_108));
    }
  }
  else
    Var_55 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
  Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[91])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_18, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])));
  Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
  Var_83 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedPieces_25);
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[59])));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (TailPieces_12));
  }
  Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NlSwitchedPosPieces_26, Var_85);
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_84);
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])), Var_82);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_71);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_64);
  *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_56);
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
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[96])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[95])));
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
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[95])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_43));
        }
      }
      if ((TailSwitchedPosPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadSwitchedPosPieces_23;
      else
      {
        MR_Word Var_52;

        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[97])), TailSwitchedPosPieces_12);
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
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type_arg\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_43));
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
    NoSuffixIntegerPieces_25 = parse_tree__error_spec__color_as_possible_cause_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[145])));
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
    Spec_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_29, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type\'/6"));
    MR_hl_field(2, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_29, 3) = ((MR_Box) (Var_47));
  }
  {
    SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_29));
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_21));
  }
  return SpecAndMaybeActualExpected_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_97;

  conv1_LambdaHeadVar__2_97 = check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1513__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_97));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_actual_expected_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_62;

  conv0_LambdaHeadVar__2_62 = check_hlds__typecheck_errors__IntroducedFrom__func__report_actual_expected_types__1489__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_62));
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
  MR_Word ActualPartPieces_20;
  MR_Word ExpectedPartPieces_26;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_114;
  MR_String Var_148;
  MR_Word ActualExpected_31;
  MR_Word Var_115;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, Var_8, &Var_148);
  if (succeeded)
  {
    MR_Word Var_151;
    MR_Word Var_152;
    MR_String Var_153;

    Var_153 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, Var_8);
    {
      Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_152, 1) = ((MR_Box) (Var_153));
    }
    {
      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
      MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_151));
    }
  }
  else
    Var_43 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
  Var_42 = parse_tree__error_spec__color_as_subject_1_f_0(Var_43);
  TypeErrorPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[166])), Var_42);
  if ((ActualExpectedList_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeSingleActual_15 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeSingleExpected_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word AE_160 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 0))));
    MR_Word AEs_161 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 1))));
    MR_Word ActualPieces_164 = ((MR_Word) ((MR_hl_field(0, AE_160, (MR_Integer) 0))));
    MR_Word ExpectedPieces_166 = ((MR_Word) ((MR_hl_field(0, AE_160, (MR_Integer) 2))));
    MR_Word Var_170;
    MR_Word Var_171;

    {
      Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_170, 0) = ((MR_Box) (ActualPieces_164));
    }
    {
      Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_171, 0) = ((MR_Box) (ExpectedPieces_166));
    }
    check_hlds__typecheck_errors__is_actual_or_expected_single_type_loop_5_p_0(AEs_161, Var_170, &MaybeSingleActual_15, Var_171, &MaybeSingleExpected_16);
  }
  if ((MaybeSingleActual_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ActualPieceLists_21;
    MR_Word Var_74;
    MR_Word ActualColonPieces0_118;
    MR_Word ActualColonPieces_119;

    ActualPieceLists_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[14]), ActualExpectedList_9);
    ActualColonPieces0_118 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(ActualPieceLists_21, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[167])));
    ActualColonPieces_119 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualColonPieces0_118);
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualColonPieces_119, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    ActualPartPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[169])), Var_74);
  }
  else
  {
    MR_Word SingleActualPieces_17 = ((MR_Word) ((MR_hl_field(1, MaybeSingleActual_15, (MR_Integer) 0))));
    MR_Word ActualColonPieces0_18;
    MR_Word ActualColonPieces_19;
    MR_Word Var_55;

    ActualColonPieces0_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleActualPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[167])));
    ActualColonPieces_19 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualColonPieces0_18);
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualColonPieces_19, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    ActualPartPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_55);
  }
  if ((MaybeSingleExpected_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybePrintSource_27;

    check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0(ActualExpectedList_9, &MaybePrintSource_27);
    switch (MaybePrintSource_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExpectedPieceLists_28;
          MR_Word Var_109;
          MR_Word ExpectedDotPieces0_121;
          MR_Word ExpectedDotPieces_122;

          ExpectedPieceLists_28 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[15]), ActualExpectedList_9);
          ExpectedDotPieces0_121 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(ExpectedPieceLists_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
          ExpectedDotPieces_122 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces0_121);
          Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedDotPieces_122, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
          ExpectedPartPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[171])), Var_109);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_29 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, (MR_Integer) 0))));
          MR_Word Var_30;

          check_hlds__typecheck_errors__acc_expected_type_source_pieces_4_p_0(ModuleInfo_29, ActualExpectedList_9, &Var_30, &ExpectedPartPieces_26);
        }
        break;
    }
  }
  else
  {
    MR_Word SingleExpectedPieces_23 = ((MR_Word) ((MR_hl_field(1, MaybeSingleExpected_16, (MR_Integer) 0))));
    MR_Word ExpectedDotPieces0_24;
    MR_Word ExpectedDotPieces_25;
    MR_Word Var_90;

    ExpectedDotPieces0_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleExpectedPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
    ExpectedDotPieces_25 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces0_24);
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedDotPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    ExpectedPartPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_90);
  }
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPartPieces_20, ExpectedPartPieces_26);
  *ActualExpectedPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeErrorPieces_14, Var_114);
  succeeded = (ActualExpectedList_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpected_31 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 0))));
    Var_115 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, (MR_Integer) 1))));
    succeeded = (Var_115 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ActualType_33;
    MR_Word ExpectedType_35;
    MR_Word ExistQTVars_36;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeActualExpected_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ActualExpected_31));
    }
    ActualType_33 = ((MR_Word) ((MR_hl_field(0, ActualExpected_31, (MR_Integer) 1))));
    ExpectedType_35 = ((MR_Word) ((MR_hl_field(0, ActualExpected_31, (MR_Integer) 3))));
    ExistQTVars_36 = ((MR_Word) ((MR_hl_field(0, ActualExpected_31, (MR_Integer) 4))));
    *DiffPieces_12 = check_hlds__typecheck_errors__type_diff_pieces_4_f_0((MR_Word) ((MR_Unsigned) 0U), ExistQTVars_36, ActualType_33, ExpectedType_35);
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
      MR_Word CausePieces_15;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_42;

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
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[188])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[187])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186])));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47])));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
      }
      Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_8, Var_22);
      CausePieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[185])), Var_21);
      Var_42 = parse_tree__error_spec__color_as_possible_cause_1_f_0(CausePieces_15);
      DiffPieces_12 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_7, Var_42);
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
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_type_list_diff_pieces_loop\'/6", (MR_String) "list length mismatch");
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.arg_type_list_diff_pieces_loop\'/6", (MR_String) "list length mismatch");
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
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[217])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[215])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_2, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[218])));
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

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1829__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_DiffPieces_52;
  MR_Word STATE_VARIABLE_DiffPieces_73_73;
  MR_Word STATE_VARIABLE_DiffPieces_99_99;
  MR_Word STATE_VARIABLE_DiffPieces_109_109;

  if (succeeded)
    STATE_VARIABLE_DiffPieces_73_73 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExpActPredFuncCausePieces_23;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_74;
    MR_Word Var_75;

    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_60, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_68, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[191])));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[190])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      ExpActPredFuncCausePieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExpActPredFuncCausePieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[189])));
      MR_hl_field(1, ExpActPredFuncCausePieces_23, 1) = ((MR_Box) (Var_56));
    }
    Var_75 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ExpActPredFuncCausePieces_23);
    Var_74 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_75);
    STATE_VARIABLE_DiffPieces_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) ((MR_Unsigned) 0U), Var_74);
  }
  succeeded = (ActualPurity_20 == ExpectedPurity_21);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_99_99 = STATE_VARIABLE_DiffPieces_73_73;
  else
  {
    MR_Word ExpActPurityCausePieces_24;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_100;
    MR_Word Var_101;

    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 30U));
      MR_hl_field(3, Var_82, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPurity_21));
    }
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_84, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
    }
    {
      Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 30U));
      MR_hl_field(3, Var_92, 1) = (MR_Box) ((MR_Unsigned) (ActualPurity_20));
    }
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_94, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[188])));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186])));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      ExpActPurityCausePieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExpActPurityCausePieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[192])));
      MR_hl_field(1, ExpActPurityCausePieces_24, 1) = ((MR_Box) (Var_78));
    }
    Var_101 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ExpActPurityCausePieces_24);
    Var_100 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_101);
    STATE_VARIABLE_DiffPieces_99_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_73_73, Var_100);
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ((MR_Box) (ActualArgTypes_16)), ((MR_Box) (ExpectedArgTypes_17)));
  if (succeeded)
    STATE_VARIABLE_DiffPieces_109_109 = STATE_VARIABLE_DiffPieces_99_99;
  else
  {
    MR_Word TypeCtorPieces_25;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_110;

    {
      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_107, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[193])));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      TypeCtorPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeCtorPieces_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, TypeCtorPieces_25, 1) = ((MR_Box) (Var_103));
    }
    Var_110 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_12, TypeCtorPieces_25, ExistQTVars_13, ActualArgTypes_16, ExpectedArgTypes_17);
    STATE_VARIABLE_DiffPieces_109_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_99_99, Var_110);
  }
  succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(ActualInstInfo_18, ExpectedInstInfo_19);
  if (succeeded)
    STATE_VARIABLE_DiffPieces_52 = STATE_VARIABLE_DiffPieces_109_109;
  else
  {
    MR_Word ActualPredInstInfo_26;
    MR_Word ExpectedPredInstInfo_27;

    succeeded = (ActualInstInfo_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualPredInstInfo_26 = (MR_Word) (MR_body((MR_Word) (ActualInstInfo_18), (MR_Integer) 1));
      succeeded = (ExpectedInstInfo_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ExpectedPredInstInfo_27 = (MR_Word) (MR_body((MR_Word) (ExpectedInstInfo_19), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word ActualHOPorF_28 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_26, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ActualArgModes_29 = ((MR_Word) ((MR_hl_field(0, ActualPredInstInfo_26, (MR_Integer) 1))));
      MR_Word ActualDetism_31 = ((MR_Unsigned) ((MR_hl_field(0, ActualPredInstInfo_26, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Word ExpectedHOPorF_32 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_27, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ExpectedArgModes_33 = ((MR_Word) ((MR_hl_field(0, ExpectedPredInstInfo_27, (MR_Integer) 1))));
      MR_Word ExpectedDetism_35 = ((MR_Unsigned) ((MR_hl_field(0, ExpectedPredInstInfo_27, (MR_Integer) 3))) & (MR_Integer) 7);
      MR_Integer ActualNumArgTypes_36;
      MR_Integer ExpectedNumArgTypes_37;
      MR_Integer ActualNumArgModes_38;
      MR_Integer ExpectedNumArgModes_39;
      MR_Word Var_111;
      MR_Word STATE_VARIABLE_DiffPieces_139_139;
      MR_Word STATE_VARIABLE_DiffPieces_167_167;
      MR_Word STATE_VARIABLE_DiffPieces_197_197;
      MR_Word STATE_VARIABLE_DiffPieces_227_227;
      MR_Word STATE_VARIABLE_DiffPieces_241_241;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_16, &ActualNumArgTypes_36);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExpectedArgTypes_17, &ExpectedNumArgTypes_37);
      {
        Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_111, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[7]));
        MR_hl_field(0, Var_111, 1) = ((MR_Box) (check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0_1));
        MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_111, 3) = ((MR_Box) (ActualNumArgTypes_36));
        MR_hl_field(0, Var_111, 4) = ((MR_Box) (ExpectedNumArgTypes_37));
      }
      mercury__require__expect_3_p_0(Var_111, (MR_String) "function \140check_hlds.typecheck_errors.higher_order_diff_pieces\'/10", (MR_String) "ActualNumArgTypes != ExpectedNumArgTypes");
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ActualArgModes_29, &ActualNumArgModes_38);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExpectedArgModes_33, &ExpectedNumArgModes_39);
      succeeded = (ActualHOPorF_28 == ActualPorF_14);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_139_139 = STATE_VARIABLE_DiffPieces_109_109;
      else
      {
        MR_Word ActPredFuncTypeModeCausePieces_40;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_127;
        MR_Word Var_130;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_140;
        MR_Word Var_141;

        {
          Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_123, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_134, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_28));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
          MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[195])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[194])));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          ActPredFuncTypeModeCausePieces_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ActPredFuncTypeModeCausePieces_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[189])));
          MR_hl_field(1, ActPredFuncTypeModeCausePieces_40, 1) = ((MR_Box) (Var_116));
        }
        Var_141 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ActPredFuncTypeModeCausePieces_40);
        Var_140 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_141);
        STATE_VARIABLE_DiffPieces_139_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_109_109, Var_140);
      }
      succeeded = (ExpectedHOPorF_32 == ExpectedPorF_15);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_167_167 = STATE_VARIABLE_DiffPieces_139_139;
      else
      {
        MR_Word ExpPredFuncTypeModeCausePieces_41;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_155;
        MR_Word Var_158;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_168;
        MR_Word Var_169;

        {
          Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_151, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_162, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_162, 1) = (MR_Box) ((MR_Unsigned) (ActualHOPorF_28));
        }
        {
          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
          MR_hl_field(1, Var_161, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_158, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
          MR_hl_field(1, Var_158, 1) = ((MR_Box) (Var_161));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_158));
        }
        {
          Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
        }
        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_152));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[195])));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_144, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[198])));
          MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_147));
        }
        {
          ExpPredFuncTypeModeCausePieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExpPredFuncTypeModeCausePieces_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[189])));
          MR_hl_field(1, ExpPredFuncTypeModeCausePieces_41, 1) = ((MR_Box) (Var_144));
        }
        Var_169 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ExpPredFuncTypeModeCausePieces_41);
        Var_168 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_169);
        STATE_VARIABLE_DiffPieces_167_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_139_139, Var_168);
      }
      succeeded = (ActualNumArgTypes_36 == ActualNumArgModes_38);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_197_197 = STATE_VARIABLE_DiffPieces_167_167;
      else
      {
        MR_Integer ActualTypeArity_42;
        MR_Integer ActualModeArity_43;
        MR_Word ActArityCausePieces_44;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_185;
        MR_Word Var_188;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_198;
        MR_Word Var_199;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualTypeArity_42, ActualNumArgTypes_36);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ActualPorF_14, &ActualModeArity_43, ActualNumArgModes_38);
        {
          Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_176, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_181, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_181, 1) = ((MR_Box) (ActualTypeArity_42));
        }
        {
          Var_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_192, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_192, 1) = ((MR_Box) (ActualModeArity_43));
        }
        {
          Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_191, 0) = ((MR_Box) (Var_192));
          MR_hl_field(1, Var_191, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[205])));
        }
        {
          Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_188, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[203])));
          MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_191));
        }
        {
          Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_185, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_188));
        }
        {
          Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_182, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[202])));
          MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_185));
        }
        {
          Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
          MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_182));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[201])));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_180));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_177));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          ActArityCausePieces_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ActArityCausePieces_44, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[199])));
          MR_hl_field(1, ActArityCausePieces_44, 1) = ((MR_Box) (Var_172));
        }
        Var_199 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ActArityCausePieces_44);
        Var_198 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_199);
        STATE_VARIABLE_DiffPieces_197_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_167_167, Var_198);
      }
      succeeded = (ExpectedNumArgTypes_37 == ExpectedNumArgModes_39);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_227_227 = STATE_VARIABLE_DiffPieces_197_197;
      else
      {
        MR_Integer ExpectedTypeArity_45;
        MR_Integer ExpectedModeArity_46;
        MR_Word ExpArityCausePieces_47;
        MR_Word Var_202;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_215;
        MR_Word Var_218;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Var_228;
        MR_Word Var_229;

        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedTypeArity_45, ExpectedNumArgTypes_37);
        parse_tree__prog_util__adjust_func_arity_3_p_1(ExpectedPorF_15, &ExpectedModeArity_46, ExpectedNumArgModes_39);
        {
          Var_206 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_206, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_206, 1) = (MR_Box) ((MR_Unsigned) (ExpectedPorF_15));
        }
        {
          Var_211 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_211, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_211, 1) = ((MR_Box) (ExpectedTypeArity_45));
        }
        {
          Var_222 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_222, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_222, 1) = ((MR_Box) (ExpectedModeArity_46));
        }
        {
          Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var_222));
          MR_hl_field(1, Var_221, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[205])));
        }
        {
          Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_218, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[203])));
          MR_hl_field(1, Var_218, 1) = ((MR_Box) (Var_221));
        }
        {
          Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_215, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_215, 1) = ((MR_Box) (Var_218));
        }
        {
          Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_212, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[202])));
          MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_215));
        }
        {
          Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_210, 0) = ((MR_Box) (Var_211));
          MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_212));
        }
        {
          Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_207, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[201])));
          MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_207));
        }
        {
          Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_202, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
          MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_205));
        }
        {
          ExpArityCausePieces_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExpArityCausePieces_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[199])));
          MR_hl_field(1, ExpArityCausePieces_47, 1) = ((MR_Box) (Var_202));
        }
        Var_229 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ExpArityCausePieces_47);
        Var_228 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_229);
        STATE_VARIABLE_DiffPieces_227_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_197_197, Var_228);
      }
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[206]), ((MR_Box) (ActualArgModes_29)), ((MR_Box) (ExpectedArgModes_33)));
      if (succeeded)
        STATE_VARIABLE_DiffPieces_241_241 = STATE_VARIABLE_DiffPieces_227_227;
      else
      {
        MR_Word ModeCausePieces_48;
        MR_Word Var_232;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_242;
        MR_Word Var_243;

        {
          Var_236 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_236, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_236, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_235, 0) = ((MR_Box) (Var_236));
          MR_hl_field(1, Var_235, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[210])));
        }
        {
          Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_232, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[208])));
          MR_hl_field(1, Var_232, 1) = ((MR_Box) (Var_235));
        }
        {
          ModeCausePieces_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeCausePieces_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[207])));
          MR_hl_field(1, ModeCausePieces_48, 1) = ((MR_Box) (Var_232));
        }
        Var_243 = parse_tree__error_spec__color_as_possible_cause_1_f_0(ModeCausePieces_48);
        Var_242 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_243);
        STATE_VARIABLE_DiffPieces_241_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_227_227, Var_242);
      }
      succeeded = (ActualDetism_31 == ExpectedDetism_35);
      if (succeeded)
        STATE_VARIABLE_DiffPieces_52 = STATE_VARIABLE_DiffPieces_241_241;
      else
      {
        MR_String ActualDetismStr_49;
        MR_String ExpectedDetismStr_50;
        MR_Word DetismCausePieces_51;
        MR_Word Var_246;
        MR_Word Var_249;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_254;
        MR_Word Var_257;
        MR_Word Var_258;
        MR_Word Var_259;
        MR_Word Var_262;
        MR_Word Var_265;
        MR_Word Var_266;
        MR_Word Var_272;
        MR_Word Var_273;

        ActualDetismStr_49 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_31);
        ExpectedDetismStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ExpectedDetism_35);
        {
          Var_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_250, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_250, 1) = (MR_Box) ((MR_Unsigned) (ActualPorF_14));
        }
        {
          Var_258 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_258, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_258, 1) = ((MR_Box) (ActualDetismStr_49));
        }
        {
          Var_266 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_266, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_266, 1) = ((MR_Box) (ExpectedDetismStr_50));
        }
        {
          Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_265, 0) = ((MR_Box) (Var_266));
          MR_hl_field(1, Var_265, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_262, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[214])));
          MR_hl_field(1, Var_262, 1) = ((MR_Box) (Var_265));
        }
        {
          Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_259, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24])));
          MR_hl_field(1, Var_259, 1) = ((MR_Box) (Var_262));
        }
        {
          Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_257, 0) = ((MR_Box) (Var_258));
          MR_hl_field(1, Var_257, 1) = ((MR_Box) (Var_259));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[213])));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (Var_257));
        }
        {
          Var_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_251, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[212])));
          MR_hl_field(1, Var_251, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_249, 0) = ((MR_Box) (Var_250));
          MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_251));
        }
        {
          Var_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_246, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
          MR_hl_field(1, Var_246, 1) = ((MR_Box) (Var_249));
        }
        {
          DetismCausePieces_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DetismCausePieces_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[211])));
          MR_hl_field(1, DetismCausePieces_51, 1) = ((MR_Box) (Var_246));
        }
        Var_273 = parse_tree__error_spec__color_as_possible_cause_1_f_0(DetismCausePieces_51);
        Var_272 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_273);
        STATE_VARIABLE_DiffPieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_241_241, Var_272);
      }
    }
    else
      STATE_VARIABLE_DiffPieces_52 = STATE_VARIABLE_DiffPieces_109_109;
  }
  return STATE_VARIABLE_DiffPieces_52;
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
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_69;
          MR_Word TypeInfo_75_75;

          succeeded = ((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(1, ExpectedType_12, (MR_Integer) 0))));
            ExpectedArgTypes_19 = ((MR_Word) ((MR_hl_field(1, ExpectedType_12, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeSymName_16, Var_69);
            if (succeeded)
            {
              TypeInfo_75_75 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ActualArgTypes_17)), ((MR_Box) (ExpectedArgTypes_19)));
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_42 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[177]));
                Var_46 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_45, 1) = ((MR_Box) (TypeSymName_16));
                }
                {
                  Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
                  MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
                }
                {
                  Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
                  MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
                }
                DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_41, ExistQTVars_7, ActualArgTypes_17, ExpectedArgTypes_19);
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
              MR_Word Var_47;
              MR_Word ActualArgTypes_62 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 1))));
              MR_Word ExpectedArgTypes_63;
              MR_Word TypeInfo_76_76;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ExpectedArgTypes_63 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))));
                TypeInfo_76_76 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ActualArgTypes_62)), ((MR_Box) (ExpectedArgTypes_63)));
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_47 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[179]));
                  DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_47, ExistQTVars_7, ActualArgTypes_62, ExpectedArgTypes_63);
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
              MR_Word ExpectedPorF_30;
              MR_Word ExpectedInstInfo_31;
              MR_Word ExpectedPurity_32;
              MR_Word ActualArgTypes_66 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 2))));
              MR_Word ExpectedArgTypes_67;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ExpectedPorF_30 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))) & (MR_Integer) 1);
                ExpectedArgTypes_67 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 2))));
                ExpectedInstInfo_31 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 3))));
                ExpectedPurity_32 = ((MR_Unsigned) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 4))) & (MR_Integer) 3);
                DiffPiecesPrime_21 = check_hlds__typecheck_errors__higher_order_diff_pieces_10_f_0(ContextPieces_6, ExistQTVars_7, ActualPorF_27, ExpectedPorF_30, ActualArgTypes_66, ExpectedArgTypes_67, ActualInstInfo_28, ExpectedInstInfo_31, ActualPurity_29, ExpectedPurity_32);
                succeeded = (DiffPiecesPrime_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_72_72;
              MR_Word TVar_24 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 1))));
              MR_Word Var_51;
              MR_Word ActualArgTypes_64 = ((MR_Word) ((MR_hl_field(3, ActualType_11, (MR_Integer) 2))));
              MR_Word ExpectedArgTypes_65;
              MR_Word Var_70;
              MR_Word TypeInfo_73_73;

              succeeded = ((((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_70 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 1))));
                ExpectedArgTypes_65 = ((MR_Word) ((MR_hl_field(3, ExpectedType_12, (MR_Integer) 2))));
                TypeInfo_72_72 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_72_72, ((MR_Box) (TVar_24)), ((MR_Box) (Var_70)));
                if (succeeded)
                {
                  TypeInfo_73_73 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ActualArgTypes_64)), ((MR_Box) (ExpectedArgTypes_65)));
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_51 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[176]));
                    DiffPiecesPrime_21 = check_hlds__typecheck_errors__arg_type_list_diff_pieces_5_f_0(ContextPieces_6, Var_51, ExistQTVars_7, ActualArgTypes_64, ExpectedArgTypes_65);
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
      MR_Word TypeInfo_68_68;
      MR_Word ExpectedTVar_35;

      succeeded = ((MR_tag((MR_Word) ExpectedType_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        ExpectedTVar_35 = ((MR_Word) ((MR_hl_field(0, ExpectedType_12, (MR_Integer) 0))));
        TypeInfo_68_68 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[5]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_68_68, ((MR_Box) (ExpectedTVar_35)), ExistQTVars_7);
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
        DiffPieces_10 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_6, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[183])));
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
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[219])), Var_12);
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
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[221])), Var_25);
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
    MR_Word HeadTaggedPieces_26;
    MR_Word SourceExpectedPair_27;

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
      MR_Word ExpectedCommaOrDotPieces0_24;
      MR_Word ExpectedCommaOrDotPieces_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_44;

      SourcePieces_23 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_1, Source_22);
      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (CommaOrPeriod_19));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ExpectedCommaOrDotPieces0_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_15, Var_28);
      ExpectedCommaOrDotPieces_25 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedCommaOrDotPieces0_24);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[172])));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (SourcePieces_23));
      }
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedCommaOrDotPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), Var_44);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[174])), Var_39);
      HeadTaggedPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_34);
    }
    {
      SourceExpectedPair_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SourceExpectedPair_27, 0) = ((MR_Box) (SourcePieces_23));
      MR_hl_field(0, SourceExpectedPair_27, 1) = ((MR_Box) (ExpectedPieces_15));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), ((MR_Box) (SourceExpectedPair_27)), TailSourceExpectedPairs_11);
    if (succeeded)
    {
      *HeadVar__3_3 = TailSourceExpectedPairs_11;
      *HeadVar__4_4 = TailTaggedPieces_12;
    }
    else
    {
      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), ((MR_Box) (SourceExpectedPair_27)), TailSourceExpectedPairs_11, HeadVar__3_3);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadTaggedPieces_26, TailTaggedPieces_12);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__should_we_print_expectation_sources__1591__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_errors__should_we_print_expectation_sources_2_p_0(
  MR_Word ActualExpectedList_3,
  MR_Word * MaybePrintSource_4)
{
  MR_bool succeeded;

  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[13]), ActualExpectedList_3);
  if (succeeded)
    *MaybePrintSource_4 = (MR_Integer) 1;
  else
    *MaybePrintSource_4 = (MR_Integer) 0;
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

  (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_168));
  check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_179 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 0))));
    MR_Word Var_180 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 1))));
    MR_Word Var_181 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 2))));
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_44;
    MR_Word Var_45;

    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_74 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 3))));
    Var_182 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 4))));
    Var_183 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_168, (MR_Integer) 5))));
    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_74 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_74, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__Var_74, (MR_Integer) 1))));
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
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_168, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_5, env_ptr);
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
    MR_String Arguments_54;
    MR_Word VarAndTermPieces_56;
    MR_Word InvisIntPieces_59;
    MR_Word ErrorInvisIntPieces_60;
    MR_Word Msg_61;
    MR_Word Var_62;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_166;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Integer Var_171;
    MR_Word Var_172;
    MR_Word ConsArgTypes_30;
    MR_Word Var_31;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
    InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
    ModuleInfo_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 0))));
    Var_169 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 1))));
    Var_170 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 2))));
    Var_171 = ((MR_Integer) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 3))));
    Var_172 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 4))));
    VarSet_23 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
    check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_24);
    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_15, &StrippedFunctor_25);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (VarSet_23));
    }
    StrippedFunctorStr_26 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_22, Var_62, (MR_Integer) 0, StrippedFunctor_25, ArgVars_16);
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
        MR_Integer Var_72;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_34, &SubsumesMismatches_41);
        Var_72 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), SubsumesMismatches_41);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_72));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_23, Functor_15, (MR_Integer) 0, SubsumesMismatches_41);
      }
      else
      {
        MR_Word NoSubsumeMismatches_38;
        MR_Integer Var_70;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_35, &NoSubsumeMismatches_38);
        Var_70 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), NoSubsumeMismatches_38);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_70));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_23, Functor_15, (MR_Integer) 0, NoSubsumeMismatches_38);
      }
      VerboseComponents_42 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ResultTypePieces_47;
      MR_Word FunctorColor_48;
      MR_Word AllTypesPieces_49;
      MR_Word VerboseComponent_53;

      MaybeNumMismatches_39 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_6(&env);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
      {
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        Var_75 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_13);
        Var_77 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_24, (MR_Word) ((MR_Unsigned) 0U), TypeAssignSet_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_13);
        Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
        ResultTypePieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_76);
      }
      else
        ResultTypePieces_47 = (MR_Word) ((MR_Unsigned) 0U);
      FunctorColor_48 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_3[3]));
      if ((ArgVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;

        Var_86 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_27);
        Var_88 = check_hlds__typecheck_errors__type_of_functor_to_pieces_6_f_0(InstVarSet_24, FunctorColor_48, Functor_15, Arity_27, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
        AllTypesPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_87);
      }
      else
      {
        MR_Word HeadArgVar_50 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, (MR_Integer) 0))));
        MR_Word TailArgVars_51 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, (MR_Integer) 1))));
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_104;

        Var_97 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_27);
        Var_99 = check_hlds__typecheck_errors__type_of_functor_to_pieces_6_f_0(InstVarSet_24, FunctorColor_48, Functor_15, Arity_27, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])));
        Var_104 = check_hlds__typecheck_errors__types_of_vars_to_pieces_7_f_0(VarSet_23, InstVarSet_24, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_3[2])), TypeAssignSet_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), HeadArgVar_50, TailArgVars_51);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_104);
        AllTypesPieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_98);
      }
      ErrorPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_47, AllTypesPieces_49);
      check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_23, TypeAssignSet_28, &VerboseComponent_53);
      {
        VerboseComponents_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VerboseComponents_42, 0) = ((MR_Box) (VerboseComponent_53));
        MR_hl_field(1, VerboseComponents_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeNumMismatches_39 == (MR_Word) ((MR_Unsigned) 0U)))
      Arguments_54 = (MR_String) "argument(s)";
    else
    {
      MR_Integer NumMismatches_55 = ((MR_Integer) ((MR_hl_field(1, MaybeNumMismatches_39, (MR_Integer) 0))));

      (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = (NumMismatches_55 == (MR_Integer) 1);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
        Arguments_54 = (MR_String) "argument";
      else
        Arguments_54 = (MR_String) "arguments";
    }
    Var_118 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_13);
    Var_117 = parse_tree__error_spec__color_as_subject_1_f_0(Var_118);
    {
      Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_129, 1) = ((MR_Box) (StrippedFunctorStr_26));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])));
    }
    Var_127 = parse_tree__error_spec__color_as_subject_1_f_0(Var_128);
    {
      Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_141, 1) = ((MR_Box) (Arguments_54));
    }
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[51])));
    }
    {
      Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_137, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[49])));
      MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
    }
    Var_147 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(StrippedFunctor_25, Arity_27);
    Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_147, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, Var_146);
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_127, Var_134);
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[46])), Var_126);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_119);
    VarAndTermPieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[43])), Var_116);
    (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = check_hlds__typecheck_errors__is_int_func_op_1_p_0(Functor_15);
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      MR_Word BuiltinTypes0_57;
      MR_Word BuiltinTypes_58;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Box conv4_BuiltinTypes0_57;

      {
        Var_154 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_154, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1]));
        MR_hl_field(0, Var_154, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0_7));
        MR_hl_field(0, Var_154, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_154, 3) = ((MR_Box) (TypeAssignSet_28));
      }
      {
        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Var_155, 1) = ((MR_Box) (ArgVars_16));
      }
      Var_156 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), Var_154, Var_155, ((MR_Box) (Var_156)), &conv4_BuiltinTypes0_57);
      BuiltinTypes0_57 = ((MR_Word) (conv4_BuiltinTypes0_57));
      check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, BuiltinTypes0_57, &BuiltinTypes_58);
      InvisIntPieces_59 = check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_58);
    }
    else
      InvisIntPieces_59 = (MR_Word) ((MR_Unsigned) 0U);
    ErrorInvisIntPieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorPieces_40, InvisIntPieces_59);
    {
      Var_158 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_158, 0) = ((MR_Box) (ContextPieces_21));
    }
    {
      Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_160, 0) = ((MR_Box) (VarAndTermPieces_56));
    }
    {
      Var_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_162, 0) = ((MR_Box) (ErrorInvisIntPieces_60));
    }
    {
      Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
      MR_hl_field(1, Var_161, 1) = ((MR_Box) (VerboseComponents_42));
    }
    {
      Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
      MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_161));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_159));
    }
    {
      Msg_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_61, 0) = ((MR_Box) (Context_12));
      MR_hl_field(2, Msg_61, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (Msg_61));
      MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_args\'/8"));
      MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_166));
    }
    return Spec_18;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_7_f_0(
  MR_Word VarSet_9,
  MR_Word InstVarSet_10,
  MR_Word MaybeColor_11,
  MR_Word TypeAssignSet_12,
  MR_Word FinalPieces_13,
  MR_Word HeadVar_14,
  MR_Word TailVars_15)
{
  MR_bool succeeded;
  MR_Word Pieces_16;

  if ((TailVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_33;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, HeadVar_14, &Var_33);
    if (succeeded)
    {
      MR_Word Var_36;
      MR_Word Var_37;
      MR_String Var_38;

      Var_38 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, HeadVar_14);
      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_36));
      }
    }
    else
      Var_19 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
    Var_20 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_10, MaybeColor_11, TypeAssignSet_12, FinalPieces_13, HeadVar_14);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  }
  else
  {
    MR_Word HeadTailVar_17 = ((MR_Word) ((MR_hl_field(1, TailVars_15, (MR_Integer) 0))));
    MR_Word TailTailVars_18 = ((MR_Word) ((MR_hl_field(1, TailVars_15, (MR_Integer) 1))));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_String Var_45;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, HeadVar_14, &Var_45);
    if (succeeded)
    {
      MR_Word Var_48;
      MR_Word Var_49;
      MR_String Var_50;

      Var_50 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, HeadVar_14);
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_48));
      }
    }
    else
      Var_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
    Var_23 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_10, MaybeColor_11, TypeAssignSet_12, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[154])), HeadVar_14);
    Var_30 = check_hlds__typecheck_errors__types_of_vars_to_pieces_7_f_0(VarSet_9, InstVarSet_10, MaybeColor_11, TypeAssignSet_12, FinalPieces_13, HeadTailVar_17, TailTailVars_18);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_30);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_22);
  }
  return Pieces_16;
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
    MR_Word ErrorDescPieces_32;
    MR_Word SpecialMismatches_36;
    MR_Word SpecialReasonPieces_37;
    MR_Word ThisMismatchPieces_38;
    MR_Word FollowingMismatchPieces_39;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Mismatch_163 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 2))));
    MR_Word Mismatches_164 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, (MR_Integer) 3))));
    MR_Word MaybeSpecial_168;
    MR_Word STATE_VARIABLE_Specials_12_171;
    MR_Integer Arity_19;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Integer Var_44;
    MR_String Var_22;
    MR_Word TailActualTypePieces_29;

    succeeded = ((((MR_tag((MR_Word) Functor_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(3, Functor_2, (MR_Integer) 1))));
      Arity_19 = ((MR_Integer) ((MR_hl_field(3, Functor_2, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
        succeeded = (strcmp(Var_43, (MR_String) "") == 0);
        if (succeeded)
        {
          Var_44 = (MR_Integer) 0;
          succeeded = (Arity_19 > Var_44);
        }
      }
    }
    if (succeeded)
      switch (First_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ArgNumPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[52]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) ArgNum_15 - (MR_Unsigned) 1);

            {
              Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_51, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[5])));
              MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_50));
            }
          }
          break;
      }
    else
    {
      MR_Word Var_57;
      MR_Word Var_58;

      {
        Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_58, 1) = ((MR_Box) (ArgNum_15));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[5])));
        MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_57));
      }
    }
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16, &Var_22);
    if (succeeded)
    {
      MR_String VarName_23;
      MR_Word Var_62;
      MR_Word Var_63;

      VarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16);
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (VarName_23));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])));
      }
      {
        VarNamePieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarNamePieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[53])));
        MR_hl_field(1, VarNamePieces_24, 1) = ((MR_Box) (Var_62));
      }
    }
    else
      VarNamePieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    HeadExpectedTypePieces_25 = ((MR_Word) ((MR_hl_field(0, Mismatch_163, (MR_Integer) 0))));
    HeadActualTypePieces_26 = ((MR_Word) ((MR_hl_field(0, Mismatch_163, (MR_Integer) 1))));
    succeeded = check_hlds__typecheck_errors__expected_types_all_same_return_actuals_3_p_0(HeadExpectedTypePieces_25, Mismatches_164, &TailActualTypePieces_29);
    if (succeeded)
    {
      MR_Word ExpectedDotPieces_30;

      ExpectedDotPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadExpectedTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
      if ((TailActualTypePieces_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ActualCommaPieces_31;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_90;
        MR_Word Var_98;
        MR_Word Var_99;

        ActualCommaPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadActualTypePieces_26, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])));
        Var_84 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualCommaPieces_31);
        Var_99 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces_30);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_98);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_90);
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_85);
        ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_83);
      }
      else
      {
        MR_Word SecondActualTypePieces_33 = ((MR_Word) ((MR_hl_field(1, TailActualTypePieces_29, (MR_Integer) 0))));
        MR_Word ThirdPlusActualTypePieces_34 = ((MR_Word) ((MR_hl_field(1, TailActualTypePieces_29, (MR_Integer) 1))));
        MR_Word Var_104;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_123;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word ActualCommaPieces_157;

        Var_104 = check_hlds__typecheck_errors__report_actual_types_3_f_0(HeadActualTypePieces_26, SecondActualTypePieces_33, ThirdPlusActualTypePieces_34);
        ActualCommaPieces_157 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])));
        Var_117 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualCommaPieces_157);
        Var_132 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces_30);
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_131);
        Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_123);
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_118);
        ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_116);
      }
    }
    else
    {
      MR_Word AllMismatches_35;
      MR_Word Var_143;
      MR_Word Var_144;

      {
        AllMismatches_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllMismatches_35, 0) = ((MR_Box) (Mismatch_163));
        MR_hl_field(1, AllMismatches_35, 1) = ((MR_Box) (Mismatches_164));
      }
      Var_144 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0((MR_Integer) 1, AllMismatches_35);
      Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
      ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])), Var_143);
    }
    check_hlds__typecheck_errors__gather_special_type_mismatches_2_p_0(Mismatches_164, &STATE_VARIABLE_Specials_12_171);
    MaybeSpecial_168 = ((MR_Word) ((MR_hl_field(0, Mismatch_163, (MR_Integer) 3))));
    if ((MaybeSpecial_168 == (MR_Word) ((MR_Unsigned) 0U)))
      SpecialMismatches_36 = STATE_VARIABLE_Specials_12_171;
    else
    {
      MR_Word Special_169 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_168, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_169)), STATE_VARIABLE_Specials_12_171, &SpecialMismatches_36);
    }
    SpecialReasonPieces_37 = check_hlds__typecheck_errors__report_special_type_mismatches_1_f_0(SpecialMismatches_36);
    Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumPieces_21, VarNamePieces_24);
    Var_153 = parse_tree__error_spec__color_as_subject_1_f_0(Var_154);
    Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorDescPieces_32, SpecialReasonPieces_37);
    ThisMismatchPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_153, Var_155);
    if ((Mismatches_13 == (MR_Word) ((MR_Unsigned) 0U)))
      FollowingMismatchPieces_39 = (MR_Word) ((MR_Unsigned) 0U);
    else
      FollowingMismatchPieces_39 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_1, Functor_2, (MR_Integer) 1, Mismatches_13);
    HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisMismatchPieces_38, FollowingMismatchPieces_39);
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
    MR_Word Pieces0_15;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;

    check_hlds__typecheck_errors__report_special_type_mismatches_loop_3_p_0((MR_Integer) 1, TailSpecials_7, &TailPieces_9);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[73]));
        break;
      case (MR_Integer) 1:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75]));
        break;
    }
    GetoptModule_14 = (MR_String) (HeadSpecial_6);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (GetoptModule_14));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[89])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[77])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[76])));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
    }
    Pieces0_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonIsPieces_13, Var_22);
    HeadPieces_10 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Pieces0_15);
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
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_49;

    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[67])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualTypePieces_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])));
    Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_31);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedTypePieces_9, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
    Var_41 = parse_tree__error_spec__color_as_correct_1_f_0(Var_42);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[71])), Var_41);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_36);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69])), Var_29);
    HeadPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_24);
    Var_49 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    TailPieces_14 = check_hlds__typecheck_errors__report_possible_expected_actual_types_2_f_0(Var_49, Mismatches_7);
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

    Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[66])), SecondActualTypePieces_6);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_11);
  }
  else
  {
    MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 0))));
    MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Var_21;

    Var_21 = check_hlds__typecheck_errors__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_21);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_16);
  }
  return Pieces_8;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__expected_types_all_same_return_actuals_3_p_0(
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
      succeeded = check_hlds__typecheck_errors__expected_types_all_same_return_actuals_3_p_0(HeadVar__1_1, TailMismatches_7, &TailActualTypePieces_9);
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
      MR_Word Var_44;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_49_49;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_50_50;
      MR_Integer Var_51;
      MR_Box conv3_TypeMismatches0_31;
      MR_Box conv2_DoesSomeTypeStuffMatch_32;
      MR_Integer next_value_of_CurArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8;

      Arg_24 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
      ExpType_25 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
      check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_3, Arg_24, &TypeStuffList_29);
      parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ExpType_25, &StrippedExpType_30);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_9[0]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_mismatched_args_9_p_0_1));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (AddQuotes_1));
        MR_hl_field(0, Var_44, 4) = ((MR_Box) (InstVarSet_2));
        MR_hl_field(0, Var_44, 5) = ((MR_Box) (StrippedExpType_30));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0), Var_44, TypeStuffList_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_31, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_32);
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
              MR_Word Mismatch_64;
              MR_Word Mismatches_65;
              MR_Word Var_66;

              {
                Mismatch_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Mismatch_36, 0) = ((MR_Box) (CurArgNum_4));
                MR_hl_field(0, Mismatch_36, 1) = ((MR_Box) (Arg_24));
                MR_hl_field(0, Mismatch_36, 2) = ((MR_Box) (HeadTypeMismatch_34));
                MR_hl_field(0, Mismatch_36, 3) = ((MR_Box) (TailTypeMismatches_35));
              }
              Mismatch_64 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 0))));
              Mismatches_65 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 1))));
              Var_66 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_64, (MR_Integer) 2))) & (MR_Integer) 1);
              succeeded = (Var_66 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(Mismatches_65);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_49_49, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_49_49, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_8));
                }
                STATE_VARIABLE_RevSubsumesMismatches_50_50 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_50_50, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_50_50, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_6));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_49_49 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_50_50 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
            STATE_VARIABLE_RevNoSubsumeMismatches_49_49 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
          }
          break;
      }
      Var_51 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_4 = Var_51;
      next_value_of_HeadVar__5_5 = ArgExpTypes_26;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6 = STATE_VARIABLE_RevSubsumesMismatches_50_50;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8 = STATE_VARIABLE_RevNoSubsumeMismatches_49_49;
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
  MR_Word VarTypePieces_24;
  MR_Word FunctorTypePieces_25;
  MR_Word MainPieces_26;
  MR_Word NoSuffixIntegerPieces_29;
  MR_Word InvisIntPieces_32;
  MR_Word VerboseComponent_33;
  MR_Word AlwaysPieces_34;
  MR_Word Msg_35;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_98;
  MR_String Var_111;
  MR_String Var_123;
  MR_Word TypeCtorInfo_108_108;
  MR_Word TypesOfVar_28;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
  InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_23);
  VarTypePieces_24 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_23, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_3[2])), TypeAssignSet_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_13);
  FunctorTypePieces_25 = check_hlds__typecheck_errors__type_of_functor_to_pieces_6_f_0(InstVarSet_23, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_3[3])), Functor_15, Arity_16, ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, Var_13, &Var_111);
  if (succeeded)
  {
    MR_Word Var_114;
    MR_Word Var_115;
    MR_String Var_116;

    Var_116 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, Var_13);
    {
      Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_114));
    }
  }
  else
    Var_53 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
  Var_62 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, Var_13, &Var_123);
  if (succeeded)
  {
    MR_Word Var_126;
    MR_Word Var_127;
    MR_String Var_128;

    Var_128 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_22, Var_13);
    {
      Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_127, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_126));
    }
  }
  else
    Var_72 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
  Var_71 = parse_tree__error_spec__color_as_subject_1_f_0(Var_72);
  Var_80 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_79 = parse_tree__error_spec__color_as_subject_1_f_0(Var_80);
  Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunctorTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_81);
  Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])), Var_78);
  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarTypePieces_24, Var_74);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_73);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])), Var_70);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_63);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])), Var_61);
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_54);
  MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[27])), Var_52);
  succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    Var_85 = ((MR_Word) ((MR_hl_field(3, Functor_15, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_86 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[9]);
      TypeCtorInfo_108_108 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(TypeCtorInfo_108_108, Var_86, TypeAssignSet_17, Var_13, &TypesOfVar_28);
      Var_87 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[10]);
      succeeded = mercury__list__any_true_2_p_0(TypeCtorInfo_108_108, Var_87, TypesOfVar_28);
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_29 = parse_tree__error_spec__color_as_possible_cause_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[145])));
  else
    NoSuffixIntegerPieces_29 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_errors__is_int_func_op_1_p_0(Functor_15);
  if (succeeded)
  {
    MR_Word BuiltinTypes0_30;
    MR_Word BuiltinTypes_31;
    MR_Word Var_88;

    Var_88 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
    check_hlds__typecheck_errors__acc_builtin_types_of_var_4_p_0(TypeAssignSet_17, Var_13, Var_88, &BuiltinTypes0_30);
    check_hlds__typecheck_errors__acc_builtin_types_in_cons_type_infos_3_p_0(ConsDefnList_14, BuiltinTypes0_30, &BuiltinTypes_31);
    InvisIntPieces_32 = check_hlds__typecheck_errors__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_31);
  }
  else
    InvisIntPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_22, TypeAssignSet_17, &VerboseComponent_33);
  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NoSuffixIntegerPieces_29, InvisIntPieces_32);
  Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_26, Var_90);
  AlwaysPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_89);
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (AlwaysPieces_34));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (VerboseComponent_33));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Msg_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_35, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_35, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (Msg_35));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_result\'/8"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_98));
  }
  return Spec_18;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__type_of_functor_to_pieces_6_f_0(
  MR_Word InstVarSet_8,
  MR_Word MaybeColor_9,
  MR_Word Functor_10,
  MR_Integer Arity_11,
  MR_Word ConsDefnList_12,
  MR_Word SuffixPieces_13)
{
  MR_bool succeeded = (ConsDefnList_12 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Pieces_14;
  MR_Word SingleDefn_15;
  MR_Word Var_18;

  if (succeeded)
  {
    SingleDefn_15 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_12, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_12, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ConsTypePieces_16;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word TVarSet_58 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, (MR_Integer) 0))));
    MR_Word ExistQVars_59 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, (MR_Integer) 1))));
    MR_Word ConsType_60 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, (MR_Integer) 2))));
    MR_Word ArgTypes_61 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, (MR_Integer) 3))));
    MR_Word ArgPieces_70;
    MR_Word Var_81;

    if ((ArgTypes_61 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_70 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_66;

      succeeded = ((((MR_tag((MR_Word) Functor_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SymName_66 = ((MR_Word) ((MR_hl_field(3, Functor_10, (MR_Integer) 1))));
        {
          MR_Word Type_69;
          MR_Word Var_72;

          {
            Type_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_69, 0) = ((MR_Box) (SymName_66));
            MR_hl_field(1, Type_69, 1) = ((MR_Box) (ArgTypes_61));
            MR_hl_field(1, Type_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_72 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_58, InstVarSet_8, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_59, Type_69);
          ArgPieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_81 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_58, InstVarSet_8, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_59, ConsType_60);
    ConsTypePieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_70, Var_81);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypePieces_16, SuffixPieces_13);
    Var_27 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_9, Var_28);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_26);
  }
  else
  {
    MR_Word ConsTypeListPieces_17;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_47;
    MR_Word Var_52;

    ConsTypeListPieces_17 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_8, ConsDefnList_12, Functor_10, Arity_11);
    Var_41 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_9, ConsTypeListPieces_17);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[164])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_47);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[161])), Var_40);
  }
  return Pieces_14;
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

      succeeded = ((((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
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
          ArgPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])));
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
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25]));
      else
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[154]));
      TailPieces_19 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_1, ConsDefns_11, Functor_3, Arity_4);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConnectPieces_18, TailPieces_19);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisPieces_15, Var_28);
    }
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(
  MR_Word ConsId_4,
  MR_Integer Arity_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_Word StrippedConsId_7;

  parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(ConsId_4, &StrippedConsId_7);
  succeeded = (Arity_5 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Piece2_12;
    MR_Word Var_17;
    MR_Word Name_9;

    succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Name_9 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
      {
        Piece2_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Piece2_12, 1) = ((MR_Box) (Name_9));
      }
    }
    else
    {
      MR_String Var_16;

      Var_16 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(StrippedConsId_7);
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
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[157])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Word Var_19;
    MR_String Var_20;

    succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
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
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[158])));
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
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (ConsId_4));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[159])));
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
  MR_Word conv0_LambdaHeadVar__2_27;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_any_invisible_int_types__1259__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_27);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
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
  MR_Word TypeCtorInfo_78_78;
  MR_Word ModuleInfo_9;
  MR_Word VisModules_10;
  MR_Word VisIntTypes_11;
  MR_Word InvisIntTypes_12;
  MR_Word InvisIntTypesList_13;
  MR_Word Var_28;

  mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[6]), BuiltinTypes_5, &IntTypes_8);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), IntTypes_8);
  if (succeeded)
  {
    ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, ClauseContext_4, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_visible_modules_2_p_0(ModuleInfo_9, &VisModules_10);
    Var_28 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[7]);
    TypeCtorInfo_78_78 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    mercury__set__filter_map_3_p_0(TypeCtorInfo_78_78, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), Var_28, VisModules_10, &VisIntTypes_11);
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
    MR_Word Pieces0_20;

    parse_tree__prog_data__int_type_module_name_2_p_0(HeadInvisIntType_14, &HeadInvisIntTypeStr_16);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[8]), TailInvisIntTypes_15, &TailInvisIntTypeStrs_19);
    if ((TailInvisIntTypeStrs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_42;

      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (HeadInvisIntTypeStr_16));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[150])));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[148])));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[147])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
      }
      {
        Pieces0_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[146])));
        MR_hl_field(1, Pieces0_20, 1) = ((MR_Box) (Var_34));
      }
    }
    else
    {
      MR_Word InvisIntTypeStrs_23;
      MR_Word InvisIntTypePieces_24;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;

      {
        InvisIntTypeStrs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InvisIntTypeStrs_23, 0) = ((MR_Box) (HeadInvisIntTypeStr_16));
        MR_hl_field(1, InvisIntTypeStrs_23, 1) = ((MR_Box) (TailInvisIntTypeStrs_19));
      }
      InvisIntTypePieces_24 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(InvisIntTypeStrs_23);
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[151])));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (InvisIntTypePieces_24));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[148])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (InvisIntTypePieces_24));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[147])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[153])));
      Pieces0_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_53);
    }
    Pieces_6 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Pieces0_20);
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
  MR_Word conv0_STATE_VARIABLE_BuiltinTypes_24;

  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_BuiltinTypes_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_BuiltinTypes_24));
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
  MR_Word STATE_VARIABLE_BuiltinTypes_0_23,
  MR_Word * STATE_VARIABLE_BuiltinTypes_24)
{
  switch (MR_tag((MR_Word) Type_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_6 = ((MR_Word) ((MR_hl_field(2, Type_4, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0), ((MR_Box) (BuiltinType_6)), STATE_VARIABLE_BuiltinTypes_0_23, STATE_VARIABLE_BuiltinTypes_24);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_BuiltinTypes_24 = STATE_VARIABLE_BuiltinTypes_0_23;
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
  MR_Word conv1_STATE_VARIABLE_BuiltinTypes_24;

  check_hlds__typecheck_errors__acc_builtin_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BuiltinTypes_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BuiltinTypes_24));
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

static MR_bool MR_CALL 
check_hlds__typecheck_errors__is_int_func_op_1_p_0(
  MR_Word ConsId_2)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
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
            result_3 = MR_strcmp(Name_6, ((&check_hlds__typecheck_errors_vector_common_6[0 + mid_2]))->check_hlds__typecheck_errors__vector_common_type_6_0__vct_6_f_0);
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
                  switch (MR_nth_code_unit(Name_6, 2)) {
                    case (MR_Integer) 110:
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
              if (MR_offset_strn_eq(1, 9, Name_6, (MR_String) "unchecked_"))
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

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_lambda_7_f_0(
  MR_Word Info_9,
  MR_Word UnifyContext_10,
  MR_Word Context_11,
  MR_Word PredOrFunc_12,
  MR_Word Var_13,
  MR_Word ArgVars_14,
  MR_Word TypeAssignSet_15)
{
  MR_Word Spec_16;
  MR_Word ClauseContext_17;
  MR_Word InClauseForPieces_18;
  MR_Word ContextPieces_19;
  MR_Word VarSet_20;
  MR_Word VarNamePieces_21;
  MR_Word InstVarSet_22;
  MR_Word Pieces1_23;
  MR_Word Pieces2_24;
  MR_Word Pieces3_28;
  MR_Word LambdaTypePieces_29;
  MR_Word Pieces4_39;
  MR_Word MainPieces_40;
  MR_Word VerboseComponent_41;
  MR_Word Msg_42;
  MR_Word Var_47;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_122;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_142;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_9, &ClauseContext_17);
  InClauseForPieces_18 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_17);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_10, InClauseForPieces_18, &ContextPieces_19);
  VarSet_20 = ((MR_Word) ((MR_hl_field(0, ClauseContext_17, (MR_Integer) 5))));
  VarNamePieces_21 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_20, Var_13);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_17, &InstVarSet_22);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarNamePieces_21, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Pieces1_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[27])), Var_47);
  Var_92 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_22, (MR_Word) ((MR_Unsigned) 0U), TypeAssignSet_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_13);
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Pieces3_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarNamePieces_21, Var_91);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_25;
        MR_Word RetVar_26;
        MR_Word FuncArgVars_35;
        MR_Word Var_70;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_String Var_75;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_String Var_84;
        MR_Box conv0_RetVar_26;
        MR_Box conv1_Var_36;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_14, &FuncArgs_25, &conv0_RetVar_26);
        RetVar_26 = ((MR_Word) (conv0_RetVar_26));
        Var_75 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, FuncArgs_25);
        {
          Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_74, 1) = ((MR_Box) (Var_75));
        }
        Var_84 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, RetVar_26);
        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[32])));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[1])));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[30])));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[29])));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
        }
        {
          Pieces2_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28])));
          MR_hl_field(1, Pieces2_24, 1) = ((MR_Box) (Var_70));
        }
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_14, &FuncArgVars_35, &conv1_Var_36);
        if ((FuncArgVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[36]));
        else
        {
          MR_Word Var_116;
          MR_String Var_117;
          MR_String Var_119;
          MR_Integer NumArgVars_144;
          MR_Word Unders_145;
          MR_String CommaUnders_146;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), FuncArgVars_35, &NumArgVars_144);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumArgVars_144, ((MR_Box) ((MR_String) "_")), &Unders_145);
          CommaUnders_146 = mercury__string__join_list_2_f_0((MR_String) ", ", Unders_145);
          Var_119 = mercury__string__f_43_43_2_f_0(CommaUnders_146, (MR_String) ") = _");
          Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_119);
          {
            Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_116, 1) = ((MR_Box) (Var_117));
          }
          {
            LambdaTypePieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_29, 0) = ((MR_Box) (Var_116));
            MR_hl_field(1, LambdaTypePieces_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_String Var_58;

        Var_58 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, ArgVars_14);
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[34])));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[33])));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Pieces2_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28])));
          MR_hl_field(1, Pieces2_24, 1) = ((MR_Box) (Var_53));
        }
        if ((ArgVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_29 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[38]));
        else
        {
          MR_Integer NumArgVars_32;
          MR_Word Unders_33;
          MR_String CommaUnders_34;
          MR_Word Var_105;
          MR_String Var_106;
          MR_String Var_108;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_14, &NumArgVars_32);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumArgVars_32, ((MR_Box) ((MR_String) "_")), &Unders_33);
          CommaUnders_34 = mercury__string__join_list_2_f_0((MR_String) ", ", Unders_33);
          Var_108 = mercury__string__f_43_43_2_f_0(CommaUnders_34, (MR_String) ")");
          Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_108);
          {
            Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_105, 1) = ((MR_Box) (Var_106));
          }
          {
            LambdaTypePieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_29, 0) = ((MR_Box) (Var_105));
            MR_hl_field(1, LambdaTypePieces_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[39])));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (LambdaTypePieces_29));
  }
  Pieces4_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces3_28, Pieces4_39);
  Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_24, Var_132);
  MainPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_23, Var_131);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_9, VarSet_20, TypeAssignSet_15, &VerboseComponent_41);
  {
    Var_134 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_134, 0) = ((MR_Box) (ContextPieces_19));
  }
  {
    Var_136 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_136, 0) = ((MR_Box) (MainPieces_40));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (VerboseComponent_41));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_135));
  }
  {
    Msg_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_42, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, Msg_42, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Msg_42));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_lambda\'/7"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_142));
  }
  return Spec_16;
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
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[155])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_10));
    }
  }
  else
    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[156]));
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
  MR_Word MaybeColor_20;
  MR_Word MainPieces_21;
  MR_Word VerboseComponent_22;
  MR_Word Msg_23;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_String Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_String Var_38;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_57;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_85;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_9, InClauseForPieces_16, &ContextPieces_17);
  VarSet_18 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_19);
  MaybeColor_20 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_3[0]));
  Var_30 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, X_11);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Var_30));
  }
  Var_38 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Y_12);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[11])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[23])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_49 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, X_11);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_46 = parse_tree__error_spec__color_as_subject_1_f_0(Var_47);
  Var_52 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_19, MaybeColor_20, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), X_11);
  Var_65 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_18, Y_12);
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_62 = parse_tree__error_spec__color_as_subject_1_f_0(Var_63);
  Var_68 = check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(InstVarSet_19, MaybeColor_20, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])), Y_12);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_67);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])), Var_61);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_57);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_51);
  MainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_45);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_18, TypeAssignSet_13, &VerboseComponent_22);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (ContextPieces_17));
  }
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (MainPieces_21));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (VerboseComponent_22));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    Msg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_23, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_23, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Msg_23));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_var\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_85));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0_1(
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
check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0(
  MR_Word InstVarSet_7,
  MR_Word MaybeColor_8,
  MR_Word TypeAssignSet_9,
  MR_Word SuffixPieces_10,
  MR_Word Var_11)
{
  MR_bool succeeded;
  MR_Word Pieces_12;
  MR_Word TypePiecesLists0_13;
  MR_Word TypePiecesLists_14;
  MR_Word Var_16;
  MR_Word Var_18;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__typecheck_errors__type_of_var_to_pieces_5_f_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (InstVarSet_7));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), Var_16, TypeAssignSet_9, Var_11, &TypePiecesLists0_13);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), TypePiecesLists0_13, &TypePiecesLists_14);
  succeeded = (TypePiecesLists_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(1, TypePiecesLists_14, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;

    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    Var_27 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_14, Var_30);
    Var_26 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_8, Var_27);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_26);
  }
  else
  {
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_49;

    Var_44 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])));
    Var_43 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_8, Var_44);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[163])), SuffixPieces_10);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_49);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[161])), Var_42);
  }
  return Pieces_12;
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
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_47;

  InClauseForPieces_13 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_7);
  FromTypeStr_14 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, FromType_10);
  ToTypeStr_15 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, ToType_11);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (FromTypeStr_14));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_24 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Var_25);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ToTypeStr_15));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
  }
  Var_34 = parse_tree__error_spec__color_as_possible_cause_1_f_0(Var_35);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[21])), Var_33);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
  ErrorPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[19])), Var_23);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, ErrorPieces_16);
  {
    Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/5"));
    MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Var_47));
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
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  Var_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_9, (MR_Integer) 0, PredId_10);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (VarName_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
  }
  Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_26);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[9])));
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[16])), Var_24);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_19);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])), Var_16);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_missing_tvar_in_foreign_code\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_11));
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
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Var_44));
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
