/*
** Automatically generated from `typecheck_error_unify.m'
** by the Mercury compiler,
** version rotd-2026-07-25
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


// :- module check_hlds.typecheck_error_unify.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_unify__init
ENDINIT
*/

#include "check_hlds.typecheck_error_unify.mih"


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
#include "check_hlds.typecheck_error_builtin.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
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
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s {
  MR_Word check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14;
  MR_bool check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded;
  jmp_buf check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__Var_77;
  MR_Word check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_169;
  MR_Box check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_169;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_error_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__set_ordlist__ti_set_ordlist_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_categorized_mismatch_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_categorized_mismatch_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_categorized_mismatch_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_categorized_mismatch_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_categorized_mismatch_info_0[1];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_categorized_mismatch_info_0[1];

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_actual_subsume_expected_0[2];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_actual_subsume_expected_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_some_type_stuff_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_some_type_stuff_match_0[2];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_some_type_stuff_match_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__one_or_more__ti_one_or_more_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_0[3];

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__list__ti_list_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_1[2];

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_1[2];

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_category_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_category_0[2];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_category_0[2];

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_info_0[1];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__maybe__ti_maybe_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_type_mismatch_0_0[5];

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_type_mismatch_0_0[5];

static const MR_DuArgLocn check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_locns_type_mismatch_0_0[5];

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_type_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_type_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_type_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_0[1];

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_special_0[1];

static const MR_NotagFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__notag_functor_desc_type_mismatch_special_0;

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__hide_categorized_mismatch_info_2_p_0(
  MR_Word ExpTVarCounts_3,
  MR_Word CatMI_4);

static void MR_CALL 
check_hlds__typecheck_error_unify__substitute_types_check_match_8_p_0(
  MR_Word AddQuotes_9,
  MR_Word InstVarSet_10,
  MR_Word StrippedExpType_11,
  MR_Word TypeStuff_12,
  MR_Word STATE_VARIABLE_TypeMismatches_0_39,
  MR_Word * STATE_VARIABLE_TypeMismatches_40,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_41,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_42);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_7(
  void * env_ptr_arg);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__types_of_vars_to_pieces_7_f_0(
  MR_Word VarSet_9,
  MR_Word InstVarSet_10,
  MR_Word MaybeColor_11,
  MR_Word TypeAssignSet_12,
  MR_Word FinalPieces_13,
  MR_Word HeadVar_14,
  MR_Word TailVars_15);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__mismatched_args_to_pieces_4_f_0(
  MR_Word VarSet_1,
  MR_Word Functor_2,
  MR_Word First_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3);

static void MR_CALL 
check_hlds__typecheck_error_unify__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7);

static void MR_CALL 
check_hlds__typecheck_error_unify__categorize_mismatch_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExpTVarCounts_0_3,
  MR_Word * STATE_VARIABLE_ExpTVarCounts_4);

