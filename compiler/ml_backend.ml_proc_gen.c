/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2023-01-12
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


// :- module ml_backend.ml_proc_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_proc_gen__init
ENDINIT
*/

#include "ml_backend.ml_proc_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_desc.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unused_assign.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_can_we_generate_code_for_tscc_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_can_we_generate_code_for_tscc_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_can_we_generate_code_for_tscc_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_entry_proc_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_entry_proc_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_entry_proc_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_entry_proc_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_contains_nested_funcs_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_contains_nested_funcs_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_contains_nested_funcs_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_none_or_self_tail_rec_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0[8];

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0[8];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_code_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_code_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0;

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[15];

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[15];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_args_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_args_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_args_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_args_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_proc_stmt_info_0[1];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_proc_stmt_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_tscc_code_model_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_tscc_code_model_0[2];

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_tscc_code_model_0[2];

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_local_var_defns_for_copied_output_vars__1830__1_3_p_0(
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_proc_body__1728__1_1_f_0(
  MR_Word LambdaHeadVar__1_58);

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1705__1_8_p_0(
  MR_Word CodeModel_11,
  MR_Word Context_22,
  MR_Word ConvOutputStmts_25,
  MR_Word * LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52,
  MR_Word * LambdaHeadVar__3_53,
  MR_Word LambdaHeadVar__4_54,
  MR_Word * LambdaHeadVar__5_55);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1448__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_41,
  MR_Word HeadVar__2_48);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1391__1_1_f_0(
  MR_Word LambdaHeadVar__1_72);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1302__1_2_p_0(
  MR_Word ArgTuples_28,
  MR_Word ProcArgTuples_48);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__compute_initial_tail_rec_map_for_mutual__1211__1_1_f_0(
  MR_Word LambdaHeadVar__1_73);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__696__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_40);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_and_requantify_procs_for_code_gen__171__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__pred_proc_id_desc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__describe_pred_proc_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__describe_pred_proc_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Msg_7,
  MR_Word PredProcIds_8,
  MR_Word STATE_VARIABLE_StartCommentStmts_0_12,
  MR_Word * STATE_VARIABLE_StartCommentStmts_13);

static void MR_CALL 
ml_backend__ml_proc_gen__does_case_contain_nested_func_defn_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_9,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_10);

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_38,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_39);

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_7_p_0(
  MR_Word GotoEndStmts_8,
  MR_Word ProcStmtInfo_9,
  MR_Word * SwitchCase_10,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_20,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_21,
  MR_Word STATE_VARIABLE_AllLoopLocalVars_0_22,
  MR_Word * STATE_VARIABLE_AllLoopLocalVars_23);

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_label_goto_3_p_0(
  MR_Word GotoEndStmt_4,
  MR_Word ProcStmtInfo_5,
  MR_Word * LabelProcStmts_6);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(
  MR_Word EntryProc_8,
  MR_Word PredProcCode_9,
  MR_Word * ProcStmtInfo_10,
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_41,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_42,
  MR_Word STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_43,
  MR_Word * STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word LoopKind_11,
  MR_Word PredProcCodes_12,
  MR_Word EnvVarNames_13,
  MR_Word EntryProcDescComments_14,
  MR_Word EntryProc_15,
  MR_Word * FuncDefn_16);

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0(
  MR_Word LoopKind_9,
  MR_Word CopyOutValThroughPtrStmts_10,
  MR_Word ReturnRvals_11,
  MR_Word EntryProc_12,
  MR_Word EntryProcContext_13,
  MR_Word ProcStmtInfos_14,
  MR_Word * ContainerVarDefns_15,
  MR_Word * Stmts_16);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word TsccCodeModel_17,
  MR_Word SeenAtLabelMap_18,
  MR_Word PredProcIdArgsInfo_19,
  MR_Word * PredProcCode_20,
  MR_Word STATE_VARIABLE_GlobalData_0_66,
  MR_Word * STATE_VARIABLE_GlobalData_67,
  MR_Word STATE_VARIABLE_TsccInfo_0_68,
  MR_Word * STATE_VARIABLE_TsccInfo_69);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredProcId_17,
  MR_Word * PredProcIdArgsInfo_18,
  MR_Integer STATE_VARIABLE_ProcNum_0_57,
  MR_Integer * STATE_VARIABLE_ProcNum_58,
  MR_Word STATE_VARIABLE_MaybeOutVarsTypes_0_59,
  MR_Word * STATE_VARIABLE_MaybeOutVarsTypes_60,
  MR_Word STATE_VARIABLE_CanGenerateTscc_0_61,
  MR_Word * STATE_VARIABLE_CanGenerateTscc_62,
  MR_Word STATE_VARIABLE_OutArgNames_0_63,
  MR_Word * STATE_VARIABLE_OutArgNames_64,
  MR_Word STATE_VARIABLE_InSccMap_0_65,
  MR_Word * STATE_VARIABLE_InSccMap_66,
  MR_Word STATE_VARIABLE_SeenAtLabelMap_0_67,
  MR_Word * STATE_VARIABLE_SeenAtLabelMap_68);

static void MR_CALL 
ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InSccInfo_8,
  MR_Word STATE_VARIABLE_NonTailEntryPredProcIds_0_15,
  MR_Word * STATE_VARIABLE_NonTailEntryPredProcIds_16,
  MR_Word STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17,
  MR_Word * STATE_VARIABLE_NoMutualTailRecPredProcIds_18);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word ConstStructMap_17,
  MR_Word _SCCEntryPredProcIds_18,
  MR_Word TsccCodeModel_19,
  MR_Word TSCCE_20,
  MR_Word STATE_VARIABLE_FuncDefns_0_45,
  MR_Word * STATE_VARIABLE_FuncDefns_46,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_InSccMap_0_49,
  MR_Word * STATE_VARIABLE_InSccMap_50);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word ConstStructMap_17,
  MR_Word TsccCodeModel_19,
  MR_Word TSCCE_20,
  MR_Word STATE_VARIABLE_FuncDefns_0_45,
  MR_Word * STATE_VARIABLE_FuncDefns_46,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_InSccMap_0_49,
  MR_Word * STATE_VARIABLE_InSccMap_50);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12,
  MR_Box wrapper_arg_13,
  MR_Box * wrapper_arg_14);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ModuleInfo_20,
  MR_Word Target_21,
  MR_Word ConstStructMap_22,
  MR_Word TsccCodeModel_23,
  MR_Word PredProcIds_24,
  MR_Word * NonTailEntryPredProcIds_25,
  MR_Word * NoMutualPredProcIds_26,
  MR_Word * MutualPredProcIds_27,
  MR_Word * MutualPredProcCodes_28,
  MR_Word * CanGenerateTscc_29,
  MR_Word * MutualEnvVarNames_30,
  MR_Word * MutualClosureWrapperFuncDefns_31,
  MR_Word * LoopKind_32,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48,
  MR_Word STATE_VARIABLE_GlobalData_0_49,
  MR_Word * STATE_VARIABLE_GlobalData_50);

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_rval_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * VarRval_6);

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_mlds_lval_and_type_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_lookup_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word NoneOrSelf_17,
  MR_Word PredProcId_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_29,
  MR_Word * STATE_VARIABLE_FuncDefns_30,
  MR_Word STATE_VARIABLE_GlobalData_0_31,
  MR_Word * STATE_VARIABLE_GlobalData_32,
  MR_Word STATE_VARIABLE_InSccMap_0_33,
  MR_Word * STATE_VARIABLE_InSccMap_34);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word NoneOrSelf_17,
  MR_Word PredProcIdInfo_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_68,
  MR_Word * STATE_VARIABLE_FuncDefns_69,
  MR_Word STATE_VARIABLE_GlobalData_0_70,
  MR_Word * STATE_VARIABLE_GlobalData_71,
  MR_Word STATE_VARIABLE_InSccMap_0_72,
  MR_Word * STATE_VARIABLE_InSccMap_73);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(
  MR_Word Info_4,
  MR_Word Context_5,
  MR_Word * SucceededVarDefns_6);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(
  MR_Word Info_8,
  MR_Word Context_9,
  MR_Word ArgTuples_10,
  MR_Word CopiedOutputVars_11,
  MR_Word * OutputVarLocalDefns_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
  MR_Word CodeModel_11,
  MR_Word ArgTuples_12,
  MR_Word CopiedOutputVars_13,
  MR_Word Goal_14,
  MR_Word SeenAtLabelMap_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcIdInfo_8,
  MR_Word FuncParams_9,
  MR_Word FuncBody_10,
  MR_Word EnvVarNames_11,
  MR_Word * FuncDefn_12);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0(
  MR_Word PredProcId_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16);

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word NoneOrSelf_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_InSccMap_0_13,
  MR_Word * STATE_VARIABLE_InSccMap_14);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word PredProcIdInfo_3);

static void MR_CALL 
ml_backend__ml_proc_gen__reset_scc_info_2_p_0(
  MR_Word STATE_VARIABLE_InSccInfo_0_4,
  MR_Word * STATE_VARIABLE_InSccInfo_5);

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(
  MR_Word STATE_VARIABLE_InSccMap_0_4,
  MR_Word * STATE_VARIABLE_InSccMap_5);

static void MR_CALL 
ml_backend__ml_proc_gen__add_to_in_scc_map_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_InSccMap_0_7,
  MR_Word * STATE_VARIABLE_InSccMap_8);

static void MR_CALL 
ml_backend__ml_proc_gen__report_nontail_rec_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word DefaultWarnParams_7,
  MR_Word NonTailRecCall_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
ml_backend__ml_proc_gen__gather_nontail_rec_calls_3_p_0(
  MR_Word InSccInfo_4,
  MR_Word STATE_VARIABLE_NonTailRecCalls_0_6,
  MR_Word * STATE_VARIABLE_NonTailRecCalls_7);

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word OptTailCalls_3,
  MR_Word DefaultWarnParams_4,
  MR_Word Target_5,
  MR_Word ConstStructMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_FuncDefns_0_8,
  MR_Word * STATE_VARIABLE_FuncDefns_9,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ModuleInfo_13,
  MR_Word OptTailCalls_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word SCCE_17,
  MR_Word * STATE_VARIABLE_InSccMap_42,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46);

static void MR_CALL 
ml_backend__ml_proc_gen__partition_tsccs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CodeGenPredProcIds_0_3,
  MR_Word * STATE_VARIABLE_CodeGenPredProcIds_4);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[26][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[21][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[11][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[3][15];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[9][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][16];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][8];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[2][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][18];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][9];




static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[26][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 0U << 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[19])))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[3])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_12[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[5])),
    ((MR_Box) (ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[7])),
    ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[9])),
    ((MR_Box) (ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[21][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_2[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[6]))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[6][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "Setup for mutual tailcalls optimized into a loop."))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "The mutually recursive procedures are:"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "tscc_end"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[11][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[3][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[9][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tscc_kind_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_10[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_tail_rec_loop_kind_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_11[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_12[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_lval_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_local_var_name_0ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__maybe__pti_maybe_1__plain_ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0 = {
  (MR_String) "can_not_generate_code_for_tscc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1 = {
  (MR_String) "can_generate_code_for_tscc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_can_we_generate_code_for_tscc_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_can_we_generate_code_for_tscc_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_1,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_can_we_generate_code_for_tscc_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_can_we_generate_code_for_tscc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "can_we_generate_code_for_tscc",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_can_we_generate_code_for_tscc_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_can_we_generate_code_for_tscc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_can_we_generate_code_for_tscc_0,

};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_proc_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0)
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0 = {
  (MR_String) "entry_proc_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_entry_proc_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_entry_proc_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_entry_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_entry_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_entry_proc_info_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_entry_proc_info_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_entry_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "entry_proc_info",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_entry_proc_info_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_entry_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_entry_proc_info_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_0 = {
  (MR_String) "does_not_contain_nested_funcs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_1 = {
  (MR_String) "contains_nested_funcs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_contains_nested_funcs_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_contains_nested_funcs_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_1,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_contains_nested_funcs_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_contains_nested_funcs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_contains_nested_funcs",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_contains_nested_funcs_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_contains_nested_funcs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_contains_nested_funcs_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0 = {
  (MR_String) "no_tail_call_opt_in_code_gen",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1 = {
  (MR_String) "tail_call_opt_in_code_gen",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_maybe_tail_call_opt_in_code_gen_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "maybe_tail_call_opt_in_code_gen",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_maybe_tail_call_opt_in_code_gen_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_maybe_tail_call_opt_in_code_gen_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_maybe_tail_call_opt_in_code_gen_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0 = {
  (MR_String) "no_tail_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1 = {
  (MR_String) "self_tail_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_none_or_self_tail_rec_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_none_or_self_tail_rec_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "none_or_self_tail_rec",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_none_or_self_tail_rec_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_none_or_self_tail_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_none_or_self_tail_rec_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0[8] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0[8] = {
  (MR_String) "ppc_id_args_info",
  (MR_String) "ppc_func_params",
  (MR_String) "ppc_local_var_defns",
  (MR_String) "ppc_local_func_defns",
  (MR_String) "ppc_desc_comment_stmt",
  (MR_String) "ppc_goal_stmts",
  (MR_String) "ppc_closure_wrapper_funcs",
  (MR_String) "ppc_env_var_names"
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0 = {
  (MR_String) "pred_proc_code",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_code_0_0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_code_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_code_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_code_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_code_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_code_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_code",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_code_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_code_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_code_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0)
};

static const MR_ConstString ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0[15] = {
  (MR_String) "ppiai_pred_proc_id",
  (MR_String) "ppiai_pred_info",
  (MR_String) "ppiai_proc_info",
  (MR_String) "ppiai_proc_context",
  (MR_String) "ppiai_id_in_tscc",
  (MR_String) "ppiai_arg_tuples",
  (MR_String) "ppiai_tscc_func_params",
  (MR_String) "ppiai_return_rvals_types",
  (MR_String) "ppiai_own_local_var_defns",
  (MR_String) "ppiai_tscc_in_local_var_defns",
  (MR_String) "ppiai_tscc_in_local_vars",
  (MR_String) "ppiai_tscc_out_value_local_var_defns",
  (MR_String) "ppiai_copy_tscc_in_to_own_copy",
  (MR_String) "ppiai_copy_own_to_tscc_out_copy",
  (MR_String) "ppiai_copy_out_through_ptr"
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0 = {
  (MR_String) "pred_proc_id_args_info",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_args_info_0_0,
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_names_pred_proc_id_args_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_args_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_args_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_args_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_args_info_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_args_info_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_args_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_id_args_info",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_args_info_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_args_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_args_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0 = {
  (MR_String) "pred_proc_id_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_pred_proc_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_pred_proc_id_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_pred_proc_id_info_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "pred_proc_id_info",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_pred_proc_id_info_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_pred_proc_id_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_pred_proc_id_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_proc_id_in_tscc_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_proc_gen__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0 = {
  (MR_String) "proc_stmt_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__field_types_proc_stmt_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_stag_ordered_proc_stmt_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_proc_stmt_info_0[1] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_functor_desc_proc_stmt_info_0_0
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_proc_stmt_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "proc_stmt_info",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_name_ordered_proc_stmt_info_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__du_ptag_ordered_proc_stmt_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_proc_stmt_info_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0 = {
  (MR_String) "tscc_det",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1 = {
  (MR_String) "tscc_semi",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_tscc_code_model_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_tscc_code_model_0[2] = {
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_0,
  &ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_functor_desc_tscc_code_model_0_1
};

static const MR_Integer ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_tscc_code_model_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0_10001)),
  ((MR_Box) (ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0_10001)),
  (MR_String) "ml_backend.ml_proc_gen",
  (MR_String) "tscc_code_model",
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_name_ordered_tscc_code_model_0 },
  { ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__enum_ordinal_ordered_tscc_code_model_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__functor_number_map_tscc_code_model_0,

};

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_local_var_defns_for_copied_output_vars__1830__1_3_p_0(
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  MR_Word HV_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 0))));
  MR_Word HT_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 2))));
  MR_Word Entry0_24;
  MR_Word Entry_25;
  MR_String Var_36;
  MR_Word Var_38;

  parse_tree__var_table__lookup_var_entry_3_p_0(LambdaHeadVar__2_30, HV_20, &Entry0_24);
  Var_36 = ((MR_String) ((MR_hl_field(0, Entry0_24, (MR_Integer) 0))));
  Var_38 = ((MR_Unsigned) ((MR_hl_field(0, Entry0_24, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    Entry_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_25, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, Entry_25, 1) = ((MR_Box) (HT_22));
    MR_hl_field(0, Entry_25, 2) = (MR_Box) ((MR_Unsigned) (Var_38));
  }
  parse_tree__var_table__update_var_entry_4_p_0(HV_20, Entry_25, LambdaHeadVar__2_30, LambdaHeadVar__3_31);
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_proc_body__1728__1_1_f_0(
  MR_Word LambdaHeadVar__1_58)
{
  MR_Word LambdaHeadVar__2_59 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_58, (MR_Integer) 1))));

  return LambdaHeadVar__2_59;
}

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1705__1_8_p_0(
  MR_Word CodeModel_11,
  MR_Word Context_22,
  MR_Word ConvOutputStmts_25,
  MR_Word * LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52,
  MR_Word * LambdaHeadVar__3_53,
  MR_Word LambdaHeadVar__4_54,
  MR_Word * LambdaHeadVar__5_55)
{
  MR_Word SuccStmts_35;

  ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_11, Context_22, &SuccStmts_35, LambdaHeadVar__4_54, LambdaHeadVar__5_55);
  *LambdaHeadVar__1_51 = (MR_Word) ((MR_Unsigned) 0U);
  *LambdaHeadVar__2_52 = (MR_Word) ((MR_Unsigned) 0U);
  *LambdaHeadVar__3_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvOutputStmts_25, SuccStmts_35);
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1448__1_2_p_0(
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_41,
  MR_Word HeadVar__2_48)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[9]), ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_41)), ((MR_Box) (HeadVar__2_48)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1391__1_1_f_0(
  MR_Word LambdaHeadVar__1_72)
{
  MR_Word LambdaHeadVar__2_73 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_72, (MR_Integer) 4))));

  return LambdaHeadVar__2_73;
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1302__1_2_p_0(
  MR_Word ArgTuples_28,
  MR_Word ProcArgTuples_48)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[8]), ((MR_Box) (ArgTuples_28)), ((MR_Box) (ProcArgTuples_48)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__compute_initial_tail_rec_map_for_mutual__1211__1_1_f_0(
  MR_Word LambdaHeadVar__1_73)
{
  MR_Word LambdaHeadVar__2_74 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_73, (MR_Integer) 0))));

  return LambdaHeadVar__2_74;
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__696__1_2_p_0(
  MR_Word TsccKind_19,
  MR_Word HeadVar__2_40)
{
  MR_bool succeeded = (TsccKind_19 == HeadVar__2_40);

  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_and_requantify_procs_for_code_gen__171__1_2_f_0(
  MR_Word PredId_13,
  MR_Integer LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;

  {
    LambdaHeadVar__2_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_33, 0) = ((MR_Box) (PredId_13));
    MR_hl_field(0, LambdaHeadVar__2_33, 1) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  return LambdaHeadVar__2_33;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(
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
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[13]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ml_backend__mlds____Compare____mlds_stmt_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer Var_17 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_17 == Var_18);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[13]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ml_backend__mlds____Compare____mlds_func_params_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            ml_backend__mlds____Compare____mlds_stmt_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[16]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__term_context____Compare____term_context_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_65 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_66 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_65 < Var_66);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_65 > Var_66);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                ml_backend__mlds____Compare____mlds_func_params_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[15]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[13]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
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
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0(
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
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[16]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_47_47;
    MR_Word TypeInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer Var_50;
    MR_Integer Var_51;

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            Var_50 = (MR_Integer) (ArgX5_11);
            Var_51 = (MR_Integer) (ArgY5_12);
            succeeded = (Var_50 == Var_51);
            if (succeeded)
            {
              TypeInfo_40_40 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_42_42 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[15]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_43_43 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_44_44 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_45_45 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[13]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_46_46 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_47_47 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_48_48 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_49_49 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
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
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(
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
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(
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
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(
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
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_29 > Var_30);
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

      ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ml_backend__mlds____Compare____mlds_func_params_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[15]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(
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
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer Var_22 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_23 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_22 == Var_23);
    if (succeeded)
    {
      succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[15]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0(
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
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__pred_proc_id_desc_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word DescStmt_6;
  MR_String Comment_7;
  MR_String Var_9;
  MR_Word Var_11;
  MR_Word Var_12;

  Var_9 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_4, PredProcId_5);
  Comment_7 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_9);
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Comment_7));
  }
  Var_12 = mercury__term_context__dummy_context_0_f_0();
  {
    DescStmt_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DescStmt_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, DescStmt_6, 1) = ((MR_Box) (Var_11));
    MR_hl_field(3, DescStmt_6, 2) = ((MR_Box) (Var_12));
  }
  return DescStmt_6;
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__describe_pred_proc_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_DescStmt_6;

  conv0_DescStmt_6 = ml_backend__ml_proc_gen__pred_proc_id_desc_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_DescStmt_6));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__describe_pred_proc_ids_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Msg_7,
  MR_Word PredProcIds_8,
  MR_Word STATE_VARIABLE_StartCommentStmts_0_12,
  MR_Word * STATE_VARIABLE_StartCommentStmts_13)
{
  MR_Word MsgStmt_10;
  MR_Word DescStmts_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Msg_7));
  }
  Var_15 = mercury__term_context__dummy_context_0_f_0();
  {
    MsgStmt_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MsgStmt_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, MsgStmt_10, 1) = ((MR_Box) (Var_14));
    MR_hl_field(3, MsgStmt_10, 2) = ((MR_Box) (Var_15));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[10]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__describe_pred_proc_ids_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (ModuleInfo_6));
  }
  Var_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_8);
  DescStmts_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_16, Var_17);
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MsgStmt_10));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (DescStmts_11));
  }
  *STATE_VARIABLE_StartCommentStmts_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_StartCommentStmts_0_12, Var_19);
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_case_contain_nested_func_defn_3_p_0(
  MR_Word Case_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_9,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_10)
{
  MR_Word Stmt_8 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 2))));

  ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(Stmt_8, STATE_VARIABLE_ContainsNestedFuncs_0_9, STATE_VARIABLE_ContainsNestedFuncs_10);
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ContainsNestedFuncs_10;

  ml_backend__ml_proc_gen__does_case_contain_nested_func_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ContainsNestedFuncs_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ContainsNestedFuncs_10));
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_39;

  ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ContainsNestedFuncs_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_39));
}

