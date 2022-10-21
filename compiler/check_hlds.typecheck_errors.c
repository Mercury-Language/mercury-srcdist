/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2022-10-21
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
#include "check_hlds.mode_errors.mih"
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
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s {
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefnList_16;
  MR_bool check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded;
  jmp_buf check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__Var_68;
  MR_Word check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151;
  MR_Box check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__conv2_ConsDefn_151;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

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
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1601__1_2_p_0(
  MR_Integer ActualNumArgTypes_34,
  MR_Integer ExpectedNumArgTypes_35);

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_var_has_wrong_type_arg__972__1_1_p_0(
  MR_Word LambdaHeadVar__1_89);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_error_var_has_wrong_type_arg__961__1_1_f_0(
  MR_Word LambdaHeadVar__1_87);

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

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(
  MR_Word ActualExpected_3);

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_pieces_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybePrintSource_7,
  MR_Word ActualExpected_8,
  MR_Word STATE_VARIABLE_TaggedPieceLists_0_19,
  MR_Word * STATE_VARIABLE_TaggedPieceLists_20);

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
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_NumUnsatisfied_0_17,
  MR_Integer * STATE_VARIABLE_NumUnsatisfied_18);

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

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_source_pieces_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word MaybePrintSource_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ActualExpectedList_5);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_6(
  void * env_ptr_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(
  MR_Word VarSet_8,
  MR_Word InstVarSet_9,
  MR_Word TypeAssignSet_10,
  MR_Word FinalPieces_11,
  MR_Word HeadVar_12,
  MR_Word TailVars_13);

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

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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


static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[230][2];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[10][3];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[4][7];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[6][5];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[2][4];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[2][8];




static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_1[230][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0]))
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
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraint:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unsatisfiable typeclass constraints:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The foreign language code for"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should define the variable"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot coerce from"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was either"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type of"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match its expected type;"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has overloaded actual/expected types {"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "its inferred type is"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Another possible reason for the error is that"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the signatures of the option processing predicates"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "option_error_to_string"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which can be converted to a string by calling the"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Errors are now returned in a structured form,"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have changed recently."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in argument"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual type is the same as the expected type of"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is variable"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[38])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are unsigned."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u64"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u32"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u16"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u8"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "if they are signed, and"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i64"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i32"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i16"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "i8"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[149])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constants of sized integer types should have"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "u"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the suffix"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[155])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Unsigned integer constants of the default size"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is always of type"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A integer constant that consists only of digits"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[116]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[175]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type expected by"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(expected)"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "one expected type is:"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(inferred)"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "apply_n type constructor"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[183]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the tuple type constructor"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[186]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not allowed for existentially typed arguments."))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[188]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The context requires a specific type, but this is"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch for"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[192]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Predicate vs function mismatch:"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected a"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got a"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Purity mismatch:"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual type"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode says"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is a"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the expected type"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Arity mismatch:"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type has"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its mode information says it has"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[212]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 214 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Mode mismatch:"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the actual and expected modes of the"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "differ."))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[217]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Determinism mismatch:"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "determinism"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the expected determinism is"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[224]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[228])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[2])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3])),
    ((MR_Box) (check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[3])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_6[1])),
    ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[5])),
    ((MR_Box) (check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_3[7][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "} or {"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "}."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Functor"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "Argument"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_4[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_6[2][4] = {
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_7[1][11] = {
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

static /* final */ const MR_Box check_hlds__typecheck_errors_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_maybe_print_expectation_source_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__list__pti_list_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_errors__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_arg_vector_type_error_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_arg_vector_type_error_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_arg_vector_type_error_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_arg_vector_type_error_0[1] = {
  (MR_Integer) 0
};

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
  (MR_String) "print_expected",
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
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_1,
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__enum_functor_desc_maybe_print_expectation_source_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_maybe_print_expectation_source_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
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
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_spec_and_maybe_actual_expected_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_spec_and_maybe_actual_expected_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_spec_and_maybe_actual_expected_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_type_mismatch_special_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[1] = {
  &check_hlds__typecheck_errors__check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0
};

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[1] = {
  (MR_Integer) 0
};

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

static const MR_Integer check_hlds__typecheck_errors__check_hlds__typecheck_errors__functor_number_map_type_mismatch_special_0[1] = {
  (MR_Integer) 0
};

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
check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1601__1_2_p_0(
  MR_Integer ActualNumArgTypes_34,
  MR_Integer ExpectedNumArgTypes_35)
{
  MR_bool succeeded = (ActualNumArgTypes_34 == ExpectedNumArgTypes_35);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_var_has_wrong_type_arg__972__1_1_p_0(
  MR_Word LambdaHeadVar__1_89)
{
  MR_bool succeeded;
  MR_Word MaybeSource_40 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_89, (MR_Integer) 5))));
  MR_Word Source_41;

  succeeded = (MaybeSource_40 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Source_41 = ((MR_Word) ((MR_hl_field(1, MaybeSource_40, (MR_Integer) 0))));
    succeeded = (Source_41 != (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__IntroducedFrom__func__report_error_var_has_wrong_type_arg__961__1_1_f_0(
  MR_Word LambdaHeadVar__1_87)
{
  MR_Word LambdaHeadVar__2_88 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_87, (MR_Integer) 0))));

  return LambdaHeadVar__2_88;
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
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
          TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]);
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

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(
  MR_Word ActualExpected_3)
{
  MR_Word Pieces_4;
  MR_Word ActualPieces_5 = ((MR_Word) ((MR_hl_field(0, ActualExpected_3, (MR_Integer) 0))));

  {
    Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[182])));
    MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (ActualPieces_5));
  }
  return Pieces_4;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_pieces_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybePrintSource_7,
  MR_Word ActualExpected_8,
  MR_Word STATE_VARIABLE_TaggedPieceLists_0_19,
  MR_Word * STATE_VARIABLE_TaggedPieceLists_20)
{
  MR_bool succeeded = (MaybePrintSource_7 == (MR_Integer) 1);
  MR_Word ExpectedPieces_12 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, (MR_Integer) 2))));
  MR_Word MaybeSource_15 = ((MR_Word) ((MR_hl_field(0, ActualExpected_8, (MR_Integer) 5))));
  MR_Word TaggedPieces_18;
  MR_Word Source_16;

  if (succeeded)
  {
    succeeded = (MaybeSource_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Source_16 = ((MR_Word) ((MR_hl_field(1, MaybeSource_15, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word SourcePieces_17;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;

    SourcePieces_17 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_6, Source_16);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[178])));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (SourcePieces_17));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (ExpectedPieces_12));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[179])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    TaggedPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_24);
  }
  else
    {
      TaggedPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TaggedPieces_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[180])));
      MR_hl_field(1, TaggedPieces_18, 1) = ((MR_Box) (ExpectedPieces_12));
    }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ((MR_Box) (TaggedPieces_18)), STATE_VARIABLE_TaggedPieceLists_0_19);
  if (succeeded)
    *STATE_VARIABLE_TaggedPieceLists_20 = STATE_VARIABLE_TaggedPieceLists_0_19;
  else
  {
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (TaggedPieces_18));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_TaggedPieceLists_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), STATE_VARIABLE_TaggedPieceLists_0_19, Var_32);
  }
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

  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(ArgType_15, &StrippedArgType_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedArgType_19, &FullArgType_20);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedExpType_11, &FullExpType_21);
  succeeded = check_hlds__typecheck_error_util__identical_types_2_p_0(FullArgType_20, FullExpType_21);
  if (!(succeeded))
  {
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_43;

    succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
          succeeded = (strcmp(Var_42, (MR_String) "<any>") == 0);
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
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    succeeded = parse_tree__prog_type__type_subsumes_3_p_0(FullArgType_20, FullExpType_21, &_Subst_23);
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
      Var_49 = ((MR_Word) ((MR_hl_field(2, FullExpType_21, (MR_Integer) 0))));
      succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgTypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 1))));
          Var_52 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, (MR_Integer) 2))));
          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
              succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
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
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_2(
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
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(
  MR_Word TypeAssign_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_NumUnsatisfied_0_17,
  MR_Integer * STATE_VARIABLE_NumUnsatisfied_18)
{
  MR_Word Constraints_8;
  MR_Word UnprovenConstraints_9;
  MR_Word UnprovenProgConstraints0_10;
  MR_Word TVarSet_11;
  MR_Word Bindings_12;
  MR_Word UnprovenProgConstraints1_13;
  MR_Word UnprovenProgConstraints_14;
  MR_Word UnprovenProgConstraintStrings_15;
  MR_Word UnprovenProgConstraintsPieces_16;
  MR_Integer Var_20;
  MR_Word Var_21;

  check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign_5, &Constraints_8);
  UnprovenConstraints_9 = ((MR_Word) ((MR_hl_field(0, Constraints_8, (MR_Integer) 0))));
  hlds__hlds_class__retrieve_prog_constraint_list_2_p_0(UnprovenConstraints_9, &UnprovenProgConstraints0_10);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_5, &TVarSet_11);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &Bindings_12);
  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Bindings_12, UnprovenProgConstraints0_10, &UnprovenProgConstraints1_13);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenProgConstraints1_13, &UnprovenProgConstraints_14);
  Var_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenProgConstraints_14);
  *STATE_VARIABLE_NumUnsatisfied_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUnsatisfied_0_17 + (MR_Unsigned) Var_20);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__typecheck_errors__constraints_to_pieces_4_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  UnprovenProgConstraintStrings_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, UnprovenProgConstraints_14);
  UnprovenProgConstraintsPieces_16 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[9]), UnprovenProgConstraintStrings_15);
  *Pieces_6 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", UnprovenProgConstraintsPieces_16);
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_6_f_0(
  MR_Word Info_8,
  MR_Word ClauseContext_9,
  MR_Word Context_10,
  MR_Word ArgVectorKind_11,
  MR_Word TypeAssignSet_12,
  MR_Word ArgVectorTypeErrors0_13)
{
  MR_Word Spec_14;
  MR_Word ArgVectorTypeErrors_15;
  MR_Word InClauseForPieces_16;
  MR_Word ArgVectorKindPieces_17;
  MR_Word VarSet_18;
  MR_Word HeadArgVectorTypeErrors_19;
  MR_Word TailArgVectorTypeErrors_20;
  MR_Word ArgErrorPieces_21;
  MR_Word VerboseComponent_22;
  MR_Word Msg_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;

  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_arg_vector_type_error_0), ArgVectorTypeErrors0_13, &ArgVectorTypeErrors_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_9);
  ArgVectorKindPieces_17 = check_hlds__typecheck_error_util__arg_vector_kind_to_pieces_2_f_0(ClauseContext_9, ArgVectorKind_11);
  VarSet_18 = ((MR_Word) ((MR_hl_field(0, ClauseContext_9, (MR_Integer) 5))));
  if ((ArgVectorTypeErrors_15 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.report_error_wrong_types_in_arg_vector\'/6", (MR_String) "ArgVectorTypeErrors = []");
  else
  {
    HeadArgVectorTypeErrors_19 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, (MR_Integer) 0))));
    TailArgVectorTypeErrors_20 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_15, (MR_Integer) 1))));
  }
  check_hlds__typecheck_errors__arg_vector_type_errors_to_pieces_5_p_0(VarSet_18, ArgVectorTypeErrors_15, HeadArgVectorTypeErrors_19, TailArgVectorTypeErrors_20, &ArgErrorPieces_21);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_18, TypeAssignSet_12, &VerboseComponent_22);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (ArgVectorKindPieces_17));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (ArgErrorPieces_21));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (VerboseComponent_22));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Msg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_23, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Msg_23));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_wrong_types_in_arg_vector\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Var_37));
  }
  return Spec_14;
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
    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13]));
    TailPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadTailError_13 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 0))));
    MR_Word TailTailErrors_14 = ((MR_Word) ((MR_hl_field(1, TailErrors_9, (MR_Integer) 1))));

    SuffixPiece_11 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[111]));
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
      MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
    }
  else
  {
    MR_Word Var_87;
    MR_Word SwitchedPosPieces_95;

    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SwitchedPosPieces_83, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[84])));
    SwitchedPosPieces_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[115])), Var_87);
    if ((SwitchedPosPieces_95 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        NlSwitchedPosSuffixPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 0) = ((MR_Box) (SuffixPiece_11));
        MR_hl_field(1, NlSwitchedPosSuffixPieces_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
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
      NlSwitchedPosSuffixPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])), Var_38);
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
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[112])));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[66])));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (TailPieces_12));
  }
  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NlSwitchedPosSuffixPieces_25, Var_78);
  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_20, Var_77);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[74])), Var_76);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_18, Var_62);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_61);
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
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[117])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
        }
        {
          HeadSwitchedPosPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[116])));
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
          MR_hl_field(1, HeadSwitchedPosPieces_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[116])));
          MR_hl_field(1, HeadSwitchedPosPieces_23, 1) = ((MR_Box) (Var_43));
        }
      }
      if ((TailSwitchedPosPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadSwitchedPosPieces_23;
      else
      {
        MR_Word Var_52;

        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[118])), TailSwitchedPosPieces_12);
        *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadSwitchedPosPieces_23, Var_52);
      }
    }
    else
      *HeadVar__4_4 = TailSwitchedPosPieces_12;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_var_has_wrong_type_arg__972__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_88;

  conv1_LambdaHeadVar__2_88 = check_hlds__typecheck_errors__IntroducedFrom__func__report_error_var_has_wrong_type_arg__961__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_88));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_1(
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
check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0(
  MR_Word Info_9,
  MR_Word ClauseContext_10,
  MR_Word GoalContext_11,
  MR_Word Context_12,
  MR_Integer ArgNum_13,
  MR_Word Var_14,
  MR_Word ArgTypeAssignSet_15)
{
  MR_bool succeeded;
  MR_Word Spec_16;
  MR_Word InClauseForPieces_17;
  MR_Word GoalContextPieces_18;
  MR_Word InstVarSet_19;
  MR_Word ArgTypeStuffList_20;
  MR_Word ActualExpectedList0_21;
  MR_Word ActualExpectedList_22;
  MR_Word VarSet_24;
  MR_Word ActualExpectedPieces_32;
  MR_Word DiffPieces_33;
  MR_Word VerboseComponent_45;
  MR_Word Msg_46;
  MR_Word Var_47;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_161;
  MR_Word Var_166;
  MR_Word ActualExpected_25;
  MR_Word Var_52;

  InClauseForPieces_17 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_10);
  GoalContextPieces_18 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_10, GoalContext_11);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_10, &InstVarSet_19);
  check_hlds__typecheck_error_type_assign__get_arg_type_stuffs_4_p_0(ArgNum_13, Var_14, ArgTypeAssignSet_15, &ArgTypeStuffList_20);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[2]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_7_f_0_1));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_47, 4) = ((MR_Box) (InstVarSet_19));
  }
  ActualExpectedList0_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_47, ArgTypeStuffList_20);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_21, &ActualExpectedList_22);
  VarSet_24 = ((MR_Word) ((MR_hl_field(0, ClauseContext_10, (MR_Integer) 5))));
  succeeded = (ActualExpectedList_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpected_25 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_22, (MR_Integer) 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_22, (MR_Integer) 1))));
    succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ActualPieces_26 = ((MR_Word) ((MR_hl_field(0, ActualExpected_25, (MR_Integer) 0))));
    MR_Word ActualType_27 = ((MR_Word) ((MR_hl_field(0, ActualExpected_25, (MR_Integer) 1))));
    MR_Word ExpectedPieces_28 = ((MR_Word) ((MR_hl_field(0, ActualExpected_25, (MR_Integer) 2))));
    MR_Word ExpectedType_29 = ((MR_Word) ((MR_hl_field(0, ActualExpected_25, (MR_Integer) 3))));
    MR_Word ExistQTVars_30 = ((MR_Word) ((MR_hl_field(0, ActualExpected_25, (MR_Integer) 4))));
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_77;

    Var_53 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_14);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[76])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[74])), Var_77);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_26, Var_63);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_62);
    ActualExpectedPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_54);
    DiffPieces_33 = check_hlds__typecheck_errors__type_diff_pieces_4_f_0((MR_Word) ((MR_Unsigned) 0U), ExistQTVars_30, ActualType_27, ExpectedType_29);
  }
  else
  {
    MR_Word ActualTypePieceLists_34;
    MR_Word ModuleInfo_36;
    MR_Word ActualTypePieces_37;

    ActualTypePieceLists_34 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[7]), ActualExpectedList_22);
    ModuleInfo_36 = ((MR_Word) ((MR_hl_field(0, ClauseContext_10, (MR_Integer) 0))));
    succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ActualTypePieceLists_34);
    if (succeeded)
    {
      succeeded = (ActualTypePieceLists_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ActualTypePieces_37 = ((MR_Word) ((MR_hl_field(1, ActualTypePieceLists_34, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word MaybePrintSource_42;
      MR_Word AllExpectedPieces_44;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_43;

      succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[8]), ActualExpectedList_22);
      if (succeeded)
        MaybePrintSource_42 = (MR_Integer) 1;
      else
        MaybePrintSource_42 = (MR_Integer) 0;
      check_hlds__typecheck_errors__acc_expected_type_source_pieces_5_p_0(ModuleInfo_36, MaybePrintSource_42, ActualExpectedList_22, &Var_43, &AllExpectedPieces_44);
      Var_95 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_14);
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[81])), AllExpectedPieces_44);
      Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualTypePieces_37, Var_110);
      Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[80])), Var_109);
      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, Var_96);
      ActualExpectedPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_94);
    }
    else
    {
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_138;
      MR_Word Var_143;
      MR_Word Var_144;

      Var_123 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_14);
      Var_132 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_14);
      Var_144 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(ModuleInfo_36, ActualExpectedList_22);
      Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69])));
      Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])), Var_143);
      Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_138);
      Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_133);
      Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_131);
      Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_124);
      ActualExpectedPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_122);
    }
    DiffPieces_33 = (MR_Word) ((MR_Unsigned) 0U);
  }
  check_hlds__typecheck_error_type_assign__arg_type_assign_set_msg_to_verbose_component_4_p_0(Info_9, VarSet_24, ArgTypeAssignSet_15, &VerboseComponent_45);
  Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_17, GoalContextPieces_18);
  {
    Var_155 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
  }
  Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualExpectedPieces_32, DiffPieces_33);
  Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])), Var_160);
  {
    Var_158 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_158, 0) = ((MR_Box) (Var_159));
  }
  {
    Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_161, 0) = ((MR_Box) (VerboseComponent_45));
    MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_161));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
  }
  {
    Msg_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_46, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_46, 1) = ((MR_Box) (Var_154));
  }
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (Msg_46));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type_arg\'/7"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_166));
  }
  return Spec_16;
}