static void MR_CALL 
check_hlds__typecheck_error_unify__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__expected_types_all_same_return_actuals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0(
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
check_hlds__typecheck_error_unify__all_no_subsume_mismatches_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__type_of_functor_to_pieces_6_f_0(
  MR_Word InstVarSet_8,
  MR_Word MaybeColor_9,
  MR_Word Functor_10,
  MR_Integer Arity_11,
  MR_Word ConsDefnList_12,
  MR_Word SuffixPieces_13);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__cons_type_list_to_pieces_4_f_0(
  MR_Word InstVarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer Arity_4);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(
  MR_Word ConsId_4,
  MR_Integer Arity_5);

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(
  MR_Word InstVarSet_7,
  MR_Word MaybeColor_8,
  MR_Word TypeAssignSet_9,
  MR_Word SuffixPieces_10,
  MR_Word Var_11);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_1[92][2];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_2[7][1];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_3[2][7];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_5[4][3];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_6[1][4];

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_7[1][11];




static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_1[92][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_1[2]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_1[5]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type error in unification of variable"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and variable"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type error in unification of"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "func("))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ":- ...\':"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "pred("))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "func = _"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "lambda expression has type"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in unification of"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and term"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type error in"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_unify_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[49])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has one of the following type mismatches."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Possibility"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "actual type"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected type"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "One possible reason for the error is that"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Another possible reason for the error is that"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the signatures of the option processing predicates"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "have changed recently."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "option_error_to_string"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which can be converted to a string by calling the"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Errors are now returned in a structured form,"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "constant"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher-order term (with arity"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "functor"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has overloaded type {"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[49])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "}"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_unify_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_2[7][1] = {
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

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_4[4][5] = {
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
    ((MR_Box) (&check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (&check_hlds__typecheck_error_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_categorized_mismatch_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_5[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_unify_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_some_type_stuff_match_0)),
    ((MR_Box) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_some_type_stuff_match_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_error_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_unify__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_builtin_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__set_ordlist__ti_set_ordlist_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_categorized_mismatch_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_category_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__set_ordlist__ti_set_ordlist_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_categorized_mismatch_info_0_0 = {
  (MR_String) "categorized_mismatch_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_categorized_mismatch_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_categorized_mismatch_info_0_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_categorized_mismatch_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_categorized_mismatch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_categorized_mismatch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_categorized_mismatch_info_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_categorized_mismatch_info_0_0 };

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_categorized_mismatch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_categorized_mismatch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "categorized_mismatch_info",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_categorized_mismatch_info_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_categorized_mismatch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_categorized_mismatch_info_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_0 = {
  (MR_String) "actual_does_not_subsume_expected",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_1 = {
  (MR_String) "actual_subsumes_expected",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_actual_subsume_expected_0[2] = {
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_0,
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_actual_subsume_expected_0_1
};

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_actual_subsume_expected_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_actual_subsume_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "does_actual_subsume_expected",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_actual_subsume_expected_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_actual_subsume_expected_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_actual_subsume_expected_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_0 = {
  (MR_String) "no_type_stuff_matches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_1 = {
  (MR_String) "some_type_stuff_matches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_some_type_stuff_match_0[2] = {
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_0,
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_functor_desc_does_some_type_stuff_match_0_1
};

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_some_type_stuff_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_some_type_stuff_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "does_some_type_stuff_match",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_name_ordered_does_some_type_stuff_match_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__enum_ordinal_ordered_does_some_type_stuff_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_does_some_type_stuff_match_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__one_or_more__ti_one_or_more_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__one_or_more__ti_one_or_more_1list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_0[3] = {
  (MR_String) "one_expected_tvar",
  (MR_String) "one_expected_pieces",
  (MR_String) "one_actual_pieces"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_0 = {
  (MR_String) "one_expected",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_0,
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__list__ti_list_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0)
};

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_1[2] = {
  (MR_String) "several_head",
  (MR_String) "several_tail"
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_1 = {
  (MR_String) "several_expected",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_category_0_1,
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_mismatch_category_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_1[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_category_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_category_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_category_0[2] = {
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_0,
  &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_category_0_1
};

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_category_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "mismatch_category",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_category_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_category_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_category_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_info_0_0 = {
  (MR_String) "mismatch_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_mismatch_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_info_0_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_mismatch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_info_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_mismatch_info_0_0 };

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "mismatch_info",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_mismatch_info_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_mismatch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_mismatch_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_unify__maybe__ti_maybe_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_type_mismatch_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__maybe__ti_maybe_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_actual_subsume_expected_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_unify__maybe__ti_maybe_1check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0)
};

static const MR_ConstString check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_type_mismatch_0_0[5] = {
  (MR_String) "expected_is_tvar",
  (MR_String) "expected_type_desc",
  (MR_String) "actual_type_desc",
  (MR_String) "mismatch_subsumes",
  (MR_String) "maybe_special"
};

static const MR_DuArgLocn check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_locns_type_mismatch_0_0[5] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_type_mismatch_0_0 = {
  (MR_String) "type_mismatch_exp_act",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_types_type_mismatch_0_0,
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_names_type_mismatch_0_0,
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__field_locns_type_mismatch_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_type_mismatch_0_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_type_mismatch_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_type_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_stag_ordered_type_mismatch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_type_mismatch_0[1] = { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_functor_desc_type_mismatch_0_0 };

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "type_mismatch",
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_name_ordered_type_mismatch_0 },
  { check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__du_ptag_ordered_type_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_0,

};

static const MR_Integer check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_special_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__notag_functor_desc_type_mismatch_special_0 = {
  (MR_String) "type_mismatch_special_getopt_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_unify",
  (MR_String) "type_mismatch_special",
  { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__notag_functor_desc_type_mismatch_special_0 },
  { &check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__notag_functor_desc_type_mismatch_special_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__functor_number_map_type_mismatch_special_0,

};

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0(
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
check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0(
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

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0(
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
check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0(
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
check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_14;

    check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
    succeeded = (SubResult1_14 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_14;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
  }
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0(ArgX1_9, ArgY1_10);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[9]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__hide_categorized_mismatch_info_2_p_0(
  MR_Word ExpTVarCounts_3,
  MR_Word CatMI_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_15_15;
  MR_Word TypeCtorInfo_16_16;
  MR_Word MismatchCategory_7 = ((MR_Word) ((MR_hl_field(0, CatMI_4, 2))));
  MR_Word MaybeExpTVar_9;
  MR_Word ExpTVar_12;
  MR_Integer Count_13;
  MR_Integer Var_14;
  MR_Box conv0_Count_13;

  succeeded = ((MR_tag((MR_Word) MismatchCategory_7)) == (MR_Integer) 0);
  if (succeeded)
  {
    MaybeExpTVar_9 = ((MR_Word) ((MR_hl_field(0, MismatchCategory_7, 0))));
    succeeded = (MaybeExpTVar_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ExpTVar_12 = ((MR_Word) ((MR_hl_field(1, MaybeExpTVar_9, 0))));
      TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]);
      TypeCtorInfo_16_16 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      mercury__map__lookup_3_p_0(TypeInfo_15_15, TypeCtorInfo_16_16, ExpTVarCounts_3, ((MR_Box) (ExpTVar_12)), &conv0_Count_13);
      Count_13 = ((MR_Integer) (conv0_Count_13));
      Var_14 = (MR_Integer) 2;
      succeeded = (Count_13 < Var_14);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify__substitute_types_check_match_8_p_0(
  MR_Word AddQuotes_9,
  MR_Word InstVarSet_10,
  MR_Word StrippedExpType_11,
  MR_Word TypeStuff_12,
  MR_Word STATE_VARIABLE_TypeMismatches_0_39,
  MR_Word * STATE_VARIABLE_TypeMismatches_40,
  MR_Word STATE_VARIABLE_DoesSomeTypeStuffMatch_0_41,
  MR_Word * STATE_VARIABLE_DoesSomeTypeStuffMatch_42)
{
  MR_bool succeeded;
  MR_Word ArgType_15 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, 0))));
  MR_Word TVarSet_16 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, 1))));
  MR_Word TypeBindings_17 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, 2))));
  MR_Word ExistQTVars_18 = ((MR_Word) ((MR_hl_field(0, TypeStuff_12, 3))));
  MR_Word StrippedArgType_19;
  MR_Word FullArgType_20;
  MR_Word FullExpType_21;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgType_15, &StrippedArgType_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedArgType_19, &FullArgType_20);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_17, StrippedExpType_11, &FullExpType_21);
  succeeded = check_hlds__typecheck_error_util__identical_types_2_p_0(FullArgType_20, FullExpType_21);
  if (!(succeeded))
  {
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_47;

    succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, 1))));
      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_String) ((MR_hl_field(0, Var_45, 0))));
          succeeded = (strcmp(Var_46, (MR_String) "<any>") == 0);
        }
      }
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_DoesSomeTypeStuffMatch_42 = (MR_Integer) 1;
    *STATE_VARIABLE_TypeMismatches_40 = STATE_VARIABLE_TypeMismatches_0_39;
  }
  else
  {
    MR_Word ActualSubsumesExpected_24;
    MR_Word ExpectedPieces0_25;
    MR_Word ActualPieces0_26;
    MR_Word ExpectedPieces_27;
    MR_Word ActualPieces_28;
    MR_Word MaybeSpecial_35;
    MR_Word MaybeExpTVar_37;
    MR_Word TypeMismatch_38;
    MR_Word _Subst_23;
    MR_String StdLibModuleName_33;
    MR_Word ArgTypeCtorSymName_29;
    MR_Word ArgTypeModuleName_31;
    MR_String ArgTypeName_32;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word ExpTVar_36;
    MR_Word Var_57;
    MR_Word TypeInfo_58_58;

    succeeded = parse_tree__prog_type_unify__type_subsumes_3_p_0(FullArgType_20, FullExpType_21, &_Subst_23);
    if (succeeded)
      ActualSubsumesExpected_24 = (MR_Integer) 1;
    else
      ActualSubsumesExpected_24 = (MR_Integer) 0;
    ExpectedPieces0_25 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 0, AddQuotes_9, ExistQTVars_18, FullExpType_21);
    ActualPieces0_26 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_16, InstVarSet_10, (MR_Integer) 0, AddQuotes_9, ExistQTVars_18, FullArgType_20);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), ((MR_Box) (ExpectedPieces0_25)), ((MR_Box) (ActualPieces0_26)));
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
      Var_53 = ((MR_Word) ((MR_hl_field(2, FullExpType_21, 0))));
      succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FullArgType_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgTypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, 0))));
          Var_54 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, 1))));
          Var_56 = ((MR_Word) ((MR_hl_field(1, FullArgType_20, 2))));
          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_55 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
              succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ArgTypeCtorSymName_29)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgTypeModuleName_31 = ((MR_Word) ((MR_hl_field(1, ArgTypeCtorSymName_29, 0))));
                  ArgTypeName_32 = ((MR_String) ((MR_hl_field(1, ArgTypeCtorSymName_29, 1))));
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
    succeeded = ((MR_tag((MR_Word) FullExpType_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      ExpTVar_36 = ((MR_Word) ((MR_hl_field(0, FullExpType_21, 0))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, FullExpType_21, 1))));
      succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_58_58 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_58_58, ((MR_Box) (ExpTVar_36)), ExistQTVars_18);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      {
        MaybeExpTVar_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeExpTVar_37, 0) = ((MR_Box) (ExpTVar_36));
      }
    else
      MaybeExpTVar_37 = (MR_Word) ((MR_Unsigned) 0U);
    {
      TypeMismatch_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeMismatch_38, 0) = ((MR_Box) (MaybeExpTVar_37));
      MR_hl_field(0, TypeMismatch_38, 1) = ((MR_Box) (ExpectedPieces_27));
      MR_hl_field(0, TypeMismatch_38, 2) = ((MR_Box) (ActualPieces_28));
      MR_hl_field(0, TypeMismatch_38, 3) = (MR_Box) ((MR_Unsigned) (ActualSubsumesExpected_24));
      MR_hl_field(0, TypeMismatch_38, 4) = ((MR_Box) (MaybeSpecial_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeMismatches_40 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeMismatch_38));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeMismatches_0_39));
    }
    *STATE_VARIABLE_DoesSomeTypeStuffMatch_42 = STATE_VARIABLE_DoesSomeTypeStuffMatch_0_41;
  }
}

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;

  check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_unify__hide_categorized_mismatch_info_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_2(
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
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_1(
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
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_169 = ((MR_Word) ((env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_169));
  check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_5(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_48;
    MR_Word Var_49;

    (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__Var_77 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefn_169, 3))));
    (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = ((env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__Var_77 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
      check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s * env_ptr = (struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), &(env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__conv2_ConsDefn_169, (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_6, env_ptr);
      (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = MR_TRUE;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0(
  MR_Word Info_10,
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsDefnList_14,
  MR_Word Functor_15,
  MR_Word ArgVars_16,
  MR_Word ArgsTypeAssignSet_17)
{
  struct check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0_s env;

  (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14 = ConsDefnList_14;
  {
    MR_Word Spec_18;
    MR_Word ClauseContext_19;
    MR_Word InClauseForPieces_20;
    MR_Word LastContextWord_21;
    MR_Word ContextPieces_22;
    MR_Word ModuleInfo_23;
    MR_Word VarSet_24;
    MR_Word InstVarSet_25;
    MR_Word StrippedFunctor_26;
    MR_String StrippedFunctorStr_27;
    MR_Integer Arity_28;
    MR_Word TypeAssignSet_29;
    MR_Word ConsArgTypesSet_30;
    MR_Word MaybeNumMismatches_44;
    MR_Word ArgErrorPieces_45;
    MR_Word VerboseComponents_46;
    MR_String Arguments_58;
    MR_Word VarAndTermPieces_60;
    MR_Word InvisIntTypePieces_63;
    MR_Word AlwaysPieces_64;
    MR_Word Msg_65;
    MR_Word Var_66;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_167;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Integer Var_172;
    MR_Word Var_173;
    MR_Word ConsArgTypes_31;
    MR_Word Var_32;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
    InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
    hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_11, &LastContextWord_21, InClauseForPieces_20, &ContextPieces_22);
    ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, 0))));
    VarSet_24 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, 5))));
    check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_25);
    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(Functor_15, &StrippedFunctor_26);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (VarSet_24));
    }
    StrippedFunctorStr_27 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_23, Var_66, (MR_Integer) 0, StrippedFunctor_26, ArgVars_16);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), ArgVars_16, &Arity_28);
    TypeAssignSet_29 = check_hlds__type_assign__args_type_assign_set_to_type_assign_set_1_f_0(ArgsTypeAssignSet_17);
    ConsArgTypesSet_30 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_5[2]), ArgsTypeAssignSet_17);
    (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = mercury__list__all_same_1_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[1]), ConsArgTypesSet_30);
    if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = (ConsArgTypesSet_30 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
        ConsArgTypes_31 = ((MR_Word) ((MR_hl_field(1, ConsArgTypesSet_30, 0))));
    }
    if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      MR_Word ArgExpTypes_33;
      MR_Word TypeAssigns_34;
      MR_Word RevSubsumesMismatches_35;
      MR_Word RevNoSubsumeMismatches_36;
      MR_Word Mismatches_39;
      MR_Word CatMismatches0_40;
      MR_Word ExpTVarCounts_41;
      MR_Word CatMismatches_42;
      MR_Integer NumCatMismatches_43;
      MR_Word Var_74;
      MR_Word Var_75;

      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgVars_16, ConsArgTypes_31, &ArgExpTypes_33);
      TypeAssigns_34 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_5[3]), ArgsTypeAssignSet_17);
      check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0((MR_Integer) 0, InstVarSet_25, TypeAssigns_34, (MR_Integer) 1, ArgExpTypes_33, (MR_Word) ((MR_Unsigned) 0U), &RevSubsumesMismatches_35, (MR_Word) ((MR_Unsigned) 0U), &RevNoSubsumeMismatches_36);
      if ((RevNoSubsumeMismatches_36 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_info_0), RevSubsumesMismatches_35, &Mismatches_39);
      else
        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_info_0), RevNoSubsumeMismatches_36, &Mismatches_39);
      Var_74 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      check_hlds__typecheck_error_unify__categorize_mismatch_infos_4_p_0(Mismatches_39, &CatMismatches0_40, Var_74, &ExpTVarCounts_41);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_75, 0) = ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_4[3]));
        MR_hl_field(0, Var_75, 1) = ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_3));
        MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_75, 3) = ((MR_Box) (ExpTVarCounts_41));
      }
      mercury__list__negated_filter_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_categorized_mismatch_info_0), Var_75, CatMismatches0_40, &CatMismatches_42);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_categorized_mismatch_info_0), CatMismatches_42, &NumCatMismatches_43);
      {
        MaybeNumMismatches_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeNumMismatches_44, 0) = ((MR_Box) (NumCatMismatches_43));
      }
      ArgErrorPieces_45 = check_hlds__typecheck_error_unify__mismatched_args_to_pieces_4_f_0(VarSet_24, Functor_15, (MR_Integer) 0, CatMismatches_42);
      VerboseComponents_46 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ResultTypePieces_51;
      MR_Word FunctorColor_52;
      MR_Word AllTypesPieces_53;
      MR_Word VerboseComponent_57;

      MaybeNumMismatches_44 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_7(&env);
      if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
      {
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        Var_78 = check_hlds__typecheck_error_util__argument_name_to_pieces_uc_3_f_0(VarSet_24, LastContextWord_21, Var_13);
        Var_80 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_25, (MR_Word) ((MR_Unsigned) 0U), TypeAssignSet_29, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])), Var_13);
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
        ResultTypePieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, Var_79);
      }
      else
        ResultTypePieces_51 = (MR_Word) ((MR_Unsigned) 0U);
      FunctorColor_52 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_2[3]));
      if ((ArgVars_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;

        Var_89 = check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(Functor_15, Arity_28);
        Var_91 = check_hlds__typecheck_error_unify__type_of_functor_to_pieces_6_f_0(InstVarSet_25, FunctorColor_52, Functor_15, Arity_28, (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[17])));
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
        AllTypesPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_90);
      }
      else
      {
        MR_Word HeadArgVar_54 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, 0))));
        MR_Word TailArgVars_55 = ((MR_Word) ((MR_hl_field(1, ArgVars_16, 1))));
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_107;

        Var_100 = check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(Functor_15, Arity_28);
        Var_102 = check_hlds__typecheck_error_unify__type_of_functor_to_pieces_6_f_0(InstVarSet_25, FunctorColor_52, Functor_15, Arity_28, (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])));
        Var_107 = check_hlds__typecheck_error_unify__types_of_vars_to_pieces_7_f_0(VarSet_24, InstVarSet_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_2[2])), TypeAssignSet_29, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])), HeadArgVar_54, TailArgVars_55);
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, Var_107);
        AllTypesPieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_101);
      }
      ArgErrorPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_51, AllTypesPieces_53);
      check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_24, TypeAssignSet_29, &VerboseComponent_57);
      {
        VerboseComponents_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VerboseComponents_46, 0) = ((MR_Box) (VerboseComponent_57));
        MR_hl_field(1, VerboseComponents_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeNumMismatches_44 == (MR_Word) ((MR_Unsigned) 0U)))
      Arguments_58 = (MR_String) "argument(s)";
    else
    {
      MR_Integer NumMismatches_59 = ((MR_Integer) ((MR_hl_field(1, MaybeNumMismatches_44, 0))));

      (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = (NumMismatches_59 == (MR_Integer) 1);
      if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
        Arguments_58 = (MR_String) "argument";
      else
        Arguments_58 = (MR_String) "arguments";
    }
    Var_121 = check_hlds__typecheck_error_util__argument_name_to_pieces_lc_3_f_0(VarSet_24, LastContextWord_21, Var_13);
    Var_120 = parse_tree__error_spec__color_as_subject_1_f_0(Var_121);
    {
      Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(3, Var_132, 1) = ((MR_Box) (StrippedFunctorStr_27));
    }
    {
      Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
      MR_hl_field(1, Var_131, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[41])));
    }
    Var_130 = parse_tree__error_spec__color_as_subject_1_f_0(Var_131);
    {
      Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_144, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_144, 1) = ((MR_Box) (Arguments_58));
    }
    {
      Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(1, Var_143, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[44])));
    }
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[42])));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
    }
    Var_150 = check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(StrippedFunctor_26, Arity_28);
    Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])));
    Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_149);
    Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, Var_137);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[39])), Var_129);
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_120, Var_122);
    VarAndTermPieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[36])), Var_119);
    (env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded = check_hlds__typecheck_error_builtin__is_int_func_op_1_p_0(Functor_15);
    if ((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__succeeded)
    {
      MR_Word BuiltinTypes0_61;
      MR_Word BuiltinTypes_62;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_159;
      MR_Box conv4_BuiltinTypes0_61;

      {
        Var_157 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_157, 0) = ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_3[1]));
        MR_hl_field(0, Var_157, 1) = ((MR_Box) (check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_8_f_0_8));
        MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_157, 3) = ((MR_Box) (TypeAssignSet_29));
      }
      {
        Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, Var_158, 1) = ((MR_Box) (ArgVars_16));
      }
      Var_159 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[3]), Var_157, Var_158, ((MR_Box) (Var_159)), &conv4_BuiltinTypes0_61);
      BuiltinTypes0_61 = ((MR_Word) (conv4_BuiltinTypes0_61));
      check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0((env).check_hlds__typecheck_error_unify__report_error_unify_var_functor_args_9_f_0_env_0__ConsDefnList_14, BuiltinTypes0_61, &BuiltinTypes_62);
      InvisIntTypePieces_63 = check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_62);
    }
    else
      InvisIntTypePieces_63 = (MR_Word) ((MR_Unsigned) 0U);
    Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgErrorPieces_45, InvisIntTypePieces_63);
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarAndTermPieces_60, Var_161);
    AlwaysPieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_22, Var_160);
    {
      Var_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_163, 0) = ((MR_Box) (AlwaysPieces_64));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) (VerboseComponents_46));
    }
    {
      Msg_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_65, 0) = ((MR_Box) (Context_12));
      MR_hl_field(2, Msg_65, 1) = ((MR_Box) (Var_162));
    }
    {
      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_167, 0) = ((MR_Box) (Msg_65));
      MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_unify.report_error_unify_var_functor_args\'/8"));
      MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 56U));
      MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_167));
    }
    return Spec_18;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__types_of_vars_to_pieces_7_f_0(
  MR_Word VarSet_9,
  MR_Word InstVarSet_10,
  MR_Word MaybeColor_11,
  MR_Word TypeAssignSet_12,
  MR_Word FinalPieces_13,
  MR_Word HeadVar_14,
  MR_Word TailVars_15)
{
  MR_Word Pieces_16;

  if ((TailVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_19;
    MR_Word Var_21;

    Var_19 = check_hlds__typecheck_error_util__argument_name_to_pieces_lc_3_f_0(VarSet_9, (MR_Integer) 0, HeadVar_14);
    Var_21 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_10, MaybeColor_11, TypeAssignSet_12, FinalPieces_13, HeadVar_14);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_21);
  }
  else
  {
    MR_Word HeadTailVar_17 = ((MR_Word) ((MR_hl_field(1, TailVars_15, 0))));
    MR_Word TailTailVars_18 = ((MR_Word) ((MR_hl_field(1, TailVars_15, 1))));
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_32;

    Var_22 = check_hlds__typecheck_error_util__argument_name_to_pieces_lc_3_f_0(VarSet_9, (MR_Integer) 0, HeadVar_14);
    Var_25 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_10, MaybeColor_11, TypeAssignSet_12, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[83])), HeadVar_14);
    Var_32 = check_hlds__typecheck_error_unify__types_of_vars_to_pieces_7_f_0(VarSet_9, InstVarSet_10, MaybeColor_11, TypeAssignSet_12, FinalPieces_13, HeadTailVar_17, TailTailVars_18);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_32);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_24);
  }
  return Pieces_16;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__mismatched_args_to_pieces_4_f_0(
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
    MR_Word Mismatch_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Mismatches_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Integer ArgNum_15 = ((MR_Integer) ((MR_hl_field(0, Mismatch_12, 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, 1))));
    MR_Word MismatchCategory_17 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, 2))));
    MR_Word SpecialMismatches_18 = ((MR_Word) ((MR_hl_field(0, Mismatch_12, 3))));
    MR_Word ArgNumPieces_21;
    MR_Word VarNamePieces_24;
    MR_Word ErrorDescPieces_32;
    MR_Word SpecialReasonPieces_38;
    MR_Word ThisMismatchPieces_39;
    MR_Word FollowingMismatchPieces_40;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Integer Arity_19;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Integer Var_46;
    MR_String Var_22;

    succeeded = ((MR_tag((MR_Word) Functor_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_43 = (MR_Word) (MR_body((MR_Word) (Functor_2), (MR_Integer) 1));
      Var_44 = ((MR_Word) ((MR_hl_field(0, Var_43, 0))));
      Arity_19 = ((MR_Integer) ((MR_hl_field(0, Var_43, 1))));
      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_45 = ((MR_String) ((MR_hl_field(0, Var_44, 0))));
        succeeded = (strcmp(Var_45, (MR_String) "") == 0);
        if (succeeded)
        {
          Var_46 = (MR_Integer) 0;
          succeeded = (Arity_19 > Var_46);
        }
      }
    }
    if (succeeded)
      switch (First_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ArgNumPieces_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[45]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Integer Var_54 = (MR_Integer) ((MR_Unsigned) ArgNum_15 - (MR_Unsigned) 1);

            {
              Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_unify_scalar_common_2[5])));
              MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_52));
            }
          }
          break;
      }
    else
    {
      MR_Word Var_59;
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (ArgNum_15));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ArgNumPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgNumPieces_21, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_unify_scalar_common_2[5])));
        MR_hl_field(1, ArgNumPieces_21, 1) = ((MR_Box) (Var_59));
      }
    }
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16, &Var_22);
    if (succeeded)
    {
      MR_String VarName_23;
      MR_Word Var_64;
      MR_Word Var_65;

      VarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_16);
      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (VarName_23));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[47])));
      }
      {
        VarNamePieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarNamePieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[46])));
        MR_hl_field(1, VarNamePieces_24, 1) = ((MR_Box) (Var_64));
      }
    }
    else
      VarNamePieces_24 = (MR_Word) ((MR_Unsigned) 0U);
    if (((MR_tag((MR_Word) MismatchCategory_17)) == (MR_Integer) 0))
    {
      MR_Word ExpectedPieces_26 = ((MR_Word) ((MR_hl_field(0, MismatchCategory_17, 1))));
      MR_Word OoMActualPieces_27 = ((MR_Word) ((MR_hl_field(0, MismatchCategory_17, 2))));
      MR_Word HeadActualPieces_28 = ((MR_Word) ((MR_hl_field(0, OoMActualPieces_27, 0))));
      MR_Word TailActualPieces_29 = ((MR_Word) ((MR_hl_field(0, OoMActualPieces_27, 1))));
      MR_Word ExpectedDotPieces_30;

      ExpectedDotPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_26, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[17])));
      if ((TailActualPieces_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ActualCommaPieces_31;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_92;
        MR_Word Var_100;
        MR_Word Var_101;

        ActualCommaPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadActualPieces_28, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])));
        Var_86 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualCommaPieces_31);
        Var_101 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces_30);
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])));
        Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[55])), Var_100);
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])), Var_92);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_87);
        ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[51])), Var_85);
      }
      else
      {
        MR_Word SecondActualPieces_33 = ((MR_Word) ((MR_hl_field(1, TailActualPieces_29, 0))));
        MR_Word ThirdPlusActualPieces_34 = ((MR_Word) ((MR_hl_field(1, TailActualPieces_29, 1))));
        MR_Word Var_106;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_125;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word ActualCommaPieces_151;

        Var_106 = check_hlds__typecheck_error_unify__report_actual_types_3_f_0(HeadActualPieces_28, SecondActualPieces_33, ThirdPlusActualPieces_34);
        ActualCommaPieces_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])));
        Var_119 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualCommaPieces_151);
        Var_134 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces_30);
        Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])));
        Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[55])), Var_133);
        Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])), Var_125);
        Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, Var_120);
        ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[51])), Var_118);
      }
    }
    else
    {
      MR_Word HeadTypeMismatch_35 = ((MR_Word) ((MR_hl_field(1, MismatchCategory_17, 0))));
      MR_Word TailTypeMismatches_36 = ((MR_Word) ((MR_hl_field(1, MismatchCategory_17, 1))));
      MR_Word AllMismatches_37;
      MR_Word Var_145;

      {
        AllMismatches_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllMismatches_37, 0) = ((MR_Box) (HeadTypeMismatch_35));
        MR_hl_field(1, AllMismatches_37, 1) = ((MR_Box) (TailTypeMismatches_36));
      }
      Var_145 = check_hlds__typecheck_error_unify__report_possible_expected_actual_types_2_f_0((MR_Integer) 1, AllMismatches_37);
      ErrorDescPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[57])), Var_145);
    }
    SpecialReasonPieces_38 = check_hlds__typecheck_error_unify__report_special_type_mismatches_1_f_0(SpecialMismatches_18);
    Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgNumPieces_21, VarNamePieces_24);
    Var_147 = parse_tree__error_spec__color_as_subject_1_f_0(Var_148);
    Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorDescPieces_32, SpecialReasonPieces_38);
    ThisMismatchPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_147, Var_149);
    if ((Mismatches_13 == (MR_Word) ((MR_Unsigned) 0U)))
      FollowingMismatchPieces_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
      FollowingMismatchPieces_40 = check_hlds__typecheck_error_unify__mismatched_args_to_pieces_4_f_0(VarSet_1, Functor_2, (MR_Integer) 1, Mismatches_13);
    HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisMismatchPieces_39, FollowingMismatchPieces_40);
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_special_type_mismatches_1_f_0(
  MR_Word Specials_3)
{
  MR_Word Pieces_4;
  MR_Word Var_6;

  Var_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0), Specials_3);
  check_hlds__typecheck_error_unify__report_special_type_mismatches_loop_3_p_0((MR_Integer) 0, Var_6, &Pieces_4);
  return Pieces_4;
}