static void MR_CALL 
ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(
  MR_Word Stmt_4,
  MR_Word STATE_VARIABLE_ContainsNestedFuncs_0_38,
  MR_Word * STATE_VARIABLE_ContainsNestedFuncs_39)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FuncDefns_7 = ((MR_Word) ((MR_hl_field(0, Stmt_4, (MR_Integer) 1))));
          MR_Word SubStmts_8 = ((MR_Word) ((MR_hl_field(0, Stmt_4, (MR_Integer) 2))));

          if ((FuncDefns_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Box conv1_STATE_VARIABLE_ContainsNestedFuncs_39;

            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[24]), SubStmts_8, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_38)), &conv1_STATE_VARIABLE_ContainsNestedFuncs_39);
            *STATE_VARIABLE_ContainsNestedFuncs_39 = ((MR_Word) (conv1_STATE_VARIABLE_ContainsNestedFuncs_39));
          }
          else
            *STATE_VARIABLE_ContainsNestedFuncs_39 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStmt_14 = ((MR_Word) ((MR_hl_field(1, Stmt_4, (MR_Integer) 2))));
          MR_Word next_value_of_Stmt_4 = SubStmt_14;

          // direct tailcall eliminated
          ;
          Stmt_4 = next_value_of_Stmt_4;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ThenStmt_16 = ((MR_Word) ((MR_hl_field(2, Stmt_4, (MR_Integer) 1))));
          MR_Word MaybeElseStmt_17 = ((MR_Word) ((MR_hl_field(2, Stmt_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_ContainsNestedFuncs_44_44;

          ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(ThenStmt_16, STATE_VARIABLE_ContainsNestedFuncs_0_38, &STATE_VARIABLE_ContainsNestedFuncs_44_44);
          if ((MaybeElseStmt_17 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_44_44;
          else
          {
            MR_Word ElseStmt_18 = ((MR_Word) ((MR_hl_field(1, MaybeElseStmt_17, (MR_Integer) 0))));
            MR_Word next_value_of_Stmt_4 = ElseStmt_18;
            MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_44_44;

            // direct tailcall eliminated
            ;
            Stmt_4 = next_value_of_Stmt_4;
            STATE_VARIABLE_ContainsNestedFuncs_0_38 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Stmt_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 4))));
              MR_Word Default_23 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_47_47;
              MR_Box conv3_STATE_VARIABLE_ContainsNestedFuncs_47_47;

              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[25]), Cases_22, ((MR_Box) (STATE_VARIABLE_ContainsNestedFuncs_0_38)), &conv3_STATE_VARIABLE_ContainsNestedFuncs_47_47);
              STATE_VARIABLE_ContainsNestedFuncs_47_47 = ((MR_Word) (conv3_STATE_VARIABLE_ContainsNestedFuncs_47_47));
              switch (MR_tag((MR_Word) Default_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_47_47;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_47_47;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word DefaultStmt_24 = ((MR_Word) ((MR_hl_field(1, Default_23, (MR_Integer) 0))));
                    MR_Word next_value_of_Stmt_4 = DefaultStmt_24;
                    MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_47_47;

                    // direct tailcall eliminated
                    ;
                    Stmt_4 = next_value_of_Stmt_4;
                    STATE_VARIABLE_ContainsNestedFuncs_0_38 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;
                    continue;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 6:
            {
              MR_Word GoalStmt_26 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 2))));
              MR_Word HandlerStmt_27 = ((MR_Word) ((MR_hl_field(3, Stmt_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_ContainsNestedFuncs_49_49;
              MR_Word next_value_of_Stmt_4;
              MR_Word next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;

              ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(GoalStmt_26, STATE_VARIABLE_ContainsNestedFuncs_0_38, &STATE_VARIABLE_ContainsNestedFuncs_49_49);
              // direct tailcall eliminated
              ;
              next_value_of_Stmt_4 = HandlerStmt_27;
              next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38 = STATE_VARIABLE_ContainsNestedFuncs_49_49;
              Stmt_4 = next_value_of_Stmt_4;
              STATE_VARIABLE_ContainsNestedFuncs_0_38 = next_value_of_STATE_VARIABLE_ContainsNestedFuncs_0_38;
              continue;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_ContainsNestedFuncs_39 = STATE_VARIABLE_ContainsNestedFuncs_0_38;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_7_p_0(
  MR_Word GotoEndStmts_8,
  MR_Word ProcStmtInfo_9,
  MR_Word * SwitchCase_10,
  MR_Word STATE_VARIABLE_PossibleSwitchValues_0_20,
  MR_Word * STATE_VARIABLE_PossibleSwitchValues_21,
  MR_Word STATE_VARIABLE_AllLoopLocalVars_0_22,
  MR_Word * STATE_VARIABLE_AllLoopLocalVars_23)
{
  MR_bool succeeded;
  MR_Word IdInTscc_13 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_9, (MR_Integer) 0))));
  MR_Word LoopLocalVars_14 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_9, (MR_Integer) 1))));
  MR_Word ProcStmt_15 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_9, (MR_Integer) 2))));
  MR_Word ProcContext_16 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_9, (MR_Integer) 3))));
  MR_Integer IdInTsccNum_17 = (MR_Integer) (IdInTscc_13);
  MR_Word MatchCond_18;
  MR_Word SwitchStmt_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word LocalVarDefns_32;
  MR_Word FuncDefns_33;
  MR_Word BaseStmts_34;
  MR_Word Context_35;

  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (IdInTsccNum_17));
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
  }
  {
    MatchCond_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MatchCond_18, 0) = ((MR_Box) (Var_24));
  }
  succeeded = ((MR_tag((MR_Word) ProcStmt_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    LocalVarDefns_32 = ((MR_Word) ((MR_hl_field(0, ProcStmt_15, (MR_Integer) 0))));
    FuncDefns_33 = ((MR_Word) ((MR_hl_field(0, ProcStmt_15, (MR_Integer) 1))));
    BaseStmts_34 = ((MR_Word) ((MR_hl_field(0, ProcStmt_15, (MR_Integer) 2))));
    Context_35 = ((MR_Word) ((MR_hl_field(0, ProcStmt_15, (MR_Integer) 3))));
    {
      MR_Word Var_36;
      MR_Word Var_37;

      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), BaseStmts_34, GotoEndStmts_8);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (LocalVarDefns_32));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (FuncDefns_33));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) (Var_37));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (Context_35));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (ProcStmt_15));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (GotoEndStmts_8));
    }
  SwitchStmt_19 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_28, ProcContext_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *SwitchCase_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MatchCond_18));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) (SwitchStmt_19));
  }
  mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (IdInTsccNum_17)), STATE_VARIABLE_PossibleSwitchValues_0_20, STATE_VARIABLE_PossibleSwitchValues_21);
  *STATE_VARIABLE_AllLoopLocalVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), LoopLocalVars_14, STATE_VARIABLE_AllLoopLocalVars_0_22);
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_wrapped_proc_with_label_goto_3_p_0(
  MR_Word GotoEndStmt_4,
  MR_Word ProcStmtInfo_5,
  MR_Word * LabelProcStmts_6)
{
  MR_bool succeeded;
  MR_Word IdInTscc_7 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_5, (MR_Integer) 0))));
  MR_Word ProcStmt_9 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_5, (MR_Integer) 2))));
  MR_Word ProcContext_10 = ((MR_Word) ((MR_hl_field(0, ProcStmtInfo_5, (MR_Integer) 3))));
  MR_String StartLabel_11;
  MR_Word StartLabelStmt_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word LocalVarDefns_17;
  MR_Word FuncDefns_18;
  MR_Word BaseStmts_19;
  MR_Word Context_20;

  StartLabel_11 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, IdInTscc_7);
  {
    StartLabelStmt_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StartLabelStmt_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, StartLabelStmt_12, 1) = ((MR_Box) (StartLabel_11));
    MR_hl_field(3, StartLabelStmt_12, 2) = ((MR_Box) (ProcContext_10));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (GotoEndStmt_4));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = ((MR_tag((MR_Word) ProcStmt_9)) == (MR_Integer) 0);
  if (succeeded)
  {
    LocalVarDefns_17 = ((MR_Word) ((MR_hl_field(0, ProcStmt_9, (MR_Integer) 0))));
    FuncDefns_18 = ((MR_Word) ((MR_hl_field(0, ProcStmt_9, (MR_Integer) 1))));
    BaseStmts_19 = ((MR_Word) ((MR_hl_field(0, ProcStmt_9, (MR_Integer) 2))));
    Context_20 = ((MR_Word) ((MR_hl_field(0, ProcStmt_9, (MR_Integer) 3))));
    {
      MR_Word Var_21;
      MR_Word Var_22;

      Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), BaseStmts_19, Var_15);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (LocalVarDefns_17));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (FuncDefns_18));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) (Var_22));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (Context_20));
      }
      {
        Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_21));
        MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (ProcStmt_9));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
    }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LabelProcStmts_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (StartLabelStmt_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_14));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_for_tscc__1448__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(
  MR_Word EntryProc_8,
  MR_Word PredProcCode_9,
  MR_Word * ProcStmtInfo_10,
  MR_Word STATE_VARIABLE_MaybeEntryProcInfo_0_41,
  MR_Word * STATE_VARIABLE_MaybeEntryProcInfo_42,
  MR_Word STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_43,
  MR_Word * STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44)
{
  MR_bool succeeded;
  MR_Word PredProcIdArgsInfo_13 = ((MR_Word) ((MR_hl_field(0, PredProcCode_9, (MR_Integer) 0))));
  MR_Word GoalLocalVarDefns_15 = ((MR_Word) ((MR_hl_field(0, PredProcCode_9, (MR_Integer) 2))));
  MR_Word GoalFuncDefns_16 = ((MR_Word) ((MR_hl_field(0, PredProcCode_9, (MR_Integer) 3))));
  MR_Word GoalStmts_18 = ((MR_Word) ((MR_hl_field(0, PredProcCode_9, (MR_Integer) 5))));
  MR_Word PredProcId_21 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 0))));
  MR_Word PredInfo_22 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 1))));
  MR_Word ProcInfo_23 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 2))));
  MR_Word ProcContext_24 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 3))));
  MR_Word IdInTscc_25 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 4))));
  MR_Word FuncParams_27 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 6))));
  MR_Word ReturnRvalsTypes_28 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 7))));
  MR_Word OwnLocalVarDefns_29 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 8))));
  MR_Word TsccInLocalVarDefns_30 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 9))));
  MR_Word TsccInLocalVars_31 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 10))));
  MR_Word TsccOutLocalVarDefns_32 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 11))));
  MR_Word CopyTsccInToOwnStmts_33 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 12))));
  MR_Word CopyOwnToTsccOutStmts_34 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 13))));
  MR_Word CopyOutValThroughPtrStmts_35 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_13, (MR_Integer) 14))));
  MR_Word AllLocalVarDefns_38;
  MR_Word AllStmts_39;
  MR_Word ProcStmt_40;
  MR_Word Var_51;

  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_21, EntryProc_8);
  if (succeeded)
  {
    MR_Word PredProcIdInfo_36;
    MR_Word EntryProcInfo_37;
    MR_Word Var_45;

    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[8]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (STATE_VARIABLE_MaybeEntryProcInfo_0_41));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_for_tscc\'/7", (MR_String) "!.MaybeEntryProcInfo != no");
    {
      PredProcIdInfo_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcIdInfo_36, 0) = ((MR_Box) (PredProcId_21));
      MR_hl_field(0, PredProcIdInfo_36, 1) = ((MR_Box) (PredInfo_22));
      MR_hl_field(0, PredProcIdInfo_36, 2) = ((MR_Box) (ProcInfo_23));
      MR_hl_field(0, PredProcIdInfo_36, 3) = ((MR_Box) (ProcContext_24));
    }
    {
      EntryProcInfo_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EntryProcInfo_37, 0) = ((MR_Box) (IdInTscc_25));
      MR_hl_field(0, EntryProcInfo_37, 1) = ((MR_Box) (PredProcIdInfo_36));
      MR_hl_field(0, EntryProcInfo_37, 2) = ((MR_Box) (FuncParams_27));
      MR_hl_field(0, EntryProcInfo_37, 3) = ((MR_Box) (ReturnRvalsTypes_28));
      MR_hl_field(0, EntryProcInfo_37, 4) = ((MR_Box) (TsccOutLocalVarDefns_32));
      MR_hl_field(0, EntryProcInfo_37, 5) = ((MR_Box) (CopyOutValThroughPtrStmts_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeEntryProcInfo_42 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (EntryProcInfo_37));
    }
    *STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44 = STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_43;
  }
  else
  {
    *STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), STATE_VARIABLE_NonEntryTsccInLocalVarDefns_0_43, TsccInLocalVarDefns_30);
    *STATE_VARIABLE_MaybeEntryProcInfo_42 = STATE_VARIABLE_MaybeEntryProcInfo_0_41;
  }
  AllLocalVarDefns_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), OwnLocalVarDefns_29, GoalLocalVarDefns_15);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), GoalStmts_18, CopyOwnToTsccOutStmts_34);
  AllStmts_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CopyTsccInToOwnStmts_33, Var_51);
  {
    ProcStmt_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcStmt_40, 0) = ((MR_Box) (AllLocalVarDefns_38));
    MR_hl_field(0, ProcStmt_40, 1) = ((MR_Box) (GoalFuncDefns_16));
    MR_hl_field(0, ProcStmt_40, 2) = ((MR_Box) (AllStmts_39));
    MR_hl_field(0, ProcStmt_40, 3) = ((MR_Box) (ProcContext_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *ProcStmtInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IdInTscc_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (TsccInLocalVars_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcStmt_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcContext_24));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_73;

  conv5_LambdaHeadVar__2_73 = ml_backend__ml_proc_gen__IntroducedFrom__func__construct_tscc_entry_proc__1391__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_73));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_ProcStmtInfo_10;
  MR_Word conv1_STATE_VARIABLE_MaybeEntryProcInfo_42;
  MR_Word conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44;

  ml_backend__ml_proc_gen__construct_func_body_for_tscc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_ProcStmtInfo_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeEntryProcInfo_42, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44);
  *wrapper_arg_2 = ((MR_Box) (conv2_ProcStmtInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeEntryProcInfo_42));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_NonEntryTsccInLocalVarDefns_44));
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ModuleInfo_10,
  MR_Word LoopKind_11,
  MR_Word PredProcCodes_12,
  MR_Word EnvVarNames_13,
  MR_Word EntryProcDescComments_14,
  MR_Word EntryProc_15,
  MR_Word * FuncDefn_16)
{
  MR_bool succeeded;
  MR_Word ProcStmtInfos_18;
  MR_Word MaybeEntryProcInfo_19;
  MR_Word NonEntryTsccInLocalVarDefns_20;
  MR_Word EntryIdInTscc_22;
  MR_Word EntryPredProcIdInfo_23;
  MR_Word EntryProcParams_24;
  MR_Word EntryTsccOutLocalVarDefns_26;
  MR_Word EntryCopyOutValThroughPtrStmts_27;
  MR_Word EntryReturnRvals_28;
  MR_Word EntryProcContext_32;
  MR_Word ContainerVarDefns_33;
  MR_Word Stmts_34;
  MR_Word FuncBodyLocalVarDefns_35;
  MR_Integer EntryIdInTsccNum_36;
  MR_String EntryProcDesc_37;
  MR_String Comment0_38;
  MR_Word CommentStmt0_39;
  MR_Word CommentStmt1_41;
  MR_Word CommentStmt2_43;
  MR_Word EmptyCommentStmt_45;
  MR_Word ProcDescCommentStmts_46;
  MR_Word FuncBodyStmts_48;
  MR_Word FuncBodyStmt_49;
  MR_Word FuncBody_50;
  MR_Word Var_54;
  MR_Word Var_59;
  MR_Word Var_67;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_107;
  MR_String Var_114;
  MR_Word PredProcId_116;
  MR_Word ProcInfo_118;
  MR_Word PredId_120;
  MR_Integer ProcId_121;
  MR_Word PlainFuncName_123;
  MR_Word ProcContext_124;
  MR_Word DeclFlags_125;
  MR_Word MaybePredProcId_126;
  MR_Word Var_128;
  MR_Word PredInfo_129;
  MR_Word Access_130;
  MR_Box conv4_MaybeEntryProcInfo_19;
  MR_Box conv3_NonEntryTsccInLocalVarDefns_20;
  MR_Word _ModuleName_122;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_9, ModuleInfo_10, (MR_String) "Generating MLDS code for", EntryProc_15);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[2]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (EntryProc_15));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[9]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[10]), Var_54, PredProcCodes_12, &ProcStmtInfos_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_MaybeEntryProcInfo_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NonEntryTsccInLocalVarDefns_20);
  MaybeEntryProcInfo_19 = ((MR_Word) (conv4_MaybeEntryProcInfo_19));
  NonEntryTsccInLocalVarDefns_20 = ((MR_Word) (conv3_NonEntryTsccInLocalVarDefns_20));
  if ((MaybeEntryProcInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.construct_tscc_entry_proc\'/8", (MR_String) "MaybeEntryProcInfo = no");
      return;
    }
  else
  {
    MR_Word EntryProcInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeEntryProcInfo_19, (MR_Integer) 0))));
    MR_Word EntryReturnRvalsTypes_25;

    EntryIdInTscc_22 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 0))));
    EntryPredProcIdInfo_23 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 1))));
    EntryProcParams_24 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 2))));
    EntryReturnRvalsTypes_25 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 3))));
    EntryTsccOutLocalVarDefns_26 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 4))));
    EntryCopyOutValThroughPtrStmts_27 = ((MR_Word) ((MR_hl_field(0, EntryProcInfo_21, (MR_Integer) 5))));
    mercury__assoc_list__keys_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), EntryReturnRvalsTypes_25, &EntryReturnRvals_28);
  }
  EntryProcContext_32 = ((MR_Word) ((MR_hl_field(0, EntryPredProcIdInfo_23, (MR_Integer) 3))));
  ml_backend__ml_proc_gen__make_container_proc_8_p_0(LoopKind_11, EntryCopyOutValThroughPtrStmts_27, EntryReturnRvals_28, EntryIdInTscc_22, EntryProcContext_32, ProcStmtInfos_18, &ContainerVarDefns_33, &Stmts_34);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), NonEntryTsccInLocalVarDefns_20, EntryTsccOutLocalVarDefns_26);
  FuncBodyLocalVarDefns_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ContainerVarDefns_33, Var_59);
  EntryIdInTsccNum_36 = (MR_Integer) (EntryIdInTscc_22);
  EntryProcDesc_37 = hlds__hlds_desc__describe_proc_from_id_3_f_0((MR_Integer) 1, ModuleInfo_10, EntryProc_15);
  Var_104 = mercury__string__f_43_43_2_f_0(EntryProcDesc_37, (MR_String) ".");
  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_104);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_3[0]), EntryIdInTsccNum_36, &Var_107);
  Var_114 = mercury__string__f_43_43_2_f_0(Var_107, Var_106);
  Comment0_38 = mercury__string__f_43_43_2_f_0((MR_String) "The code for TSCC PROC ", Var_114);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Comment0_38));
  }
  {
    CommentStmt0_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CommentStmt0_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, CommentStmt0_39, 1) = ((MR_Box) (Var_67));
    MR_hl_field(3, CommentStmt0_39, 2) = ((MR_Box) (EntryProcContext_32));
  }
  {
    CommentStmt1_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CommentStmt1_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, CommentStmt1_41, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_proc_gen_scalar_common_3[1])));
    MR_hl_field(3, CommentStmt1_41, 2) = ((MR_Box) (EntryProcContext_32));
  }
  {
    CommentStmt2_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CommentStmt2_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, CommentStmt2_43, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_proc_gen_scalar_common_3[2])));
    MR_hl_field(3, CommentStmt2_43, 2) = ((MR_Box) (EntryProcContext_32));
  }
  {
    EmptyCommentStmt_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, EmptyCommentStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, EmptyCommentStmt_45, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_proc_gen_scalar_common_3[3])));
    MR_hl_field(3, EmptyCommentStmt_45, 2) = ((MR_Box) (EntryProcContext_32));
  }
  ProcDescCommentStmts_46 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[23]), PredProcCodes_12);
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (EmptyCommentStmt_45));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (ProcDescCommentStmts_46));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (CommentStmt2_43));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (CommentStmt1_41));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (CommentStmt0_39));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (EmptyCommentStmt_45));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (EntryProcDescComments_14));
  }
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79, Stmts_34);
  FuncBodyStmts_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_74, Var_78);
  {
    FuncBodyStmt_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncBodyStmt_49, 0) = ((MR_Box) (FuncBodyLocalVarDefns_35));
    MR_hl_field(0, FuncBodyStmt_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FuncBodyStmt_49, 2) = ((MR_Box) (FuncBodyStmts_48));
    MR_hl_field(0, FuncBodyStmt_49, 3) = ((MR_Box) (EntryProcContext_32));
  }
  {
    FuncBody_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FuncBody_50, 0) = ((MR_Box) (FuncBodyStmt_49));
  }
  PredProcId_116 = ((MR_Word) ((MR_hl_field(0, EntryPredProcIdInfo_23, (MR_Integer) 0))));
  ProcInfo_118 = ((MR_Word) ((MR_hl_field(0, EntryPredProcIdInfo_23, (MR_Integer) 2))));
  PredId_120 = ((MR_Word) ((MR_hl_field(0, PredProcId_116, (MR_Integer) 0))));
  ProcId_121 = ((MR_Integer) ((MR_hl_field(0, PredProcId_116, (MR_Integer) 1))));
  ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_10, PredProcId_116, &_ModuleName_122, &PlainFuncName_123);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_118, &ProcContext_124);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_120, &PredInfo_129);
  succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_10, PredInfo_129, ProcId_121);
  if (succeeded)
    Access_130 = (MR_Integer) 0;
  else
    Access_130 = (MR_Integer) 1;
  {
    DeclFlags_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeclFlags_125, 0) = (MR_Box) (((((MR_Unsigned) (Access_130) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    MaybePredProcId_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybePredProcId_126, 0) = ((MR_Box) (PredProcId_116));
  }
  Var_128 = (MR_Word) ((MR_Word) (PlainFuncName_123));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *FuncDefn_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_128));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcContext_124));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclFlags_125));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybePredProcId_126));
    MR_hl_field(0, base, 4) = ((MR_Box) (EntryProcParams_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (FuncBody_50));
    MR_hl_field(0, base, 6) = ((MR_Box) (EnvVarNames_13));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_SwitchCase_10;
  MR_Word conv2_STATE_VARIABLE_PossibleSwitchValues_21;
  MR_Word conv1_STATE_VARIABLE_AllLoopLocalVars_23;

  ml_backend__ml_proc_gen__make_wrapped_proc_with_while_continue_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_SwitchCase_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_PossibleSwitchValues_21, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AllLoopLocalVars_23);
  *wrapper_arg_2 = ((MR_Box) (conv3_SwitchCase_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_PossibleSwitchValues_21));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AllLoopLocalVars_23));
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LabelProcStmts_6;

  ml_backend__ml_proc_gen__make_wrapped_proc_with_label_goto_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LabelProcStmts_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_LabelProcStmts_6));
}