static void MR_CALL 
check_hlds__typecheck_errors__acc_expected_type_source_pieces_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word MaybePrintSource_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]));
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ActualExpected_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ActualExpecteds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TailSourceExpectedPairs_14;
    MR_Word TailTaggedPieces_15;
    MR_Word ExpectedPieces_18;
    MR_Word MaybeSource_21;
    MR_String CommaOrPeriod_22;
    MR_Word SourcePieces_26;
    MR_Word TaggedPieces_27;
    MR_Word SourceExpectedPair_28;
    MR_Word Source_25;

    check_hlds__typecheck_errors__acc_expected_type_source_pieces_5_p_0(ModuleInfo_1, MaybePrintSource_2, ActualExpecteds_11, &TailSourceExpectedPairs_14, &TailTaggedPieces_15);
    ExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_10, (MR_Integer) 2))));
    MaybeSource_21 = ((MR_Word) ((MR_hl_field(0, ActualExpected_10, (MR_Integer) 5))));
    if ((TailTaggedPieces_15 == (MR_Word) ((MR_Unsigned) 0U)))
      CommaOrPeriod_22 = (MR_String) ".";
    else
      CommaOrPeriod_22 = (MR_String) ",";
    succeeded = (MaybePrintSource_2 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeSource_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Source_25 = ((MR_Word) ((MR_hl_field(1, MaybeSource_21, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;

      SourcePieces_26 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_1, Source_25);
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[178])));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) (SourcePieces_26));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (ExpectedPieces_18));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[179])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_40, 1) = ((MR_Box) (CommaOrPeriod_22));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
      }
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
      TaggedPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_32);
    }
    else
    {
      MR_Word Var_45;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_52;

      SourcePieces_26 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[63])));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (ExpectedPieces_18));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[181])));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (CommaOrPeriod_22));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
      }
      TaggedPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_51);
    }
    {
      SourceExpectedPair_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SourceExpectedPair_28, 0) = ((MR_Box) (SourcePieces_26));
      MR_hl_field(0, SourceExpectedPair_28, 1) = ((MR_Box) (ExpectedPieces_18));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), ((MR_Box) (SourceExpectedPair_28)), TailSourceExpectedPairs_14);
    if (succeeded)
    {
      *HeadVar__4_4 = TailSourceExpectedPairs_14;
      *HeadVar__5_5 = TailTaggedPieces_15;
    }
    else
    {
      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[0]), ((MR_Box) (SourceExpectedPair_28)), TailSourceExpectedPairs_14, HeadVar__4_4);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TaggedPieces_27, TailTaggedPieces_15);
    }
  }
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
  MR_Word VarSet_22;
  MR_Word MaybeActualExpected_24;
  MR_Word ActualExpectedPieces_31;
  MR_Word DiffPieces_32;
  MR_Word NoSuffixIntegerVarSet_34;
  MR_Word NoSuffixIntegerPieces_35;
  MR_Word VerboseComponent_36;
  MR_Word Msg_37;
  MR_Word Spec_38;
  MR_Word Var_39;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_131;
  MR_Word ActualExpected_23;
  MR_Word Var_44;
  MR_Word BuiltinType_149;
  MR_Word BuiltinTypeInt_150;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  GoalContextPieces_17 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, Var_39, 5) = ((MR_Box) (Type_12));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_39, TypeAssignSet_13, Var_11, &ActualExpectedList0_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_19, &ActualExpectedList_20);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 5))));
  succeeded = (ActualExpectedList_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpected_23 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_20, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_20, (MR_Integer) 1))));
    succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ActualPieces_25;
    MR_Word ActualType_26;
    MR_Word ExpectedPieces_27;
    MR_Word ExpectedType_28;
    MR_Word ExistQTVars_29;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_69;

    {
      MaybeActualExpected_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeActualExpected_24, 0) = ((MR_Box) (ActualExpected_23));
    }
    ActualPieces_25 = ((MR_Word) ((MR_hl_field(0, ActualExpected_23, (MR_Integer) 0))));
    ActualType_26 = ((MR_Word) ((MR_hl_field(0, ActualExpected_23, (MR_Integer) 1))));
    ExpectedPieces_27 = ((MR_Word) ((MR_hl_field(0, ActualExpected_23, (MR_Integer) 2))));
    ExpectedType_28 = ((MR_Word) ((MR_hl_field(0, ActualExpected_23, (MR_Integer) 3))));
    ExistQTVars_29 = ((MR_Word) ((MR_hl_field(0, ActualExpected_23, (MR_Integer) 4))));
    Var_45 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_27, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[76])));
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[74])), Var_69);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_25, Var_55);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_54);
    ActualExpectedPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_46);
    DiffPieces_32 = check_hlds__typecheck_errors__type_diff_pieces_4_f_0((MR_Word) ((MR_Unsigned) 0U), ExistQTVars_29, ActualType_26, ExpectedType_28);
  }
  else
  {
    MR_Word ModuleInfo_33;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Word Var_104;

    MaybeActualExpected_24 = (MR_Word) ((MR_Unsigned) 0U);
    ModuleInfo_33 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, (MR_Integer) 0))));
    Var_83 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
    Var_92 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_11);
    Var_104 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(ModuleInfo_33, ActualExpectedList_20);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69])));
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])), Var_103);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_98);
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, Var_93);
    Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_91);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_84);
    ActualExpectedPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_82);
    DiffPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
  }
  check_hlds__typecheck_info__typecheck_info_get_nosuffix_integer_vars_2_p_0(Info_8, &NoSuffixIntegerVarSet_34);
  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), NoSuffixIntegerVarSet_34, ((MR_Box) (Var_11)));
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Type_12)) == (MR_Integer) 2);
    if (succeeded)
    {
      BuiltinType_149 = ((MR_Word) ((MR_hl_field(2, Type_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) BuiltinType_149)) == (MR_Integer) 1);
      if (succeeded)
      {
        BuiltinTypeInt_150 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_149, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (BuiltinTypeInt_150 != (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_35 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[166]));
  else
    NoSuffixIntegerPieces_35 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_22, TypeAssignSet_13, &VerboseComponent_36);
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_117 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_117, 0) = ((MR_Box) (GoalContextPieces_17));
  }
  {
    Var_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_121, 0) = ((MR_Box) (ActualExpectedPieces_31));
  }
  {
    Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_123, 0) = ((MR_Box) (DiffPieces_32));
  }
  {
    Var_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_125, 0) = ((MR_Box) (NoSuffixIntegerPieces_35));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (VerboseComponent_36));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_3[3]));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
  }
  {
    Msg_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_37, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_37, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (Msg_37));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type\'/6"));
    MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_38, 3) = ((MR_Box) (Var_131));
  }
  {
    SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_38));
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_24));
  }
  return SpecAndMaybeActualExpected_14;
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
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[195])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[194])));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43])));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
      }
      Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_8, Var_22);
      Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[193])), Var_21);
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
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[225])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[223])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
        }
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeCtorPieces_2, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[226])));
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

  succeeded = check_hlds__typecheck_errors__IntroducedFrom__pred__higher_order_diff_pieces__1601__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[199])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[198])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
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
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[196])));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
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
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[194])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[200])));
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
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[201])));
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
        MR_hl_field(0, Var_103, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_5[4]));
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
          MR_hl_field(1, Var_128, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[205])));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
        }
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[204])));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[203])));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_111, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[202])));
          MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
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
          MR_hl_field(1, Var_156, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_153, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[205])));
          MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_156));
        }
        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[204])));
          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[203])));
          MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_145));
        }
        {
          Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[206])));
          MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[197])));
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
          MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[213])));
        }
        {
          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_183, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[211])));
          MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_180, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_183));
        }
        {
          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_177, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[210])));
          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_180));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_177));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[209])));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[208])));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[207])));
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
          MR_hl_field(1, Var_216, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[213])));
        }
        {
          Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_213, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[211])));
          MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_216));
        }
        {
          Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_210, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_213));
        }
        {
          Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_207, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[210])));
          MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_207));
        }
        {
          Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_202, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[209])));
          MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_205));
        }
        {
          Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
          MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_197, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[208])));
          MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_194, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[207])));
          MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_197));
        }
        Var_193 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_12, Var_194);
        STATE_VARIABLE_DiffPieces_192_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_DiffPieces_162_162, Var_193);
      }
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[214]), ((MR_Box) (ActualArgModes_27)), ((MR_Box) (ExpectedArgModes_31)));
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
          MR_hl_field(1, Var_230, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[218])));
        }
        {
          Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_227, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[216])));
          MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_230));
        }
        {
          Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_224, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[215])));
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

        ActualDetismStr_42 = parse_tree__prog_out__determinism_to_string_1_f_0(ActualDetism_29);
        ExpectedDetismStr_43 = parse_tree__prog_out__determinism_to_string_1_f_0(ExpectedDetism_33);
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
          MR_hl_field(1, Var_260, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        }
        {
          Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_257, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[222])));
          MR_hl_field(1, Var_257, 1) = ((MR_Box) (Var_260));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[22])));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (Var_257));
        }
        {
          Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_252, 0) = ((MR_Box) (Var_253));
          MR_hl_field(1, Var_252, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_249, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[221])));
          MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_252));
        }
        {
          Var_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_246, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[220])));
          MR_hl_field(1, Var_246, 1) = ((MR_Box) (Var_249));
        }
        {
          Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_244, 0) = ((MR_Box) (Var_245));
          MR_hl_field(1, Var_244, 1) = ((MR_Box) (Var_246));
        }
        {
          Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_241, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[208])));
          MR_hl_field(1, Var_241, 1) = ((MR_Box) (Var_244));
        }
        {
          Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_238, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[219])));
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

  ActualType_11 = parse_tree__prog_type__strip_kind_annotation_1_f_0(ActualType0_8);
  ExpectedType_12 = parse_tree__prog_type__strip_kind_annotation_1_f_0(ExpectedType0_9);
  succeeded = parse_tree__prog_type____Unify____non_kinded_type_0_0(ActualType_11, ExpectedType_12);
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
                Var_44 = (MR_Word) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[185]));
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
                  Var_49 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[187]));
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
                    Var_53 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[184]));
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
        DiffPieces_10 = check_hlds__typecheck_errors__wrap_diff_pieces_2_f_0(ContextPieces_6, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[191])));
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

    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[227])), Var_12);
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
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_5, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[229])), Var_25);
    DiffPieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_18);
  }
  return DiffPieces_6;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;

  conv1_HeadVar__5_5 = check_hlds__typecheck_error_type_assign__type_stuff_to_actual_expected_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_1(
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
check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0(
  MR_Word Info_10,
  MR_Word ClauseContext_11,
  MR_Word GoalContext_12,
  MR_Word Context_13,
  MR_Word Var_14,
  MR_Word TypeA_15,
  MR_Word TypeB_16,
  MR_Word TypeAssignSet_17)
{
  MR_bool succeeded;
  MR_Word Spec_18;
  MR_Word InClauseForPieces_19;
  MR_Word GoalContextPieces_20;
  MR_Word InstVarSet_21;
  MR_Word TypeStuffList_22;
  MR_Word ActualExpectedListA0_23;
  MR_Word ActualExpectedListB0_24;
  MR_Word ActualExpectedListA_25;
  MR_Word ActualExpectedListB_26;
  MR_Word VarSet_28;
  MR_Word ActualExpectedPieces_43;
  MR_Word VerboseComponent_45;
  MR_Word Msg_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_146;
  MR_Word ActualExpectedA_29;
  MR_Word ActualExpectedB_30;
  MR_Word Var_54;
  MR_Word Var_55;

  InClauseForPieces_19 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_11);
  GoalContextPieces_20 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_11, GoalContext_12);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_11, &InstVarSet_21);
  check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_17, Var_14, &TypeStuffList_22);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_1));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_47, 4) = ((MR_Box) (InstVarSet_21));
    MR_hl_field(0, Var_47, 5) = ((MR_Box) (TypeA_15));
  }
  ActualExpectedListA0_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_47, TypeStuffList_22);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__typecheck_errors__report_error_var_has_wrong_type_two_expected_8_f_0_2));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (InstVarSet_21));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (TypeB_16));
  }
  ActualExpectedListB0_24 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_49, TypeStuffList_22);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedListA0_23, &ActualExpectedListA_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedListB0_24, &ActualExpectedListB_26);
  VarSet_28 = ((MR_Word) ((MR_hl_field(0, ClauseContext_11, (MR_Integer) 5))));
  succeeded = (ActualExpectedListA_25 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpectedA_29 = ((MR_Word) ((MR_hl_field(1, ActualExpectedListA_25, (MR_Integer) 0))));
    Var_54 = ((MR_Word) ((MR_hl_field(1, ActualExpectedListA_25, (MR_Integer) 1))));
    succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ActualExpectedListB_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ActualExpectedB_30 = ((MR_Word) ((MR_hl_field(1, ActualExpectedListB_26, (MR_Integer) 0))));
        Var_55 = ((MR_Word) ((MR_hl_field(1, ActualExpectedListB_26, (MR_Integer) 1))));
        succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word ActualPieces_31 = ((MR_Word) ((MR_hl_field(0, ActualExpectedA_29, (MR_Integer) 0))));
    MR_Word ExpectedPiecesA_33 = ((MR_Word) ((MR_hl_field(0, ActualExpectedA_29, (MR_Integer) 2))));
    MR_Word ExpectedPiecesB_39 = ((MR_Word) ((MR_hl_field(0, ActualExpectedB_30, (MR_Integer) 2))));
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_79;

    Var_56 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPiecesB_39, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), Var_79);
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPiecesA_33, Var_74);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[54])), Var_73);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_31, Var_63);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[50])), Var_62);
    ActualExpectedPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_57);
  }
  else
  {
    MR_Word ModuleInfo_44 = ((MR_Word) ((MR_hl_field(0, ClauseContext_11, (MR_Integer) 0))));
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_106;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_124;
    MR_Word Var_125;

    Var_91 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
    Var_100 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_28, Var_14);
    Var_112 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(ModuleInfo_44, ActualExpectedListA_25);
    Var_125 = check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(ModuleInfo_44, ActualExpectedListB_26);
    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[69])));
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[67])), Var_124);
    Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_113);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[64])), Var_111);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[62])), Var_106);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_101);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[60])), Var_99);
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_92);
    ActualExpectedPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[58])), Var_90);
  }
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_28, TypeAssignSet_17, &VerboseComponent_45);
  Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_19, GoalContextPieces_20);
  {
    Var_136 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
  }
  Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[48])), ActualExpectedPieces_43);
  {
    Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_139, 0) = ((MR_Box) (Var_140));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (VerboseComponent_45));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
  }
  {
    Msg_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_46, 0) = ((MR_Box) (Context_13));
    MR_hl_field(2, Msg_46, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (Msg_46));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_var_has_wrong_type_two_expected\'/8"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_146));
  }
  return Spec_18;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Pieces_4;

  conv2_Pieces_4 = check_hlds__typecheck_errors__actual_types_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Pieces_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TaggedPieceLists_20;

  check_hlds__typecheck_errors__acc_expected_type_pieces_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TaggedPieceLists_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TaggedPieceLists_20));
}