static void MR_CALL 
check_hlds__typecheck_error_unify__report_special_type_mismatches_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadSpecial_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailSpecials_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailPieces_9;
    MR_Word HeadPieces_10;
    MR_Word ReasonIsPieces_13;
    MR_String GetoptModule_14;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_35;

    check_hlds__typecheck_error_unify__report_special_type_mismatches_loop_3_p_0((MR_Integer) 1, TailSpecials_7, &TailPieces_9);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[66]));
        break;
      case (MR_Integer) 1:
        ReasonIsPieces_13 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[68]));
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
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[72])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[70])));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[69])));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_35 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[74])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[82])));
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_34);
    HeadPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReasonIsPieces_13, Var_21);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_10, TailPieces_9);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_possible_expected_actual_types_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mismatch_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Mismatches_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ExpectedTypePieces_10 = ((MR_Word) ((MR_hl_field(0, Mismatch_6, 1))));
    MR_Word ActualTypePieces_11 = ((MR_Word) ((MR_hl_field(0, Mismatch_6, 2))));
    MR_Word HeadPieces_14;
    MR_Word TailPieces_15;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_50;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (HeadVar__1_1));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[41])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[60])));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualTypePieces_11, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])));
    Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_32);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedTypePieces_10, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])));
    Var_42 = parse_tree__error_spec__color_as_correct_1_f_0(Var_43);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[64])), Var_42);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_37);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[62])), Var_30);
    HeadPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_25);
    Var_50 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    TailPieces_15 = check_hlds__typecheck_error_unify__report_possible_expected_actual_types_2_f_0(Var_50, Mismatches_7);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_14, TailPieces_15);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_actual_types_3_f_0(
  MR_Word FirstActualTypePieces_5,
  MR_Word SecondActualTypePieces_6,
  MR_Word ThirdPlusActualTypePieces_7)
{
  MR_Word Pieces_8;

  if ((ThirdPlusActualTypePieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_11;

    Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[59])), SecondActualTypePieces_6);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_11);
  }
  else
  {
    MR_Word ThirdActualTypePieces_9 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, 0))));
    MR_Word FourthPlusActualTypePieces_10 = ((MR_Word) ((MR_hl_field(1, ThirdPlusActualTypePieces_7, 1))));
    MR_Word Var_16;
    MR_Word Var_21;

    Var_21 = check_hlds__typecheck_error_unify__report_actual_types_3_f_0(SecondActualTypePieces_6, ThirdActualTypePieces_9, FourthPlusActualTypePieces_10);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])), Var_21);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FirstActualTypePieces_5, Var_16);
  }
  return Pieces_8;
}