static void MR_CALL 
ml_backend__ml_proc_gen__make_container_proc_8_p_0(
  MR_Word LoopKind_9,
  MR_Word CopyOutValThroughPtrStmts_10,
  MR_Word ReturnRvals_11,
  MR_Word EntryProc_12,
  MR_Word EntryProcContext_13,
  MR_Word ProcStmtInfos_14,
  MR_Word * ContainerVarDefns_15,
  MR_Word * Stmts_16)
{
  MR_Word ReturnStmt_17;

  {
    ReturnStmt_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ReturnStmt_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ReturnStmt_17, 1) = ((MR_Box) (ReturnRvals_11));
    MR_hl_field(3, ReturnStmt_17, 2) = ((MR_Box) (EntryProcContext_13));
  }
  switch (LoopKind_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word EndLabelStmt_19;
        MR_Word GotoEndStmt_20;
        MR_Word ProcWrappedStmtLists_21;
        MR_Word ProcWrappedStmts_22;
        MR_String EntryStartLabel_23;
        MR_Word GotoEntryStmt_24;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;

        {
          EndLabelStmt_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, EndLabelStmt_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, EndLabelStmt_19, 1) = ((MR_Box) ((MR_String) "tscc_end"));
          MR_hl_field(3, EndLabelStmt_19, 2) = ((MR_Box) (EntryProcContext_13));
        }
        {
          GotoEndStmt_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GotoEndStmt_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GotoEndStmt_20, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_proc_gen_scalar_common_3[4])));
          MR_hl_field(3, GotoEndStmt_20, 2) = ((MR_Box) (EntryProcContext_13));
        }
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[8]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__make_container_proc_8_p_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (GotoEndStmt_20));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[11]), Var_26, ProcStmtInfos_14, &ProcWrappedStmtLists_21);
        mercury__list__condense_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ProcWrappedStmtLists_21, &ProcWrappedStmts_22);
        EntryStartLabel_23 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, EntryProc_12);
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (EntryStartLabel_23));
        }
        {
          GotoEntryStmt_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GotoEntryStmt_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GotoEntryStmt_24, 1) = ((MR_Box) (Var_28));
          MR_hl_field(3, GotoEntryStmt_24, 2) = ((MR_Box) (EntryProcContext_13));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (GotoEntryStmt_24));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (ProcWrappedStmts_22));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (EndLabelStmt_19));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (CopyOutValThroughPtrStmts_10));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (ReturnStmt_17));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_31, Var_32);
        *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_29, Var_30);
        *ContainerVarDefns_15 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word GotoEndStmts_37;
        MR_Word SwitchCases_38;
        MR_Word PossibleSwitchValues_39;
        MR_Word AllTsccInLocalVars_40;
        MR_Word SelectorVar_41;
        MR_Word SelectorType_42;
        MR_Word SelectorVarDefn_43;
        MR_Integer EntryProcNum_44;
        MR_Word SetSelectorStmt_46;
        MR_Word PossibleSwitchValuesList_47;
        MR_Integer SwitchMin_48;
        MR_Integer SwitchMax_49;
        MR_Word SwitchRange_50;
        MR_Word SwitchStmt_52;
        MR_Word BreakStmt_53;
        MR_Word SwitchBreakStmt_54;
        MR_Word LoopLocalVars_55;
        MR_Word LoopStmt_56;
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Box conv5_PossibleSwitchValues_39;
        MR_Box conv4_AllTsccInLocalVars_40;
        MR_Box conv6_SwitchMin_48;
        MR_Box conv7_SwitchMax_49;

        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_57, 2) = ((MR_Box) (EntryProcContext_13));
        }
        {
          GotoEndStmts_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GotoEndStmts_37, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, GotoEndStmts_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[1]));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (ml_backend__ml_proc_gen__make_container_proc_8_p_0_2));
          MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_60, 3) = ((MR_Box) (GotoEndStmts_37));
        }
        Var_61 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        mercury__list__map_foldl2_7_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[12]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[13]), Var_60, ProcStmtInfos_14, &SwitchCases_38, ((MR_Box) (Var_61)), &conv5_PossibleSwitchValues_39, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_AllTsccInLocalVars_40);
        PossibleSwitchValues_39 = ((MR_Word) (conv5_PossibleSwitchValues_39));
        AllTsccInLocalVars_40 = ((MR_Word) (conv4_AllTsccInLocalVars_40));
        SelectorVar_41 = (MR_Word) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[18]));
        SelectorType_42 = (MR_Word) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[19]));
        {
          SelectorVarDefn_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SelectorVarDefn_43, 0) = ((MR_Box) (SelectorVar_41));
          MR_hl_field(0, SelectorVarDefn_43, 1) = ((MR_Box) (EntryProcContext_13));
          MR_hl_field(0, SelectorVarDefn_43, 2) = ((MR_Box) (SelectorType_42));
          MR_hl_field(0, SelectorVarDefn_43, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SelectorVarDefn_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ContainerVarDefns_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SelectorVarDefn_43));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        EntryProcNum_44 = (MR_Integer) (EntryProc_12);
        {
          Var_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_68, 0) = ((MR_Box) (EntryProcNum_44));
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_66, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_1[8])));
          MR_hl_field(2, Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          SetSelectorStmt_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SetSelectorStmt_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, SetSelectorStmt_46, 1) = ((MR_Box) (Var_66));
          MR_hl_field(3, SetSelectorStmt_46, 2) = ((MR_Box) (EntryProcContext_13));
        }
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleSwitchValues_39, &PossibleSwitchValuesList_47);
        conv6_SwitchMin_48 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleSwitchValuesList_47);
        SwitchMin_48 = ((MR_Integer) (conv6_SwitchMin_48));
        conv7_SwitchMax_49 = mercury__list__det_last_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleSwitchValuesList_47);
        SwitchMax_49 = ((MR_Integer) (conv7_SwitchMax_49));
        {
          SwitchRange_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SwitchRange_50, 0) = ((MR_Box) (SwitchMin_48));
          MR_hl_field(1, SwitchRange_50, 1) = ((MR_Box) (SwitchMax_49));
        }
        {
          SwitchStmt_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SwitchStmt_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, SwitchStmt_52, 1) = ((MR_Box) (SelectorType_42));
          MR_hl_field(3, SwitchStmt_52, 2) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_proc_gen_scalar_common_3[5])));
          MR_hl_field(3, SwitchStmt_52, 3) = ((MR_Box) (SwitchRange_50));
          MR_hl_field(3, SwitchStmt_52, 4) = ((MR_Box) (SwitchCases_38));
          MR_hl_field(3, SwitchStmt_52, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, SwitchStmt_52, 6) = ((MR_Box) (EntryProcContext_13));
        }
        {
          BreakStmt_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, BreakStmt_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, BreakStmt_53, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, BreakStmt_53, 2) = ((MR_Box) (EntryProcContext_13));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (BreakStmt_53));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (SwitchStmt_52));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
        }
        {
          SwitchBreakStmt_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SwitchBreakStmt_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SwitchBreakStmt_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SwitchBreakStmt_54, 2) = ((MR_Box) (Var_72));
          MR_hl_field(0, SwitchBreakStmt_54, 3) = ((MR_Box) (EntryProcContext_13));
        }
        {
          LoopLocalVars_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LoopLocalVars_55, 0) = ((MR_Box) (SelectorVar_41));
          MR_hl_field(1, LoopLocalVars_55, 1) = ((MR_Box) (AllTsccInLocalVars_40));
        }
        {
          LoopStmt_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LoopStmt_56, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, LoopStmt_56, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[17])));
          MR_hl_field(1, LoopStmt_56, 2) = ((MR_Box) (SwitchBreakStmt_54));
          MR_hl_field(1, LoopStmt_56, 3) = ((MR_Box) (LoopLocalVars_55));
          MR_hl_field(1, LoopStmt_56, 4) = ((MR_Box) (EntryProcContext_13));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (LoopStmt_56));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (SetSelectorStmt_46));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (ReturnStmt_17));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CopyOutValThroughPtrStmts_10, Var_79);
        *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_76, Var_78);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_tscc_proc_code__1302__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word TsccCodeModel_17,
  MR_Word SeenAtLabelMap_18,
  MR_Word PredProcIdArgsInfo_19,
  MR_Word * PredProcCode_20,
  MR_Word STATE_VARIABLE_GlobalData_0_66,
  MR_Word * STATE_VARIABLE_GlobalData_67,
  MR_Word STATE_VARIABLE_TsccInfo_0_68,
  MR_Word * STATE_VARIABLE_TsccInfo_69)
{
  MR_bool succeeded;
  MR_Word PredProcId_23 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 0))));
  MR_Word PredInfo_24 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 1))));
  MR_Word ProcInfo_25 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 2))));
  MR_Word ProcContext_26 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 3))));
  MR_Word ProcIdInTscc_27 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 4))));
  MR_Word ArgTuples_28 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 5))));
  MR_Word PredStatus_40;
  MR_Integer ProcId_43;
  MR_String ProcDesc_44;
  MR_Integer ProcNumInTscc_45;
  MR_String ProcDescComment_46;
  MR_Word CommentStmt_47;
  MR_Word ProcArgTuples_48;
  MR_Word FuncParams_49;
  MR_Word ByRefOutputVars_50;
  MR_Word CopiedOutputVars0_51;
  MR_Word CopiedOutputVars_52;
  MR_Word ByRefOutputVarsSet_53;
  MR_Word CodeModel_54;
  MR_Word InitSucceededStmts_55;
  MR_Word Goal_57;
  MR_Word LocalVarDefns0_58;
  MR_Word FuncDefns_59;
  MR_Word GoalStmts0_60;
  MR_Word GoalStmts_61;
  MR_Word SucceededVarDefns_62;
  MR_Word LocalVarDefns_63;
  MR_Word EnvVarNames_64;
  MR_Word ClosureWrapperFuncDefns_65;
  MR_Word STATE_VARIABLE_Info_73_73;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_Info_85_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_Info_89_89;
  MR_Word STATE_VARIABLE_Info_91_91;
  MR_Word STATE_VARIABLE_Info_94_94;
  MR_String Var_101;
  MR_String Var_102;
  MR_String Var_109;
  MR_Word UsedSucceededVar_111;
  MR_Word Var_74;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_13, ModuleInfo_14, (MR_String) "Generating in-TSCC MLDS code for", PredProcId_23);
  STATE_VARIABLE_Info_73_73 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_14, Target_15, ConstStructMap_16, PredProcId_23, ProcInfo_25, STATE_VARIABLE_GlobalData_0_66, STATE_VARIABLE_TsccInfo_0_68);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_24, &PredStatus_40);
  Var_74 = (MR_Word) (PredStatus_40);
  succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 1);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/12", (MR_String) "status_external");
      return;
    }
  ProcId_43 = ((MR_Integer) ((MR_hl_field(0, PredProcId_23, (MR_Integer) 1))));
  ProcDesc_44 = hlds__hlds_desc__describe_proc_3_f_0((MR_Integer) 1, PredInfo_24, ProcId_43);
  ProcNumInTscc_45 = (MR_Integer) (ProcIdInTscc_27);
  Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " in TSCC: ", ProcDesc_44);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_3[0]), ProcNumInTscc_45, &Var_102);
  Var_109 = mercury__string__f_43_43_2_f_0(Var_102, Var_101);
  ProcDescComment_46 = mercury__string__f_43_43_2_f_0((MR_String) "proc ", Var_109);
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (ProcDescComment_46));
  }
  {
    CommentStmt_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CommentStmt_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, CommentStmt_47, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, CommentStmt_47, 2) = ((MR_Box) (ProcContext_26));
  }
  ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_23, &ProcArgTuples_48, &FuncParams_49, &ByRefOutputVars_50, &CopiedOutputVars0_51, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_85_85);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[6]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0_1));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (ArgTuples_28));
    MR_hl_field(0, Var_86, 4) = ((MR_Box) (ProcArgTuples_48));
  }
  mercury__require__expect_3_p_0(Var_86, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc_proc_code\'/12", (MR_String) "ArgTuples != ProcArgTuples");
  CopiedOutputVars_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[3]), ByRefOutputVars_50, CopiedOutputVars0_51);
  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ByRefOutputVarsSet_53);
  ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVarsSet_53, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_89_89);
  switch (TsccCodeModel_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        CodeModel_54 = (MR_Integer) 0;
        InitSucceededStmts_55 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_91_91 = STATE_VARIABLE_Info_89_89;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InitSucceededStmt_56;

        CodeModel_54 = (MR_Integer) 1;
        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[17])), ProcContext_26, &InitSucceededStmt_56, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_91_91);
        {
          InitSucceededStmts_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, InitSucceededStmts_55, 0) = ((MR_Box) (InitSucceededStmt_56));
          MR_hl_field(1, InitSucceededStmts_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &Goal_57);
  ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(CodeModel_54, ArgTuples_28, CopiedOutputVars_52, Goal_57, SeenAtLabelMap_18, &LocalVarDefns0_58, &FuncDefns_59, &GoalStmts0_60, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_94_94);
  GoalStmts_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), InitSucceededStmts_55, GoalStmts0_60);
  ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(STATE_VARIABLE_Info_94_94, &UsedSucceededVar_111);
  switch (UsedSucceededVar_111) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SucceededVarDefns_62 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_112;

        Var_112 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ProcContext_26);
        {
          SucceededVarDefns_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SucceededVarDefns_62, 0) = ((MR_Box) (Var_112));
          MR_hl_field(1, SucceededVarDefns_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  LocalVarDefns_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), SucceededVarDefns_62, LocalVarDefns0_58);
  ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_94_94, &EnvVarNames_64, &ClosureWrapperFuncDefns_65, STATE_VARIABLE_GlobalData_67, STATE_VARIABLE_TsccInfo_69);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *PredProcCode_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredProcIdArgsInfo_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (FuncParams_49));
    MR_hl_field(0, base, 2) = ((MR_Box) (LocalVarDefns_63));
    MR_hl_field(0, base, 3) = ((MR_Box) (FuncDefns_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (CommentStmt_47));
    MR_hl_field(0, base, 5) = ((MR_Box) (GoalStmts_61));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClosureWrapperFuncDefns_65));
    MR_hl_field(0, base, 7) = ((MR_Box) (EnvVarNames_64));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_74;

  conv0_LambdaHeadVar__2_74 = ml_backend__ml_proc_gen__IntroducedFrom__func__compute_initial_tail_rec_map_for_mutual__1211__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_74));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word PredProcId_17,
  MR_Word * PredProcIdArgsInfo_18,
  MR_Integer STATE_VARIABLE_ProcNum_0_57,
  MR_Integer * STATE_VARIABLE_ProcNum_58,
  MR_Word STATE_VARIABLE_MaybeOutVarsTypes_0_59,
  MR_Word * STATE_VARIABLE_MaybeOutVarsTypes_60,
  MR_Word STATE_VARIABLE_CanGenerateTscc_0_61,
  MR_Word * STATE_VARIABLE_CanGenerateTscc_62,
  MR_Word STATE_VARIABLE_OutArgNames_0_63,
  MR_Word * STATE_VARIABLE_OutArgNames_64,
  MR_Word STATE_VARIABLE_InSccMap_0_65,
  MR_Word * STATE_VARIABLE_InSccMap_66,
  MR_Word STATE_VARIABLE_SeenAtLabelMap_0_67,
  MR_Word * STATE_VARIABLE_SeenAtLabelMap_68)
{
  MR_bool succeeded;
  MR_Word IdInTscc_26 = (MR_Word) (STATE_VARIABLE_ProcNum_0_57);
  MR_Word PredInfo_27;
  MR_Word ProcInfo_28;
  MR_Word PredOrFunc_29;
  MR_Word CodeModel_30;
  MR_Word VarTable_31;
  MR_Word HeadVars_32;
  MR_Word HeadTypes_33;
  MR_Word HeadModes_34;
  MR_Word Goal_35;
  MR_Word GoalInfo_37;
  MR_Word ProcContext_38;
  MR_Word ArgTuples_39;
  MR_Word TsccInArgs_40;
  MR_Word FuncParams_41;
  MR_Word ReturnRvalsTypes_42;
  MR_Word OutVarsTypes_43;
  MR_Word OwnLocalVarDefns_44;
  MR_Word TsccInLocalVarDefns_45;
  MR_Word TsccValueLocalVarDefns_46;
  MR_Word CopyTsccToOwnStmts_47;
  MR_Word CopyOwnToTsccStmts_48;
  MR_Word CopyOutValThroughPtrStmts_49;
  MR_Word TsccInLocalVars_50;
  MR_Word InSccInfo0_53;
  MR_Word InSccInfo_54;
  MR_String StartLabel_56;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Box conv1_InSccInfo0_53;
  MR_Word Var_89;
  MR_Unsigned packed_word_0;

  *STATE_VARIABLE_ProcNum_58 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ProcNum_0_57 + (MR_Unsigned) 1);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_16, PredProcId_17, &PredInfo_27, &ProcInfo_28);
  hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_27, &PredOrFunc_29);
  CodeModel_30 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_28);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_28, &VarTable_31);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_28, &HeadVars_32);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_27, &HeadTypes_33);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_28, &HeadModes_34);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_28, &Goal_35);
  GoalInfo_37 = ((MR_Word) ((MR_hl_field(0, Goal_35, (MR_Integer) 1))));
  ProcContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_37);
  ml_backend__ml_args_util__ml_gen_tscc_arg_params_22_p_0(ModuleInfo_16, PredOrFunc_29, CodeModel_30, ProcContext_38, IdInTscc_26, VarTable_31, HeadVars_32, HeadTypes_33, HeadModes_34, &ArgTuples_39, STATE_VARIABLE_OutArgNames_0_63, STATE_VARIABLE_OutArgNames_64, &TsccInArgs_40, &FuncParams_41, &ReturnRvalsTypes_42, &OutVarsTypes_43, &OwnLocalVarDefns_44, &TsccInLocalVarDefns_45, &TsccValueLocalVarDefns_46, &CopyTsccToOwnStmts_47, &CopyOwnToTsccStmts_48, &CopyOutValThroughPtrStmts_49);
  TsccInLocalVars_50 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[22]), TsccInLocalVarDefns_45);
  if ((STATE_VARIABLE_MaybeOutVarsTypes_0_59 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeOutVarsTypes_60 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OutVarsTypes_43));
    }
    *STATE_VARIABLE_CanGenerateTscc_62 = STATE_VARIABLE_CanGenerateTscc_0_61;
  }
  else
  {
    MR_Word OldOutVarsTypes_52 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeOutVarsTypes_0_59, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[5]), ((MR_Box) (OutVarsTypes_43)), ((MR_Box) (OldOutVarsTypes_52)));
    if (succeeded)
      *STATE_VARIABLE_CanGenerateTscc_62 = STATE_VARIABLE_CanGenerateTscc_0_61;
    else
      *STATE_VARIABLE_CanGenerateTscc_62 = (MR_Integer) 0;
    *STATE_VARIABLE_MaybeOutVarsTypes_60 = STATE_VARIABLE_MaybeOutVarsTypes_0_59;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *PredProcIdArgsInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredProcId_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredInfo_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (ProcInfo_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcContext_38));
    MR_hl_field(0, base, 4) = ((MR_Box) (IdInTscc_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (ArgTuples_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (FuncParams_41));
    MR_hl_field(0, base, 7) = ((MR_Box) (ReturnRvalsTypes_42));
    MR_hl_field(0, base, 8) = ((MR_Box) (OwnLocalVarDefns_44));
    MR_hl_field(0, base, 9) = ((MR_Box) (TsccInLocalVarDefns_45));
    MR_hl_field(0, base, 10) = ((MR_Box) (TsccInLocalVars_50));
    MR_hl_field(0, base, 11) = ((MR_Box) (TsccValueLocalVarDefns_46));
    MR_hl_field(0, base, 12) = ((MR_Box) (CopyTsccToOwnStmts_47));
    MR_hl_field(0, base, 13) = ((MR_Box) (CopyOwnToTsccStmts_48));
    MR_hl_field(0, base, 14) = ((MR_Box) (CopyOutValThroughPtrStmts_49));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), STATE_VARIABLE_InSccMap_0_65, ((MR_Box) (PredProcId_17)), &conv1_InSccInfo0_53);
  InSccInfo0_53 = ((MR_Word) (conv1_InSccInfo0_53));
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (IdInTscc_26));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (TsccInArgs_40));
  }
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, InSccInfo0_53, (MR_Integer) 1)));
  Var_89 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_53, (MR_Integer) 2))));
  {
    InSccInfo_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InSccInfo_54, 0) = ((MR_Box) (Var_77));
    MR_hl_field(0, InSccInfo_54, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, InSccInfo_54, 2) = ((MR_Box) (Var_89));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (PredProcId_17)), ((MR_Box) (InSccInfo_54)), STATE_VARIABLE_InSccMap_0_65, STATE_VARIABLE_InSccMap_66);
  StartLabel_56 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0((MR_Integer) 1, IdInTscc_26);
  Var_79 = mercury__set__list_to_set_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), TsccInLocalVars_50);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[4]), ((MR_Box) (StartLabel_56)), ((MR_Box) (Var_79)), STATE_VARIABLE_SeenAtLabelMap_0_67, STATE_VARIABLE_SeenAtLabelMap_68);
}