static MR_Word MR_CALL 
check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ActualExpectedList_5)
{
  MR_Word Pieces_6;
  MR_Word ExpectedPieces_7;
  MR_Word ActualPieces_8;
  MR_Word Var_9;
  MR_Word Var_13;
  MR_Box conv1_ExpectedPieces_7;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_8[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[4]), Var_9, ActualExpectedList_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ExpectedPieces_7);
  ExpectedPieces_7 = ((MR_Word) (conv1_ExpectedPieces_7));
  ActualPieces_8 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[6]), ActualExpectedList_5);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), ExpectedPieces_7, ActualPieces_8);
  Pieces_6 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(Var_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
  return Pieces_6;
}

static MR_Box MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_2(
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
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_1(
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
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__conv2_ConsDefn_151));
  check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_4(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_162 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 0))));
    MR_Word Var_163 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 1))));
    MR_Word Var_164 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 2))));
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_45;
    MR_Word Var_46;

    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__Var_68 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 3))));
    Var_165 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 4))));
    Var_166 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefn_151, (MR_Integer) 5))));
    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__Var_68 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__Var_68, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__Var_68, (MR_Integer) 1))));
      check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__conv2_ConsDefn_151, (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefnList_16, check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_5, env_ptr);
      (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = MR_TRUE;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word Var_15,
  MR_Word ConsDefnList_16,
  MR_Word Functor_17,
  MR_Word ArgVars_18,
  MR_Word ArgsTypeAssignSet_19)
{
  struct check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0_s env;

  (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefnList_16 = ConsDefnList_16;
  {
    MR_Word Spec_20;
    MR_Word InClauseForPieces_21;
    MR_Word ContextPieces_22;
    MR_Word ModuleInfo_23;
    MR_Word VarSet_24;
    MR_Word InstVarSet_25;
    MR_Word StrippedFunctor_26;
    MR_String StrippedFunctorStr_27;
    MR_Integer Arity_28;
    MR_Word ConsArgTypesSet_29;
    MR_Word MaybeNumMismatches_39;
    MR_Word ErrorPieces_40;
    MR_Word VerboseComponents_42;
    MR_String Arguments_52;
    MR_Word VarAndTermPieces_54;
    MR_Word Msg_55;
    MR_Word Var_56;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_113;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_149;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Integer Var_154;
    MR_Word Var_155;
    MR_Word ConsArgTypes_30;
    MR_Word Var_31;

    InClauseForPieces_21 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_12);
    hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_13, InClauseForPieces_21, &ContextPieces_22);
    ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 0))));
    Var_152 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 1))));
    Var_153 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 2))));
    Var_154 = ((MR_Integer) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 3))));
    Var_155 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 4))));
    VarSet_24 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 5))));
    check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_12, &InstVarSet_25);
    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_17, &StrippedFunctor_26);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (VarSet_24));
    }
    StrippedFunctorStr_27 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_23, Var_56, (MR_Integer) 0, StrippedFunctor_26, ArgVars_18);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_18, &Arity_28);
    ConsArgTypesSet_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[4]), ArgsTypeAssignSet_19);
    (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[2]), ConsArgTypesSet_29);
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
    {
      (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = (ConsArgTypesSet_29 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
      {
        ConsArgTypes_30 = ((MR_Word) ((MR_hl_field(1, ConsArgTypesSet_29, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(1, ConsArgTypesSet_29, (MR_Integer) 1))));
      }
    }
    if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
    {
      MR_Word ArgExpTypes_32;
      MR_Word TypeAssigns_33;
      MR_Word RevSubsumesMismatches_34;
      MR_Word RevNoSubsumeMismatches_35;

      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgVars_18, ConsArgTypes_30, &ArgExpTypes_32);
      TypeAssigns_33 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[5]), ArgsTypeAssignSet_19);
      check_hlds__typecheck_errors__find_mismatched_args_9_p_0((MR_Integer) 0, InstVarSet_25, TypeAssigns_33, (MR_Integer) 1, ArgExpTypes_32, (MR_Word) ((MR_Unsigned) 0U), &RevSubsumesMismatches_34, (MR_Word) ((MR_Unsigned) 0U), &RevNoSubsumeMismatches_35);
      if ((RevNoSubsumeMismatches_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SubsumesMismatches_41;
        MR_Integer Var_66;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_34, &SubsumesMismatches_41);
        Var_66 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), SubsumesMismatches_41);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_66));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_24, Functor_17, (MR_Integer) 0, SubsumesMismatches_41);
      }
      else
      {
        MR_Word NoSubsumeMismatches_38;
        MR_Integer Var_64;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_35, &NoSubsumeMismatches_38);
        Var_64 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0), NoSubsumeMismatches_38);
        {
          MaybeNumMismatches_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeNumMismatches_39, 0) = ((MR_Box) (Var_64));
        }
        ErrorPieces_40 = check_hlds__typecheck_errors__mismatched_args_to_pieces_4_f_0(VarSet_24, Functor_17, (MR_Integer) 0, NoSubsumeMismatches_38);
      }
      VerboseComponents_42 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeAssignSet_43;
      MR_Word ResultTypePieces_47;
      MR_Word AllTypesPieces_48;
      MR_Word VerboseComponent_51;

      MaybeNumMismatches_39 = (MR_Word) ((MR_Unsigned) 0U);
      TypeAssignSet_43 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_19);
      check_hlds__typecheck_errors__report_error_unify_var_functor_args_9_f_0_6(&env);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
      {
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        Var_69 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_15);
        Var_71 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_25, TypeAssignSet_43, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_15);
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
        ResultTypePieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_70);
      }
      else
        ResultTypePieces_47 = (MR_Word) ((MR_Unsigned) 0U);
      if ((ArgVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;

        Var_79 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_17, Arity_28);
        Var_81 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_25, Functor_17, Arity_28, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefnList_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
        AllTypesPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_80);
      }
      else
      {
        MR_Word HeadArgVar_49 = ((MR_Word) ((MR_hl_field(1, ArgVars_18, (MR_Integer) 0))));
        MR_Word TailArgVars_50 = ((MR_Word) ((MR_hl_field(1, ArgVars_18, (MR_Integer) 1))));
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_96;

        Var_89 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_17, Arity_28);
        Var_91 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_25, Functor_17, Arity_28, (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__ConsDefnList_16, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])));
        Var_96 = check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(VarSet_24, InstVarSet_25, TypeAssignSet_43, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])), HeadArgVar_49, TailArgVars_50);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_96);
        AllTypesPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_90);
      }
      ErrorPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_47, AllTypesPieces_48);
      check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_11, VarSet_24, TypeAssignSet_43, &VerboseComponent_51);
      {
        VerboseComponents_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VerboseComponents_42, 0) = ((MR_Box) (VerboseComponent_51));
        MR_hl_field(1, VerboseComponents_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeNumMismatches_39 == (MR_Word) ((MR_Unsigned) 0U)))
      Arguments_52 = (MR_String) "argument(s)";
    else
    {
      MR_Integer NumMismatches_53 = ((MR_Integer) ((MR_hl_field(1, MaybeNumMismatches_39, (MR_Integer) 0))));

      (env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded = (NumMismatches_53 == (MR_Integer) 1);
      if ((env).check_hlds__typecheck_errors__report_error_unify_var_functor_args_10_f_0_env_0__succeeded)
        Arguments_52 = (MR_String) "argument";
      else
        Arguments_52 = (MR_String) "arguments";
    }
    Var_109 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_24, Var_15);
    {
      Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_117, 1) = ((MR_Box) (StrippedFunctorStr_27));
    }
    {
      Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_127, 1) = ((MR_Box) (Arguments_52));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[46])));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[44])));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_118, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[43])));
      MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[42])));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_113));
    }
    Var_133 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(StrippedFunctor_26, Arity_28);
    Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_133, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_132);
    Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, Var_110);
    VarAndTermPieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[41])), Var_108);
    {
      Var_141 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_141, 0) = ((MR_Box) (ContextPieces_22));
    }
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_143, 0) = ((MR_Box) (VarAndTermPieces_54));
    }
    {
      Var_145 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_145, 0) = ((MR_Box) (ErrorPieces_40));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (VerboseComponents_42));
    }
    {
      Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
      MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
    }
    {
      Msg_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_55, 0) = ((MR_Box) (Context_14));
      MR_hl_field(2, Msg_55, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_149, 0) = ((MR_Box) (Msg_55));
      MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_args\'/9"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_149));
    }
    return Spec_20;
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
    Var_21 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_9, TypeAssignSet_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[167])), HeadVar_12);
    Var_28 = check_hlds__typecheck_errors__types_of_vars_to_pieces_6_f_0(VarSet_8, InstVarSet_9, TypeAssignSet_10, FinalPieces_11, HeadTailVar_15, TailTailVars_16);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_28);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  }
  return Pieces_14;
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
          ArgNumPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[82]));
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
              MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[5])));
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
        MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[5])));
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
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[84])));
      }
      {
        VarNamePieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarNamePieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[83])));
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

        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadExpectedTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[76])));
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[72])), Var_90);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[81])), Var_82);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadActualTypePieces_26, Var_74);
        ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_73);
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
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadExpectedTypePieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[76])));
        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[72])), Var_123);
        Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[81])), Var_115);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_107);
        ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_105);
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
      Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
      ErrorDescPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[86])), Var_137);
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
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[94]));
        break;
      case (MR_Integer) 1:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[96]));
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
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[110])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[98])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[97])));
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
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[88])));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[87])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedTypePieces_9, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[92])), Var_40);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_35);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualTypePieces_10, Var_30);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[90])), Var_29);
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

    Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[56])), SecondActualTypePieces_6);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_11);
  }
  else
  {
    MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 0))));
    MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Var_21;

    Var_21 = check_hlds__typecheck_errors__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_21);
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
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_47_47;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_48_48;
      MR_Integer Var_49;
      MR_Box conv3_TypeMismatches0_31;
      MR_Box conv2_DoesSomeTypeStuffMatch_32;
      MR_Integer next_value_of_CurArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8;

      Arg_24 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
      ExpType_25 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
      check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_3, Arg_24, &TypeStuffList_29);
      parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(ExpType_25, &StrippedExpType_30);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_7[0]));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__typecheck_errors__find_mismatched_args_9_p_0_1));
        MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_42, 3) = ((MR_Box) (AddQuotes_1));
        MR_hl_field(0, Var_42, 4) = ((MR_Box) (InstVarSet_2));
        MR_hl_field(0, Var_42, 5) = ((MR_Box) (StrippedExpType_30));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_does_some_type_stuff_match_0), Var_42, TypeStuffList_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_31, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_32);
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
              MR_Word Mismatch_62;
              MR_Word Mismatches_63;
              MR_Word Var_64;

              {
                Mismatch_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Mismatch_36, 0) = ((MR_Box) (CurArgNum_4));
                MR_hl_field(0, Mismatch_36, 1) = ((MR_Box) (Arg_24));
                MR_hl_field(0, Mismatch_36, 2) = ((MR_Box) (HeadTypeMismatch_34));
                MR_hl_field(0, Mismatch_36, 3) = ((MR_Box) (TailTypeMismatches_35));
              }
              Mismatch_62 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 0))));
              Mismatches_63 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, (MR_Integer) 1))));
              Var_64 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_62, (MR_Integer) 2))) & (MR_Integer) 1);
              succeeded = (Var_64 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_errors__all_no_subsume_mismatches_1_p_0(Mismatches_63);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_47_47, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_8));
                }
                STATE_VARIABLE_RevSubsumesMismatches_48_48 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_48_48, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_48_48, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_6));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_47_47 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_48_48 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
            STATE_VARIABLE_RevNoSubsumeMismatches_47_47 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
          }
          break;
      }
      Var_49 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_4 = Var_49;
      next_value_of_HeadVar__5_5 = ArgExpTypes_26;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6 = STATE_VARIABLE_RevSubsumesMismatches_48_48;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8 = STATE_VARIABLE_RevNoSubsumeMismatches_47_47;
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
  MR_Word VerboseComponent_28;
  MR_Word AlwaysPieces_29;
  MR_Word Msg_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_61;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_87;
  MR_Word TypeCtorInfo_97_97;
  MR_Word TypesOfVar_26;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
  InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_20, &ContextPieces_21);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_23);
  Var_36 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
  Var_45 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_54 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_22, Var_13);
  Var_56 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_23, TypeAssignSet_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_13);
  Var_66 = check_hlds__typecheck_errors__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_68 = check_hlds__typecheck_errors__type_of_functor_to_pieces_5_f_0(InstVarSet_23, Functor_15, Arity_16, ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_67);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])), Var_65);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_61);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_55);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])), Var_53);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_46);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[39])), Var_44);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_37);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_35);
  succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    Var_76 = ((MR_Word) ((MR_hl_field(3, Functor_15, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_77 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[2]);
      TypeCtorInfo_97_97 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(TypeCtorInfo_97_97, Var_77, TypeAssignSet_17, Var_13, &TypesOfVar_26);
      Var_78 = (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[3]);
      succeeded = mercury__list__any_true_2_p_0(TypeCtorInfo_97_97, Var_78, TypesOfVar_26);
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_27 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[166]));
  else
    NoSuffixIntegerPieces_27 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_22, TypeAssignSet_17, &VerboseComponent_28);
  Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_24, NoSuffixIntegerPieces_27);
  AlwaysPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_21, Var_79);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (AlwaysPieces_29));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (VerboseComponent_28));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
  }
  {
    Msg_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_30, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_30, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Msg_30));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_functor_result\'/8"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_87));
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
    MR_Word TVarSet_68 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 0))));
    MR_Word ExistQVars_69 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 1))));
    MR_Word ConsType_70 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 2))));
    MR_Word ArgTypes_71 = ((MR_Word) ((MR_hl_field(0, SingleDefn_13, (MR_Integer) 3))));
    MR_Word ArgPieces_80;
    MR_Word Var_91;

    if ((ArgTypes_71 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_80 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_76;

      succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_76 = ((MR_Word) ((MR_hl_field(3, Functor_8, (MR_Integer) 1))));
        {
          MR_Word Type_79;
          MR_Word Var_82;

          {
            Type_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Type_79, 0) = ((MR_Box) (SymName_76));
            MR_hl_field(1, Type_79, 1) = ((MR_Box) (ArgTypes_71));
            MR_hl_field(1, Type_79, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_82 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_68, InstVarSet_7, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_69, Type_79);
          ArgPieces_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[88])));
        }
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_errors.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_91 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_68, InstVarSet_7, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_69, ConsType_70);
    ConsTypePieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_80, Var_91);
    succeeded = (Arity_9 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_24;
      MR_Word Var_25;

      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypePieces_14, Var_25);
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_24);
    }
    else
    {
      MR_Word Var_37;
      MR_Word Var_38;

      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypePieces_14, Var_38);
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_37);
    }
  }
  else
  {
    MR_Word ConsTypeListPieces_15;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_61;

    ConsTypeListPieces_15 = check_hlds__typecheck_errors__cons_type_list_to_pieces_4_f_0(InstVarSet_7, ConsDefnList_10, Functor_8, Arity_9);
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[177])), Var_61);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])), Var_56);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypeListPieces_15, Var_51);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[174])), Var_50);
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
          ArgPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[88])));
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
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23]));
      else
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[167]));
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

      Var_16 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(StrippedFunctor_7);
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
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[170])));
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
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[84])));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[171])));
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
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[172])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_33));
      }
    }
  }
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_lambda_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word PredOrFunc_15,
  MR_Word Var_17,
  MR_Word ArgVars_18,
  MR_Word TypeAssignSet_19)
{
  MR_Word Spec_20;

  Spec_20 = check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_117_110_105_102_121_95_118_97_114_95_108_97_109_98_100_97_95_95_91_54_93_95_48_9_f_0(Info_11, ClauseContext_12, UnifyContext_13, Context_14, PredOrFunc_15, Var_17, ArgVars_18, TypeAssignSet_19);
  return Spec_20;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_117_110_105_102_121_95_118_97_114_95_108_97_109_98_100_97_95_95_91_54_93_95_48_9_f_0(
  MR_Word Info_11,
  MR_Word ClauseContext_12,
  MR_Word UnifyContext_13,
  MR_Word Context_14,
  MR_Word PredOrFunc_15,
  MR_Word Var_17,
  MR_Word ArgVars_18,
  MR_Word TypeAssignSet_19)
{
  MR_Word Spec_20;
  MR_Word InClauseForPieces_21;
  MR_Word ContextPieces_22;
  MR_Word VarSet_23;
  MR_Word InstVarSet_24;
  MR_Word Pieces1_25;
  MR_Word Pieces2_26;
  MR_Word Pieces3_29;
  MR_Word LambdaTypePieces_30;
  MR_Word Pieces4_40;
  MR_Word MainPieces_41;
  MR_Word VerboseComponent_42;
  MR_Word Msg_43;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_129;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_149;

  InClauseForPieces_21 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_12);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_13, InClauseForPieces_21, &ContextPieces_22);
  VarSet_23 = ((MR_Word) ((MR_hl_field(0, ClauseContext_12, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_12, &InstVarSet_24);
  Var_49 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_17);
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
  Pieces1_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[25])), Var_48);
  Var_93 = check_hlds__typecheck_errors__argument_name_to_pieces_2_f_0(VarSet_23, Var_17);
  Var_95 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_24, TypeAssignSet_19, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), Var_17);
  Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
  Pieces3_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_94);
  switch (PredOrFunc_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_27;
        MR_Word RetVar_28;
        MR_Word FuncArgVars_36;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_String Var_77;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_String Var_86;
        MR_Box conv0_RetVar_28;
        MR_Box conv1_Var_37;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_18, &FuncArgs_27, &conv0_RetVar_28);
        RetVar_28 = ((MR_Word) (conv0_RetVar_28));
        Var_77 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, FuncArgs_27);
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
        }
        Var_86 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, RetVar_28);
        {
          Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[30])));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_errors_scalar_common_3[0])));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[28])));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[27])));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Pieces2_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26])));
          MR_hl_field(1, Pieces2_26, 1) = ((MR_Box) (Var_72));
        }
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_18, &FuncArgVars_36, &conv1_Var_37);
        if ((FuncArgVars_36 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_30 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[34]));
        else
        {
          MR_Integer Var_119;
          MR_Word Var_123;
          MR_String Var_124;
          MR_String Var_126;
          MR_Integer NumArgVars_151;
          MR_Word Strings_152;
          MR_String JoinedString_153;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), FuncArgVars_36, &NumArgVars_151);
          Var_119 = (MR_Integer) ((MR_Unsigned) NumArgVars_151 - (MR_Unsigned) 1);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_119, ((MR_Box) ((MR_String) ", _")), &Strings_152);
          JoinedString_153 = mercury__string__join_list_2_f_0((MR_String) "", Strings_152);
          Var_126 = mercury__string__f_43_43_2_f_0(JoinedString_153, (MR_String) ") = _");
          Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_126);
          {
            Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_123, 1) = ((MR_Box) (Var_124));
          }
          {
            LambdaTypePieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_30, 0) = ((MR_Box) (Var_123));
            MR_hl_field(1, LambdaTypePieces_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_String Var_60;

        Var_60 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_23, ArgVars_18);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[32])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[31])));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Pieces2_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[26])));
          MR_hl_field(1, Pieces2_26, 1) = ((MR_Box) (Var_55));
        }
        if ((ArgVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_30 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[36]));
        else
        {
          MR_Integer NumArgVars_33;
          MR_Word Strings_34;
          MR_String JoinedString_35;
          MR_Integer Var_106;
          MR_Word Var_110;
          MR_String Var_111;
          MR_String Var_113;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[1]), ArgVars_18, &NumArgVars_33);
          Var_106 = (MR_Integer) ((MR_Unsigned) NumArgVars_33 - (MR_Unsigned) 1);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_106, ((MR_Box) ((MR_String) ", _")), &Strings_34);
          JoinedString_35 = mercury__string__join_list_2_f_0((MR_String) "", Strings_34);
          Var_113 = mercury__string__f_43_43_2_f_0(JoinedString_35, (MR_String) ")");
          Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_113);
          {
            Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_110, 1) = ((MR_Box) (Var_111));
          }
          {
            LambdaTypePieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_30, 0) = ((MR_Box) (Var_110));
            MR_hl_field(1, LambdaTypePieces_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[37])));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (LambdaTypePieces_30));
  }
  Pieces4_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_129, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
  Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces3_29, Pieces4_40);
  Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_26, Var_139);
  MainPieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_25, Var_138);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_11, VarSet_23, TypeAssignSet_19, &VerboseComponent_42);
  {
    Var_141 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_141, 0) = ((MR_Box) (ContextPieces_22));
  }
  {
    Var_143 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_143, 0) = ((MR_Box) (MainPieces_41));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (VerboseComponent_42));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
  }
  {
    Msg_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_43, 0) = ((MR_Box) (Context_14));
    MR_hl_field(2, Msg_43, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (Msg_43));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_lambda\'/9"));
    MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_149));
  }
  return Spec_20;
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
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[168])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_10));
    }
  }
  else
    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[169]));
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_errors__report_error_unify_var_var_7_f_0(
  MR_Word Info_9,
  MR_Word ClauseContext_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word TypeAssignSet_15)
{
  MR_Word Spec_16;
  MR_Word InClauseForPieces_17;
  MR_Word ContextPieces_18;
  MR_Word VarSet_19;
  MR_Word InstVarSet_20;
  MR_Word MainPieces_21;
  MR_Word VerboseComponent_22;
  MR_Word Msg_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_String Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_38;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_String Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_53;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_String Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_80;

  InClauseForPieces_17 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_10);
  hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_p_0(UnifyContext_11, InClauseForPieces_17, &ContextPieces_18);
  VarSet_19 = ((MR_Word) ((MR_hl_field(0, ClauseContext_10, (MR_Integer) 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_10, &InstVarSet_20);
  Var_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, X_13);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
  }
  Var_37 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, Y_14);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
  }
  Var_45 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, X_13);
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[13])));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[21])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[20])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_48 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_20, TypeAssignSet_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[23])), X_13);
  Var_60 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, Y_14);
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_63 = check_hlds__typecheck_errors__type_of_var_to_pieces_4_f_0(InstVarSet_20, TypeAssignSet_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])), Y_14);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])));
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_62);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[8])), Var_57);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, Var_53);
  MainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_47);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_9, VarSet_19, TypeAssignSet_15, &VerboseComponent_22);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (ContextPieces_18));
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (MainPieces_21));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (VerboseComponent_22));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  {
    Msg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_23, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_23, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Msg_23));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_error_unify_var_var\'/7"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_80));
  }
  return Spec_16;
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
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__typecheck_errors_scalar_common_4[1]));
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

    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_8, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
    Var_24 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_12, Var_27);
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[70])), Var_24);
  }
  else
  {
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;

    Var_40 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(TypePiecesLists_12, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[75])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[176])), SuffixPieces_8);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[174])), Var_39);
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
  FromTypeStr_14 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, FromType_10);
  ToTypeStr_15 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_9, (MR_Integer) 2, ToType_11);
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
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[19])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    ErrorPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ErrorPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[18])));
    MR_hl_field(1, ErrorPieces_16, 1) = ((MR_Box) (Var_21));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_13, ErrorPieces_16);
  {
    Spec_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_invalid_coerce_from_to\'/5"));
    MR_hl_field(1, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[15])));
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
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[17])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_errors_scalar_common_1[16])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_17);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_missing_tvar_in_foreign_code\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_8;
}