static void MR_CALL 
check_hlds__typecheck_error_unify__categorize_mismatch_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExpTVarCounts_0_3,
  MR_Word * STATE_VARIABLE_ExpTVarCounts_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ExpTVarCounts_4 = STATE_VARIABLE_ExpTVarCounts_0_3;
  }
  else
  {
    MR_Word Mismatch_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Mismatches_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word CatMI_10;
    MR_Word CatMIs_11;
    MR_Integer ArgNum_13 = ((MR_Integer) ((MR_hl_field(0, Mismatch_8, 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Mismatch_8, 1))));
    MR_Word MaybeExpTVar_17;
    MR_Word HeadExpectedPieces_18;
    MR_Word HeadActualPieces_19;
    MR_Word MismatchCategory_23;
    MR_Word SpecialMismatches_26;
    MR_Word STATE_VARIABLE_ExpTVarCounts_1_31;
    MR_Word Mismatch_42 = ((MR_Word) ((MR_hl_field(0, Mismatch_8, 2))));
    MR_Word Mismatches_43 = ((MR_Word) ((MR_hl_field(0, Mismatch_8, 3))));
    MR_Word MaybeSpecial_48;
    MR_Word STATE_VARIABLE_Specials_1_51;
    MR_Word TailActualPieces_22;

    MaybeExpTVar_17 = ((MR_Word) ((MR_hl_field(0, Mismatch_42, 0))));
    HeadExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, Mismatch_42, 1))));
    HeadActualPieces_19 = ((MR_Word) ((MR_hl_field(0, Mismatch_42, 2))));
    succeeded = check_hlds__typecheck_error_unify__expected_types_all_same_return_actuals_3_p_0(HeadExpectedPieces_18, Mismatches_43, &TailActualPieces_22);
    if (succeeded)
    {
      MR_Word Var_29;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (HeadActualPieces_19));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (TailActualPieces_22));
      }
      {
        MismatchCategory_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MismatchCategory_23, 0) = ((MR_Box) (MaybeExpTVar_17));
        MR_hl_field(0, MismatchCategory_23, 1) = ((MR_Box) (HeadExpectedPieces_18));
        MR_hl_field(0, MismatchCategory_23, 2) = ((MR_Box) (Var_29));
      }
      if ((MaybeExpTVar_17 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ExpTVarCounts_1_31 = STATE_VARIABLE_ExpTVarCounts_0_3;
      else
      {
        MR_Word ExpTVar_24 = ((MR_Word) ((MR_hl_field(1, MaybeExpTVar_17, 0))));
        MR_Integer Count0_25;
        MR_Box conv0_Count0_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ExpTVarCounts_0_3, ((MR_Box) (ExpTVar_24)), &conv0_Count0_25);
        if (succeeded)
        {
          Count0_25 = ((MR_Integer) (conv0_Count0_25));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Count0_25 + (MR_Unsigned) 1);

          mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ExpTVar_24)), ((MR_Box) (Var_30)), STATE_VARIABLE_ExpTVarCounts_0_3, &STATE_VARIABLE_ExpTVarCounts_1_31);
        }
        else
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ExpTVar_24)), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_ExpTVarCounts_0_3, &STATE_VARIABLE_ExpTVarCounts_1_31);
      }
    }
    else
    {
      {
        MismatchCategory_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MismatchCategory_23, 0) = ((MR_Box) (Mismatch_42));
        MR_hl_field(1, MismatchCategory_23, 1) = ((MR_Box) (Mismatches_43));
      }
      STATE_VARIABLE_ExpTVarCounts_1_31 = STATE_VARIABLE_ExpTVarCounts_0_3;
    }
    check_hlds__typecheck_error_unify__gather_special_type_mismatches_2_p_0(Mismatches_43, &STATE_VARIABLE_Specials_1_51);
    MaybeSpecial_48 = ((MR_Word) ((MR_hl_field(0, Mismatch_42, 4))));
    if ((MaybeSpecial_48 == (MR_Word) ((MR_Unsigned) 0U)))
      SpecialMismatches_26 = STATE_VARIABLE_Specials_1_51;
    else
    {
      MR_Word Special_49 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_48, 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_49)), STATE_VARIABLE_Specials_1_51, &SpecialMismatches_26);
    }
    {
      CatMI_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CatMI_10, 0) = ((MR_Box) (ArgNum_13));
      MR_hl_field(0, CatMI_10, 1) = ((MR_Box) (Var_14));
      MR_hl_field(0, CatMI_10, 2) = ((MR_Box) (MismatchCategory_23));
      MR_hl_field(0, CatMI_10, 3) = ((MR_Box) (SpecialMismatches_26));
    }
    check_hlds__typecheck_error_unify__categorize_mismatch_infos_4_p_0(Mismatches_9, &CatMIs_11, STATE_VARIABLE_ExpTVarCounts_1_31, STATE_VARIABLE_ExpTVarCounts_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CatMI_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (CatMIs_11));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_error_unify__gather_special_type_mismatches_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0));
  else
  {
    MR_Word Mismatch_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Mismatches_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word MaybeSpecial_10;
    MR_Word STATE_VARIABLE_Specials_1_13;

    check_hlds__typecheck_error_unify__gather_special_type_mismatches_2_p_0(Mismatches_4, &STATE_VARIABLE_Specials_1_13);
    MaybeSpecial_10 = ((MR_Word) ((MR_hl_field(0, Mismatch_3, 4))));
    if ((MaybeSpecial_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = STATE_VARIABLE_Specials_1_13;
    else
    {
      MR_Word Special_11 = ((MR_Word) ((MR_hl_field(1, MaybeSpecial_10, 0))));

      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0), ((MR_Box) (Special_11)), STATE_VARIABLE_Specials_1_13, HeadVar__2_2);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify__expected_types_all_same_return_actuals_3_p_0(
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
    MR_Word HeadMismatch_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailMismatches_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word HeadActualTypePieces_8 = ((MR_Word) ((MR_hl_field(0, HeadMismatch_6, 2))));
    MR_Word TailActualTypePieces_9;
    MR_Word HeadExpTypePieces_11 = ((MR_Word) ((MR_hl_field(0, HeadMismatch_6, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadExpTypePieces_11)));
    if (succeeded)
    {
      succeeded = check_hlds__typecheck_error_unify__expected_types_all_same_return_actuals_3_p_0(HeadVar__1_1, TailMismatches_7, &TailActualTypePieces_9);
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
check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeMismatches_40;
  MR_Word conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_42;

  check_hlds__typecheck_error_unify__substitute_types_check_match_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeMismatches_40, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_42);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeMismatches_40));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DoesSomeTypeStuffMatch_42));
}