static void MR_CALL 
ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(
  MR_Word PredProcId_7,
  MR_Word InSccInfo_8,
  MR_Word STATE_VARIABLE_NonTailEntryPredProcIds_0_15,
  MR_Word * STATE_VARIABLE_NonTailEntryPredProcIds_16,
  MR_Word STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17,
  MR_Word * STATE_VARIABLE_NoMutualTailRecPredProcIds_18)
{
  MR_Word IsTargetOfNonTRCalls_11 = ((MR_Word) ((MR_hl_field(0, InSccInfo_8, (MR_Integer) 2))));
  MR_Word IsTargetOfMutualTRCall_14 = ((MR_Unsigned) ((MR_hl_field(0, InSccInfo_8, (MR_Integer) 1))) & (MR_Integer) 1);

  if ((IsTargetOfNonTRCalls_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NonTailEntryPredProcIds_16 = STATE_VARIABLE_NonTailEntryPredProcIds_0_15;
  else
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NonTailEntryPredProcIds_0_15, STATE_VARIABLE_NonTailEntryPredProcIds_16);
  switch (IsTargetOfMutualTRCall_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_7)), STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17, STATE_VARIABLE_NoMutualTailRecPredProcIds_18);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_NoMutualTailRecPredProcIds_18 = STATE_VARIABLE_NoMutualTailRecPredProcIds_0_17;
      break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word ConstStructMap_17,
  MR_Word _SCCEntryPredProcIds_18,
  MR_Word TsccCodeModel_19,
  MR_Word TSCCE_20,
  MR_Word STATE_VARIABLE_FuncDefns_0_45,
  MR_Word * STATE_VARIABLE_FuncDefns_46,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_InSccMap_0_49,
  MR_Word * STATE_VARIABLE_InSccMap_50)
{
  ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0(ProgressStream_14, ModuleInfo_15, Target_16, ConstStructMap_17, TsccCodeModel_19, TSCCE_20, STATE_VARIABLE_FuncDefns_0_45, STATE_VARIABLE_FuncDefns_46, STATE_VARIABLE_GlobalData_0_47, STATE_VARIABLE_GlobalData_48, STATE_VARIABLE_InSccMap_0_49, STATE_VARIABLE_InSccMap_50);
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_FuncDefns_30;
  MR_Word conv2_STATE_VARIABLE_GlobalData_32;
  MR_Word conv1_STATE_VARIABLE_InSccMap_34;

  ml_backend__ml_proc_gen__ml_gen_proc_lookup_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_FuncDefns_30, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_GlobalData_32, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_InSccMap_34);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_FuncDefns_30));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_GlobalData_32));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_InSccMap_34));
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncDefn_16;

  ml_backend__ml_proc_gen__construct_tscc_entry_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv0_FuncDefn_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_FuncDefn_16));
}