static void MR_CALL 
check_hlds__typecheck_errors__report_unsatisfiable_constraints_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Pieces_6;
  MR_Integer conv0_STATE_VARIABLE_NumUnsatisfied_18;

  check_hlds__typecheck_errors__constraints_to_pieces_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Pieces_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_NumUnsatisfied_18);
  *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_NumUnsatisfied_18));
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
  MR_Word ConstraintPieceLists_10;
  MR_Integer NumUnsatisfied_11;
  MR_Word Pieces1_12;
  MR_Word Pieces2_13;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Box conv2_NumUnsatisfied_11;

  InClauseForPieces_9 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_5);
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__typecheck_errors_scalar_common_2[1]), TypeAssignSet_7, &ConstraintPieceLists_10, ((MR_Box) ((MR_Integer) 0)), &conv2_NumUnsatisfied_11);
  NumUnsatisfied_11 = ((MR_Integer) (conv2_NumUnsatisfied_11));
  succeeded = (NumUnsatisfied_11 == (MR_Integer) 1);
  if (succeeded)
    Pieces1_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[10]));
  else
    Pieces1_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[12]));
  Pieces2_13 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(ConstraintPieceLists_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_errors_scalar_common_1[14])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_12, Pieces2_13);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InClauseForPieces_9, Var_36);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_errors.report_unsatisfiable_constraints\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Var_35));
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