static void MR_CALL 
check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0(
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
      MR_Word ArgExpTypes_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeStuffList_29;
      MR_Word StrippedExpType_30;
      MR_Word TypeMismatches0_31;
      MR_Word DoesSomeTypeStuffMatch_32;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Var_44;
      MR_Word STATE_VARIABLE_RevNoSubsumeMismatches_1_49;
      MR_Word STATE_VARIABLE_RevSubsumesMismatches_1_50;
      MR_Integer Var_51;
      MR_Box conv3_TypeMismatches0_31;
      MR_Box conv2_DoesSomeTypeStuffMatch_32;
      MR_Integer next_value_of_CurArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8;

      Arg_24 = ((MR_Word) ((MR_hl_field(0, Var_41, 0))));
      ExpType_25 = ((MR_Word) ((MR_hl_field(0, Var_41, 1))));
      check_hlds__typecheck_error_type_assign__get_all_type_stuffs_remove_dups_3_p_0(TypeAssignSet_3, Arg_24, &TypeStuffList_29);
      parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 0, (MR_Integer) 1, ExpType_25, &StrippedExpType_30);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_7[0]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__typecheck_error_unify__find_mismatched_args_9_p_0_1));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (AddQuotes_1));
        MR_hl_field(0, Var_44, 4) = ((MR_Box) (InstVarSet_2));
        MR_hl_field(0, Var_44, 5) = ((MR_Box) (StrippedExpType_30));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_some_type_stuff_match_0), Var_44, TypeStuffList_29, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeMismatches0_31, ((MR_Box) ((MR_Integer) 0)), &conv2_DoesSomeTypeStuffMatch_32);
      TypeMismatches0_31 = ((MR_Word) (conv3_TypeMismatches0_31));
      DoesSomeTypeStuffMatch_32 = ((MR_Word) (conv2_DoesSomeTypeStuffMatch_32));
      switch (DoesSomeTypeStuffMatch_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeMismatches_33;

            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0), TypeMismatches0_31, &TypeMismatches_33);
            if ((TypeMismatches_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_error_unify.find_mismatched_args\'/9", (MR_String) "no_type_stuff_matches but TypeMismatches = []");
                return;
              }
            else
            {
              MR_Word HeadTypeMismatch_34 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, 0))));
              MR_Word TailTypeMismatches_35 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, 1))));
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
              Mismatch_64 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, 0))));
              Mismatches_65 = ((MR_Word) ((MR_hl_field(1, TypeMismatches_33, 1))));
              Var_66 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_64, 3))) & (MR_Integer) 1);
              succeeded = (Var_66 == (MR_Integer) 0);
              if (succeeded)
                succeeded = check_hlds__typecheck_error_unify__all_no_subsume_mismatches_1_p_0(Mismatches_65);
              if (succeeded)
              {
                {
                  STATE_VARIABLE_RevNoSubsumeMismatches_1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_1_49, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevNoSubsumeMismatches_1_49, 1) = ((MR_Box) (STATE_VARIABLE_RevNoSubsumeMismatches_0_8));
                }
                STATE_VARIABLE_RevSubsumesMismatches_1_50 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
              }
              else
              {
                {
                  STATE_VARIABLE_RevSubsumesMismatches_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_1_50, 0) = ((MR_Box) (Mismatch_36));
                  MR_hl_field(1, STATE_VARIABLE_RevSubsumesMismatches_1_50, 1) = ((MR_Box) (STATE_VARIABLE_RevSubsumesMismatches_0_6));
                }
                STATE_VARIABLE_RevNoSubsumeMismatches_1_49 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevSubsumesMismatches_1_50 = STATE_VARIABLE_RevSubsumesMismatches_0_6;
            STATE_VARIABLE_RevNoSubsumeMismatches_1_49 = STATE_VARIABLE_RevNoSubsumeMismatches_0_8;
          }
          break;
      }
      Var_51 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_4 = Var_51;
      next_value_of_HeadVar__5_5 = ArgExpTypes_26;
      next_value_of_STATE_VARIABLE_RevSubsumesMismatches_0_6 = STATE_VARIABLE_RevSubsumesMismatches_1_50;
      next_value_of_STATE_VARIABLE_RevNoSubsumeMismatches_0_8 = STATE_VARIABLE_RevNoSubsumeMismatches_1_49;
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
check_hlds__typecheck_error_unify__all_no_subsume_mismatches_1_p_0(
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
      MR_Word Mismatch_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Mismatches_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(0, Mismatch_2, 3))) & (MR_Integer) 1);
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
check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_builtin__type_needs_int_constant_suffix_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0_1(
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
check_hlds__typecheck_error_unify__report_error_unify_var_functor_result_8_f_0(
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
  MR_Word VarSet_21;
  MR_Word ContextPieces_24;
  MR_Word VarDescPieces_26;
  MR_Word InstVarSet_36;
  MR_Word VarTypePieces_37;
  MR_Word FunctorTypePieces_38;
  MR_Word MainPieces_39;
  MR_Word NoSuffixIntegerPieces_42;
  MR_Word InvisIntPieces_45;
  MR_Word VerboseComponent_46;
  MR_Word AlwaysPieces_47;
  MR_Word Msg_48;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_116;
  MR_String Var_22;
  MR_Word TypeCtorInfo_129_129;
  MR_Word TypesOfVar_41;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_10, &ClauseContext_19);
  InClauseForPieces_20 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_19);
  VarSet_21 = ((MR_Word) ((MR_hl_field(0, ClauseContext_19, 5))));
  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, Var_13, &Var_22);
  if (succeeded)
  {
    MR_String VarName_25;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word _LastContextWord_23;

    hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_11, &_LastContextWord_23, InClauseForPieces_20, &ContextPieces_24);
    VarName_25 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, Var_13);
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (VarName_25));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      VarDescPieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarDescPieces_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[32])));
      MR_hl_field(1, VarDescPieces_26, 1) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word MainContext_27 = ((MR_Word) ((MR_hl_field(0, UnifyContext_11, 0))));
    MR_Word BottomUpSubContexts_28 = ((MR_Word) ((MR_hl_field(0, UnifyContext_11, 1))));
    MR_Word BottomSubContext_29;
    MR_Word ContextPiecesPrime_35;
    MR_Word NonBottomSubContexts_30;
    MR_Word ConsId_31;
    MR_Word UnifyContextToUse_33;
    MR_Word LastContextWord_34;

    succeeded = (BottomUpSubContexts_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BottomSubContext_29 = ((MR_Word) ((MR_hl_field(1, BottomUpSubContexts_28, 0))));
      NonBottomSubContexts_30 = ((MR_Word) ((MR_hl_field(1, BottomUpSubContexts_28, 1))));
      ConsId_31 = ((MR_Word) ((MR_hl_field(0, BottomSubContext_29, 0))));
      succeeded = hlds__hlds_error_util__cons_id_may_be_list_cons_1_p_0(ConsId_31);
      succeeded = !(succeeded);
      if (succeeded)
      {
        {
          UnifyContextToUse_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyContextToUse_33, 0) = ((MR_Box) (MainContext_27));
          MR_hl_field(0, UnifyContextToUse_33, 1) = ((MR_Box) (NonBottomSubContexts_30));
        }
        hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContextToUse_33, &LastContextWord_34, InClauseForPieces_20, &ContextPiecesPrime_35);
        switch (LastContextWord_34) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
      }
    }
    if (succeeded)
    {
      ContextPieces_24 = ContextPiecesPrime_35;
      VarDescPieces_26 = hlds__hlds_error_util__argument_to_pieces_1_f_0(BottomSubContext_29);
    }
    else
    {
      MR_Word LastContextWord_118;

      hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_11, &LastContextWord_118, InClauseForPieces_20, &ContextPieces_24);
      VarDescPieces_26 = check_hlds__typecheck_error_util__last_context_word_to_string_lc_1_f_0(LastContextWord_118);
    }
  }
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_19, &InstVarSet_36);
  VarTypePieces_37 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_2[2])), TypeAssignSet_17, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])), Var_13);
  FunctorTypePieces_38 = check_hlds__typecheck_error_unify__type_of_functor_to_pieces_6_f_0(InstVarSet_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_2[3])), Functor_15, Arity_16, ConsDefnList_14, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[17])));
  Var_79 = check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (VarDescPieces_26));
  }
  Var_88 = parse_tree__error_spec__color_as_subject_1_f_0(Var_89);
  Var_98 = check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(Functor_15, Arity_16);
  Var_97 = parse_tree__error_spec__color_as_subject_1_f_0(Var_98);
  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FunctorTypePieces_38, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
  Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_99);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])), Var_96);
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarTypePieces_37, Var_92);
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_91);
  Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])), Var_87);
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_80);
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[34])), Var_78);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarDescPieces_26, Var_71);
  MainPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[19])), Var_70);
  succeeded = ((((MR_tag((MR_Word) Functor_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_15, 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    Var_103 = ((MR_Word) ((MR_hl_field(3, Functor_15, 1))));
    succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_104 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_5[0]);
      TypeCtorInfo_129_129 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0(TypeCtorInfo_129_129, Var_104, TypeAssignSet_17, Var_13, &TypesOfVar_41);
      Var_105 = (MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_5[1]);
      succeeded = mercury__list__any_true_2_p_0(TypeCtorInfo_129_129, Var_105, TypesOfVar_41);
    }
  }
  if (succeeded)
    NoSuffixIntegerPieces_42 = check_hlds__typecheck_error_builtin__nosuffix_integer_pieces_0_f_0();
  else
    NoSuffixIntegerPieces_42 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_error_builtin__is_int_func_op_1_p_0(Functor_15);
  if (succeeded)
  {
    MR_Word BuiltinTypes0_43;
    MR_Word BuiltinTypes_44;
    MR_Word Var_106;

    Var_106 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0));
    check_hlds__typecheck_error_builtin__acc_builtin_types_of_var_4_p_0(TypeAssignSet_17, Var_13, Var_106, &BuiltinTypes0_43);
    check_hlds__typecheck_error_builtin__acc_builtin_types_in_cons_type_infos_3_p_0(ConsDefnList_14, BuiltinTypes0_43, &BuiltinTypes_44);
    InvisIntPieces_45 = check_hlds__typecheck_error_builtin__report_any_invisible_int_types_2_f_0(ClauseContext_19, BuiltinTypes_44);
  }
  else
    InvisIntPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_10, VarSet_21, TypeAssignSet_17, &VerboseComponent_46);
  Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NoSuffixIntegerPieces_42, InvisIntPieces_45);
  Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_39, Var_108);
  AlwaysPieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_24, Var_107);
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (AlwaysPieces_47));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (VerboseComponent_46));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_111));
  }
  {
    Msg_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_48, 0) = ((MR_Box) (Context_12));
    MR_hl_field(2, Msg_48, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (Msg_48));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_unify.report_error_unify_var_functor_result\'/8"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_116));
  }
  return Spec_18;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__type_of_functor_to_pieces_6_f_0(
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
    SingleDefn_15 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_12, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, ConsDefnList_12, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ConsTypePieces_16;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word TVarSet_58 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, 0))));
    MR_Word ExistQVars_59 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, 1))));
    MR_Word ConsType_60 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, 2))));
    MR_Word ArgTypes_61 = ((MR_Word) ((MR_hl_field(0, SingleDefn_15, 3))));
    MR_Word ArgPieces_70;
    MR_Word Var_82;

    if ((ArgTypes_61 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_70 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_66;
      MR_Word Var_71;

      succeeded = ((MR_tag((MR_Word) Functor_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_71 = (MR_Word) (MR_body((MR_Word) (Functor_10), (MR_Integer) 1));
        SymName_66 = ((MR_Word) ((MR_hl_field(0, Var_71, 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Type_69;
        MR_Word Var_73;

        {
          Type_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Type_69, 0) = ((MR_Box) (SymName_66));
          MR_hl_field(1, Type_69, 1) = ((MR_Box) (ArgTypes_61));
          MR_hl_field(1, Type_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_73 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_58, InstVarSet_8, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_59, Type_69);
        ArgPieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[41])));
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_unify.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_82 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_58, InstVarSet_8, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_59, ConsType_60);
    ConsTypePieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_70, Var_82);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsTypePieces_16, SuffixPieces_13);
    Var_27 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_9, Var_28);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])));
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[51])), Var_26);
  }
  else
  {
    MR_Word ConsTypeListPieces_17;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_47;
    MR_Word Var_52;

    ConsTypeListPieces_17 = check_hlds__typecheck_error_unify__cons_type_list_to_pieces_4_f_0(InstVarSet_8, ConsDefnList_12, Functor_10, Arity_11);
    Var_41 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_9, ConsTypeListPieces_17);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SuffixPieces_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[91])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])), Var_47);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[88])), Var_40);
  }
  return Pieces_14;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__cons_type_list_to_pieces_4_f_0(
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
    MR_Word ConsDefn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ConsDefns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ThisPieces_15;
    MR_Word TVarSet_30 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 0))));
    MR_Word ExistQVars_31 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 1))));
    MR_Word ConsType_32 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 2))));
    MR_Word ArgTypes_33 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 3))));
    MR_Word ArgPieces_42;
    MR_Word Var_54;

    if ((ArgTypes_33 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgPieces_42 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_38;
      MR_Word Var_43;

      succeeded = ((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_43 = (MR_Word) (MR_body((MR_Word) (Functor_3), (MR_Integer) 1));
        SymName_38 = ((MR_Word) ((MR_hl_field(0, Var_43, 0))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Type_41;
        MR_Word Var_45;

        {
          Type_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Type_41, 0) = ((MR_Box) (SymName_38));
          MR_hl_field(1, Type_41, 1) = ((MR_Box) (ArgTypes_33));
          MR_hl_field(1, Type_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_45 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_30, InstVarSet_1, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_31, Type_41);
        ArgPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[41])));
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.typecheck_error_unify.cons_type_to_pieces\'/3", (MR_String) "invalid cons_id");
    }
    Var_54 = parse_tree__error_type_util__type_to_pieces_6_f_0(TVarSet_30, InstVarSet_1, (MR_Integer) 0, (MR_Integer) 0, ExistQVars_31, ConsType_32);
    ThisPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgPieces_42, Var_54);
    if ((ConsDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = ThisPieces_15;
    else
    {
      MR_Word ConnectPieces_18;
      MR_Word TailPieces_19;
      MR_Word Var_28;

      succeeded = (Arity_4 == (MR_Integer) 0);
      if (succeeded)
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16]));
      else
        ConnectPieces_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[83]));
      TailPieces_19 = check_hlds__typecheck_error_unify__cons_type_list_to_pieces_4_f_0(InstVarSet_1, ConsDefns_11, Functor_3, Arity_4);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConnectPieces_18, TailPieces_19);
      HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisPieces_15, Var_28);
    }
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__functor_name_to_pieces_2_f_0(
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
    MR_Word Var_18;
    MR_Word SymName_9;
    MR_Word Var_16;

    succeeded = ((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_16 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));
      SymName_9 = ((MR_Word) ((MR_hl_field(0, Var_16, 0))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        Piece2_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Piece2_12, 1) = ((MR_Box) (SymName_9));
      }
    else
    {
      MR_String Var_17;

      Var_17 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(StrippedConsId_7);
      {
        Piece2_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Piece2_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Piece2_12, 1) = ((MR_Box) (Var_17));
      }
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Piece2_12));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[84])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_18));
    }
  }
  else
  {
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;

    succeeded = ((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_20 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 1));
      Var_21 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
        succeeded = (strcmp(Var_22, (MR_String) "") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Arity_5 - (MR_Unsigned) 1);

      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[47])));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[85])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_25));
      }
    }
    else
    {
      MR_Word Var_35;
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (ConsId_4));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[86])));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_35));
      }
    }
  }
  return Pieces_6;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_lambda_7_f_0(
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
  MR_Word LastContextWord_19;
  MR_Word ContextPieces_20;
  MR_Word VarSet_21;
  MR_Word VarNamePieces_22;
  MR_Word InstVarSet_23;
  MR_Word Pieces1_24;
  MR_Word Pieces2_25;
  MR_Word Pieces3_29;
  MR_Word LambdaTypePieces_30;
  MR_Word Pieces4_40;
  MR_Word MainPieces_41;
  MR_Word VerboseComponent_42;
  MR_Word Msg_43;
  MR_Word Var_48;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_123;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_143;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_9, &ClauseContext_17);
  InClauseForPieces_18 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_17);
  hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_10, &LastContextWord_19, InClauseForPieces_18, &ContextPieces_20);
  VarSet_21 = ((MR_Word) ((MR_hl_field(0, ClauseContext_17, 5))));
  VarNamePieces_22 = check_hlds__typecheck_error_util__argument_name_to_pieces_uc_3_f_0(VarSet_21, LastContextWord_19, Var_13);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_17, &InstVarSet_23);
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarNamePieces_22, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
  Pieces1_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[19])), Var_48);
  Var_93 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_23, (MR_Word) ((MR_Unsigned) 0U), TypeAssignSet_15, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])), Var_13);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
  Pieces3_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarNamePieces_22, Var_92);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgs_26;
        MR_Word RetVar_27;
        MR_Word FuncArgVars_36;
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
        MR_Box conv1_Var_37;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), ArgVars_14, &FuncArgs_26, &conv0_RetVar_27);
        RetVar_27 = ((MR_Word) (conv0_RetVar_27));
        Var_76 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, FuncArgs_26);
        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
        }
        Var_85 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, RetVar_27);
        {
          Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[24])));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__typecheck_error_unify_scalar_common_2[1])));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[22])));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[21])));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Pieces2_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[20])));
          MR_hl_field(1, Pieces2_25, 1) = ((MR_Box) (Var_71));
        }
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), ArgVars_14, &FuncArgVars_36, &conv1_Var_37);
        if ((FuncArgVars_36 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_30 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[28]));
        else
        {
          MR_Word Var_117;
          MR_String Var_118;
          MR_String Var_120;
          MR_Integer NumArgVars_145;
          MR_Word Unders_146;
          MR_String CommaUnders_147;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), FuncArgVars_36, &NumArgVars_145);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumArgVars_145, ((MR_Box) ((MR_String) "_")), &Unders_146);
          CommaUnders_147 = mercury__string__join_list_2_f_0((MR_String) ", ", Unders_146);
          Var_120 = mercury__string__f_43_43_2_f_0(CommaUnders_147, (MR_String) ") = _");
          Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "func(_", Var_120);
          {
            Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_117, 1) = ((MR_Box) (Var_118));
          }
          {
            LambdaTypePieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_30, 0) = ((MR_Box) (Var_117));
            MR_hl_field(1, LambdaTypePieces_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

        Var_59 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_21, ArgVars_14);
        {
          Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[26])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[25])));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Pieces2_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces2_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[20])));
          MR_hl_field(1, Pieces2_25, 1) = ((MR_Box) (Var_54));
        }
        if ((ArgVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
          LambdaTypePieces_30 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[30]));
        else
        {
          MR_Integer NumArgVars_33;
          MR_Word Unders_34;
          MR_String CommaUnders_35;
          MR_Word Var_106;
          MR_String Var_107;
          MR_String Var_109;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[0]), ArgVars_14, &NumArgVars_33);
          mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumArgVars_33, ((MR_Box) ((MR_String) "_")), &Unders_34);
          CommaUnders_35 = mercury__string__join_list_2_f_0((MR_String) ", ", Unders_34);
          Var_109 = mercury__string__f_43_43_2_f_0(CommaUnders_35, (MR_String) ")");
          Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "pred(_", Var_109);
          {
            Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
          }
          {
            LambdaTypePieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, LambdaTypePieces_30, 0) = ((MR_Box) (Var_106));
            MR_hl_field(1, LambdaTypePieces_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[31])));
    MR_hl_field(1, Var_123, 1) = ((MR_Box) (LambdaTypePieces_30));
  }
  Pieces4_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])));
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces3_29, Pieces4_40);
  Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_25, Var_133);
  MainPieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_24, Var_132);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_9, VarSet_21, TypeAssignSet_15, &VerboseComponent_42);
  {
    Var_135 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_135, 0) = ((MR_Box) (ContextPieces_20));
  }
  {
    Var_137 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_137, 0) = ((MR_Box) (MainPieces_41));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (VerboseComponent_42));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
  }
  {
    Msg_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_43, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, Msg_43, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (Msg_43));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_unify.report_error_unify_var_lambda\'/7"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_143));
  }
  return Spec_16;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_unify__report_error_unify_var_var_6_f_0(
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
  MR_Word ContextPieces_18;
  MR_Word VarSet_19;
  MR_Word InstVarSet_20;
  MR_Word MaybeColor_21;
  MR_Word MainPieces_22;
  MR_Word VerboseComponent_23;
  MR_Word Msg_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_56;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_String Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_84;
  MR_Word _LastContextWord_17;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  hlds__hlds_error_util__unify_context_to_pieces_4_p_0(UnifyContext_9, &_LastContextWord_17, InClauseForPieces_16, &ContextPieces_18);
  VarSet_19 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, 5))));
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_20);
  MaybeColor_21 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_2[0]));
  Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, X_11);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (Var_31));
  }
  Var_37 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, Y_12);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[14])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[11])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_unify_scalar_common_1[10])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  Var_48 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, X_11);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
  Var_51 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_20, MaybeColor_21, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[16])), X_11);
  Var_64 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, Y_12);
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_61 = parse_tree__error_spec__color_as_subject_1_f_0(Var_62);
  Var_67 = check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(InstVarSet_20, MaybeColor_21, TypeAssignSet_13, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[17])), Y_12);
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])));
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_66);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[12])), Var_60);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_50);
  MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_44);
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_19, TypeAssignSet_13, &VerboseComponent_23);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (ContextPieces_18));
  }
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (MainPieces_22));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (VerboseComponent_23));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
  }
  {
    Msg_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_24, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_24, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Msg_24));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_unify.report_error_unify_var_var\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_84));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__typecheck_error_type_assign__typestuff_to_pieces_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0(
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
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_error_unify_scalar_common_3[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__typecheck_error_unify__type_of_var_to_pieces_5_f_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (InstVarSet_7));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), Var_16, TypeAssignSet_9, Var_11, &TypePiecesLists0_13);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_unify_scalar_common_1[5]), TypePiecesLists0_13, &TypePiecesLists_14);
  succeeded = (TypePiecesLists_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(1, TypePiecesLists_14, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    Var_29 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(TypePiecesLists_14);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, SuffixPieces_10);
    Var_27 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_8, Var_28);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[51])), Var_26);
  }
  else
  {
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_49;

    Var_43 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(TypePiecesLists_14);
    Var_42 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_8, Var_43);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[90])), SuffixPieces_10);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[53])), Var_49);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_44);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_unify_scalar_common_1[88])), Var_41);
  }
  return Pieces_12;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____categorized_mismatch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____categorized_mismatch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____does_actual_subsume_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____does_actual_subsume_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____does_some_type_stuff_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____does_some_type_stuff_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____mismatch_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____mismatch_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____mismatch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____mismatch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____type_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____type_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_unify____Unify____type_mismatch_special_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_unify____Compare____type_mismatch_special_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_unify__init(void)
{
}

void mercury__check_hlds__typecheck_error_unify__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_categorized_mismatch_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_actual_subsume_expected_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_does_some_type_stuff_match_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_category_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_mismatch_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_unify__check_hlds__typecheck_error_unify__type_ctor_info_type_mismatch_special_0);
}

void mercury__check_hlds__typecheck_error_unify__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_unify__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_unify.