static void MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word ConstStructMap_17,
  MR_Word TsccCodeModel_19,
  MR_Word TSCCE_20,
  MR_Word STATE_VARIABLE_FuncDefns_0_45,
  MR_Word * STATE_VARIABLE_FuncDefns_46,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_InSccMap_0_49,
  MR_Word * STATE_VARIABLE_InSccMap_50)
{
  MR_Word PredProcIds_24 = ((MR_Word) ((MR_hl_field(0, TSCCE_20, (MR_Integer) 0))));
  MR_Word PredProcIdList_27;

  PredProcIdList_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_24);
  if ((PredProcIdList_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_tscc\'/13", (MR_String) "empty TSCC");
      return;
    }
  else
  {
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, PredProcIdList_27, (MR_Integer) 1))));
    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, PredProcIdList_27, (MR_Integer) 0))));

    if ((Var_85 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredInfo_87;
      MR_Word ProcInfo_88;
      MR_Word Goal_89;
      MR_Word GoalInfo_91;
      MR_Word ProcContext_92;
      MR_Word PredProcIdInfo_93;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_15, Var_86, &PredInfo_87, &ProcInfo_88);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_88, &Goal_89);
      GoalInfo_91 = ((MR_Word) ((MR_hl_field(0, Goal_89, (MR_Integer) 1))));
      ProcContext_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_91);
      {
        PredProcIdInfo_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcIdInfo_93, 0) = ((MR_Box) (Var_86));
        MR_hl_field(0, PredProcIdInfo_93, 1) = ((MR_Box) (PredInfo_87));
        MR_hl_field(0, PredProcIdInfo_93, 2) = ((MR_Box) (ProcInfo_88));
        MR_hl_field(0, PredProcIdInfo_93, 3) = ((MR_Box) (ProcContext_92));
      }
      ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(ProgressStream_14, ModuleInfo_15, Target_16, ConstStructMap_17, (MR_Integer) 1, PredProcIdInfo_93, STATE_VARIABLE_FuncDefns_0_45, STATE_VARIABLE_FuncDefns_46, STATE_VARIABLE_GlobalData_0_47, STATE_VARIABLE_GlobalData_48, STATE_VARIABLE_InSccMap_0_49, STATE_VARIABLE_InSccMap_50);
    }
    else
    {
      MR_Word NoMutualPredProcIds_33;
      MR_Word MutualPredProcIds_34;
      MR_Word MutualPredProcCodes_35;
      MR_Word CanGenerateTscc_36;
      MR_Word MutualEnvVarNames_37;
      MR_Word MutualClosureWrapperFuncDefns_38;
      MR_Word LoopKind_39;
      MR_Word TrialInSccMap_40;
      MR_Word TrialGlobalData_41;
      MR_Word OutsideTsccPredProcIds_42;
      MR_Word STATE_VARIABLE_InSccMap_59_59;
      MR_Word STATE_VARIABLE_GlobalData_60_60;
      MR_Word STATE_VARIABLE_FuncDefns_63_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word _NonTailEntryPredProcIds_32;
      MR_Box conv6_STATE_VARIABLE_FuncDefns_46;
      MR_Box conv5_STATE_VARIABLE_GlobalData_48;
      MR_Box conv4_STATE_VARIABLE_InSccMap_50;

      ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0(ProgressStream_14, ModuleInfo_15, Target_16, ConstStructMap_17, TsccCodeModel_19, PredProcIds_24, &_NonTailEntryPredProcIds_32, &NoMutualPredProcIds_33, &MutualPredProcIds_34, &MutualPredProcCodes_35, &CanGenerateTscc_36, &MutualEnvVarNames_37, &MutualClosureWrapperFuncDefns_38, &LoopKind_39, STATE_VARIABLE_InSccMap_0_49, &TrialInSccMap_40, STATE_VARIABLE_GlobalData_0_47, &TrialGlobalData_41);
      switch (CanGenerateTscc_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word TSCCFuncDefns_44;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_64;

            OutsideTsccPredProcIds_42 = NoMutualPredProcIds_33;
            STATE_VARIABLE_InSccMap_59_59 = TrialInSccMap_40;
            STATE_VARIABLE_GlobalData_60_60 = TrialGlobalData_41;
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[1]));
              MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_1));
              MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_14));
              MR_hl_field(0, Var_61, 4) = ((MR_Box) (ModuleInfo_15));
              MR_hl_field(0, Var_61, 5) = ((MR_Box) (LoopKind_39));
              MR_hl_field(0, Var_61, 6) = ((MR_Box) (MutualPredProcCodes_35));
              MR_hl_field(0, Var_61, 7) = ((MR_Box) (MutualEnvVarNames_37));
              MR_hl_field(0, Var_61, 8) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_62 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), MutualPredProcIds_34);
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_61, Var_62, &TSCCFuncDefns_44);
            Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), TSCCFuncDefns_44, STATE_VARIABLE_FuncDefns_0_45);
            STATE_VARIABLE_FuncDefns_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), MutualClosureWrapperFuncDefns_38, Var_64);
          }
          break;
        case (MR_Integer) 0:
          {
            OutsideTsccPredProcIds_42 = PredProcIds_24;
            STATE_VARIABLE_FuncDefns_63_63 = STATE_VARIABLE_FuncDefns_0_45;
            STATE_VARIABLE_GlobalData_60_60 = STATE_VARIABLE_GlobalData_0_47;
            STATE_VARIABLE_InSccMap_59_59 = STATE_VARIABLE_InSccMap_0_49;
          }
          break;
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) (ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_116_115_99_99_95_95_91_53_93_95_48_13_p_0_2));
        MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(0, Var_65, 3) = ((MR_Box) (ProgressStream_14));
        MR_hl_field(0, Var_65, 4) = ((MR_Box) (ModuleInfo_15));
        MR_hl_field(0, Var_65, 5) = ((MR_Box) (Target_16));
        MR_hl_field(0, Var_65, 6) = ((MR_Box) (ConstStructMap_17));
        MR_hl_field(0, Var_65, 7) = ((MR_Box) ((MR_Integer) 1));
      }
      Var_66 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), OutsideTsccPredProcIds_42);
      mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_65, Var_66, ((MR_Box) (STATE_VARIABLE_FuncDefns_63_63)), &conv6_STATE_VARIABLE_FuncDefns_46, ((MR_Box) (STATE_VARIABLE_GlobalData_60_60)), &conv5_STATE_VARIABLE_GlobalData_48, ((MR_Box) (STATE_VARIABLE_InSccMap_59_59)), &conv4_STATE_VARIABLE_InSccMap_50);
      *STATE_VARIABLE_FuncDefns_46 = ((MR_Word) (conv6_STATE_VARIABLE_FuncDefns_46));
      *STATE_VARIABLE_GlobalData_48 = ((MR_Word) (conv5_STATE_VARIABLE_GlobalData_48));
      *STATE_VARIABLE_InSccMap_50 = ((MR_Word) (conv4_STATE_VARIABLE_InSccMap_50));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_NonTailEntryPredProcIds_16;
  MR_Word conv19_STATE_VARIABLE_NoMutualTailRecPredProcIds_18;

  ml_backend__ml_proc_gen__accumulate_entry_procs_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv20_STATE_VARIABLE_NonTailEntryPredProcIds_16, ((MR_Word) (wrapper_arg_5)), &conv19_STATE_VARIABLE_NoMutualTailRecPredProcIds_18);
  *wrapper_arg_4 = ((MR_Box) (conv20_STATE_VARIABLE_NonTailEntryPredProcIds_16));
  *wrapper_arg_6 = ((MR_Box) (conv19_STATE_VARIABLE_NoMutualTailRecPredProcIds_18));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_PredProcCode_20;
  MR_Word conv15_STATE_VARIABLE_GlobalData_67;
  MR_Word conv14_STATE_VARIABLE_TsccInfo_69;

  ml_backend__ml_proc_gen__ml_gen_tscc_proc_code_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv16_PredProcCode_20, ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_GlobalData_67, ((MR_Word) (wrapper_arg_5)), &conv14_STATE_VARIABLE_TsccInfo_69);
  *wrapper_arg_2 = ((MR_Box) (conv16_PredProcCode_20));
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_GlobalData_67));
  *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_TsccInfo_69));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12,
  MR_Box wrapper_arg_13,
  MR_Box * wrapper_arg_14)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_PredProcIdArgsInfo_18;
  MR_Integer conv6_STATE_VARIABLE_ProcNum_58;
  MR_Word conv5_STATE_VARIABLE_MaybeOutVarsTypes_60;
  MR_Word conv4_STATE_VARIABLE_CanGenerateTscc_62;
  MR_Word conv3_STATE_VARIABLE_OutArgNames_64;
  MR_Word conv2_STATE_VARIABLE_InSccMap_66;
  MR_Word conv1_STATE_VARIABLE_SeenAtLabelMap_68;

  ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_mutual_15_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_PredProcIdArgsInfo_18, ((MR_Integer) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ProcNum_58, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_MaybeOutVarsTypes_60, ((MR_Word) (wrapper_arg_7)), &conv4_STATE_VARIABLE_CanGenerateTscc_62, ((MR_Word) (wrapper_arg_9)), &conv3_STATE_VARIABLE_OutArgNames_64, ((MR_Word) (wrapper_arg_11)), &conv2_STATE_VARIABLE_InSccMap_66, ((MR_Word) (wrapper_arg_13)), &conv1_STATE_VARIABLE_SeenAtLabelMap_68);
  *wrapper_arg_2 = ((MR_Box) (conv7_PredProcIdArgsInfo_18));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ProcNum_58));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_MaybeOutVarsTypes_60));
  *wrapper_arg_8 = ((MR_Box) (conv4_STATE_VARIABLE_CanGenerateTscc_62));
  *wrapper_arg_10 = ((MR_Box) (conv3_STATE_VARIABLE_OutArgNames_64));
  *wrapper_arg_12 = ((MR_Box) (conv2_STATE_VARIABLE_InSccMap_66));
  *wrapper_arg_14 = ((MR_Box) (conv1_STATE_VARIABLE_SeenAtLabelMap_68));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InSccInfo_5;

  ml_backend__ml_proc_gen__reset_scc_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_InSccInfo_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_InSccInfo_5));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ModuleInfo_20,
  MR_Word Target_21,
  MR_Word ConstStructMap_22,
  MR_Word TsccCodeModel_23,
  MR_Word PredProcIds_24,
  MR_Word * NonTailEntryPredProcIds_25,
  MR_Word * NoMutualPredProcIds_26,
  MR_Word * MutualPredProcIds_27,
  MR_Word * MutualPredProcCodes_28,
  MR_Word * CanGenerateTscc_29,
  MR_Word * MutualEnvVarNames_30,
  MR_Word * MutualClosureWrapperFuncDefns_31,
  MR_Word * LoopKind_32,
  MR_Word STATE_VARIABLE_InSccMap_0_47,
  MR_Word * STATE_VARIABLE_InSccMap_48,
  MR_Word STATE_VARIABLE_GlobalData_0_49,
  MR_Word * STATE_VARIABLE_GlobalData_50)
{
  MR_bool succeeded;
  MR_Word PredProcIdArgsInfos_35;
  MR_Word CanGenerateTscc0_38;
  MR_Word SeenAtLabelMap_40;
  MR_Word TsccInfo0_41;
  MR_Word PredProcCodes_42;
  MR_Word TsccInfo_43;
  MR_Word TailRecInfo_44;
  MR_Word NoMutualPredProcIds0_45;
  MR_Word MutualContainsNestedFuncs_46;
  MR_Word STATE_VARIABLE_InSccMap_51_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_InSccMap_58_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Box conv13_Var_36;
  MR_Box conv12_Var_37;
  MR_Box conv11_CanGenerateTscc0_38;
  MR_Box conv10__OutArgNames_39;
  MR_Box conv9_STATE_VARIABLE_InSccMap_58_58;
  MR_Box conv8_SeenAtLabelMap_40;
  MR_Box conv18_STATE_VARIABLE_GlobalData_50;
  MR_Box conv17_TsccInfo_43;
  MR_Box conv22_NonTailEntryPredProcIds_25;
  MR_Box conv21_NoMutualPredProcIds0_45;

  mercury__map__map_values_only_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[20]), STATE_VARIABLE_InSccMap_0_47, &STATE_VARIABLE_InSccMap_51_51);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_11[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_2));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (ModuleInfo_20));
  }
  Var_53 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_24);
  Var_57 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_59 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[4]));
  mercury__list__map_foldl6_15_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[6]), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[5]), Var_52, Var_53, &PredProcIdArgsInfos_35, ((MR_Box) ((MR_Integer) 1)), &conv13_Var_36, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_Var_37, ((MR_Box) ((MR_Integer) 1)), &conv11_CanGenerateTscc0_38, ((MR_Box) (Var_57)), &conv10__OutArgNames_39, ((MR_Box) (STATE_VARIABLE_InSccMap_51_51)), &conv9_STATE_VARIABLE_InSccMap_58_58, ((MR_Box) (Var_59)), &conv8_SeenAtLabelMap_40);
  CanGenerateTscc0_38 = ((MR_Word) (conv11_CanGenerateTscc0_38));
  STATE_VARIABLE_InSccMap_58_58 = ((MR_Word) (conv9_STATE_VARIABLE_InSccMap_58_58));
  SeenAtLabelMap_40 = ((MR_Word) (conv8_SeenAtLabelMap_40));
  ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_20, STATE_VARIABLE_InSccMap_58_58, (MR_Integer) 1, &TsccInfo0_41);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[2]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_tscc_trial_18_p_0_3));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_19));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (ModuleInfo_20));
    MR_hl_field(0, Var_61, 5) = ((MR_Box) (Target_21));
    MR_hl_field(0, Var_61, 6) = ((MR_Box) (ConstStructMap_22));
    MR_hl_field(0, Var_61, 7) = ((MR_Box) (TsccCodeModel_23));
    MR_hl_field(0, Var_61, 8) = ((MR_Box) (SeenAtLabelMap_40));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_tscc_info_0), Var_61, PredProcIdArgsInfos_35, &PredProcCodes_42, ((MR_Box) (STATE_VARIABLE_GlobalData_0_49)), &conv18_STATE_VARIABLE_GlobalData_50, ((MR_Box) (TsccInfo0_41)), &conv17_TsccInfo_43);
  *STATE_VARIABLE_GlobalData_50 = ((MR_Word) (conv18_STATE_VARIABLE_GlobalData_50));
  TsccInfo_43 = ((MR_Word) (conv17_TsccInfo_43));
  TailRecInfo_44 = ((MR_Word) ((MR_hl_field(0, TsccInfo_43, (MR_Integer) 6))));
  *STATE_VARIABLE_InSccMap_48 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_44, (MR_Integer) 0))));
  *LoopKind_32 = ((((MR_Unsigned) ((MR_hl_field(0, TailRecInfo_44, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  Var_65 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  Var_66 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[7]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[7]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[21]), *STATE_VARIABLE_InSccMap_48, ((MR_Box) (Var_65)), &conv22_NonTailEntryPredProcIds_25, ((MR_Box) (Var_66)), &conv21_NoMutualPredProcIds0_45);
  *NonTailEntryPredProcIds_25 = ((MR_Word) (conv22_NonTailEntryPredProcIds_25));
  NoMutualPredProcIds0_45 = ((MR_Word) (conv21_NoMutualPredProcIds0_45));
  ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(NoMutualPredProcIds0_45, PredProcCodes_42, NoMutualPredProcIds_26, MutualPredProcIds_27, MutualPredProcCodes_28, &MutualContainsNestedFuncs_46, MutualClosureWrapperFuncDefns_31, MutualEnvVarNames_30);
  succeeded = (MutualContainsNestedFuncs_46 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (CanGenerateTscc0_38 == (MR_Integer) 1);
  if (succeeded)
    *CanGenerateTscc_29 = (MR_Integer) 1;
  else
    *CanGenerateTscc_29 = (MR_Integer) 0;
}

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ContainsNestedFuncs_39;

  ml_backend__ml_proc_gen__does_stmt_contain_nested_func_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ContainsNestedFuncs_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContainsNestedFuncs_39));
}

static void MR_CALL 
ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  }
  else
  {
    MR_Word PredProcCode_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredProcCodes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredProcIdArgsInfo_19;
    MR_Word FuncDefns_22;
    MR_Word DescCommentStmt_23;
    MR_Word GoalStmts_24;
    MR_Word ProcClosureWrapperFuncDefns_25;
    MR_Word ProcEnvVarNames_26;
    MR_Word PredProcId_27;
    MR_Word STATE_VARIABLE_NoMutualPredProcIds_37_37;
    MR_Word STATE_VARIABLE_MutualPredProcIds_38_38;
    MR_Word STATE_VARIABLE_MutualPredProcCodes_39_39;
    MR_Word STATE_VARIABLE_MutualContainsNestedFuncs_40_40;
    MR_Word STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41;
    MR_Word STATE_VARIABLE_MutualEnvVarNames_42_42;

    ml_backend__ml_proc_gen__separate_mutually_recursive_procs_8_p_0(HeadVar__1_1, PredProcCodes_12, &STATE_VARIABLE_NoMutualPredProcIds_37_37, &STATE_VARIABLE_MutualPredProcIds_38_38, &STATE_VARIABLE_MutualPredProcCodes_39_39, &STATE_VARIABLE_MutualContainsNestedFuncs_40_40, &STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41, &STATE_VARIABLE_MutualEnvVarNames_42_42);
    PredProcIdArgsInfo_19 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 0))));
    FuncDefns_22 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 3))));
    DescCommentStmt_23 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 4))));
    GoalStmts_24 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 5))));
    ProcClosureWrapperFuncDefns_25 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 6))));
    ProcEnvVarNames_26 = ((MR_Word) ((MR_hl_field(0, PredProcCode_11, (MR_Integer) 7))));
    PredProcId_27 = ((MR_Word) ((MR_hl_field(0, PredProcIdArgsInfo_19, (MR_Integer) 0))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_27)), HeadVar__1_1);
    if (succeeded)
    {
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_27)), STATE_VARIABLE_NoMutualPredProcIds_37_37, HeadVar__3_3);
      *HeadVar__8_8 = STATE_VARIABLE_MutualEnvVarNames_42_42;
      *HeadVar__7_7 = STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41;
      *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_40_40;
      *HeadVar__5_5 = STATE_VARIABLE_MutualPredProcCodes_39_39;
      *HeadVar__4_4 = STATE_VARIABLE_MutualPredProcIds_38_38;
    }
    else
    {
      succeeded = (FuncDefns_22 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        MR_Word ContainsNestedFuncs_30;
        MR_Word Var_45;
        MR_Box conv1_ContainsNestedFuncs_30;

        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (DescCommentStmt_23));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (GoalStmts_24));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[19]), Var_45, ((MR_Box) ((MR_Integer) 0)), &conv1_ContainsNestedFuncs_30);
        ContainsNestedFuncs_30 = ((MR_Word) (conv1_ContainsNestedFuncs_30));
        succeeded = (ContainsNestedFuncs_30 == (MR_Integer) 1);
      }
      if (succeeded)
        *HeadVar__6_6 = (MR_Integer) 1;
      else
        *HeadVar__6_6 = STATE_VARIABLE_MutualContainsNestedFuncs_40_40;
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_27)), STATE_VARIABLE_MutualPredProcIds_38_38, HeadVar__4_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredProcCode_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MutualPredProcCodes_39_39));
      }
      *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ProcClosureWrapperFuncDefns_25, STATE_VARIABLE_MutualClosureWrapperFuncDefns_41_41);
      mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProcEnvVarNames_26, STATE_VARIABLE_MutualEnvVarNames_42_42, HeadVar__8_8);
      *HeadVar__3_3 = STATE_VARIABLE_NoMutualPredProcIds_37_37;
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_rval_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * VarRval_6)
{
  MR_Word VarLval_7;

  ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(Info_4, Var_5, &VarLval_7);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *VarRval_6 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (VarLval_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__get_var_mlds_lval_and_type_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word VarLval_6;
  MR_Word VarType_7;
  MR_Word VarTable_8;
  MR_Word VarEntry_9;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_4, &VarTable_8);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_8, Var_5, &VarEntry_9);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_4, Var_5, VarEntry_9, &VarLval_6);
  VarType_7 = ((MR_Word) ((MR_hl_field(0, VarEntry_9, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarLval_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarType_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_lookup_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word NoneOrSelf_17,
  MR_Word PredProcId_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_29,
  MR_Word * STATE_VARIABLE_FuncDefns_30,
  MR_Word STATE_VARIABLE_GlobalData_0_31,
  MR_Word * STATE_VARIABLE_GlobalData_32,
  MR_Word STATE_VARIABLE_InSccMap_0_33,
  MR_Word * STATE_VARIABLE_InSccMap_34)
{
  MR_Word PredInfo_22;
  MR_Word ProcInfo_23;
  MR_Word Goal_24;
  MR_Word GoalInfo_26;
  MR_Word ProcContext_27;
  MR_Word PredProcIdInfo_28;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_14, PredProcId_18, &PredInfo_22, &ProcInfo_23);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_23, &Goal_24);
  GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 1))));
  ProcContext_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_26);
  {
    PredProcIdInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcIdInfo_28, 0) = ((MR_Box) (PredProcId_18));
    MR_hl_field(0, PredProcIdInfo_28, 1) = ((MR_Box) (PredInfo_22));
    MR_hl_field(0, PredProcIdInfo_28, 2) = ((MR_Box) (ProcInfo_23));
    MR_hl_field(0, PredProcIdInfo_28, 3) = ((MR_Box) (ProcContext_27));
  }
  ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(ProgressStream_13, ModuleInfo_14, Target_15, ConstStructMap_16, NoneOrSelf_17, PredProcIdInfo_28, STATE_VARIABLE_FuncDefns_0_29, STATE_VARIABLE_FuncDefns_30, STATE_VARIABLE_GlobalData_0_31, STATE_VARIABLE_GlobalData_32, STATE_VARIABLE_InSccMap_0_33, STATE_VARIABLE_InSccMap_34);
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_VarRval_6;

  ml_backend__ml_proc_gen__get_var_rval_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_VarRval_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_VarRval_6));
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = ml_backend__ml_util__project_mlds_argument_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  ml_backend__ml_proc_gen__get_var_mlds_lval_and_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ModuleInfo_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word NoneOrSelf_17,
  MR_Word PredProcIdInfo_18,
  MR_Word STATE_VARIABLE_FuncDefns_0_68,
  MR_Word * STATE_VARIABLE_FuncDefns_69,
  MR_Word STATE_VARIABLE_GlobalData_0_70,
  MR_Word * STATE_VARIABLE_GlobalData_71,
  MR_Word STATE_VARIABLE_InSccMap_0_72,
  MR_Word * STATE_VARIABLE_InSccMap_73)
{
  MR_bool succeeded;
  MR_Word PredProcId_22 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_18, (MR_Integer) 0))));
  MR_Word PredInfo_23 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_18, (MR_Integer) 1))));
  MR_Word ProcInfo_24 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_18, (MR_Integer) 2))));
  MR_Word ProcContext_25 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_18, (MR_Integer) 3))));
  MR_Word TsccInfo0_28;
  MR_Word PredStatus_29;
  MR_Word FuncParams_32;
  MR_Word FuncBody_36;
  MR_Word EnvVarNames_37;
  MR_Word ClosureWrapperFuncDefns_38;
  MR_Word FuncDefn_67;
  MR_Word STATE_VARIABLE_InSccMap_77_77;
  MR_Word STATE_VARIABLE_InSccMap_78_78;
  MR_Word STATE_VARIABLE_Info_80_80;
  MR_Word Var_97;
  MR_Word Var_81;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_13, ModuleInfo_14, (MR_String) "Generating MLDS code for", PredProcId_22);
  ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(STATE_VARIABLE_InSccMap_0_72, &STATE_VARIABLE_InSccMap_77_77);
  ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_5_p_0(ModuleInfo_14, NoneOrSelf_17, PredProcId_22, STATE_VARIABLE_InSccMap_77_77, &STATE_VARIABLE_InSccMap_78_78);
  ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_14, STATE_VARIABLE_InSccMap_78_78, (MR_Integer) 0, &TsccInfo0_28);
  STATE_VARIABLE_Info_80_80 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_14, Target_15, ConstStructMap_16, PredProcId_22, ProcInfo_24, STATE_VARIABLE_GlobalData_0_70, TsccInfo0_28);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_23, &PredStatus_29);
  Var_81 = (MR_Word) (PredStatus_29);
  succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word _Tuples_31;
    MR_Word _ByRefOutputVars_33;
    MR_Word _CopiedOutputVars_34;
    MR_Word _Info_35;

    ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_22, &_Tuples_31, &FuncParams_32, &_ByRefOutputVars_33, &_CopiedOutputVars_34, STATE_VARIABLE_Info_80_80, &_Info_35);
    FuncBody_36 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNames_37);
    ClosureWrapperFuncDefns_38 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_InSccMap_73 = STATE_VARIABLE_InSccMap_78_78;
    *STATE_VARIABLE_GlobalData_71 = STATE_VARIABLE_GlobalData_0_70;
  }
  else
  {
    MR_Word FuncDefns_19;
    MR_Word CodeModel_39;
    MR_Word ArgTuples_40;
    MR_Word ByRefOutputVars_41;
    MR_Word CopiedOutputVars_42;
    MR_Word ByRefOutputVarsSet_43;
    MR_Word Goal_46;
    MR_Word TailRecInfo1_47;
    MR_Word InSccMap1_48;
    MR_Word LoopKind1_49;
    MR_Word TsccKind1_50;
    MR_Word InSccInfo1_51;
    MR_Word MaybeInScc1_52;
    MR_Word SeenAtLabelMap_53;
    MR_Word LocalVarDefns0_58;
    MR_Word GoalStmts0_59;
    MR_Word CopiedOutputVarRvals_60;
    MR_Word GoalStmts_61;
    MR_Word OutputVarLocalDefns_62;
    MR_Word SucceededVarDefns_63;
    MR_Word LocalVarDefns_64;
    MR_Word TsccInfo_65;
    MR_Word TailRecInfo_66;
    MR_Word STATE_VARIABLE_Info_82_82;
    MR_Word STATE_VARIABLE_Info_84_84;
    MR_Word STATE_VARIABLE_Info_89_89;
    MR_Word Var_90;
    MR_Word STATE_VARIABLE_Info_92_92;
    MR_Word Var_93;
    MR_Word _Info_98;
    MR_Box conv1_InSccInfo1_51;

    CodeModel_39 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_24);
    ml_backend__ml_args_util__ml_gen_info_proc_params_7_p_0(PredProcId_22, &ArgTuples_40, &FuncParams_32, &ByRefOutputVars_41, &CopiedOutputVars_42, STATE_VARIABLE_Info_80_80, &_Info_98);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_41, &ByRefOutputVarsSet_43);
    ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ByRefOutputVarsSet_43, STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_82_82);
    switch (CodeModel_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_82_82;
        break;
      case (MR_Integer) 2:
        {
          MR_Word OutputVarLvalTypes_44;
          MR_Word InitialCont_45;
          MR_Word Var_83;

          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_83, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[5]));
            MR_hl_field(0, Var_83, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_1));
            MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_83, 3) = ((MR_Box) (STATE_VARIABLE_Info_82_82));
          }
          mercury__list__map_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[3]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[2]), Var_83, CopiedOutputVars_42, &OutputVarLvalTypes_44);
          ml_backend__ml_code_util__ml_initial_cont_3_p_0(STATE_VARIABLE_Info_82_82, OutputVarLvalTypes_44, &InitialCont_45);
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(InitialCont_45, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_84_84);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_82_82;
        break;
    }
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_24, &Goal_46);
    ml_backend__ml_gen_info__ml_gen_info_get_tail_rec_info_2_p_0(STATE_VARIABLE_Info_84_84, &TailRecInfo1_47);
    InSccMap1_48 = ((MR_Word) ((MR_hl_field(0, TailRecInfo1_47, (MR_Integer) 0))));
    LoopKind1_49 = ((((MR_Unsigned) ((MR_hl_field(0, TailRecInfo1_47, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    TsccKind1_50 = ((MR_Unsigned) ((MR_hl_field(0, TailRecInfo1_47, (MR_Integer) 1))) & (MR_Integer) 1);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), InSccMap1_48, ((MR_Box) (PredProcId_22)), &conv1_InSccInfo1_51);
    InSccInfo1_51 = ((MR_Word) (conv1_InSccInfo1_51));
    MaybeInScc1_52 = ((MR_Word) ((MR_hl_field(0, InSccInfo1_51, (MR_Integer) 0))));
    if ((MaybeInScc1_52 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[4]), &SeenAtLabelMap_53);
    else
    {
      MR_Word IdInTscc_54 = ((MR_Word) ((MR_hl_field(1, MaybeInScc1_52, (MR_Integer) 0))));
      MR_Word Args_55 = ((MR_Word) ((MR_hl_field(1, MaybeInScc1_52, (MR_Integer) 1))));

      switch (LoopKind1_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String StartLabel_56;
            MR_Word LocalVars_57;
            MR_Word Var_88;

            StartLabel_56 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind1_50, IdInTscc_54);
            LocalVars_57 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[18]), Args_55);
            Var_88 = mercury__set__list_to_set_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), LocalVars_57);
            SeenAtLabelMap_53 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[4]), ((MR_Box) (StartLabel_56)), ((MR_Box) (Var_88)));
          }
          break;
        case (MR_Integer) 0:
          switch (TsccKind1_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_proc\'/12", (MR_String) "tscc_self_and_mutual_rec");
                return;
              }
              break;
            case (MR_Integer) 0:
              mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[4]), &SeenAtLabelMap_53);
              break;
          }
          break;
      }
    }
    ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(CodeModel_39, ArgTuples_40, CopiedOutputVars_42, Goal_46, SeenAtLabelMap_53, &LocalVarDefns0_58, &FuncDefns_19, &GoalStmts0_59, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_89_89);
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_90, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[6]));
      MR_hl_field(0, Var_90, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_12_p_0_3));
      MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_90, 3) = ((MR_Box) (STATE_VARIABLE_Info_89_89));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_90, CopiedOutputVars_42, &CopiedOutputVarRvals_60);
    ml_backend__ml_args_util__ml_append_return_statement_5_p_0(CodeModel_39, ProcContext_25, CopiedOutputVarRvals_60, GoalStmts0_59, &GoalStmts_61);
    ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(STATE_VARIABLE_Info_89_89, ProcContext_25, ArgTuples_40, CopiedOutputVars_42, &OutputVarLocalDefns_62, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_92_92);
    ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(STATE_VARIABLE_Info_92_92, ProcContext_25, &SucceededVarDefns_63);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), OutputVarLocalDefns_62, LocalVarDefns0_58);
    LocalVarDefns_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), SucceededVarDefns_63, Var_93);
    ml_backend__ml_gen_info__ml_gen_info_final_5_p_0(STATE_VARIABLE_Info_92_92, &EnvVarNames_37, &ClosureWrapperFuncDefns_38, STATE_VARIABLE_GlobalData_71, &TsccInfo_65);
    TailRecInfo_66 = ((MR_Word) ((MR_hl_field(0, TsccInfo_65, (MR_Integer) 6))));
    *STATE_VARIABLE_InSccMap_73 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_66, (MR_Integer) 0))));
    ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0(PredProcId_22, CodeModel_39, ProcContext_25, LocalVarDefns_64, FuncDefns_19, GoalStmts_61, TailRecInfo_66, &FuncBody_36);
  }
  ml_backend__ml_proc_gen__construct_func_defn_6_p_0(ModuleInfo_14, PredProcIdInfo_18, FuncParams_32, FuncBody_36, EnvVarNames_37, &FuncDefn_67);
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (FuncDefn_67));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (STATE_VARIABLE_FuncDefns_0_68));
  }
  *STATE_VARIABLE_FuncDefns_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_38, Var_97);
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_maybe_local_var_defn_for_succeeded_3_p_0(
  MR_Word Info_4,
  MR_Word Context_5,
  MR_Word * SucceededVarDefns_6)
{
  MR_Word UsedSucceededVar_7;

  ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(Info_4, &UsedSucceededVar_7);
  switch (UsedSucceededVar_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *SucceededVarDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_8;

        Var_8 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(Context_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SucceededVarDefns_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_31;

  ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_local_var_defns_for_copied_output_vars__1830__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_local_var_defns_for_copied_output_vars_7_p_0(
  MR_Word Info_8,
  MR_Word Context_9,
  MR_Word ArgTuples_10,
  MR_Word CopiedOutputVars_11,
  MR_Word * OutputVarLocalDefns_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  if ((CopiedOutputVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OutputVarLocalDefns_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
  else
  {
    MR_Word VarTable0_15;
    MR_Word VarTable1_26;
    MR_Box conv1_VarTable1_26;

    ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_8, &VarTable0_15);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[17]), ArgTuples_10, ((MR_Box) (VarTable0_15)), &conv1_VarTable1_26);
    VarTable1_26 = ((MR_Word) (conv1_VarTable1_26));
    ml_backend__ml_code_gen__ml_gen_local_var_decls_6_p_0(VarTable1_26, Context_9, CopiedOutputVars_11, OutputVarLocalDefns_12, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_59;

  conv8_LambdaHeadVar__2_59 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_proc_body__1728__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_59));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__1_51;
  MR_Word conv6_LambdaHeadVar__2_52;
  MR_Word conv5_LambdaHeadVar__3_53;
  MR_Word conv4_LambdaHeadVar__5_55;

  ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__1705__1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &conv7_LambdaHeadVar__1_51, &conv6_LambdaHeadVar__2_52, &conv5_LambdaHeadVar__3_53, ((MR_Word) (wrapper_arg_4)), &conv4_LambdaHeadVar__5_55);
  *wrapper_arg_1 = ((MR_Box) (conv7_LambdaHeadVar__1_51));
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_52));
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_53));
  *wrapper_arg_5 = ((MR_Box) (conv4_LambdaHeadVar__5_55));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__5_5;
  MR_Word conv0_HeadVar__7_7;

  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__7_7);
  *wrapper_arg_1 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0(
  MR_Word CodeModel_11,
  MR_Word ArgTuples_12,
  MR_Word CopiedOutputVars_13,
  MR_Word Goal_14,
  MR_Word SeenAtLabelMap_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 1))));
  MR_Word Context_22;
  MR_Word ConvLocalVarDefns_23;
  MR_Word ConvInputStmts_24;
  MR_Word ConvOutputStmts_25;
  MR_Word LocalVarDefns1_26;
  MR_Word FuncDefns0_27;
  MR_Word Stmts1_28;
  MR_Word Globals_38;
  MR_Word OptTuple_39;
  MR_Word EliminateUnusedAssigns_40;
  MR_Word STATE_VARIABLE_Info_49_49;

  Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
  ml_backend__ml_proc_gen__ml_gen_convert_headvars_8_p_0(ArgTuples_12, CopiedOutputVars_13, Context_22, &ConvLocalVarDefns_23, &ConvInputStmts_24, &ConvOutputStmts_25, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_49_49);
  succeeded = (ConvLocalVarDefns_23 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (ConvInputStmts_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ConvOutputStmts_25 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, Goal_14, &LocalVarDefns1_26, &FuncDefns0_27, &Stmts1_28, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_48);
  else
  {
    MR_Word DoGenGoal_29;
    MR_Word DoConvOutputs_30;
    MR_Word LocalVarDefns0_36;
    MR_Word Stmts0_37;

    {
      DoGenGoal_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoGenGoal_29, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_9[0]));
      MR_hl_field(0, DoGenGoal_29, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_1));
      MR_hl_field(0, DoGenGoal_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, DoGenGoal_29, 3) = ((MR_Box) (CodeModel_11));
      MR_hl_field(0, DoGenGoal_29, 4) = ((MR_Box) (Goal_14));
    }
    {
      DoConvOutputs_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DoConvOutputs_30, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_10[0]));
      MR_hl_field(0, DoConvOutputs_30, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_10_p_0_2));
      MR_hl_field(0, DoConvOutputs_30, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, DoConvOutputs_30, 3) = ((MR_Box) (CodeModel_11));
      MR_hl_field(0, DoConvOutputs_30, 4) = ((MR_Box) (Context_22));
      MR_hl_field(0, DoConvOutputs_30, 5) = ((MR_Box) (ConvOutputStmts_25));
    }
    ml_backend__ml_code_util__ml_combine_conj_9_p_0(CodeModel_11, Context_22, DoGenGoal_29, DoConvOutputs_30, &LocalVarDefns0_36, &FuncDefns0_27, &Stmts0_37, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_48);
    Stmts1_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvInputStmts_24, Stmts0_37);
    LocalVarDefns1_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvLocalVarDefns_23, LocalVarDefns0_36);
  }
  ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(*STATE_VARIABLE_Info_48, &Globals_38);
  libs__globals__get_opt_tuple_2_p_0(Globals_38, &OptTuple_39);
  EliminateUnusedAssigns_40 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_39, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
  switch (EliminateUnusedAssigns_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *LocalVarDefns_16 = LocalVarDefns1_26;
        *FuncDefns_17 = FuncDefns0_27;
        *Stmts_18 = Stmts1_28;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ArgLocalVars_45;
        MR_Word OutsideVars_46;

        ArgLocalVars_45 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_args_util__ml_backend__ml_args_util__type_ctor_info_var_mvar_type_mode_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[16]), ArgTuples_12);
        switch (CodeModel_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            OutsideVars_46 = ArgLocalVars_45;
            break;
          case (MR_Integer) 1:
            {
              OutsideVars_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, OutsideVars_46, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[20])));
              MR_hl_field(1, OutsideVars_46, 1) = ((MR_Box) (ArgLocalVars_45));
            }
            break;
        }
        ml_backend__ml_unused_assign__optimize_away_unused_assigns_in_proc_body_8_p_0(OutsideVars_46, SeenAtLabelMap_15, LocalVarDefns1_26, LocalVarDefns_16, FuncDefns0_27, FuncDefns_17, Stmts1_28, Stmts_18);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_convert_headvars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word ArgTuple_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTuples_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ArgTuple_14, (MR_Integer) 0))));
      MR_Word MLDSVarName_23 = ((MR_Word) ((MR_hl_field(0, ArgTuple_14, (MR_Integer) 1))));
      MR_Word HeadType_24 = ((MR_Word) ((MR_hl_field(0, ArgTuple_14, (MR_Integer) 2))));
      MR_Word TopFunctorMode_25 = ((MR_Unsigned) ((MR_hl_field(0, ArgTuple_14, (MR_Integer) 3))) & (MR_Integer) 3);
      MR_Word BodyType_26;

      ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(STATE_VARIABLE_Info_0_7, Var_22, &BodyType_26);
      {
        MR_Word Subst0_27;
        MR_Word Subst_28;

        mercury__map__init_1_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[14]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &Subst0_27);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(HeadType_24, BodyType_26, (MR_Word) ((MR_Unsigned) 0U), Subst0_27, &Subst_28);
        if (succeeded)
          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[14]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_28);
      }
      if (!(succeeded))
        succeeded = (TopFunctorMode_25 == (MR_Integer) 2);
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = ArgTuples_15;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word HeadVarLval_29;
        MR_Word BodyLval_30;
        MR_Word ConvLocalVarDefns_31;
        MR_Word ConvInputStmts_32;
        MR_Word ConvOutputStmts_33;
        MR_Word LocalVarDefnsTail_34;
        MR_Word InputStmtsTail_35;
        MR_Word OutputStmtsTail_36;
        MR_Word ByRefOutputVars_37;
        MR_Word STATE_VARIABLE_Info_45_45;
        MR_Word STATE_VARIABLE_Info_46_46;

        ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(STATE_VARIABLE_Info_0_7, Var_22, HeadType_24, &HeadVarLval_29);
        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(HeadType_24, BodyType_26, (MR_Integer) 0, HeadVarLval_29, MLDSVarName_23, HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, &BodyLval_30, &ConvLocalVarDefns_31, &ConvInputStmts_32, &ConvOutputStmts_33, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_45_45);
        ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(Var_22, BodyLval_30, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
        ml_backend__ml_proc_gen__ml_gen_convert_headvars_8_p_0(ArgTuples_15, HeadVar__2_2, HeadVar__3_3, &LocalVarDefnsTail_34, &InputStmtsTail_35, &OutputStmtsTail_36, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_8);
        ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*STATE_VARIABLE_Info_8, &ByRefOutputVars_37);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_37, Var_22);
        if (!(succeeded))
          succeeded = mercury__list__member_2_p_0((MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[3]), ((MR_Box) (Var_22)), HeadVar__2_2);
        if (succeeded)
        {
          *HeadVar__5_5 = InputStmtsTail_35;
          *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), OutputStmtsTail_36, ConvOutputStmts_33);
        }
        else
        {
          *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvInputStmts_32, InputStmtsTail_35);
          *HeadVar__6_6 = OutputStmtsTail_36;
        }
        *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvLocalVarDefns_31, LocalVarDefnsTail_34);
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcIdInfo_8,
  MR_Word FuncParams_9,
  MR_Word FuncBody_10,
  MR_Word EnvVarNames_11,
  MR_Word * FuncDefn_12)
{
  MR_bool succeeded;
  MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_8, (MR_Integer) 0))));
  MR_Word ProcInfo_15 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_8, (MR_Integer) 2))));
  MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, (MR_Integer) 0))));
  MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, (MR_Integer) 1))));
  MR_Word PlainFuncName_20;
  MR_Word ProcContext_21;
  MR_Word DeclFlags_22;
  MR_Word MaybePredProcId_23;
  MR_Word Var_25;
  MR_Word PredInfo_26;
  MR_Word Access_27;
  MR_Word _ModuleName_19;

  ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_7, PredProcId_13, &_ModuleName_19, &PlainFuncName_20);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_15, &ProcContext_21);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_17, &PredInfo_26);
  succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_26, ProcId_18);
  if (succeeded)
    Access_27 = (MR_Integer) 0;
  else
    Access_27 = (MR_Integer) 1;
  {
    DeclFlags_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DeclFlags_22, 0) = (MR_Box) (((((MR_Unsigned) (Access_27) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  {
    MaybePredProcId_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybePredProcId_23, 0) = ((MR_Box) (PredProcId_13));
  }
  Var_25 = (MR_Word) ((MR_Word) (PlainFuncName_20));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *FuncDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcContext_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclFlags_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybePredProcId_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (FuncParams_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (FuncBody_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (EnvVarNames_11));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__project_mlds_argument_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__construct_func_body_maybe_wrap_in_loop__696__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0(
  MR_Word PredProcId_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word LocalVarDefns_12,
  MR_Word FuncDefns_13,
  MR_Word GoalStmts_14,
  MR_Word TailRecInfo_15,
  MR_Word * FuncBody_16)
{
  MR_bool succeeded;
  MR_Word InSccMap_17 = ((MR_Word) ((MR_hl_field(0, TailRecInfo_15, (MR_Integer) 0))));
  MR_Word LoopKind_18 = ((((MR_Unsigned) ((MR_hl_field(0, TailRecInfo_15, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Word TsccKind_19 = ((MR_Unsigned) ((MR_hl_field(0, TailRecInfo_15, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word InSccInfo_20;
  MR_Word MaybeInTscc_21;
  MR_Word IsTargetOfSelfTRCall_22;
  MR_Word FuncBodyStmt_34;
  MR_Word Var_37;
  MR_Box conv0_InSccInfo_20;
  MR_Word IdInTscc_25;
  MR_Word TsccInArgs_26;

  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[2]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (ml_backend__ml_proc_gen__construct_func_body_maybe_wrap_in_loop_8_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (TsccKind_19));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_proc_gen.construct_func_body_maybe_wrap_in_loop\'/8", (MR_String) "TsccKind != tscc_self_rec_only");
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), InSccMap_17, ((MR_Box) (PredProcId_9)), &conv0_InSccInfo_20);
  InSccInfo_20 = ((MR_Word) (conv0_InSccInfo_20));
  MaybeInTscc_21 = ((MR_Word) ((MR_hl_field(0, InSccInfo_20, (MR_Integer) 0))));
  IsTargetOfSelfTRCall_22 = ((((MR_Unsigned) ((MR_hl_field(0, InSccInfo_20, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  succeeded = (IsTargetOfSelfTRCall_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (MaybeInTscc_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IdInTscc_25 = ((MR_Word) ((MR_hl_field(1, MaybeInTscc_21, (MR_Integer) 0))));
      TsccInArgs_26 = ((MR_Word) ((MR_hl_field(1, MaybeInTscc_21, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String CodeModelStr_27;
    MR_String CommentStr_28;
    MR_Word Comment_29;
    MR_Word CommentStmt_30;
    MR_String Var_70;

    switch (CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CodeModelStr_27 = (MR_String) "model_det";
        break;
      case (MR_Integer) 2:
        CodeModelStr_27 = (MR_String) "model_non";
        break;
      case (MR_Integer) 1:
        CodeModelStr_27 = (MR_String) "model_semi";
        break;
    }
    Var_70 = mercury__string__f_43_43_2_f_0(CodeModelStr_27, (MR_String) " tailcalls optimized into a loop");
    CommentStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "setup for ", Var_70);
    {
      Comment_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Comment_29, 0) = ((MR_Box) (CommentStr_28));
    }
    {
      CommentStmt_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CommentStmt_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, CommentStmt_30, 1) = ((MR_Box) (Comment_29));
      MR_hl_field(3, CommentStmt_30, 2) = ((MR_Box) (Context_11));
    }
    switch (LoopKind_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String StartLabel_35;
          MR_Word LoopTopLabelStmt_36;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;

          StartLabel_35 = ml_backend__ml_gen_info__generate_tail_rec_start_label_2_f_0(TsccKind_19, IdInTscc_25);
          {
            LoopTopLabelStmt_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, LoopTopLabelStmt_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, LoopTopLabelStmt_36, 1) = ((MR_Box) (StartLabel_35));
            MR_hl_field(3, LoopTopLabelStmt_36, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (LoopTopLabelStmt_36));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (CommentStmt_30));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
          }
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_57, GoalStmts_14);
          {
            FuncBodyStmt_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FuncBodyStmt_34, 0) = ((MR_Box) (LocalVarDefns_12));
            MR_hl_field(0, FuncBodyStmt_34, 1) = ((MR_Box) (FuncDefns_13));
            MR_hl_field(0, FuncBodyStmt_34, 2) = ((MR_Box) (Var_56));
            MR_hl_field(0, FuncBodyStmt_34, 3) = ((MR_Box) (Context_11));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word BreakStmt_31;
          MR_Word LoopBodyStmt_32;
          MR_Word InputArgLocalVars_33;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word Var_50;

          {
            BreakStmt_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, BreakStmt_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, BreakStmt_31, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, BreakStmt_31, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (CommentStmt_30));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (BreakStmt_31));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), GoalStmts_14, Var_50);
          Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_47, Var_49);
          {
            LoopBodyStmt_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, LoopBodyStmt_32, 0) = ((MR_Box) (LocalVarDefns_12));
            MR_hl_field(0, LoopBodyStmt_32, 1) = ((MR_Box) (FuncDefns_13));
            MR_hl_field(0, LoopBodyStmt_32, 2) = ((MR_Box) (Var_46));
            MR_hl_field(0, LoopBodyStmt_32, 3) = ((MR_Box) (Context_11));
          }
          InputArgLocalVars_33 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[15]), TsccInArgs_26);
          {
            FuncBodyStmt_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, FuncBodyStmt_34, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(1, FuncBodyStmt_34, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_proc_gen_scalar_common_2[17])));
            MR_hl_field(1, FuncBodyStmt_34, 2) = ((MR_Box) (LoopBodyStmt_32));
            MR_hl_field(1, FuncBodyStmt_34, 3) = ((MR_Box) (InputArgLocalVars_33));
            MR_hl_field(1, FuncBodyStmt_34, 4) = ((MR_Box) (Context_11));
          }
        }
        break;
    }
  }
  else
    FuncBodyStmt_34 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_12, FuncDefns_13, GoalStmts_14, Context_11);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *FuncBody_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FuncBodyStmt_34));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__compute_initial_tail_rec_map_for_none_or_self_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word NoneOrSelf_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_InSccMap_0_13,
  MR_Word * STATE_VARIABLE_InSccMap_14)
{
  switch (NoneOrSelf_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_InSccMap_14 = STATE_VARIABLE_InSccMap_0_13;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InputParams_10;
        MR_Word InSccInfo0_11;
        MR_Word InSccInfo_12;
        MR_Word Var_15;
        MR_Box conv0_InSccInfo0_11;
        MR_Word Var_21;
        MR_Unsigned packed_word_0;

        InputParams_10 = ml_backend__ml_args_util__ml_gen_proc_params_inputs_only_no_gc_stmts_2_f_0(ModuleInfo_6, PredProcId_8);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), STATE_VARIABLE_InSccMap_0_13, ((MR_Box) (PredProcId_8)), &conv0_InSccInfo0_11);
        InSccInfo0_11 = ((MR_Word) (conv0_InSccInfo0_11));
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) (InputParams_10));
        }
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, InSccInfo0_11, (MR_Integer) 1)));
        Var_21 = ((MR_Word) ((MR_hl_field(0, InSccInfo0_11, (MR_Integer) 2))));
        {
          InSccInfo_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InSccInfo_12, 0) = ((MR_Box) (Var_15));
          MR_hl_field(0, InSccInfo_12, 1) = (MR_Box) (packed_word_0);
          MR_hl_field(0, InSccInfo_12, 2) = ((MR_Box) (Var_21));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (PredProcId_8)), ((MR_Box) (InSccInfo_12)), STATE_VARIABLE_InSccMap_0_13, STATE_VARIABLE_InSccMap_14);
      }
      break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(
  MR_Word PredProcIdInfo_3)
{
  MR_Word PredProcId_4 = ((MR_Word) ((MR_hl_field(0, PredProcIdInfo_3, (MR_Integer) 0))));

  return PredProcId_4;
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_scc_info_2_p_0(
  MR_Word STATE_VARIABLE_InSccInfo_0_4,
  MR_Word * STATE_VARIABLE_InSccInfo_5)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 2))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InSccInfo_0_4, (MR_Integer) 1)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_InSccInfo_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InSccInfo_5;

  ml_backend__ml_proc_gen__reset_scc_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_InSccInfo_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_InSccInfo_5));
}

static void MR_CALL 
ml_backend__ml_proc_gen__reset_in_scc_map_2_p_0(
  MR_Word STATE_VARIABLE_InSccMap_0_4,
  MR_Word * STATE_VARIABLE_InSccMap_5)
{
  mercury__map__map_values_only_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[14]), STATE_VARIABLE_InSccMap_0_4, STATE_VARIABLE_InSccMap_5);
}

static void MR_CALL 
ml_backend__ml_proc_gen__add_to_in_scc_map_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_InSccMap_0_7,
  MR_Word * STATE_VARIABLE_InSccMap_8)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (PredProcId_4)), ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[7])), STATE_VARIABLE_InSccMap_0_7, STATE_VARIABLE_InSccMap_8);
}

static void MR_CALL 
ml_backend__ml_proc_gen__report_nontail_rec_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word DefaultWarnParams_7,
  MR_Word NonTailRecCall_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word Caller_10 = ((MR_Word) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 0))));
  MR_Word Callee_11 = ((MR_Word) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 1))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 2))));
  MR_Word Reason_13 = ((((MR_Unsigned) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 3))) >> 2)) & (MR_Integer) 3);
  MR_Word Obviousness_14 = ((((MR_Unsigned) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
  MR_Word Status_15 = ((MR_Unsigned) ((MR_hl_field(0, NonTailRecCall_8, (MR_Integer) 3))) & (MR_Integer) 1);

  switch (Status_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcInfo_17;
        MR_Word ProcWarnParams_18;
        MR_Word _PredInfo_16;

        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, Caller_10, &_PredInfo_16, &ProcInfo_17);
        hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo_17, DefaultWarnParams_7, &ProcWarnParams_18);
        hlds__mark_tail_calls__maybe_report_nontail_recursive_call_9_p_0(ModuleInfo_6, Caller_10, Callee_11, Context_12, Reason_13, Obviousness_14, ProcWarnParams_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__gather_nontail_rec_calls_3_p_0(
  MR_Word InSccInfo_4,
  MR_Word STATE_VARIABLE_NonTailRecCalls_0_6,
  MR_Word * STATE_VARIABLE_NonTailRecCalls_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, InSccInfo_4, (MR_Integer) 2))));

  *STATE_VARIABLE_NonTailRecCalls_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0), Var_9, STATE_VARIABLE_NonTailRecCalls_0_6);
}

static void MR_CALL 
ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_8,
  MR_Word * STATE_VARIABLE_ProcTable_9)
{
  MR_Word ProcInfo0_6;
  MR_Word ProcInfo_7;
  MR_Box conv0_ProcInfo0_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_8, ((MR_Box) (ProcId_4)), &conv0_ProcInfo0_6);
  ProcInfo0_6 = ((MR_Word) (conv0_ProcInfo0_6));
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ProcInfo0_6, &ProcInfo_7);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_4)), ((MR_Box) (ProcInfo_7)), STATE_VARIABLE_ProcTable_0_8, STATE_VARIABLE_ProcTable_9);
}

void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_preds_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Target_12,
  MR_Word ConstStructMap_13,
  MR_Word * FuncDefns_14,
  MR_Word STATE_VARIABLE_GlobalData_0_32,
  MR_Word * STATE_VARIABLE_GlobalData_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_Word PredIdTable0_18;
  MR_Word PredIdInfos0_19;
  MR_Word PredIdInfos_20;
  MR_Word PredProcIds_21;
  MR_Word PredIdTable_22;
  MR_Word SortedPredProcIds_23;
  MR_Word CodeGenPredProcIds_24;
  MR_Word DepInfo_25;
  MR_Word BottomUpSCCsWithEntryPoints_26;
  MR_Word Globals_27;
  MR_Word OptTuple_28;
  MR_Word TailCalls_29;
  MR_Word OptTailCalls_30;
  MR_Word DefaultWarnParams_31;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &PredIdTable0_18);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_18, &PredIdInfos0_19);
  ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0(PredIdInfos0_19, &PredIdInfos_20, (MR_Word) ((MR_Unsigned) 0U), &PredProcIds_21);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdInfos_20, &PredIdTable_22);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_22, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_21, &SortedPredProcIds_23);
  mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SortedPredProcIds_23, &CodeGenPredProcIds_24);
  DepInfo_25 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(*STATE_VARIABLE_ModuleInfo_35, CodeGenPredProcIds_24, (MR_Integer) 1);
  hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(*STATE_VARIABLE_ModuleInfo_35, DepInfo_25, &BottomUpSCCsWithEntryPoints_26);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_35, &Globals_27);
  libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_28);
  TailCalls_29 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_28, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
  switch (TailCalls_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OptTailCalls_30 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      OptTailCalls_30 = (MR_Integer) 1;
      break;
  }
  hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_27, &DefaultWarnParams_31);
  ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0(ProgressStream_11, *STATE_VARIABLE_ModuleInfo_35, OptTailCalls_30, DefaultWarnParams_31, Target_12, ConstStructMap_13, BottomUpSCCsWithEntryPoints_26, (MR_Word) ((MR_Unsigned) 0U), FuncDefns_14, STATE_VARIABLE_GlobalData_0_32, STATE_VARIABLE_GlobalData_33, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Specs_20;

  ml_backend__ml_proc_gen__report_nontail_rec_call_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_20);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_NonTailRecCalls_7;

  ml_backend__ml_proc_gen__gather_nontail_rec_calls_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NonTailRecCalls_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NonTailRecCalls_7));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word OptTailCalls_3,
  MR_Word DefaultWarnParams_4,
  MR_Word Target_5,
  MR_Word ConstStructMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_FuncDefns_0_8,
  MR_Word * STATE_VARIABLE_FuncDefns_9,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_GlobalData_11 = STATE_VARIABLE_GlobalData_0_10;
      *STATE_VARIABLE_FuncDefns_9 = STATE_VARIABLE_FuncDefns_0_8;
    }
    else
    {
      MR_Word SCCE_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word SCCEs_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FuncDefns_46_46;
      MR_Word STATE_VARIABLE_GlobalData_47_47;
      MR_Word STATE_VARIABLE_Specs_48_48;
      MR_Word InSccMap_49;
      MR_Word NonTailRecCalls_50;
      MR_Box conv1_NonTailRecCalls_50;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_FuncDefns_0_8;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0(ProgressStream_1, ModuleInfo_2, OptTailCalls_3, Target_5, ConstStructMap_6, SCCE_35, &InSccMap_49, STATE_VARIABLE_FuncDefns_0_8, &STATE_VARIABLE_FuncDefns_46_46, STATE_VARIABLE_GlobalData_0_10, &STATE_VARIABLE_GlobalData_47_47);
      mercury__map__foldl_values_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[13]), InSccMap_49, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_NonTailRecCalls_50);
      NonTailRecCalls_50 = ((MR_Word) (conv1_NonTailRecCalls_50));
      succeeded = (OptTailCalls_3 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (NonTailRecCalls_50 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word Var_55;
        MR_Box conv3_STATE_VARIABLE_Specs_48_48;

        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_sccs_13_p_0_2));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleInfo_2));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) (DefaultWarnParams_4));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_nontail_rec_call_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[1]), Var_55, NonTailRecCalls_50, ((MR_Box) (STATE_VARIABLE_Specs_0_12)), &conv3_STATE_VARIABLE_Specs_48_48);
        STATE_VARIABLE_Specs_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_48_48));
      }
      else
        STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_0_12;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = SCCEs_36;
      next_value_of_STATE_VARIABLE_FuncDefns_0_8 = STATE_VARIABLE_FuncDefns_46_46;
      next_value_of_STATE_VARIABLE_GlobalData_0_10 = STATE_VARIABLE_GlobalData_47_47;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_48_48;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_FuncDefns_0_8 = next_value_of_STATE_VARIABLE_FuncDefns_0_8;
      STATE_VARIABLE_GlobalData_0_10 = next_value_of_STATE_VARIABLE_GlobalData_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv39_STATE_VARIABLE_FuncDefns_46;
  MR_Word conv38_STATE_VARIABLE_GlobalData_48;
  MR_Word conv37_STATE_VARIABLE_InSccMap_50;

  ml_backend__ml_proc_gen__ml_gen_tscc_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv39_STATE_VARIABLE_FuncDefns_46, ((MR_Word) (wrapper_arg_4)), &conv38_STATE_VARIABLE_GlobalData_48, ((MR_Word) (wrapper_arg_6)), &conv37_STATE_VARIABLE_InSccMap_50);
  *wrapper_arg_3 = ((MR_Box) (conv39_STATE_VARIABLE_FuncDefns_46));
  *wrapper_arg_5 = ((MR_Box) (conv38_STATE_VARIABLE_GlobalData_48));
  *wrapper_arg_7 = ((MR_Box) (conv37_STATE_VARIABLE_InSccMap_50));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv33_STATE_VARIABLE_FuncDefns_46;
  MR_Word conv32_STATE_VARIABLE_GlobalData_48;
  MR_Word conv31_STATE_VARIABLE_InSccMap_50;

  ml_backend__ml_proc_gen__ml_gen_tscc_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv33_STATE_VARIABLE_FuncDefns_46, ((MR_Word) (wrapper_arg_4)), &conv32_STATE_VARIABLE_GlobalData_48, ((MR_Word) (wrapper_arg_6)), &conv31_STATE_VARIABLE_InSccMap_50);
  *wrapper_arg_3 = ((MR_Box) (conv33_STATE_VARIABLE_FuncDefns_46));
  *wrapper_arg_5 = ((MR_Box) (conv32_STATE_VARIABLE_GlobalData_48));
  *wrapper_arg_7 = ((MR_Box) (conv31_STATE_VARIABLE_InSccMap_50));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_FuncDefns_30;
  MR_Word conv23_STATE_VARIABLE_GlobalData_32;
  MR_Word conv22_STATE_VARIABLE_InSccMap_34;

  ml_backend__ml_proc_gen__ml_gen_proc_lookup_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_FuncDefns_30, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_GlobalData_32, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_InSccMap_34);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_FuncDefns_30));
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_GlobalData_32));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_InSccMap_34));
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv21_PredProcId_4;

  conv21_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv21_PredProcId_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv20_PredProcId_4;

  conv20_PredProcId_4 = ml_backend__ml_proc_gen__project_pred_proc_id_info_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv20_PredProcId_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_FuncDefns_69;
  MR_Word conv15_STATE_VARIABLE_GlobalData_71;
  MR_Word conv14_STATE_VARIABLE_InSccMap_73;

  ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_FuncDefns_69, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_GlobalData_71, ((MR_Word) (wrapper_arg_6)), &conv14_STATE_VARIABLE_InSccMap_73);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_FuncDefns_69));
  *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_GlobalData_71));
  *wrapper_arg_7 = ((MR_Box) (conv14_STATE_VARIABLE_InSccMap_73));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_FuncDefns_69;
  MR_Word conv9_STATE_VARIABLE_GlobalData_71;
  MR_Word conv8_STATE_VARIABLE_InSccMap_73;

  ml_backend__ml_proc_gen__ml_gen_proc_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_FuncDefns_69, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_GlobalData_71, ((MR_Word) (wrapper_arg_6)), &conv8_STATE_VARIABLE_InSccMap_73);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_FuncDefns_69));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_GlobalData_71));
  *wrapper_arg_7 = ((MR_Box) (conv8_STATE_VARIABLE_InSccMap_73));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_FuncDefns_30;
  MR_Word conv3_STATE_VARIABLE_GlobalData_32;
  MR_Word conv2_STATE_VARIABLE_InSccMap_34;

  ml_backend__ml_proc_gen__ml_gen_proc_lookup_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FuncDefns_30, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_GlobalData_32, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_InSccMap_34);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FuncDefns_30));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalData_32));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_InSccMap_34));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InSccMap_8;

  ml_backend__ml_proc_gen__add_to_in_scc_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InSccMap_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InSccMap_8));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ModuleInfo_13,
  MR_Word OptTailCalls_14,
  MR_Word Target_15,
  MR_Word ConstStructMap_16,
  MR_Word SCCE_17,
  MR_Word * STATE_VARIABLE_InSccMap_42,
  MR_Word STATE_VARIABLE_FuncDefns_0_43,
  MR_Word * STATE_VARIABLE_FuncDefns_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46)
{
  MR_bool succeeded;
  MR_Word PredProcIds_21 = ((MR_Word) ((MR_hl_field(0, SCCE_17, (MR_Integer) 0))));
  MR_Word CalledFromHigherSCCs_22 = ((MR_Word) ((MR_hl_field(0, SCCE_17, (MR_Integer) 1))));
  MR_Word ExportedProcs_23 = ((MR_Word) ((MR_hl_field(0, SCCE_17, (MR_Integer) 2))));
  MR_Word SCCEntryProcs_24;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_InSccMap_49_49;
  MR_Box conv1_STATE_VARIABLE_InSccMap_49_49;

  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CalledFromHigherSCCs_22, ExportedProcs_23, &SCCEntryProcs_24);
  Var_48 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0));
  mercury__set__fold_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[10]), PredProcIds_21, ((MR_Box) (Var_48)), &conv1_STATE_VARIABLE_InSccMap_49_49);
  STATE_VARIABLE_InSccMap_49_49 = ((MR_Word) (conv1_STATE_VARIABLE_InSccMap_49_49));
  switch (OptTailCalls_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_50;
        MR_Box conv7_STATE_VARIABLE_FuncDefns_44;
        MR_Box conv6_STATE_VARIABLE_GlobalData_46;
        MR_Box conv5_STATE_VARIABLE_InSccMap_42;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_50, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_50, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_50, 7) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__set__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_50, PredProcIds_21, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_43)), &conv7_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_0_45)), &conv6_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_InSccMap_49_49)), &conv5_STATE_VARIABLE_InSccMap_42);
        *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) (conv7_STATE_VARIABLE_FuncDefns_44));
        *STATE_VARIABLE_GlobalData_46 = ((MR_Word) (conv6_STATE_VARIABLE_GlobalData_46));
        *STATE_VARIABLE_InSccMap_42 = ((MR_Word) (conv5_STATE_VARIABLE_InSccMap_42));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonePredProcIdInfos_25;
        MR_Word SelfPredProcIdInfos0_26;
        MR_Word MutualDetPredProcIdInfos0_27;
        MR_Word MutualSemiPredProcIdInfos0_28;
        MR_Word Globals_29;
        MR_Word GC_30;
        MR_Word SelfPredProcIdInfos_31;
        MR_Word MutualDetPredProcIdInfos_32;
        MR_Word MutualSemiPredProcIdInfos_33;
        MR_Word DetTSCCDepInfo_34;
        MR_Word SemiTSCCDepInfo_35;
        MR_Word DetTSCCEntries_36;
        MR_Word SemiTSCCEntries_37;
        MR_Word DetLonePredProcIds_38;
        MR_Word DetNonTrivialTSCCEntries_39;
        MR_Word SemiLonePredProcIds_40;
        MR_Word SemiNonTrivialTSCCEntries_41;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word STATE_VARIABLE_FuncDefns_58_58;
        MR_Word STATE_VARIABLE_GlobalData_59_59;
        MR_Word STATE_VARIABLE_InSccMap_60_60;
        MR_Word Var_62;
        MR_Word STATE_VARIABLE_FuncDefns_63_63;
        MR_Word STATE_VARIABLE_GlobalData_64_64;
        MR_Word STATE_VARIABLE_InSccMap_65_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word STATE_VARIABLE_FuncDefns_76_76;
        MR_Word STATE_VARIABLE_GlobalData_77_77;
        MR_Word STATE_VARIABLE_InSccMap_78_78;
        MR_Word STATE_VARIABLE_FuncDefns_81_81;
        MR_Word STATE_VARIABLE_GlobalData_82_82;
        MR_Word STATE_VARIABLE_InSccMap_83_83;
        MR_Word Var_85;
        MR_Word STATE_VARIABLE_FuncDefns_86_86;
        MR_Word STATE_VARIABLE_GlobalData_87_87;
        MR_Word STATE_VARIABLE_InSccMap_88_88;
        MR_Word Var_90;
        MR_Box conv13_STATE_VARIABLE_FuncDefns_58_58;
        MR_Box conv12_STATE_VARIABLE_GlobalData_59_59;
        MR_Box conv11_STATE_VARIABLE_InSccMap_60_60;
        MR_Box conv19_STATE_VARIABLE_FuncDefns_63_63;
        MR_Box conv18_STATE_VARIABLE_GlobalData_64_64;
        MR_Box conv17_STATE_VARIABLE_InSccMap_65_65;
        MR_Box conv27_STATE_VARIABLE_FuncDefns_76_76;
        MR_Box conv26_STATE_VARIABLE_GlobalData_77_77;
        MR_Box conv25_STATE_VARIABLE_InSccMap_78_78;
        MR_Box conv30_STATE_VARIABLE_FuncDefns_81_81;
        MR_Box conv29_STATE_VARIABLE_GlobalData_82_82;
        MR_Box conv28_STATE_VARIABLE_InSccMap_83_83;
        MR_Box conv36_STATE_VARIABLE_FuncDefns_86_86;
        MR_Box conv35_STATE_VARIABLE_GlobalData_87_87;
        MR_Box conv34_STATE_VARIABLE_InSccMap_88_88;
        MR_Box conv42_STATE_VARIABLE_FuncDefns_44;
        MR_Box conv41_STATE_VARIABLE_GlobalData_46;
        MR_Box conv40_STATE_VARIABLE_InSccMap_42;

        Var_55 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_21);
        ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(ModuleInfo_13, Var_55, &NonePredProcIdInfos_25, &SelfPredProcIdInfos0_26, &MutualDetPredProcIdInfos0_27, &MutualSemiPredProcIdInfos0_28);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_29);
        libs__globals__get_gc_method_2_p_0(Globals_29, &GC_30);
        succeeded = (GC_30 == (MR_Integer) 5);
        if (succeeded)
        {
          MR_Word Var_56;

          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), MutualDetPredProcIdInfos0_27, MutualSemiPredProcIdInfos0_28);
          SelfPredProcIdInfos_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), SelfPredProcIdInfos0_26, Var_56);
          MutualDetPredProcIdInfos_32 = (MR_Word) ((MR_Unsigned) 0U);
          MutualSemiPredProcIdInfos_33 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          SelfPredProcIdInfos_31 = SelfPredProcIdInfos0_26;
          MutualDetPredProcIdInfos_32 = MutualDetPredProcIdInfos0_27;
          MutualSemiPredProcIdInfos_33 = MutualSemiPredProcIdInfos0_28;
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_3));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_57, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_57, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_57, 7) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_57, NonePredProcIdInfos_25, ((MR_Box) (STATE_VARIABLE_FuncDefns_0_43)), &conv13_STATE_VARIABLE_FuncDefns_58_58, ((MR_Box) (STATE_VARIABLE_GlobalData_0_45)), &conv12_STATE_VARIABLE_GlobalData_59_59, ((MR_Box) (STATE_VARIABLE_InSccMap_49_49)), &conv11_STATE_VARIABLE_InSccMap_60_60);
        STATE_VARIABLE_FuncDefns_58_58 = ((MR_Word) (conv13_STATE_VARIABLE_FuncDefns_58_58));
        STATE_VARIABLE_GlobalData_59_59 = ((MR_Word) (conv12_STATE_VARIABLE_GlobalData_59_59));
        STATE_VARIABLE_InSccMap_60_60 = ((MR_Word) (conv11_STATE_VARIABLE_InSccMap_60_60));
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_4));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_62, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_62, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_62, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_62, 7) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_62, SelfPredProcIdInfos_31, ((MR_Box) (STATE_VARIABLE_FuncDefns_58_58)), &conv19_STATE_VARIABLE_FuncDefns_63_63, ((MR_Box) (STATE_VARIABLE_GlobalData_59_59)), &conv18_STATE_VARIABLE_GlobalData_64_64, ((MR_Box) (STATE_VARIABLE_InSccMap_60_60)), &conv17_STATE_VARIABLE_InSccMap_65_65);
        STATE_VARIABLE_FuncDefns_63_63 = ((MR_Word) (conv19_STATE_VARIABLE_FuncDefns_63_63));
        STATE_VARIABLE_GlobalData_64_64 = ((MR_Word) (conv18_STATE_VARIABLE_GlobalData_64_64));
        STATE_VARIABLE_InSccMap_65_65 = ((MR_Word) (conv17_STATE_VARIABLE_InSccMap_65_65));
        Var_68 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[11]), MutualDetPredProcIdInfos_32);
        Var_67 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_68);
        DetTSCCDepInfo_34 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_13, Var_67, (MR_Integer) 0);
        Var_72 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[12]), MutualSemiPredProcIdInfos_33);
        Var_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_72);
        SemiTSCCDepInfo_35 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ModuleInfo_13, Var_71, (MR_Integer) 0);
        hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_13, DetTSCCDepInfo_34, &DetTSCCEntries_36);
        hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(ModuleInfo_13, SemiTSCCDepInfo_35, &SemiTSCCEntries_37);
        ml_backend__ml_proc_gen__partition_tsccs_3_p_0(DetTSCCEntries_36, &DetLonePredProcIds_38, &DetNonTrivialTSCCEntries_39);
        ml_backend__ml_proc_gen__partition_tsccs_3_p_0(SemiTSCCEntries_37, &SemiLonePredProcIds_40, &SemiNonTrivialTSCCEntries_41);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_7));
          MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_75, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_75, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_75, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_75, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_75, 7) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_75, DetLonePredProcIds_38, ((MR_Box) (STATE_VARIABLE_FuncDefns_63_63)), &conv27_STATE_VARIABLE_FuncDefns_76_76, ((MR_Box) (STATE_VARIABLE_GlobalData_64_64)), &conv26_STATE_VARIABLE_GlobalData_77_77, ((MR_Box) (STATE_VARIABLE_InSccMap_65_65)), &conv25_STATE_VARIABLE_InSccMap_78_78);
        STATE_VARIABLE_FuncDefns_76_76 = ((MR_Word) (conv27_STATE_VARIABLE_FuncDefns_76_76));
        STATE_VARIABLE_GlobalData_77_77 = ((MR_Word) (conv26_STATE_VARIABLE_GlobalData_77_77));
        STATE_VARIABLE_InSccMap_78_78 = ((MR_Word) (conv25_STATE_VARIABLE_InSccMap_78_78));
        mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_75, SemiLonePredProcIds_40, ((MR_Box) (STATE_VARIABLE_FuncDefns_76_76)), &conv30_STATE_VARIABLE_FuncDefns_81_81, ((MR_Box) (STATE_VARIABLE_GlobalData_77_77)), &conv29_STATE_VARIABLE_GlobalData_82_82, ((MR_Box) (STATE_VARIABLE_InSccMap_78_78)), &conv28_STATE_VARIABLE_InSccMap_83_83);
        STATE_VARIABLE_FuncDefns_81_81 = ((MR_Word) (conv30_STATE_VARIABLE_FuncDefns_81_81));
        STATE_VARIABLE_GlobalData_82_82 = ((MR_Word) (conv29_STATE_VARIABLE_GlobalData_82_82));
        STATE_VARIABLE_InSccMap_83_83 = ((MR_Word) (conv28_STATE_VARIABLE_InSccMap_83_83));
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_85, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
          MR_hl_field(0, Var_85, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_8));
          MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_85, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_85, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_85, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_85, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_85, 7) = ((MR_Box) (SCCEntryProcs_24));
          MR_hl_field(0, Var_85, 8) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_85, DetNonTrivialTSCCEntries_39, ((MR_Box) (STATE_VARIABLE_FuncDefns_81_81)), &conv36_STATE_VARIABLE_FuncDefns_86_86, ((MR_Box) (STATE_VARIABLE_GlobalData_82_82)), &conv35_STATE_VARIABLE_GlobalData_87_87, ((MR_Box) (STATE_VARIABLE_InSccMap_83_83)), &conv34_STATE_VARIABLE_InSccMap_88_88);
        STATE_VARIABLE_FuncDefns_86_86 = ((MR_Word) (conv36_STATE_VARIABLE_FuncDefns_86_86));
        STATE_VARIABLE_GlobalData_87_87 = ((MR_Word) (conv35_STATE_VARIABLE_GlobalData_87_87));
        STATE_VARIABLE_InSccMap_88_88 = ((MR_Word) (conv34_STATE_VARIABLE_InSccMap_88_88));
        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_90, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
          MR_hl_field(0, Var_90, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_scc_code_11_p_0_9));
          MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_90, 3) = ((MR_Box) (ProgressStream_12));
          MR_hl_field(0, Var_90, 4) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(0, Var_90, 5) = ((MR_Box) (Target_15));
          MR_hl_field(0, Var_90, 6) = ((MR_Box) (ConstStructMap_16));
          MR_hl_field(0, Var_90, 7) = ((MR_Box) (SCCEntryProcs_24));
          MR_hl_field(0, Var_90, 8) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[1]), Var_90, SemiNonTrivialTSCCEntries_41, ((MR_Box) (STATE_VARIABLE_FuncDefns_86_86)), &conv42_STATE_VARIABLE_FuncDefns_44, ((MR_Box) (STATE_VARIABLE_GlobalData_87_87)), &conv41_STATE_VARIABLE_GlobalData_46, ((MR_Box) (STATE_VARIABLE_InSccMap_88_88)), &conv40_STATE_VARIABLE_InSccMap_42);
        *STATE_VARIABLE_FuncDefns_44 = ((MR_Word) (conv42_STATE_VARIABLE_FuncDefns_44));
        *STATE_VARIABLE_GlobalData_46 = ((MR_Word) (conv41_STATE_VARIABLE_GlobalData_46));
        *STATE_VARIABLE_InSccMap_42 = ((MR_Word) (conv40_STATE_VARIABLE_InSccMap_42));
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__partition_tsccs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TSCC_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TSCCs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TSCCPredProcIdsSet_8;
    MR_Word TSCCPredProcIds_11;
    MR_Word STATE_VARIABLE_LonePredProcIds_18_18;
    MR_Word STATE_VARIABLE_NonTrivialTSCCS_19_19;

    ml_backend__ml_proc_gen__partition_tsccs_3_p_0(TSCCs_5, &STATE_VARIABLE_LonePredProcIds_18_18, &STATE_VARIABLE_NonTrivialTSCCS_19_19);
    TSCCPredProcIdsSet_8 = ((MR_Word) ((MR_hl_field(0, TSCC_4, (MR_Integer) 0))));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), TSCCPredProcIdsSet_8, &TSCCPredProcIds_11);
    if ((TSCCPredProcIds_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_proc_gen.partition_tsccs\'/3", (MR_String) "empty TSCC");
        return;
      }
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, TSCCPredProcIds_11, (MR_Integer) 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, TSCCPredProcIds_11, (MR_Integer) 0))));

      if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_LonePredProcIds_18_18));
        }
        *HeadVar__3_3 = STATE_VARIABLE_NonTrivialTSCCS_19_19;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TSCC_4));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonTrivialTSCCS_19_19));
        }
        *HeadVar__2_2 = STATE_VARIABLE_LonePredProcIds_18_18;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word PredProcId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredProcIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredInfo_15;
    MR_Word ProcInfo_16;
    MR_Word Goal_17;
    MR_Word GoalInfo_19;
    MR_Word ProcContext_20;
    MR_Word IdInfo_21;
    MR_Word HasTailRecCall_22;
    MR_Word HasSelfTailRecCall_23;
    MR_Word HasMutualTailRecCall_24;
    MR_Word CodeModel_25;
    MR_Word STATE_VARIABLE_NoneIdInfos_33_33;
    MR_Word STATE_VARIABLE_SelfIdInfos_34_34;
    MR_Word STATE_VARIABLE_MutualDetIdInfos_35_35;
    MR_Word STATE_VARIABLE_MutualSemiIdInfos_36_36;

    ml_backend__ml_proc_gen__partition_scc_procs_6_p_0(HeadVar__1_1, PredProcIds_10, &STATE_VARIABLE_NoneIdInfos_33_33, &STATE_VARIABLE_SelfIdInfos_34_34, &STATE_VARIABLE_MutualDetIdInfos_35_35, &STATE_VARIABLE_MutualSemiIdInfos_36_36);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(HeadVar__1_1, PredProcId_9, &PredInfo_15, &ProcInfo_16);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_17);
    GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal_17, (MR_Integer) 1))));
    ProcContext_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
    {
      IdInfo_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IdInfo_21, 0) = ((MR_Box) (PredProcId_9));
      MR_hl_field(0, IdInfo_21, 1) = ((MR_Box) (PredInfo_15));
      MR_hl_field(0, IdInfo_21, 2) = ((MR_Box) (ProcInfo_16));
      MR_hl_field(0, IdInfo_21, 3) = ((MR_Box) (ProcContext_20));
    }
    hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_16, &HasTailRecCall_22);
    HasSelfTailRecCall_23 = ((((MR_Unsigned) ((MR_hl_field(0, HasTailRecCall_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    HasMutualTailRecCall_24 = ((MR_Unsigned) ((MR_hl_field(0, HasTailRecCall_22, (MR_Integer) 0))) & (MR_Integer) 1);
    CodeModel_25 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_16);
    switch (CodeModel_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Detism_26;
          MR_Word SolnCount_28;
          MR_Word _CanFail_27;

          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_16, &Detism_26);
          parse_tree__prog_data__determinism_components_3_p_0(Detism_26, &_CanFail_27, &SolnCount_28);
          succeeded = (HasMutualTailRecCall_24 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (SolnCount_28 != (MR_Integer) 0);
          if (succeeded)
          {
            switch (CodeModel_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MutualDetIdInfos_35_35));
                  }
                  *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_36_36;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MutualSemiIdInfos_36_36));
                  }
                  *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_35_35;
                }
                break;
            }
            *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_34_34;
            *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_33_33;
          }
          else
          {
            switch (HasSelfTailRecCall_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_33_33));
                  }
                  *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_34_34;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_34_34));
                  }
                  *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_33_33;
                }
                break;
            }
            *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_36_36;
            *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_35_35;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          switch (HasSelfTailRecCall_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NoneIdInfos_33_33));
                }
                *HeadVar__4_4 = STATE_VARIABLE_SelfIdInfos_34_34;
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (IdInfo_21));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_SelfIdInfos_34_34));
                }
                *HeadVar__3_3 = STATE_VARIABLE_NoneIdInfos_33_33;
              }
              break;
          }
          *HeadVar__5_5 = STATE_VARIABLE_MutualDetIdInfos_35_35;
          *HeadVar__6_6 = STATE_VARIABLE_MutualSemiIdInfos_36_36;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_33;

  conv2_LambdaHeadVar__2_33 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_and_requantify_procs_for_code_gen__171__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcTable_9;

  ml_backend__ml_proc_gen__requantify_codegen_proc_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcTable_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_9));
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_CodeGenPredProcIds_0_3,
  MR_Word * STATE_VARIABLE_CodeGenPredProcIds_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CodeGenPredProcIds_4 = STATE_VARIABLE_CodeGenPredProcIds_0_3;
  }
  else
  {
    MR_Word PredIdInfo0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word PredIdInfos0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PredIdInfo_10;
    MR_Word PredIdInfos_11;
    MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_8, (MR_Integer) 0))));
    MR_Word PredInfo0_14 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_8, (MR_Integer) 1))));
    MR_Word PredStatus_15;
    MR_Word STATE_VARIABLE_CodeGenPredProcIds_34_34;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_14, &PredStatus_15);
    {
      MR_Word Var_26 = (MR_Word) (PredStatus_15);

      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2);
      if (succeeded)
      {
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_27;
      MR_Word Var_28;

      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo0_14);
      if (succeeded)
      {
        Var_27 = (MR_Word) (PredStatus_15);
        succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
          succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 8U));
        }
      }
    }
    if (succeeded)
    {
      PredIdInfo_10 = PredIdInfo0_8;
      STATE_VARIABLE_CodeGenPredProcIds_34_34 = STATE_VARIABLE_CodeGenPredProcIds_0_3;
    }
    else
    {
      MR_Word ProcIds_18;
      MR_Word ProcTable0_19;
      MR_Word ProcTable_20;
      MR_Word PredInfo_21;
      MR_Word PredProcIds_22;
      MR_Word Var_31;
      MR_Word Var_29 = (MR_Word) (PredStatus_15);
      MR_Box conv1_ProcTable_20;

      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
      if (succeeded)
        ProcIds_18 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo0_14);
      else
        ProcIds_18 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo0_14);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &ProcTable0_19);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_proc_gen_scalar_common_1[9]), ProcIds_18, ((MR_Box) (ProcTable0_19)), &conv1_ProcTable_20);
      ProcTable_20 = ((MR_Word) (conv1_ProcTable_20));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_20, PredInfo0_14, &PredInfo_21);
      {
        PredIdInfo_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_10, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(0, PredIdInfo_10, 1) = ((MR_Box) (PredInfo_21));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[1]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0_2));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (PredId_13));
      }
      PredProcIds_22 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_31, ProcIds_18);
      STATE_VARIABLE_CodeGenPredProcIds_34_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_22, STATE_VARIABLE_CodeGenPredProcIds_0_3);
    }
    ml_backend__ml_proc_gen__ml_find_and_requantify_procs_for_code_gen_4_p_0(PredIdInfos0_9, &PredIdInfos_11, STATE_VARIABLE_CodeGenPredProcIds_34_34, STATE_VARIABLE_CodeGenPredProcIds_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredIdInfo_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (PredIdInfos_11));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____can_we_generate_code_for_tscc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____can_we_generate_code_for_tscc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____entry_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____entry_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____maybe_contains_nested_funcs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____maybe_contains_nested_funcs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____maybe_tail_call_opt_in_code_gen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____maybe_tail_call_opt_in_code_gen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____none_or_self_tail_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____none_or_self_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____pred_proc_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_args_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____pred_proc_id_args_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____pred_proc_id_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____pred_proc_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____proc_stmt_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____proc_stmt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_proc_gen____Unify____tscc_code_model_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_proc_gen____Compare____tscc_code_model_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_proc_gen__init(void)
{
}

void mercury__ml_backend__ml_proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_can_we_generate_code_for_tscc_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_entry_proc_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_contains_nested_funcs_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_maybe_tail_call_opt_in_code_gen_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_none_or_self_tail_rec_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_args_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_pred_proc_id_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_proc_stmt_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_proc_gen__ml_backend__ml_proc_gen__type_ctor_info_tscc_code_model_0);
}

void mercury__ml_backend__ml_proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_proc_gen.
